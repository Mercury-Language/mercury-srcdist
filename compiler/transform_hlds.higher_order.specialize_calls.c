/*
** Automatically generated from `higher_order.specialize_calls.m'
** by the Mercury compiler,
** version rotd-2024-02-27
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
#include "hlds.add_special_pred.mih"
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
#include "parse_tree.prog_type_construct.mih"
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



struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14;
  MR_bool transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_35;
  jmp_buf transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40;
  MR_Word transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_54;
  MR_Box transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_40;
};

struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ModuleInfo_9;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet0_11;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CallerHeadTypeParams_12;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ArgTypes_13;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeTVarSet_14;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeExistQVars_15;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeArgTypes0_16;
  MR_bool transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded;
  jmp_buf transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_46_46;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_47_47;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_48_48;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_49_49;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_31_68;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_32_69;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet_19;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint0_26;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint_27;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassName_28;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes0_29;
  MR_Integer transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassArity_30;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes_32;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTable_33;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instances_34;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_42;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_43;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVarSet_52;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes0_54;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints0_55;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Renaming_61;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes_62;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints1_63;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVars_64;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__UnconstrainedTVars0_65;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Subst_66;
  MR_Word transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__KindMap_67;
  MR_Box transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv0_Var_42;
  MR_Box transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv2_Instance_35;
};

struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s {
  MR_bool transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded;
  MR_Word transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArgs_61;
  jmp_buf transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63;
  MR_Word transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__Var_77;
  MR_Box transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__conv2_HOCurriedArg_63;
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

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_higher_order_info_0_0[6];

static const MR_ConstString transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_names_higher_order_info_0_0[6];

static const MR_DuArgLocn transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_higher_order_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_higher_order_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_higher_order_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_higher_order_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_higher_order_info_0[1];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_higher_order_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_1;

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_2;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_ho_changed_0[3];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_ho_changed_0[3];

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_ho_changed_0[3];

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
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1832__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1588__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1480__1_3_p_0(
  MR_Word VarTable_25,
  MR_Word LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__611__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__495__1_2_p_0(
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
transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0(
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
transform_hlds__higher_order__specialize_calls__ho_traverse_proc_body_3_p_0(
  MR_Word MustRecompute_4,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

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
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_specialize_method_call_7_p_0(
  MR_Word TypeClassInfoVar_8,
  MR_Word MethodProcNum_9,
  MR_Word Args_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72);

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
transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_call_to_unify_or_compare_8_p_0(
  MR_Word CalledPred_9,
  MR_Integer CalledProc_10,
  MR_Word Args_11,
  MR_Word MaybeContext_12,
  MR_Word OrigGoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_no_tag_12_p_0(
  MR_Word OuterType_13,
  MR_Word WrappedType_14,
  MR_Word WrappedTypeIsDummy_15,
  MR_Word Constructor_16,
  MR_Word MaybeResult_17,
  MR_Word Arg1_18,
  MR_Word Arg2_19,
  MR_Word MaybeContext_20,
  MR_Word OrigGoalInfo_21,
  MR_Word * GoalExpr_22,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__unwrap_no_tag_arg_10_p_0(
  MR_Word OuterType_11,
  MR_Word WrappedType_12,
  MR_Word IsDummy_13,
  MR_Word Context_14,
  MR_Word Constructor_15,
  MR_Word Arg_16,
  MR_Word * UnwrappedArg_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_builtin_type_with_equivalent_compare_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * EqvType_7,
  MR_Word * NeedIntCast_8);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_atomic_9_p_0(
  MR_Word SpecialPredType_10,
  MR_Word MaybeResult_11,
  MR_Word Arg1_12,
  MR_Word Arg2_13,
  MR_Word MaybeContext_14,
  MR_Word OrigGoalInfo_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(
  MR_Word Context_9,
  MR_Word ToType_10,
  MR_Word IsDummy_11,
  MR_Word Arg_12,
  MR_Word * CastArg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_call_type_specific_unify_or_compare_8_p_0(
  MR_Word SpecialPredType_9,
  MR_Word SpecialId_10,
  MR_Word TypeInfoArgs_11,
  MR_Word SpecialPredArgs_12,
  MR_Word MaybeContext_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

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
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

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

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_6(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CalleeUnivConstraints0_10,
  MR_Word TVarSet0_11,
  MR_Word CallerHeadTypeParams_12,
  MR_Word ArgTypes_13,
  MR_Word CalleeTVarSet_14,
  MR_Word CalleeExistQVars_15,
  MR_Word CalleeArgTypes0_16);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_5(
  void * env_ptr_arg);

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
  MR_Word STATE_VARIABLE_RevHOArgs_0_9,
  MR_Word * STATE_VARIABLE_RevHOArgs_10);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__update_changed_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_unify_3_p_0(
  MR_Word Unification_4,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static MR_Word MR_CALL 
transform_hlds__higher_order__specialize_calls__is_interesting_cons_id_2_f_0(
  MR_Word Params_4,
  MR_Word ConsId_5);

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
  MR_Word HOInfo_4,
  MR_Word Goal_5,
  MR_Word * PostBranchInfo_6);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

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
transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0_10001(
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


static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[12][2];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_5[4][5];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_6[3][6];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_7[2][7];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_8[1][4];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_1[12][2] = {
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
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_8[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_into_one_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_7[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_disj_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__ho_traverse_cases_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__higher_order__specialize_calls__arg_contains_type_info_for_tvar_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "int")) },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_4[1][8] = {
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

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_5[4][5] = {
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

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_6[3][6] = {
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

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_7[2][7] = {
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
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_calls_scalar_common_8[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[8])))
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

static const MR_PseudoTypeInfo transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_higher_order_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_ho_changed_0)
};

static const MR_ConstString transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_names_higher_order_info_0_0[6] = {
  (MR_String) "hoi_global_info",
  (MR_String) "hoi_known_var_map",
  (MR_String) "hoi_pred_proc_id",
  (MR_String) "hoi_pred_info",
  (MR_String) "hoi_proc_info",
  (MR_String) "hoi_changed"
};

static const MR_DuArgLocn transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_higher_order_info_0_0[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_higher_order_info_0_0 = {
  (MR_String) "higher_order_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_types_higher_order_info_0_0,
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_names_higher_order_info_0_0,
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__field_locns_higher_order_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_higher_order_info_0_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_higher_order_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_higher_order_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_stag_ordered_higher_order_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_higher_order_info_0[1] = { &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_functor_desc_higher_order_info_0_0 };

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_higher_order_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "higher_order_info",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_name_ordered_higher_order_info_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__du_ptag_ordered_higher_order_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_higher_order_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_0 = {
  (MR_String) "hoc_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_1 = {
  (MR_String) "hoc_request",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_2 = {
  (MR_String) "hoc_unchanged",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_ho_changed_0[3] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_2
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_ho_changed_0[3] = {
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_0,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_1,
  &transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_functor_desc_ho_changed_0_2
};

static const MR_Integer transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_ho_changed_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_ho_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.specialize_calls",
  (MR_String) "ho_changed",
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_name_ordered_ho_changed_0 },
  { transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__enum_ordinal_ordered_ho_changed_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__functor_number_map_ho_changed_0,

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
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1832__1_2_p_0(
  MR_Word TCIConstConsId_27,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(TCIConstConsId_27, HeadVar__2_38);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1588__1_2_p_0(
  MR_Word LambdaHeadVar__1_23,
  MR_Word * LambdaHeadVar__2_24)
{
  MR_bool succeeded = ((MR_tag((MR_Word) LambdaHeadVar__1_23)) == (MR_Integer) 0);

  if (succeeded)
    *LambdaHeadVar__2_24 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_23, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1480__1_3_p_0(
  MR_Word VarTable_25,
  MR_Word LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47)
{
  MR_Word T_56;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, LambdaHeadVar__1_46, &T_56);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_47 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (T_56));
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__611__1_2_p_0(
  MR_Word VarA_22,
  MR_Word VarB_25)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), ((MR_Box) (VarA_22)), ((MR_Box) (VarB_25)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__495__1_2_p_0(
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        hlds__hlds_goal____Compare____hlds_goal_expr_0_0(HeadVar__1_1, Var_17, ArgY2_8);
    }
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
transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0(
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
transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____pred_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__hlds_pred____Compare____proc_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Integer Var_29 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_30 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_29 > Var_30);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Word ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))) & (MR_Integer) 3);

    succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = (ArgX6_13 == ArgY6_14);
          }
        }
      }
    }
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
          MR_Word Var_20 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0(HeadVar__1_1, Var_20, ArgY1_5);
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
          MR_Word Var_21 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));

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
                MR_Word ArgY1_12 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

                transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0(HeadVar__1_1, Var_21, ArgY1_12);
              }
              break;
          }
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__arg_contains_type_info_for_tvar__1588__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_24);
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

        mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[9]), ClassArgTypes_14, &ClassTVars_18);
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
  MR_Word STATE_VARIABLE_GlobalInfo_0_23,
  MR_Word * STATE_VARIABLE_GlobalInfo_24)
{
  MR_Word KnownVarMap0_10;
  MR_Word ModuleInfo0_11;
  MR_Word PredInfo0_12;
  MR_Word ProcInfo0_13;
  MR_Word Info0_14;
  MR_Word Info_15;
  MR_Word PredInfo_18;
  MR_Word ProcInfo_19;
  MR_Word ModuleInfo1_21;
  MR_Word ModuleInfo_22;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_GlobalInfo_27_27;

  mercury__map__init_1_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), &KnownVarMap0_10);
  ModuleInfo0_11 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_0_23);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_11, PredId_7, ProcId_8, &PredInfo0_12, &ProcInfo0_13);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ProcId_8));
  }
  {
    Info0_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_14, 0) = ((MR_Box) (STATE_VARIABLE_GlobalInfo_0_23));
    MR_hl_field(0, Info0_14, 1) = ((MR_Box) (KnownVarMap0_10));
    MR_hl_field(0, Info0_14, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Info0_14, 3) = ((MR_Box) (PredInfo0_12));
    MR_hl_field(0, Info0_14, 4) = ((MR_Box) (ProcInfo0_13));
    MR_hl_field(0, Info0_14, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_body_3_p_0(MustRecompute_6, Info0_14, &Info_15);
  STATE_VARIABLE_GlobalInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Info_15, (MR_Integer) 0))));
  PredInfo_18 = ((MR_Word) ((MR_hl_field(0, Info_15, (MR_Integer) 3))));
  ProcInfo_19 = ((MR_Word) ((MR_hl_field(0, Info_15, (MR_Integer) 4))));
  ModuleInfo1_21 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_27_27);
  hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(PredId_7, ProcId_8, PredInfo_18, ProcInfo_19, ModuleInfo1_21, &ModuleInfo_22);
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_22, STATE_VARIABLE_GlobalInfo_27_27, STATE_VARIABLE_GlobalInfo_24);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__ho_traverse_proc_body_3_p_0(
  MR_Word MustRecompute_4,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_bool succeeded;
  MR_Word VersionInfoMap_6;
  MR_Word Goal0_12;
  MR_Word Goal_13;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_Info_18_18;
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_Info_20_20;
  MR_Word KnownVarMap_10;
  MR_Word VersionInfo_7;
  MR_Word Var_17;
  MR_Box conv0_VersionInfo_7;

  VersionInfoMap_6 = transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(Var_16);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), VersionInfoMap_6, ((MR_Box) (Var_17)), &conv0_VersionInfo_7);
  if (succeeded)
  {
    VersionInfo_7 = ((MR_Word) (conv0_VersionInfo_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    KnownVarMap_10 = ((MR_Word) ((MR_hl_field(0, VersionInfo_7, (MR_Integer) 2))));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_14, (MR_Integer) 5))) & (MR_Integer) 3);

    {
      STATE_VARIABLE_Info_18_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 1) = ((MR_Box) (KnownVarMap_10));
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 4) = ((MR_Box) (Var_35));
      MR_hl_field(0, STATE_VARIABLE_Info_18_18, 5) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
  }
  else
    STATE_VARIABLE_Info_18_18 = STATE_VARIABLE_Info_0_14;
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 4))));
  hlds__hlds_pred__proc_info_get_goal_2_p_0(Var_19, &Goal0_12);
  transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_12, &Goal_13, STATE_VARIABLE_Info_18_18, &STATE_VARIABLE_Info_20_20);
  {
    MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 5))) & (MR_Integer) 3);

    succeeded = (Var_51 == (MR_Integer) 0);
  }
  if (!(succeeded))
    succeeded = (MustRecompute_4 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ModuleInfo0_44;
    MR_Word InstMap_45;
    MR_Word VarTable_46;
    MR_Word InstVarSet_47;
    MR_Word ModuleInfo_48;
    MR_Word GlobalInfo1_49;
    MR_Word GlobalInfo_50;
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ProcInfo_21_53;
    MR_Word STATE_VARIABLE_ProcInfo_22_54;
    MR_Word STATE_VARIABLE_ProcInfo_24_56;
    MR_Word STATE_VARIABLE_Goal_25_57;
    MR_Word STATE_VARIABLE_Goal_27_59;
    MR_Word STATE_VARIABLE_ProcInfo_28_60;
    MR_Word STATE_VARIABLE_Info_29_61;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;

    ModuleInfo0_44 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_52);
    STATE_VARIABLE_ProcInfo_21_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 4))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_13, STATE_VARIABLE_ProcInfo_21_53, &STATE_VARIABLE_ProcInfo_22_54);
    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_22_54, &STATE_VARIABLE_ProcInfo_24_56);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_24_56, &STATE_VARIABLE_Goal_25_57);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(ModuleInfo0_44, STATE_VARIABLE_ProcInfo_24_56, &InstMap_45);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_24_56, &VarTable_46);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_24_56, &InstVarSet_47);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, VarTable_46, InstVarSet_47, InstMap_45, STATE_VARIABLE_Goal_25_57, &STATE_VARIABLE_Goal_27_59, ModuleInfo0_44, &ModuleInfo_48);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_27_59, STATE_VARIABLE_ProcInfo_24_56, &STATE_VARIABLE_ProcInfo_28_60);
    GlobalInfo1_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 0))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 1))));
    Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 2))));
    Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 3))));
    Var_82 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_20_20, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      STATE_VARIABLE_Info_29_61 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 0) = ((MR_Box) (GlobalInfo1_49));
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 1) = ((MR_Box) (Var_78));
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 2) = ((MR_Box) (Var_79));
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 3) = ((MR_Box) (Var_80));
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 4) = ((MR_Box) (STATE_VARIABLE_ProcInfo_28_60));
      MR_hl_field(0, STATE_VARIABLE_Info_29_61, 5) = (MR_Box) ((MR_Unsigned) (Var_82));
    }
    transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_48, GlobalInfo1_49, &GlobalInfo_50);
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_61, (MR_Integer) 1))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_61, (MR_Integer) 2))));
    Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_61, (MR_Integer) 3))));
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_61, (MR_Integer) 4))));
    Var_93 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_29_61, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GlobalInfo_50));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_93));
    }
  }
  else
    *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_20_20;
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
    MR_Word InstMapDelta_41;
    MR_Word Reachability_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_40 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);

    {
      STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (Var_35));
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (KnownVarMap_34));
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (Var_37));
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (Var_38));
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (Var_39));
      MR_hl_field(0, STATE_VARIABLE_Info_31_31, 5) = (MR_Box) ((MR_Unsigned) (Var_40));
    }
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
    Var_43 = ((MR_Word) ((MR_hl_field(0, Goal_25, (MR_Integer) 1))));
    InstMapDelta_41 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_43);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_41);
    if (succeeded)
      Reachability_42 = (MR_Integer) 0;
    else
      Reachability_42 = (MR_Integer) 1;
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 1))));
    {
      GoalPostInfo_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_26, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, GoalPostInfo_26, 1) = (MR_Box) ((MR_Unsigned) (Reachability_42));
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__495__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
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
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word KnownVarMap_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    PreInfo_10 = (MR_Word) (Var_19);
    transform_hlds__higher_order__specialize_calls__ho_traverse_cases_loop_7_p_0(PreInfo_10, Cases0_5, Cases_6, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_11, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_18_18);
    if ((PostInfos_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_post_branch_infos_into_one\'/2", (MR_String) "PostInfos = []");
        return;
      }
    else
    {
      MR_Word ReachableVarMaps_26;

      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[8]), PostInfos_11, &ReachableVarMaps_26);
      if ((ReachableVarMaps_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_32;

        Var_32 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      else
      {
        MR_Word HeadVarMap_27 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_26, (MR_Integer) 0))));
        MR_Word TailVarMaps_28 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_26, (MR_Integer) 1))));
        MR_Word MergedVarMap_29;

        transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_27, TailVarMaps_28, &MergedVarMap_29);
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (MergedVarMap_29));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
    KnownVarMap_39 = ((MR_Word) ((MR_hl_field(0, PostInfo_12, (MR_Integer) 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 0))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 2))));
    Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 3))));
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 4))));
    Var_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_18_18, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_39));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_46));
    }
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
    MR_Word InstMapDelta_37;
    MR_Word Reachability_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);

    {
      STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (KnownVarMap_30));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (Var_35));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 5) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    Var_39 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 1))));
    InstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_39);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_37);
    if (succeeded)
      Reachability_38 = (MR_Integer) 0;
    else
      Reachability_38 = (MR_Integer) 1;
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_28_28, (MR_Integer) 1))));
    {
      GoalPostInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_22, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, GoalPostInfo_22, 1) = (MR_Box) ((MR_Unsigned) (Reachability_38));
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__495__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
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
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
    MR_Word KnownVarMap_37;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    PreInfo_10 = (MR_Word) (Var_17);
    transform_hlds__higher_order__specialize_calls__ho_traverse_disj_loop_7_p_0(PreInfo_10, Goals0_5, Goals_6, (MR_Word) ((MR_Unsigned) 0U), &PostInfos_11, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_16_16);
    if ((PostInfos_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.merge_post_branch_infos_into_one\'/2", (MR_String) "PostInfos = []");
        return;
      }
    else
    {
      MR_Word ReachableVarMaps_24;

      mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[7]), PostInfos_11, &ReachableVarMaps_24);
      if ((ReachableVarMaps_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_30;

        Var_30 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0));
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (Var_30));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
      }
      else
      {
        MR_Word HeadVarMap_25 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_24, (MR_Integer) 0))));
        MR_Word TailVarMaps_26 = ((MR_Word) ((MR_hl_field(1, ReachableVarMaps_24, (MR_Integer) 1))));
        MR_Word MergedVarMap_27;

        transform_hlds__higher_order__specialize_calls__merge_post_branch_var_maps_passes_3_p_0(HeadVarMap_25, TailVarMaps_26, &MergedVarMap_27);
        {
          PostInfo_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PostInfo_12, 0) = ((MR_Box) (MergedVarMap_27));
          MR_hl_field(0, PostInfo_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
      }
    }
    KnownVarMap_37 = ((MR_Word) ((MR_hl_field(0, PostInfo_12, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 0))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 2))));
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 3))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 4))));
    Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_16_16, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_37));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_41));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_44));
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
    MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Goal_18;
    MR_Word Goals_19;
    MR_Word GoalPostInfo_22;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Info_28_28;
    MR_Word STATE_VARIABLE_PostInfos_29_29;
    MR_Word KnownVarMap_30 = (MR_Word) (PreInfo_1);
    MR_Word InstMapDelta_37;
    MR_Word Reachability_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);

    {
      STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (KnownVarMap_30));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (Var_34));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (Var_35));
      MR_hl_field(0, STATE_VARIABLE_Info_27_27, 5) = (MR_Box) ((MR_Unsigned) (Var_36));
    }
    transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Goal0_16, &Goal_18, STATE_VARIABLE_Info_27_27, &STATE_VARIABLE_Info_28_28);
    Var_39 = ((MR_Word) ((MR_hl_field(0, Goal_18, (MR_Integer) 1))));
    InstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_39);
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstMapDelta_37);
    if (succeeded)
      Reachability_38 = (MR_Integer) 0;
    else
      Reachability_38 = (MR_Integer) 1;
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_28_28, (MR_Integer) 1))));
    {
      GoalPostInfo_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, GoalPostInfo_22, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, GoalPostInfo_22, 1) = (MR_Box) ((MR_Unsigned) (Reachability_38));
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

                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[6]), Goals0_11, &Goals_12, ((MR_Box) (STATE_VARIABLE_Info_0_81)), &conv2_STATE_VARIABLE_Info_82);
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
            MR_Word Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 1))));

            PreInfo_42 = (MR_Word) (Var_135);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Cond0_39, &Cond_43, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_91_91);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Then0_40, &Then_44, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_92_92, Then_44, &PostThenInfo_45);
            transform_hlds__higher_order__specialize_calls__set_pre_branch_info_3_p_0(PreInfo_42, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
            transform_hlds__higher_order__specialize_calls__ho_traverse_goal_4_p_0(Else0_41, &Else_46, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_94_94);
            transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(STATE_VARIABLE_Info_94_94, Else_46, &PostElseInfo_47);
            transform_hlds__higher_order__specialize_calls__merge_post_branch_infos_3_p_0(PostThenInfo_45, PostElseInfo_47, &PostInfo_48);
            transform_hlds__higher_order__specialize_calls__set_post_branch_info_3_p_0(PostInfo_48, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_82);
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
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word GoalExpr_7;
  MR_Word ModuleInfo_9;
  MR_Word NewPredMap_10;
  MR_Word ProcInfo0_11;
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 0))));
  MR_Word Var_75;
  MR_Word UniMode_14;
  MR_Word Context_16;
  MR_Word LVar_17;
  MR_Word Args0_19;
  MR_Word HowToConstruct_21;
  MR_Word CellIsUnique_22;
  MR_Word PredId_27;
  MR_Integer ProcId_28;
  MR_Word ArgTypes_34;
  MR_Word TypeCtorInfo_136_136;
  MR_Word TypeInfo_137_137;
  MR_Word Unify0_15;
  MR_Word ConsId0_18;
  MR_Word SubInfo_23;
  MR_Word ShroudedPredProcId_24;
  MR_Word PredProcId_26;
  MR_Word VarTable0_29;
  MR_Word LVarType_30;
  MR_Word Var_31;
  MR_Word Var_32;

  ModuleInfo_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_74);
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 0))));
  NewPredMap_10 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(Var_75);
  ProcInfo0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 4))));
  succeeded = ((MR_tag((MR_Word) GoalExpr0_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    UniMode_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 2))));
    Unify0_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 3))));
    Context_16 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_5, (MR_Integer) 4))));
    succeeded = ((MR_tag((MR_Word) Unify0_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      LVar_17 = ((MR_Word) ((MR_hl_field(0, Unify0_15, (MR_Integer) 0))));
      ConsId0_18 = ((MR_Word) ((MR_hl_field(0, Unify0_15, (MR_Integer) 1))));
      Args0_19 = ((MR_Word) ((MR_hl_field(0, Unify0_15, (MR_Integer) 2))));
      HowToConstruct_21 = ((MR_Word) ((MR_hl_field(0, Unify0_15, (MR_Integer) 4))));
      CellIsUnique_22 = ((MR_Unsigned) ((MR_hl_field(0, Unify0_15, (MR_Integer) 5))) & (MR_Integer) 1);
      SubInfo_23 = ((MR_Word) ((MR_hl_field(0, Unify0_15, (MR_Integer) 6))));
      if ((SubInfo_23 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      {
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, SubInfo_23, (MR_Integer) 0))));
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, SubInfo_23, (MR_Integer) 1))));

        succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ConsId0_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          ShroudedPredProcId_24 = ((MR_Word) ((MR_hl_field(3, ConsId0_18, (MR_Integer) 1))));
          PredProcId_26 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_24);
          PredId_27 = ((MR_Word) ((MR_hl_field(0, PredProcId_26, (MR_Integer) 0))));
          ProcId_28 = ((MR_Integer) ((MR_hl_field(0, PredProcId_26, (MR_Integer) 1))));
          TypeCtorInfo_136_136 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          TypeInfo_137_137 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]);
          succeeded = mercury__map__contains_2_p_0(TypeCtorInfo_136_136, TypeInfo_137_137, NewPredMap_10, ((MR_Box) (PredProcId_26)));
          if (succeeded)
          {
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_11, &VarTable0_29);
            parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_29, LVar_17, &LVarType_30);
            succeeded = parse_tree__prog_type_test__type_is_higher_order_details_5_p_0(LVarType_30, &Var_31, &Var_32, &ArgTypes_34);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word UncurriedArgs_35;
    MR_Word ProcInfo1_36;
    MR_Word Args1_37;
    MR_Word CalleePredInfo_38;
    MR_Word CalleeProcInfo_39;
    MR_Word Result_42;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word STATE_VARIABLE_Info_80_80;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_118;

    hlds__hlds_proc_util__proc_info_create_vars_from_types_5_p_0(ModuleInfo_9, ArgTypes_34, &UncurriedArgs_35, ProcInfo0_11, &ProcInfo1_36);
    Args1_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), Args0_19, UncurriedArgs_35);
    Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 0))));
    Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 1))));
    Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 2))));
    Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 3))));
    Var_118 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_72, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      STATE_VARIABLE_Info_78_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 0) = ((MR_Box) (Var_113));
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 1) = ((MR_Box) (Var_114));
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 2) = ((MR_Box) (Var_115));
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 3) = ((MR_Box) (Var_116));
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 4) = ((MR_Box) (ProcInfo1_36));
      MR_hl_field(0, STATE_VARIABLE_Info_78_78, 5) = (MR_Box) ((MR_Unsigned) (Var_118));
    }
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_9, PredId_27, ProcId_28, &CalleePredInfo_38, &CalleeProcInfo_39);
    transform_hlds__higher_order__specialize_calls__maybe_specialize_ordinary_call_12_p_0((MR_Integer) 1, PredId_27, ProcId_28, CalleePredInfo_38, CalleeProcInfo_39, Args1_37, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), GoalInfo_6, &Result_42, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_80_80);
    if ((Result_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 0))));
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
      MR_Word Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
      MR_Word Var_135 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 5))) & (MR_Integer) 3);

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_73 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_131));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_132));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_133));
        MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo0_11));
        MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_135));
      }
      GoalExpr_7 = GoalExpr0_5;
    }
    else
    {
      MR_Word ExtraTypeInfoGoals0_43 = ((MR_Word) ((MR_hl_field(1, Result_42, (MR_Integer) 0))));
      MR_Word GoalExpr1_44 = ((MR_Word) ((MR_hl_field(1, Result_42, (MR_Integer) 1))));
      MR_Word NewPredId_52;
      MR_Integer NewProcId_53;
      MR_Word NewArgs_54;
      MR_Word NewCalleeProcInfo_55;
      MR_Word NewCalleeArgModes_56;
      MR_Word CurriedArgModes_58;
      MR_Word ArgModes_59;
      MR_Word ProcInfo2_60;
      MR_Word VarTable2_61;
      MR_Word VarTable_62;
      MR_Word ProcInfo_63;
      MR_Word NewPredProcId_64;
      MR_Word NewShroudedPredProcId_65;
      MR_Word NewConsId_66;
      MR_Word Unify_67;
      MR_Word GoalExpr2_68;
      MR_Word ExtraTypeInfoGoals_69;
      MR_Word Var_86;
      MR_Word STATE_VARIABLE_Info_87_87;
      MR_Word Var_89;
      MR_Word NewPredId0_45;
      MR_Integer NewProcId0_46;
      MR_Word NewArgs1_51;
      MR_Word NewArgs0_47;
      MR_Word CurriedArgModesPrime_57;
      MR_Integer Var_83;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_129;
      MR_Box conv3_STATE_VARIABLE_Info_73;

      succeeded = ((MR_tag((MR_Word) GoalExpr1_44)) == (MR_Integer) 2);
      if (succeeded)
      {
        NewPredId0_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_44, (MR_Integer) 0))));
        NewProcId0_46 = ((MR_Integer) ((MR_hl_field(2, GoalExpr1_44, (MR_Integer) 1))));
        NewArgs0_47 = ((MR_Word) ((MR_hl_field(2, GoalExpr1_44, (MR_Integer) 2))));
        succeeded = mercury__list__remove_suffix_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NewArgs0_47, UncurriedArgs_35, &NewArgs1_51);
      }
      if (succeeded)
      {
        NewPredId_52 = NewPredId0_45;
        NewProcId_53 = NewProcId0_46;
        NewArgs_54 = NewArgs1_51;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get NewArgs");
          return;
        }
      hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_9, NewPredId_52, NewProcId_53, &NewCalleeProcInfo_55);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(NewCalleeProcInfo_55, &NewCalleeArgModes_56);
      Var_83 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NewArgs_54);
      succeeded = mercury__list__take_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_83, NewCalleeArgModes_56, &CurriedArgModesPrime_57);
      if (succeeded)
        CurriedArgModes_58 = CurriedArgModesPrime_57;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.maybe_specialize_pred_const\'/4", (MR_String) "cannot get CurriedArgModes");
          return;
        }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_86, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[2]));
        MR_hl_field(0, Var_86, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__maybe_specialize_pred_const_4_p_0_1));
        MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_86, 3) = ((MR_Box) (ModuleInfo_9));
      }
      ArgModes_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), Var_86, CurriedArgModes_58);
      ProcInfo2_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 4))));
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo2_60, &VarTable2_61);
      parse_tree__var_table__delete_var_entries_3_p_0(UncurriedArgs_35, VarTable2_61, &VarTable_62);
      hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTable_62, ProcInfo2_60, &ProcInfo_63);
      Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 0))));
      Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 1))));
      Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 2))));
      Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 3))));
      Var_129 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_80_80, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        STATE_VARIABLE_Info_87_87 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 0) = ((MR_Box) (Var_124));
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 1) = ((MR_Box) (Var_125));
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 2) = ((MR_Box) (Var_126));
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 3) = ((MR_Box) (Var_127));
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 4) = ((MR_Box) (ProcInfo_63));
        MR_hl_field(0, STATE_VARIABLE_Info_87_87, 5) = (MR_Box) ((MR_Unsigned) (Var_129));
      }
      {
        NewPredProcId_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewPredProcId_64, 0) = ((MR_Box) (NewPredId_52));
        MR_hl_field(0, NewPredProcId_64, 1) = ((MR_Box) (NewProcId_53));
      }
      NewShroudedPredProcId_65 = hlds__hlds_pred__shroud_pred_proc_id_1_f_0(NewPredProcId_64);
      {
        NewConsId_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, NewConsId_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, NewConsId_66, 1) = ((MR_Box) (NewShroudedPredProcId_65));
        MR_hl_field(3, NewConsId_66, 2) = NULL;
      }
      {
        Unify_67 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_67, 0) = ((MR_Box) (LVar_17));
        MR_hl_field(0, Unify_67, 1) = ((MR_Box) (NewConsId_66));
        MR_hl_field(0, Unify_67, 2) = ((MR_Box) (NewArgs_54));
        MR_hl_field(0, Unify_67, 3) = ((MR_Box) (ArgModes_59));
        MR_hl_field(0, Unify_67, 4) = ((MR_Box) (HowToConstruct_21));
        MR_hl_field(0, Unify_67, 5) = (MR_Box) ((MR_Unsigned) (CellIsUnique_22));
        MR_hl_field(0, Unify_67, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_89, 0) = ((MR_Box) (NewConsId_66));
        MR_hl_field(1, Var_89, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, Var_89, 2) = ((MR_Box) (NewArgs_54));
      }
      {
        GoalExpr2_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, GoalExpr2_68, 0) = ((MR_Box) (LVar_17));
        MR_hl_field(1, GoalExpr2_68, 1) = ((MR_Box) (Var_89));
        MR_hl_field(1, GoalExpr2_68, 2) = ((MR_Box) (UniMode_14));
        MR_hl_field(1, GoalExpr2_68, 3) = ((MR_Box) (Unify_67));
        MR_hl_field(1, GoalExpr2_68, 4) = ((MR_Box) (Context_16));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[5]), ExtraTypeInfoGoals0_43, &ExtraTypeInfoGoals_69, ((MR_Box) (STATE_VARIABLE_Info_87_87)), &conv3_STATE_VARIABLE_Info_73);
      *STATE_VARIABLE_Info_73 = ((MR_Word) (conv3_STATE_VARIABLE_Info_73));
      if ((ExtraTypeInfoGoals_69 == (MR_Word) ((MR_Unsigned) 0U)))
        GoalExpr_7 = GoalExpr2_68;
      else
      {
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;

        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_96, 0) = ((MR_Box) (GoalExpr2_68));
          MR_hl_field(0, Var_96, 1) = ((MR_Box) (GoalInfo_6));
        }
        {
          Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
          MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraTypeInfoGoals_69, Var_95);
        {
          GoalExpr_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, GoalExpr_7, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, GoalExpr_7, 2) = ((MR_Box) (Var_94));
        }
      }
    }
  }
  else
  {
    GoalExpr_7 = GoalExpr0_5;
    *STATE_VARIABLE_Info_73 = STATE_VARIABLE_Info_0_72;
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
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  MR_bool succeeded;
  MR_Integer MethodNum_14 = (MR_Integer) (MethodProcNum_9);
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  MR_Word ModuleInfo_17;
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 0))));
  MR_Word MethodInfos_40;
  MR_Word InstanceConstraintArgs_45;
  MR_Word TypeCtorInfo_146_146;
  MR_Word TypeInfo_147_147;
  MR_Word TypeCtorInfo_148_148;
  MR_Word TypeCtorInfo_149_149;
  MR_Word TypeInfo_150_150;
  MR_Word ConsId_18;
  MR_Word TCIArgs_19;
  MR_Word BaseTypeClassInfo_20;
  MR_Word OtherTypeClassInfoArgs_21;
  MR_Word BaseConsId_22;
  MR_Word ClassId_25;
  MR_Integer Instance_26;
  MR_Word InstanceTable_28;
  MR_Word InstanceList_29;
  MR_Word InstanceDefn_30;
  MR_Word InstanceTypes0_35;
  MR_Word InstanceConstraints_36;
  MR_Word InstanceTvars_42;
  MR_Word UnconstrainedTVars_43;
  MR_Integer NumArgsToExtract_44;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Integer Var_79;
  MR_Integer Var_80;
  MR_Box conv0_Var_75;
  MR_Box conv1_Var_77;
  MR_Box conv2_InstanceList_29;
  MR_Box conv3_InstanceDefn_30;

  ModuleInfo_17 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_73);
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 1))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_74, ((MR_Box) (TypeClassInfoVar_8)), &conv0_Var_75);
  if (succeeded)
  {
    Var_75 = ((MR_Word) (conv0_Var_75));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_18 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
    TCIArgs_19 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
    succeeded = (ConsId_18 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (TCIArgs_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        BaseTypeClassInfo_20 = ((MR_Word) ((MR_hl_field(1, TCIArgs_19, (MR_Integer) 0))));
        OtherTypeClassInfoArgs_21 = ((MR_Word) ((MR_hl_field(1, TCIArgs_19, (MR_Integer) 1))));
        Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_76, ((MR_Box) (BaseTypeClassInfo_20)), &conv1_Var_77);
        if (succeeded)
        {
          Var_77 = ((MR_Word) (conv1_Var_77));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          BaseConsId_22 = ((MR_Word) ((MR_hl_field(0, Var_77, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) BaseConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseConsId_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
          if (succeeded)
          {
            ClassId_25 = ((MR_Word) ((MR_hl_field(3, BaseConsId_22, (MR_Integer) 2))));
            Instance_26 = ((MR_Integer) ((MR_hl_field(3, BaseConsId_22, (MR_Integer) 3))));
            hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_28);
            TypeCtorInfo_146_146 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
            TypeInfo_147_147 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
            mercury__map__lookup_3_p_0(TypeCtorInfo_146_146, TypeInfo_147_147, InstanceTable_28, ((MR_Box) (ClassId_25)), &conv2_InstanceList_29);
            InstanceList_29 = ((MR_Word) (conv2_InstanceList_29));
            TypeCtorInfo_148_148 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
            mercury__list__det_index1_3_p_0(TypeCtorInfo_148_148, InstanceList_29, Instance_26, &conv3_InstanceDefn_30);
            InstanceDefn_30 = ((MR_Word) (conv3_InstanceDefn_30));
            InstanceTypes0_35 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_30, (MR_Integer) 4))));
            InstanceConstraints_36 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_30, (MR_Integer) 5))));
            Var_78 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_30, (MR_Integer) 9))));
            succeeded = (Var_78 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MethodInfos_40 = ((MR_Word) ((MR_hl_field(1, Var_78, (MR_Integer) 0))));
              parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes0_35, &InstanceTvars_42);
              parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTvars_42, InstanceConstraints_36, &UnconstrainedTVars_43);
              TypeCtorInfo_149_149 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
              Var_79 = mercury__list__length_1_f_0(TypeCtorInfo_149_149, InstanceConstraints_36);
              TypeInfo_150_150 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
              Var_80 = mercury__list__length_1_f_0(TypeInfo_150_150, UnconstrainedTVars_43);
              NumArgsToExtract_44 = (MR_Integer) ((MR_Unsigned) Var_79 + (MR_Unsigned) Var_80);
              succeeded = mercury__list__take_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), NumArgsToExtract_44, OtherTypeClassInfoArgs_21, &InstanceConstraintArgs_45);
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MethodInfo_46;
    MR_Word PredId_47;
    MR_Integer ProcId_48;
    MR_Word AllArgs_49;
    MR_Word Var_81;
    MR_Box conv4_MethodInfo_46;

    mercury__list__det_index1_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), MethodInfos_40, MethodNum_14, &conv4_MethodInfo_46);
    MethodInfo_46 = ((MR_Word) (conv4_MethodInfo_46));
    Var_81 = ((MR_Word) ((MR_hl_field(0, MethodInfo_46, (MR_Integer) 3))));
    PredId_47 = ((MR_Word) ((MR_hl_field(0, Var_81, (MR_Integer) 0))));
    ProcId_48 = ((MR_Integer) ((MR_hl_field(0, Var_81, (MR_Integer) 1))));
    AllArgs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), InstanceConstraintArgs_45, Args_10);
    transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_47, ProcId_48, AllArgs_49, GoalInfo0_16, Goal_12, STATE_VARIABLE_Info_0_71, STATE_VARIABLE_Info_72);
  }
  else
  {
    MR_Word CallerProcInfo0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 4))));
    MR_Word CallerPredInfo0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 3))));
    MR_Word UnconstrainedTVarTypes_59;
    MR_Word TVarSet_60;
    MR_Word InstanceConstraints_101;
    MR_Word PredId_102;
    MR_Integer ProcId_103;
    MR_Word TypeCtorInfo_153_153;
    MR_Word TypeCtorInfo_154_154;
    MR_Word TypeInfo_155_155;
    MR_Word CallerRttiVarMaps_52;
    MR_Word ClassConstraint_53;
    MR_Word ClassName_54;
    MR_Word ClassArgTypes_55;
    MR_Integer ClassArity_56;
    MR_Word Instances_57;
    MR_Word TVarSet0_58;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word InstanceTable_98;
    MR_Box conv5_Instances_57;

    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CallerProcInfo0_50, &CallerRttiVarMaps_52);
    hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(CallerRttiVarMaps_52, TypeClassInfoVar_8, &Var_83);
    succeeded = ((MR_tag((MR_Word) Var_83)) == (MR_Integer) 2);
    if (succeeded)
    {
      ClassConstraint_53 = ((MR_Word) ((MR_hl_field(2, Var_83, (MR_Integer) 0))));
      ClassName_54 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_53, (MR_Integer) 0))));
      ClassArgTypes_55 = ((MR_Word) ((MR_hl_field(0, ClassConstraint_53, (MR_Integer) 1))));
      TypeCtorInfo_153_153 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__list__length_2_p_0(TypeCtorInfo_153_153, ClassArgTypes_55, &ClassArity_56);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_17, &InstanceTable_98);
      TypeCtorInfo_154_154 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
      TypeInfo_155_155 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
      {
        Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_84, 0) = ((MR_Box) (ClassName_54));
        MR_hl_field(0, Var_84, 1) = ((MR_Box) (ClassArity_56));
      }
      mercury__map__lookup_3_p_0(TypeCtorInfo_154_154, TypeInfo_155_155, InstanceTable_98, ((MR_Box) (Var_84)), &conv5_Instances_57);
      Instances_57 = ((MR_Word) (conv5_Instances_57));
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo0_51, &TVarSet0_58);
      succeeded = transform_hlds__higher_order__specialize_calls__find_matching_instance_method_9_p_0(Instances_57, MethodNum_14, ClassArgTypes_55, &PredId_102, &ProcId_103, &InstanceConstraints_101, &UnconstrainedTVarTypes_59, TVarSet0_58, &TVarSet_60);
    }
    if (succeeded)
    {
      MR_Word CallerPredInfo_61;
      MR_Word ExtraGoals_62;
      MR_Word CallerProcInfo_63;
      MR_Word SpecGoal_70;
      MR_Word STATE_VARIABLE_Info_93_93;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word AllArgs_99;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_137;

      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TVarSet_60, CallerPredInfo0_51, &CallerPredInfo_61);
      succeeded = (InstanceConstraints_101 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (UnconstrainedTVarTypes_59 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ExtraGoals_62 = (MR_Word) ((MR_Unsigned) 0U);
        CallerProcInfo_63 = CallerProcInfo0_50;
        AllArgs_99 = Args_10;
      }
      else
      {
        MR_Word ArgTypeInfoGoals_64;
        MR_Word ArgTypeInfoVars_65;
        MR_Word CallerProcInfo1_66;
        MR_Integer FirstArgTypeclassInfo_67;
        MR_Word ArgTypeClassInfoGoals_68;
        MR_Word ArgTypeClassInfoVars_69;
        MR_Integer Var_86;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;

        transform_hlds__higher_order__specialize_calls__get_unconstrained_instance_type_infos_8_p_0(ModuleInfo_17, TypeClassInfoVar_8, UnconstrainedTVarTypes_59, (MR_Integer) 1, &ArgTypeInfoGoals_64, &ArgTypeInfoVars_65, CallerProcInfo0_50, &CallerProcInfo1_66);
        Var_86 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnconstrainedTVarTypes_59);
        FirstArgTypeclassInfo_67 = (MR_Integer) ((MR_Unsigned) Var_86 + (MR_Unsigned) 1);
        transform_hlds__higher_order__specialize_calls__get_arg_typeclass_infos_8_p_0(ModuleInfo_17, TypeClassInfoVar_8, InstanceConstraints_101, FirstArgTypeclassInfo_67, &ArgTypeClassInfoGoals_68, &ArgTypeClassInfoVars_69, CallerProcInfo1_66, &CallerProcInfo_63);
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (Args_10));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (ArgTypeClassInfoVars_69));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (ArgTypeInfoVars_65));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
        }
        mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), Var_88, &AllArgs_99);
        ExtraGoals_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArgTypeInfoGoals_64, ArgTypeClassInfoGoals_68);
      }
      Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 0))));
      Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 1))));
      Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 2))));
      Var_137 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_71, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        STATE_VARIABLE_Info_93_93 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 0) = ((MR_Box) (Var_132));
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 1) = ((MR_Box) (Var_133));
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 2) = ((MR_Box) (Var_134));
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 3) = ((MR_Box) (CallerPredInfo_61));
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 4) = ((MR_Box) (CallerProcInfo_63));
        MR_hl_field(0, STATE_VARIABLE_Info_93_93, 5) = (MR_Box) ((MR_Unsigned) (Var_137));
      }
      transform_hlds__higher_order__specialize_calls__construct_specialized_higher_order_call_7_p_0(PredId_102, ProcId_103, AllArgs_99, GoalInfo0_16, &SpecGoal_70, STATE_VARIABLE_Info_93_93, STATE_VARIABLE_Info_72);
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (SpecGoal_70));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ExtraGoals_62, Var_96);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_95, GoalInfo0_16, Goal_12);
    }
    else
    {
      *Goal_12 = Goal0_11;
      *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_0_71;
    }
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
  MR_Word GoalExpr_12;
  MR_Word ModuleInfo_14;
  MR_Word PredInfo_15;
  MR_Word ModuleName_16;
  MR_String PredName_17;
  MR_Word SymName_18;
  MR_Word CallerPredId_19;
  MR_Word Builtin_21;
  MR_Word GoalExpr1_23;
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;

  ModuleInfo_14 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_27);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, PredId_8, &PredInfo_15);
  ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  {
    SymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_18, 0) = ((MR_Box) (ModuleName_16));
    MR_hl_field(1, SymName_18, 1) = ((MR_Box) (PredName_17));
  }
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
  CallerPredId_19 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 0))));
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
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
  {
    STATE_VARIABLE_Info_29_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 1) = ((MR_Box) (Var_44));
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 2) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 3) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 4) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_Info_29_29, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (GoalExpr1_23));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (GoalInfo_11));
  }
  transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(Var_31, &Var_32, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26);
  GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
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
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word CurriedArgs_13;
  MR_Word ShroudedPredProcId_14;
  MR_Word ConsId_12;
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
  MR_Word Var_24;
  MR_Box conv0_Var_24;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), Var_23, ((MR_Box) (PredVar_7)), &conv0_Var_24);
  if (succeeded)
  {
    Var_24 = ((MR_Word) (conv0_Var_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    ConsId_12 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
    CurriedArgs_13 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
      ShroudedPredProcId_14 = ((MR_Word) ((MR_hl_field(3, ConsId_12, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word PredId_16;
    MR_Integer ProcId_17;
    MR_Word AllArgs_18;
    MR_Word GoalInfo_20;
    MR_Word Var_25;
    MR_Word GoalExpr_34;
    MR_Word ModuleInfo_35;
    MR_Word PredInfo_36;
    MR_Word ModuleName_37;
    MR_String PredName_38;
    MR_Word SymName_39;
    MR_Word CallerPredId_40;
    MR_Word Builtin_42;
    MR_Word GoalExpr1_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_Info_29_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;

    Var_25 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_14);
    PredId_16 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 0))));
    ProcId_17 = ((MR_Integer) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
    AllArgs_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), CurriedArgs_13, Args_8);
    GoalInfo_20 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
    ModuleInfo_35 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_46);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_35, PredId_16, &PredInfo_36);
    ModuleName_37 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_36);
    PredName_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_36);
    {
      SymName_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_39, 0) = ((MR_Box) (ModuleName_37));
      MR_hl_field(1, SymName_39, 1) = ((MR_Box) (PredName_38));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
    CallerPredId_40 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
    Builtin_42 = hlds__hlds_pred__builtin_state_4_f_0(ModuleInfo_35, CallerPredId_40, PredId_16, ProcId_17);
    {
      GoalExpr1_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr1_44, 0) = ((MR_Box) (PredId_16));
      MR_hl_field(2, GoalExpr1_44, 1) = ((MR_Box) (ProcId_17));
      MR_hl_field(2, GoalExpr1_44, 2) = ((MR_Box) (AllArgs_18));
      MR_hl_field(2, GoalExpr1_44, 3) = (MR_Box) ((MR_Unsigned) (Builtin_42));
      MR_hl_field(2, GoalExpr1_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, GoalExpr1_44, 5) = ((MR_Box) (SymName_39));
    }
    Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
    Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
    {
      STATE_VARIABLE_Info_29_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 0) = ((MR_Box) (Var_62));
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 1) = ((MR_Box) (Var_63));
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 2) = ((MR_Box) (Var_64));
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 3) = ((MR_Box) (Var_65));
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 4) = ((MR_Box) (Var_66));
      MR_hl_field(0, STATE_VARIABLE_Info_29_48, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_50, 0) = ((MR_Box) (GoalExpr1_44));
      MR_hl_field(0, Var_50, 1) = ((MR_Box) (GoalInfo_20));
    }
    transform_hlds__higher_order__specialize_calls__maybe_specialize_call_4_p_0(Var_50, &Var_51, STATE_VARIABLE_Info_29_48, STATE_VARIABLE_Info_22);
    GoalExpr_34 = ((MR_Word) ((MR_hl_field(0, Var_51, (MR_Integer) 0))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_20));
    }
  }
  else
  {
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
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
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
  MR_Word GoalExpr1_18;
  MR_Word STATE_VARIABLE_Info_32_32;

  ModuleInfo0_9 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_31);
  CalledPred_10 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 0))));
  CalledProc_11 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 1))));
  Args0_12 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 2))));
  IsBuiltin_13 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 3))) & (MR_Integer) 1);
  MaybeContext_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_5, (MR_Integer) 4))));
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo0_9, CalledPred_10, CalledProc_11, &CalleePredInfo_16, &CalleeProcInfo_17);
  succeeded = transform_hlds__higher_order__specialize_calls__specialize_call_to_unify_or_compare_8_p_0(CalledPred_10, CalledProc_11, Args0_12, MaybeContext_14, GoalInfo_6, &GoalExpr1_18, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_32_32);
  if (succeeded)
  {
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    GoalExpr_7 = GoalExpr1_18;
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 2))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 3))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_32_32, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_30 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
  }
  else
  {
    MR_Word Manipulator_19;
    MR_Word PredInfo_57;
    MR_String PredName_58;
    MR_Word Var_59;
    MR_Word Var_60;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_9, CalledPred_10, &PredInfo_57);
    Var_59 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_60 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_57);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_59, Var_60);
    if (succeeded)
    {
      PredName_58 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_57);
      if ((strcmp(PredName_58, (MR_String) "type_info_from_typeclass_info") == 0))
      {
        Manipulator_19 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_58, (MR_String) "superclass_from_typeclass_info") == 0))
      {
        Manipulator_19 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(PredName_58, (MR_String) "instance_constraint_from_typeclass_info") == 0))
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
        MR_Word TypeCtorInfo_53_53;
        MR_Word Var_36;

        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_16);
        if (succeeded)
        {
          hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_9, &TypeSpecInfo_20);
          TypeSpecProcs_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_20, (MR_Integer) 0))));
          TypeCtorInfo_53_53 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_36, 0) = ((MR_Box) (CalledPred_10));
            MR_hl_field(0, Var_36, 1) = ((MR_Box) (CalledProc_11));
          }
          succeeded = mercury__set__member_2_p_0(TypeCtorInfo_53_53, ((MR_Box) (Var_36)), TypeSpecProcs_21);
          succeeded = !(succeeded);
        }
      }
      if (!(succeeded))
      {
        {
          MR_Integer Var_55;

          succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(CalleePredInfo_16);
          if (succeeded)
          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_55);
            succeeded = (CalledProc_11 == Var_55);
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

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_call_to_unify_or_compare_8_p_0(
  MR_Word CalledPred_9,
  MR_Integer CalledProc_10,
  MR_Word Args_11,
  MR_Word MaybeContext_12,
  MR_Word OrigGoalInfo_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_bool succeeded;
  MR_Word TypeInfo_77_77;
  MR_Word TypeCtorInfo_78_78;
  MR_Word ModuleInfo_16;
  MR_Word ProcInfo0_17;
  MR_Word KnownVarMap_18;
  MR_Word VarTable_19;
  MR_Word CalledPredInfo_20;
  MR_String PredName_21;
  MR_Integer PredFormArityInt_22;
  MR_Word SpecialId_23;
  MR_Word Var_25;
  MR_Word Type_26;
  MR_Word TypeInfoVar_31;
  MR_Word SpecialPredArgs_32;
  MR_Word TypeInfoVarArgs_34;
  MR_Word TypeCtor_35;
  MR_Integer TypeArity_37;
  MR_Word TypeInfoArgs_38;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_50, (MR_Integer) 0))));
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_79;
  MR_Integer Var_80;
  MR_String Var_24;
  MR_Box conv0_Var_55;
  MR_Word Arg1_42;
  MR_Word Arg2_43;
  MR_Word MaybeResult_44;
  MR_Integer CalledProcInt_41;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_40;

  ModuleInfo_16 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_52);
  KnownVarMap_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_50, (MR_Integer) 1))));
  ProcInfo0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_50, (MR_Integer) 4))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_17, &VarTable_19);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_16, CalledPred_9, &CalledPredInfo_20);
  Var_53 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  Var_79 = hlds__hlds_pred__pred_info_module_1_f_0(CalledPredInfo_20);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_53, Var_79);
  if (succeeded)
  {
    PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(CalledPredInfo_20);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(CalledPredInfo_20, &Var_54);
    PredFormArityInt_22 = (MR_Integer) (Var_54);
    succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&SpecialId_23, PredName_21, &Var_24, &Var_80);
    if (succeeded)
    {
      succeeded = (PredFormArityInt_22 == Var_80);
      if (succeeded)
      {
        succeeded = hlds__special_pred__special_pred_get_type_3_p_0(SpecialId_23, Args_11, &Var_25);
        if (succeeded)
        {
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_25, &Type_26);
          succeeded = ((MR_tag((MR_Word) Type_26)) == (MR_Integer) 0);
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Type_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_26, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = (Args_11 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeInfoVar_31 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 0))));
                SpecialPredArgs_32 = ((MR_Word) ((MR_hl_field(1, Args_11, (MR_Integer) 1))));
                TypeInfo_77_77 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]);
                TypeCtorInfo_78_78 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
                succeeded = mercury__map__search_3_p_0(TypeInfo_77_77, TypeCtorInfo_78_78, KnownVarMap_18, ((MR_Box) (TypeInfoVar_31)), &conv0_Var_55);
                if (succeeded)
                {
                  Var_55 = ((MR_Word) (conv0_Var_55));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  TypeInfoVarArgs_34 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 1))));
                  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_26, &TypeCtor_35);
                  if (succeeded)
                  {
                    TypeArity_37 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_35, (MR_Integer) 1))));
                    succeeded = (TypeArity_37 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      TypeInfoArgs_38 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (TypeInfoVarArgs_34 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        TypeInfoArgs_38 = ((MR_Word) ((MR_hl_field(1, TypeInfoVarArgs_34, (MR_Integer) 1))));
                    }
                    if (succeeded)
                    {
                      succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, Type_26, &Var_40);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        hlds__hlds_pred__proc_id_to_int_2_p_0(CalledProc_10, &CalledProcInt_41);
                        succeeded = (CalledProcInt_41 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (SpecialPredArgs_32 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            Var_82 = ((MR_Word) ((MR_hl_field(1, SpecialPredArgs_32, (MR_Integer) 0))));
                            Var_81 = ((MR_Word) ((MR_hl_field(1, SpecialPredArgs_32, (MR_Integer) 1))));
                            succeeded = (Var_81 != (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              Var_84 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 0))));
                              Var_83 = ((MR_Word) ((MR_hl_field(1, Var_81, (MR_Integer) 1))));
                              if ((Var_83 == (MR_Word) ((MR_Unsigned) 0U)))
                              {
                                succeeded = (SpecialId_23 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  Arg1_42 = Var_82;
                                  Arg2_43 = Var_84;
                                  MaybeResult_44 = (MR_Word) ((MR_Unsigned) 0U);
                                  succeeded = MR_TRUE;
                                }
                              }
                              else
                              {
                                MR_Word Var_60;

                                succeeded = (SpecialId_23 == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Arg1_42 = Var_84;
                                  Arg2_43 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 0))));
                                  Var_60 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 1))));
                                  succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                                  if (succeeded)
                                  {
                                    {
                                      MaybeResult_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(1, MaybeResult_44, 0) = ((MR_Box) (Var_82));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word Var_61;

                        Var_61 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, Type_26);
                        succeeded = (Var_61 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          if ((MaybeResult_44 == (MR_Word) ((MR_Unsigned) 0U)))
                            *Goal_14 = (MR_Word) (MR_mkword(3, &transform_hlds__higher_order__specialize_calls_scalar_common_2[3]));
                          else
                          {
                            MR_Word ComparisonResult_86 = ((MR_Word) ((MR_hl_field(1, MaybeResult_44, (MR_Integer) 0))));
                            MR_Word Builtin_87;
                            MR_Word TypeCtor_88;
                            MR_Word Eq_89;
                            MR_Word Goal_90;
                            MR_Word Var_94;
                            MR_Word Var_97;
                            MR_Word Var_98;
                            MR_Word Var_101;

                            Builtin_87 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                            {
                              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_94, 0) = ((MR_Box) (Builtin_87));
                              MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_String) "comparison_result"));
                            }
                            {
                              TypeCtor_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, TypeCtor_88, 0) = ((MR_Box) (Var_94));
                              MR_hl_field(0, TypeCtor_88, 1) = ((MR_Box) ((MR_Integer) 0));
                            }
                            Var_98 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                            {
                              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
                              MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_String) "="));
                            }
                            {
                              Eq_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(3, Eq_89, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                              MR_hl_field(3, Eq_89, 1) = ((MR_Box) (Var_97));
                              MR_hl_field(3, Eq_89, 2) = ((MR_Box) ((MR_Integer) 0));
                              MR_hl_field(3, Eq_89, 3) = ((MR_Box) (TypeCtor_88));
                            }
                            Var_101 = mercury__term_context__dummy_context_0_f_0();
                            hlds__make_goal__make_const_construction_4_p_0(Var_101, ComparisonResult_86, Eq_89, &Goal_90);
                            *Goal_14 = ((MR_Word) ((MR_hl_field(0, Goal_90, (MR_Integer) 0))));
                          }
                          *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_0_50;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo_16, Type_26);
                          if (succeeded)
                          {
                            transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_atomic_9_p_0(Type_26, MaybeResult_44, Arg1_42, Arg2_43, MaybeContext_12, OrigGoalInfo_13, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Word Constructor_46;
                            MR_Word WrappedType_47;
                            MR_Word Var_48;

                            succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_16, Type_26, &Constructor_46, &WrappedType_47);
                            if (succeeded)
                            {
                              succeeded = check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(ModuleInfo_16, WrappedType_47, &Var_48);
                              succeeded = !(succeeded);
                              if (succeeded)
                                succeeded = check_hlds__type_util__type_is_atomic_2_p_0(ModuleInfo_16, WrappedType_47);
                            }
                            if (succeeded)
                            {
                              MR_Word WrappedTypeIsDummy_49;

                              WrappedTypeIsDummy_49 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, WrappedType_47);
                              transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_no_tag_12_p_0(Type_26, WrappedType_47, WrappedTypeIsDummy_49, Constructor_46, MaybeResult_44, Arg1_42, Arg2_43, MaybeContext_12, OrigGoalInfo_13, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                              succeeded = MR_TRUE;
                            }
                            else
                              succeeded = transform_hlds__higher_order__specialize_calls__maybe_call_type_specific_unify_or_compare_8_p_0(Type_26, SpecialId_23, TypeInfoArgs_38, SpecialPredArgs_32, MaybeContext_12, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                          }
                        }
                      }
                      else
                        succeeded = transform_hlds__higher_order__specialize_calls__maybe_call_type_specific_unify_or_compare_8_p_0(Type_26, SpecialId_23, TypeInfoArgs_38, SpecialPredArgs_32, MaybeContext_12, Goal_14, STATE_VARIABLE_Info_0_50, STATE_VARIABLE_Info_51);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_no_tag_12_p_0(
  MR_Word OuterType_13,
  MR_Word WrappedType_14,
  MR_Word WrappedTypeIsDummy_15,
  MR_Word Constructor_16,
  MR_Word MaybeResult_17,
  MR_Word Arg1_18,
  MR_Word Arg2_19,
  MR_Word MaybeContext_20,
  MR_Word OrigGoalInfo_21,
  MR_Word * GoalExpr_22,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  MR_Word ModuleInfo_24;
  MR_Word ProcInfo0_25;
  MR_Word Context_26;
  MR_Word UnwrappedArg1_27;
  MR_Word ExtractGoal1_28;
  MR_Word ProcInfo1_29;
  MR_Word UnwrappedArg2_30;
  MR_Word ExtractGoal2_31;
  MR_Word ProcInfo2_32;
  MR_Word NonLocals0_33;
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 0))));
  MR_Word Var_57;
  MR_Word Var_58;

  ModuleInfo_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_56);
  ProcInfo0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 4))));
  Context_26 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_21);
  transform_hlds__higher_order__specialize_calls__unwrap_no_tag_arg_10_p_0(OuterType_13, WrappedType_14, WrappedTypeIsDummy_15, Context_26, Constructor_16, Arg1_18, &UnwrappedArg1_27, &ExtractGoal1_28, ProcInfo0_25, &ProcInfo1_29);
  transform_hlds__higher_order__specialize_calls__unwrap_no_tag_arg_10_p_0(OuterType_13, WrappedType_14, WrappedTypeIsDummy_15, Context_26, Constructor_16, Arg2_19, &UnwrappedArg2_30, &ExtractGoal2_31, ProcInfo1_29, &ProcInfo2_32);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (UnwrappedArg2_30));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (UnwrappedArg1_27));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57, &NonLocals0_33);
  if ((MaybeResult_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InstMapDelta_35;
    MR_Word UnifyMode_37;
    MR_Word SpecialGoal_38;
    MR_Word GoalInfo_39;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;

    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_35);
    Var_60 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_61 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_62 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_63 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_37, 0) = ((MR_Box) (Var_60));
      MR_hl_field(0, UnifyMode_37, 1) = ((MR_Box) (Var_61));
      MR_hl_field(0, UnifyMode_37, 2) = ((MR_Box) (Var_62));
      MR_hl_field(0, UnifyMode_37, 3) = ((MR_Box) (Var_63));
    }
    {
      Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_64, 0) = ((MR_Box) (UnwrappedArg2_30));
    }
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (UnwrappedArg1_27));
      MR_hl_field(3, Var_65, 2) = ((MR_Box) (UnwrappedArg2_30));
    }
    {
      SpecialGoal_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SpecialGoal_38, 0) = ((MR_Box) (UnwrappedArg1_27));
      MR_hl_field(1, SpecialGoal_38, 1) = ((MR_Box) (Var_64));
      MR_hl_field(1, SpecialGoal_38, 2) = ((MR_Box) (UnifyMode_37));
      MR_hl_field(1, SpecialGoal_38, 3) = ((MR_Box) (Var_65));
      MR_hl_field(1, SpecialGoal_38, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[9]));
    }
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals0_33, InstMapDelta_35, (MR_Integer) 1, (MR_Integer) 0, Context_26, &GoalInfo_39);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_74, 0) = ((MR_Box) (SpecialGoal_38));
      MR_hl_field(0, Var_74, 1) = ((MR_Box) (GoalInfo_39));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (ExtractGoal2_31));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (ExtractGoal1_28));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_22 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, base, 2) = ((MR_Box) (Var_71));
    }
    Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 0))));
    Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 1))));
    Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 2))));
    Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 3))));
    Var_131 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_55 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_126));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_127));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_128));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_129));
      MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo2_32));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_131));
    }
  }
  else
  {
    MR_Word ComparisonResult_40 = ((MR_Word) ((MR_hl_field(1, MaybeResult_17, (MR_Integer) 0))));
    MR_Word CompareType_41;
    MR_Word NeedIntCast_42;
    MR_Word CompareTypeCtor_43;
    MR_Word SymName_44;
    MR_Word SpecialPredId_45;
    MR_Integer SpecialProcId_46;
    MR_Word NonLocals_113;
    MR_Word InstMapDelta_114;

    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ComparisonResult_40, NonLocals0_33, &NonLocals_113);
    InstMapDelta_114 = hlds__instmap__instmap_delta_bind_var_1_f_0(ComparisonResult_40);
    transform_hlds__higher_order__specialize_calls__find_builtin_type_with_equivalent_compare_4_p_0(ModuleInfo_24, WrappedType_14, &CompareType_41, &NeedIntCast_42);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(CompareType_41, &CompareTypeCtor_43);
    hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_24, CompareTypeCtor_43, (MR_Integer) 2, &SymName_44, &SpecialPredId_45, &SpecialProcId_46);
    switch (NeedIntCast_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NewCallArgs_47;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word SpecialGoal_106;
          MR_Word GoalInfo_107;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_137;

          {
            NewCallArgs_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_47, 0) = ((MR_Box) (ComparisonResult_40));
            MR_hl_field(1, NewCallArgs_47, 1) = ((MR_Box) (Var_57));
          }
          {
            SpecialGoal_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, SpecialGoal_106, 0) = ((MR_Box) (SpecialPredId_45));
            MR_hl_field(2, SpecialGoal_106, 1) = ((MR_Box) (SpecialProcId_46));
            MR_hl_field(2, SpecialGoal_106, 2) = ((MR_Box) (NewCallArgs_47));
            MR_hl_field(2, SpecialGoal_106, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, SpecialGoal_106, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, SpecialGoal_106, 5) = ((MR_Box) (SymName_44));
          }
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_113, InstMapDelta_114, (MR_Integer) 0, (MR_Integer) 0, Context_26, &GoalInfo_107);
          {
            Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_87, 0) = ((MR_Box) (SpecialGoal_106));
            MR_hl_field(0, Var_87, 1) = ((MR_Box) (GoalInfo_107));
          }
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_85, 0) = ((MR_Box) (ExtractGoal2_31));
            MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_84, 0) = ((MR_Box) (ExtractGoal1_28));
            MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_22 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_84));
          }
          Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 0))));
          Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 1))));
          Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 2))));
          Var_135 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 3))));
          Var_137 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 5))) & (MR_Integer) 3);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_55 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_132));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_133));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_134));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_135));
            MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo2_32));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_137));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CastArg1_48;
          MR_Word CastGoal1_49;
          MR_Word ProcInfo3_50;
          MR_Word CastArg2_51;
          MR_Word CastGoal2_52;
          MR_Word ProcInfo4_53;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word SpecialGoal_108;
          MR_Word GoalInfo_109;
          MR_Word NewCallArgs_110;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_143;

          transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(Context_26, CompareType_41, (MR_Integer) 1, UnwrappedArg1_27, &CastArg1_48, &CastGoal1_49, ProcInfo2_32, &ProcInfo3_50);
          transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(Context_26, CompareType_41, (MR_Integer) 1, UnwrappedArg2_30, &CastArg2_51, &CastGoal2_52, ProcInfo3_50, &ProcInfo4_53);
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (CastArg2_51));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_92, 0) = ((MR_Box) (CastArg1_48));
            MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
          }
          {
            NewCallArgs_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_110, 0) = ((MR_Box) (ComparisonResult_40));
            MR_hl_field(1, NewCallArgs_110, 1) = ((MR_Box) (Var_92));
          }
          {
            SpecialGoal_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, SpecialGoal_108, 0) = ((MR_Box) (SpecialPredId_45));
            MR_hl_field(2, SpecialGoal_108, 1) = ((MR_Box) (SpecialProcId_46));
            MR_hl_field(2, SpecialGoal_108, 2) = ((MR_Box) (NewCallArgs_110));
            MR_hl_field(2, SpecialGoal_108, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, SpecialGoal_108, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, SpecialGoal_108, 5) = ((MR_Box) (SymName_44));
          }
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_113, InstMapDelta_114, (MR_Integer) 0, (MR_Integer) 0, Context_26, &GoalInfo_109);
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_103, 0) = ((MR_Box) (SpecialGoal_108));
            MR_hl_field(0, Var_103, 1) = ((MR_Box) (GoalInfo_109));
          }
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_101, 0) = ((MR_Box) (CastGoal2_52));
            MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (ExtractGoal2_31));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
          }
          {
            Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_99, 0) = ((MR_Box) (CastGoal1_49));
            MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
          }
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (ExtractGoal1_28));
            MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_22 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_98));
          }
          Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 0))));
          Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 1))));
          Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 2))));
          Var_141 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 3))));
          Var_143 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_54, (MR_Integer) 5))) & (MR_Integer) 3);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_55 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_138));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_139));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_140));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_141));
            MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo4_53));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_143));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__unwrap_no_tag_arg_10_p_0(
  MR_Word OuterType_11,
  MR_Word WrappedType_12,
  MR_Word IsDummy_13,
  MR_Word Context_14,
  MR_Word Constructor_15,
  MR_Word Arg_16,
  MR_Word * UnwrappedArg_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_ProcInfo_0_30,
  MR_Word * STATE_VARIABLE_ProcInfo_31)
{
  MR_Word OuterTypeCtor_20;
  MR_Word ConsId_21;
  MR_Word NonLocals_25;
  MR_Word InstMapDelta_26;
  MR_Word GoalInfo_27;
  MR_Word Unification_28;
  MR_Word GoalExpr_29;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_50;

  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", WrappedType_12, IsDummy_13, UnwrappedArg_17, STATE_VARIABLE_ProcInfo_0_30, STATE_VARIABLE_ProcInfo_31);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(OuterType_11, &OuterTypeCtor_20);
  {
    ConsId_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ConsId_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, ConsId_21, 1) = ((MR_Box) (Constructor_15));
    MR_hl_field(3, ConsId_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(3, ConsId_21, 3) = ((MR_Box) (OuterTypeCtor_20));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (*UnwrappedArg_17));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_41, &NonLocals_25);
  InstMapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(*UnwrappedArg_17);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_25, InstMapDelta_26, (MR_Integer) 0, (MR_Integer) 0, Context_14, &GoalInfo_27);
  {
    Unification_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Unification_28, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, Unification_28, 1) = ((MR_Box) (ConsId_21));
    MR_hl_field(1, Unification_28, 2) = ((MR_Box) (Var_42));
    MR_hl_field(1, Unification_28, 3) = ((MR_Box) (MR_mkword(1, &transform_hlds__higher_order__specialize_calls_scalar_common_1[11])));
    MR_hl_field(1, Unification_28, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (ConsId_21));
    MR_hl_field(1, Var_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_50, 2) = ((MR_Box) (Var_42));
  }
  {
    GoalExpr_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_29, 0) = ((MR_Box) (Arg_16));
    MR_hl_field(1, GoalExpr_29, 1) = ((MR_Box) (Var_50));
    MR_hl_field(1, GoalExpr_29, 2) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_8[0]));
    MR_hl_field(1, GoalExpr_29, 3) = ((MR_Box) (Unification_28));
    MR_hl_field(1, GoalExpr_29, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[9]));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_27));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_builtin_type_with_equivalent_compare_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * EqvType_7,
  MR_Word * NeedIntCast_8)
{
  MR_Word CtorCat_9;

  CtorCat_9 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_5, Type_6);
  switch (MR_tag((MR_Word) CtorCat_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        *EqvType_7 = Type_6;
        *NeedIntCast_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        parse_tree__prog_type_construct__construct_type_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[10]), (MR_Word) ((MR_Unsigned) 0U), EqvType_7);
        *NeedIntCast_8 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
        return;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__specialize_unify_or_compare_pred_for_atomic_9_p_0(
  MR_Word SpecialPredType_10,
  MR_Word MaybeResult_11,
  MR_Word Arg1_12,
  MR_Word Arg2_13,
  MR_Word MaybeContext_14,
  MR_Word OrigGoalInfo_15,
  MR_Word * GoalExpr_16,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_Word ModuleInfo_18;
  MR_Word ProcInfo0_19;
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));

  ModuleInfo_18 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_43);
  ProcInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 4))));
  if ((MaybeResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UnifyMode_20;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    Var_44 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_45 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_46 = parse_tree__prog_mode__ground_inst_0_f_0();
    Var_47 = parse_tree__prog_mode__ground_inst_0_f_0();
    {
      UnifyMode_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UnifyMode_20, 0) = ((MR_Box) (Var_44));
      MR_hl_field(0, UnifyMode_20, 1) = ((MR_Box) (Var_45));
      MR_hl_field(0, UnifyMode_20, 2) = ((MR_Box) (Var_46));
      MR_hl_field(0, UnifyMode_20, 3) = ((MR_Box) (Var_47));
    }
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (Arg2_13));
    }
    {
      Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_49, 1) = ((MR_Box) (Arg1_12));
      MR_hl_field(3, Var_49, 2) = ((MR_Box) (Arg2_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg1_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_48));
      MR_hl_field(1, base, 2) = ((MR_Box) (UnifyMode_20));
      MR_hl_field(1, base, 3) = ((MR_Box) (Var_49));
      MR_hl_field(1, base, 4) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[9]));
    }
    *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
  }
  else
  {
    MR_Word ComparisonResult_21 = ((MR_Word) ((MR_hl_field(1, MaybeResult_11, (MR_Integer) 0))));
    MR_Word CtorCat_94;

    CtorCat_94 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_18, SpecialPredType_10);
    switch (MR_tag((MR_Word) CtorCat_94)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CompareTypeCtor_24;
          MR_Word SymName_25;
          MR_Word SpecialPredId_26;
          MR_Integer SpecialProcId_27;
          MR_Word NewCallArgs_28;
          MR_Word Var_54;
          MR_Word Var_55;

          parse_tree__prog_type__type_to_ctor_det_2_p_0(SpecialPredType_10, &CompareTypeCtor_24);
          hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, CompareTypeCtor_24, (MR_Integer) 2, &SymName_25, &SpecialPredId_26, &SpecialProcId_27);
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Arg2_13));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Arg1_12));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            NewCallArgs_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_28, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, NewCallArgs_28, 1) = ((MR_Box) (Var_54));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_16 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (SpecialPredId_26));
            MR_hl_field(2, base, 1) = ((MR_Box) (SpecialProcId_27));
            MR_hl_field(2, base, 2) = ((MR_Box) (NewCallArgs_28));
            MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, base, 4) = ((MR_Box) (MaybeContext_14));
            MR_hl_field(2, base, 5) = ((MR_Box) (SymName_25));
          }
          *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Context_29;
          MR_Word CastArg1_30;
          MR_Word CastGoal1_31;
          MR_Word ProcInfo1_32;
          MR_Word CastArg2_33;
          MR_Word CastGoal2_34;
          MR_Word ProcInfo_35;
          MR_Word Call_36;
          MR_Word NonLocals_37;
          MR_Word InstMapDelta_38;
          MR_Word GoalInfo_40;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word NewCallArgs_76;
          MR_Word CompareType_107;
          MR_Word CompareTypeCtor_109;
          MR_Word SymName_110;
          MR_Word SpecialPredId_111;
          MR_Integer SpecialProcId_112;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_92;

          parse_tree__prog_type_construct__construct_type_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[10]), (MR_Word) ((MR_Unsigned) 0U), &CompareType_107);
          parse_tree__prog_type__type_to_ctor_det_2_p_0(CompareType_107, &CompareTypeCtor_109);
          hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, CompareTypeCtor_109, (MR_Integer) 2, &SymName_110, &SpecialPredId_111, &SpecialProcId_112);
          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(OrigGoalInfo_15);
          transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(Context_29, CompareType_107, (MR_Integer) 1, Arg1_12, &CastArg1_30, &CastGoal1_31, ProcInfo0_19, &ProcInfo1_32);
          transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(Context_29, CompareType_107, (MR_Integer) 1, Arg2_13, &CastArg2_33, &CastGoal2_34, ProcInfo1_32, &ProcInfo_35);
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (CastArg2_33));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (CastArg1_30));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            NewCallArgs_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewCallArgs_76, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, NewCallArgs_76, 1) = ((MR_Box) (Var_60));
          }
          {
            Call_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Call_36, 0) = ((MR_Box) (SpecialPredId_111));
            MR_hl_field(2, Call_36, 1) = ((MR_Box) (SpecialProcId_112));
            MR_hl_field(2, Call_36, 2) = ((MR_Box) (NewCallArgs_76));
            MR_hl_field(2, Call_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(2, Call_36, 4) = ((MR_Box) (MaybeContext_14));
            MR_hl_field(2, Call_36, 5) = ((MR_Box) (SymName_110));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (Arg2_13));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Arg1_12));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (ComparisonResult_21));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
          }
          parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_64, &NonLocals_37);
          InstMapDelta_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(ComparisonResult_21);
          hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_37, InstMapDelta_38, (MR_Integer) 0, (MR_Integer) 0, Context_29, &GoalInfo_40);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (Call_36));
            MR_hl_field(0, Var_73, 1) = ((MR_Box) (GoalInfo_40));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (CastGoal2_34));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_70, 0) = ((MR_Box) (CastGoal1_31));
            MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_16 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, base, 2) = ((MR_Box) (Var_70));
          }
          Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 0))));
          Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 1))));
          Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 2))));
          Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 3))));
          Var_92 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_41, (MR_Integer) 5))) & (MR_Integer) 3);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_42 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_88));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_89));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_90));
            MR_hl_field(0, base, 4) = ((MR_Box) (ProcInfo_35));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_92));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.find_builtin_type_with_equivalent_compare\'/4", (MR_String) "bad type");
          return;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__generate_unsafe_type_cast_8_p_0(
  MR_Word Context_9,
  MR_Word ToType_10,
  MR_Word IsDummy_11,
  MR_Word Arg_12,
  MR_Word * CastArg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_16,
  MR_Word * STATE_VARIABLE_ProcInfo_17)
{
  hlds__hlds_proc_util__proc_info_create_var_from_type_6_p_0((MR_String) "", ToType_10, IsDummy_11, CastArg_13, STATE_VARIABLE_ProcInfo_0_16, STATE_VARIABLE_ProcInfo_17);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Arg_12, *CastArg_13, Context_9, Goal_14);
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__maybe_call_type_specific_unify_or_compare_8_p_0(
  MR_Word SpecialPredType_9,
  MR_Word SpecialId_10,
  MR_Word TypeInfoArgs_11,
  MR_Word SpecialPredArgs_12,
  MR_Word MaybeContext_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word SpecialPredTypeCtor_16;
  MR_Word SymName_17;
  MR_Word SpecialPredId_18;
  MR_Integer SpecialProcId_19;
  MR_Word CallArgs_20;
  MR_Word Var_24;
  MR_Word ModuleInfo0_26;
  MR_Word Var_36;
  MR_Word SymName0_27;
  MR_Word PredId0_28;
  MR_Integer ProcId0_29;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(SpecialPredType_9, &SpecialPredTypeCtor_16);
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
  ModuleInfo0_26 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_36);
  succeeded = hlds__special_pred__get_special_proc_6_p_0(ModuleInfo0_26, SpecialPredTypeCtor_16, SpecialId_10, &SymName0_27, &PredId0_28, &ProcId0_29);
  if (succeeded)
  {
    SymName_17 = SymName0_27;
    SpecialPredId_18 = PredId0_28;
    SpecialProcId_19 = ProcId0_29;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word ModuleInfo_30;
    MR_Word PredInfo_31;
    MR_Word ModuleName_32;
    MR_String Name_33;
    MR_Word GlobalInfo1_34;
    MR_Word GlobalInfo_35;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;

    succeeded = hlds__special_pred__special_pred_is_generated_lazily_2_p_0(ModuleInfo0_26, SpecialPredTypeCtor_16);
    if (succeeded)
    {
      switch (SpecialId_10) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            hlds__add_special_pred__add_lazily_generated_compare_pred_decl_4_p_0(SpecialPredTypeCtor_16, &SpecialPredId_18, ModuleInfo0_26, &ModuleInfo_30);
            SpecialProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            hlds__add_special_pred__add_lazily_generated_unify_pred_4_p_0(SpecialPredTypeCtor_16, &SpecialPredId_18, ModuleInfo0_26, &ModuleInfo_30);
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&SpecialProcId_19);
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_30, SpecialPredId_18, &PredInfo_31);
        ModuleName_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_31);
        Name_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_31);
        GlobalInfo1_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
        {
          SymName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymName_17, 0) = ((MR_Box) (ModuleName_32));
          MR_hl_field(1, SymName_17, 1) = ((MR_Box) (Name_33));
        }
        transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_30, GlobalInfo1_34, &GlobalInfo_35);
        Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))));
        Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
        Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
        Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
        Var_52 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))) & (MR_Integer) 3);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GlobalInfo_35));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_51));
          MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_52));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(SpecialPredType_9);
    if (succeeded)
      CallArgs_20 = SpecialPredArgs_12;
    else
      CallArgs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), TypeInfoArgs_11, SpecialPredArgs_12);
    Var_24 = (MR_Integer) 1;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *Goal_14 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (SpecialPredId_18));
      MR_hl_field(2, base, 1) = ((MR_Box) (SpecialProcId_19));
      MR_hl_field(2, base, 2) = ((MR_Box) (CallArgs_20));
      MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Var_24));
      MR_hl_field(2, base, 4) = ((MR_Box) (MaybeContext_13));
      MR_hl_field(2, base, 5) = ((MR_Box) (SymName_17));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
  MR_Word OutputVar_16;
  MR_Word ClassId_20;
  MR_Integer InstanceNum_21;
  MR_Word OtherArgs_23;
  MR_Integer Index0_25;
  MR_Word TypeInfo_142_142;
  MR_Word TypeCtorInfo_143_143;
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

  ModuleInfo_12 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_61);
  KnownVarMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 1))));
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
          TypeInfo_142_142 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]);
          TypeCtorInfo_143_143 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
          succeeded = mercury__map__search_3_p_0(TypeInfo_142_142, TypeCtorInfo_143_143, KnownVarMap0_13, ((MR_Box) (TypeClassInfoVar_14)), &conv0_Var_65);
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
              succeeded = mercury__map__search_3_p_0(TypeInfo_142_142, TypeCtorInfo_143_143, KnownVarMap0_13, ((MR_Box) (IndexVar_15)), &conv1_IndexMaybeConst_24);
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
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;

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
      MR_Word Var_130;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_134;
      MR_Word Var_135;

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
      Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 0))));
      Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 2))));
      Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 3))));
      Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 4))));
      Var_135 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_59, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        STATE_VARIABLE_Info_78_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 0) = ((MR_Box) (Var_130));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 1) = ((MR_Box) (KnownVarMap_57));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 2) = ((MR_Box) (Var_132));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 3) = ((MR_Box) (Var_133));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 4) = ((MR_Box) (Var_134));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 5) = (MR_Box) ((MR_Unsigned) (Var_135));
      }
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
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_129;

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
      ProcInfo0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 4))));
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo0_35, &RttiVarMaps0_36);
      hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(SelectedArg_32, OutputVar_16, RttiVarMaps0_36, &RttiVarMaps_37);
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_37, ProcInfo0_35, &ProcInfo_38);
      Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 0))));
      Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 1))));
      Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 2))));
      Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 3))));
      Var_129 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_69_69, (MR_Integer) 5))) & (MR_Integer) 3);
      {
        STATE_VARIABLE_Info_78_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 0) = ((MR_Box) (Var_124));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 1) = ((MR_Box) (Var_125));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 2) = ((MR_Box) (Var_126));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 3) = ((MR_Box) (Var_127));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 4) = ((MR_Box) (ProcInfo_38));
        MR_hl_field(0, STATE_VARIABLE_Info_78_78, 5) = (MR_Box) ((MR_Unsigned) (Var_129));
      }
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
    Var_136 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 0))));
    Var_137 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 1))));
    Var_138 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 2))));
    Var_139 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 3))));
    Var_140 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_78_78, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_60 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_136));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_137));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_138));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_139));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_140));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_typeclass_info_components__1832__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[2]));
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
  MR_Word KnownVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
  MR_Word KnownConst_9;
  MR_Box conv0_KnownConst_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_8, ((MR_Box) (RVar_6)), &conv0_KnownConst_9);
  if (succeeded)
  {
    KnownConst_9 = ((MR_Word) (conv0_KnownConst_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word KnownVarMap_10;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_5)), ((MR_Box) (KnownConst_9)), KnownVarMap0_8, &KnownVarMap_10);
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 2))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
    Var_23 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_11, (MR_Integer) 5))) & (MR_Integer) 3);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_10));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_23));
    }
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
  MR_Word STATE_VARIABLE_Info_0_81,
  MR_Word * STATE_VARIABLE_Info_82)
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
  MR_Word RevHigherOrderArgs_32;
  MR_Word CallerPredId_33;
  MR_Word TypeSpecInfo_35;
  MR_Word ForceVersions_37;
  MR_Word RequestKind_40;
  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 0))));
  MR_Word Var_84;
  MR_Word Var_87;

  ModuleInfo0_24 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_83);
  hlds__hlds_pred__pred_info_get_status_2_p_0(CalleePredInfo_16, &CalleeStatus_25);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CalleeProcInfo_17, &CalleeVarTable_26);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_17, &CalleeHeadVars_27);
  parse_tree__var_table__lookup_var_types_3_p_0(CalleeVarTable_26, CalleeHeadVars_27, &CalleeArgTypes_28);
  CallerProcInfo0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 4))));
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CallerProcInfo0_29, &VarTable_30);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CallerProcInfo0_29, &RttiVarMaps_31);
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 1))));
  transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo0_24, CalleeStatus_25, Args0_18, CalleeArgTypes_28, VarTable_30, RttiVarMaps_31, Var_84, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &RevHigherOrderArgs_32);
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 2))));
  CallerPredId_33 = ((MR_Word) ((MR_hl_field(0, Var_87, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(ModuleInfo0_24, &TypeSpecInfo_35);
  ForceVersions_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_35, (MR_Integer) 1))));
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ForceVersions_37, ((MR_Box) (CallerPredId_33)));
  if (succeeded)
    RequestKind_40 = (MR_Integer) 1;
  else
    RequestKind_40 = (MR_Integer) 0;
  succeeded = (RevHigherOrderArgs_32 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (RequestKind_40 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_Word Params_43;
      MR_Word ArgTypes_44;
      MR_Word CalleeClassContext_45;
      MR_Word CalleeUnivConstraints0_46;
      MR_Word CalleeTVarSet_48;
      MR_Word CalleeExistQTVars_49;
      MR_Word CallerPredInfo0_50;
      MR_Word TVarSet_51;
      MR_Word CallerUnivQTVars_52;
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 0))));
      MR_Word Var_89;

      Params_43 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_88);
      Var_89 = ((MR_Unsigned) ((MR_hl_field(0, Params_43, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (Var_89 == (MR_Integer) 0);
      if (succeeded)
      {
        parse_tree__var_table__lookup_var_types_3_p_0(VarTable_30, Args0_18, &ArgTypes_44);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(CalleePredInfo_16, &CalleeClassContext_45);
        CalleeUnivConstraints0_46 = ((MR_Word) ((MR_hl_field(0, CalleeClassContext_45, (MR_Integer) 0))));
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CalleePredInfo_16, &CalleeTVarSet_48);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CalleePredInfo_16, &CalleeExistQTVars_49);
        CallerPredInfo0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 3))));
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CallerPredInfo0_50, &TVarSet_51);
        hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(CallerPredInfo0_50, &CallerUnivQTVars_52);
        succeeded = transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0(ModuleInfo0_24, CalleeUnivConstraints0_46, TVarSet_51, CallerUnivQTVars_52, ArgTypes_44, CalleeTVarSet_48, CalleeExistQTVars_49, CalleeArgTypes_28);
      }
    }
  }
  if (succeeded)
  {
    MR_Word HigherOrderArgs_53;
    MR_Word Context_54;
    MR_Word FindResult_55;

    mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), RevHigherOrderArgs_32, &HigherOrderArgs_53);
    Context_54 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
    transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0(STATE_VARIABLE_Info_0_81, CalledPred_14, CalledProc_15, Args0_18, Context_54, HigherOrderArgs_53, RequestKind_40, &FindResult_55);
    switch (MR_tag((MR_Word) FindResult_55)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Match_56;
          MR_Word Args1_58;
          MR_Word ExtraTypeInfoTypes_59;
          MR_Word NewPredProcId_60;
          MR_Word NewName_63;
          MR_Word NewCalledPred_70;
          MR_Integer NewCalledProc_71;
          MR_Word ExtraTypeInfoVars_72;
          MR_Word ExtraTypeInfoGoals_73;
          MR_Word Args_74;
          MR_Word CallGoal_75;
          MR_Word Var_90 = (MR_Word) (MR_body((MR_Word) (FindResult_55), (MR_Integer) 1));
          MR_Word STATE_VARIABLE_Info_91_91;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;

          Match_56 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 0))));
          Args1_58 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 2))));
          ExtraTypeInfoTypes_59 = ((MR_Word) ((MR_hl_field(0, Var_90, (MR_Integer) 3))));
          NewPredProcId_60 = ((MR_Word) ((MR_hl_field(0, Match_56, (MR_Integer) 0))));
          NewName_63 = ((MR_Word) ((MR_hl_field(0, Match_56, (MR_Integer) 3))));
          NewCalledPred_70 = ((MR_Word) ((MR_hl_field(0, NewPredProcId_60, (MR_Integer) 0))));
          NewCalledProc_71 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_60, (MR_Integer) 1))));
          transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(ExtraTypeInfoTypes_59, &ExtraTypeInfoVars_72, &ExtraTypeInfoGoals_73, STATE_VARIABLE_Info_0_81, &STATE_VARIABLE_Info_91_91);
          Args_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), ExtraTypeInfoVars_72, Args1_58);
          {
            CallGoal_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, CallGoal_75, 0) = ((MR_Box) (NewCalledPred_70));
            MR_hl_field(2, CallGoal_75, 1) = ((MR_Box) (NewCalledProc_71));
            MR_hl_field(2, CallGoal_75, 2) = ((MR_Box) (Args_74));
            MR_hl_field(2, CallGoal_75, 3) = (MR_Box) ((MR_Unsigned) (IsBuiltin_19));
            MR_hl_field(2, CallGoal_75, 4) = ((MR_Box) (MaybeContext_20));
            MR_hl_field(2, CallGoal_75, 5) = ((MR_Box) (NewName_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ExtraTypeInfoGoals_73));
            MR_hl_field(1, base, 1) = ((MR_Box) (CallGoal_75));
          }
          Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 0))));
          Var_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 1))));
          Var_132 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 2))));
          Var_133 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 3))));
          Var_134 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_91_91, (MR_Integer) 4))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_82 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_130));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_131));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_132));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_133));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_134));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Request_76 = (MR_Word) (MR_body((MR_Word) (FindResult_55), (MR_Integer) 2));

          *Result_22 = (MR_Word) ((MR_Unsigned) 0U);
          switch (CanRequest_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
              break;
            case (MR_Integer) 0:
              {
                MR_Word GlobalInfo0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 0))));
                MR_Word GlobalInfo_78;
                MR_Word Changed0_79;
                MR_Word Changed_80;
                MR_Word STATE_VARIABLE_Info_94_94;
                MR_Word Var_142;
                MR_Word Var_143;
                MR_Word Var_144;
                MR_Word Var_145;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Word Var_154;
                MR_Word Var_155;
                MR_Word Var_156;

                transform_hlds__higher_order__higher_order_global_info__hogi_add_request_3_p_0(Request_76, GlobalInfo0_77, &GlobalInfo_78);
                Var_142 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 1))));
                Var_143 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 2))));
                Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 3))));
                Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 4))));
                Changed0_79 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_81, (MR_Integer) 5))) & (MR_Integer) 3);
                {
                  STATE_VARIABLE_Info_94_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 0) = ((MR_Box) (GlobalInfo_78));
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 1) = ((MR_Box) (Var_142));
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 2) = ((MR_Box) (Var_143));
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 3) = ((MR_Box) (Var_144));
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 4) = ((MR_Box) (Var_145));
                  MR_hl_field(0, STATE_VARIABLE_Info_94_94, 5) = (MR_Box) ((MR_Unsigned) (Changed0_79));
                }
                transform_hlds__higher_order__specialize_calls__update_changed_status_3_p_0(Changed0_79, (MR_Integer) 1, &Changed_80);
                Var_152 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 0))));
                Var_153 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 1))));
                Var_154 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 2))));
                Var_155 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 3))));
                Var_156 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_94_94, (MR_Integer) 4))));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_82 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_152));
                  MR_hl_field(0, base, 1) = ((MR_Box) (Var_153));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_154));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_155));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_156));
                  MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Changed_80));
                }
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
    *STATE_VARIABLE_Info_82 = STATE_VARIABLE_Info_0_81;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__construct_extra_type_infos_5_p_0(
  MR_Word Types_6,
  MR_Word * TypeInfoVars_7,
  MR_Word * TypeInfoGoals_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word ModuleInfo0_10;
  MR_Word PredInfo0_11;
  MR_Word ProcInfo0_12;
  MR_Word ModuleInfo_13;
  MR_Word PredInfo_14;
  MR_Word ProcInfo_15;
  MR_Word GlobalInfo1_16;
  MR_Word GlobalInfo_17;
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_Info_23_23;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  ModuleInfo0_10 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_20);
  PredInfo0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 3))));
  ProcInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
  Var_21 = mercury__term_context__dummy_context_0_f_0();
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_vars_mi_10_p_0(Types_6, Var_21, TypeInfoVars_7, TypeInfoGoals_8, ModuleInfo0_10, &ModuleInfo_13, PredInfo0_11, &PredInfo_14, ProcInfo0_12, &ProcInfo_15);
  GlobalInfo1_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 0))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 1))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 2))));
  Var_44 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_18, (MR_Integer) 5))) & (MR_Integer) 3);
  {
    STATE_VARIABLE_Info_23_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 0) = ((MR_Box) (GlobalInfo1_16));
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 2) = ((MR_Box) (Var_41));
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 3) = ((MR_Box) (PredInfo_14));
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 4) = ((MR_Box) (ProcInfo_15));
    MR_hl_field(0, STATE_VARIABLE_Info_23_23, 5) = (MR_Box) ((MR_Unsigned) (Var_44));
  }
  transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(ModuleInfo_13, GlobalInfo1_16, &GlobalInfo_17);
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 1))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 2))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 3))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 4))));
  Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_23_23, (MR_Integer) 5))) & (MR_Integer) 3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_19 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GlobalInfo_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_61));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_47;

  transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__find_matching_version__1480__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_47);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_47));
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

  (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_40));
  transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_4(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_99;
    MR_Integer Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Unsigned packed_word_7;
    MR_Word Var_41;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 0))));
    Var_99 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 1))));
    Var_100 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 2))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 3))));
    Var_102 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 4))));
    Var_103 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 5))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 6))));
    packed_word_7 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 7)));
    Var_105 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HOArg_40, (MR_Integer) 7))) & (MR_Integer) 1);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_54, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__Var_54, (MR_Integer) 1))));
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
        MR_Word TypeCtorInfo_111_111;

        (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_35 == (MR_Integer) 0);
        if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        {
          TypeCtorInfo_111_111 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0);
          mercury__list__member_2_p_1(TypeCtorInfo_111_111, &(env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__conv4_HOArg_40, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14, transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_5, env_ptr);
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
    MR_Word ModuleInfo_17;
    MR_Word Params_18;
    MR_Word NewPredMap_19;
    MR_Word Caller_20;
    MR_Word PredInfo_21;
    MR_Word ProcInfo_22;
    MR_Word Args_23;
    MR_Word ExtraTypeInfoTVars_24;
    MR_Word VarTable_25;
    MR_Word PairWithType_26;
    MR_Word ArgsTypes0_29;
    MR_Word TVarSet_30;
    MR_Word Request_31;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word ProcInfo_112;
    MR_Word VarTable_113;
    MR_Word ArgTypes_114;
    MR_Word AllTVars_115;
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Unsigned packed_word_1;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Unsigned packed_word_2;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Unsigned packed_word_3;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Unsigned packed_word_4;
    MR_Word Match_34;
    MR_Word TypeCtorInfo_110_110;
    MR_Word Versions0_32;
    MR_Word Versions_33;
    MR_Word Var_51;
    MR_Box conv3_Versions0_32;

    ModuleInfo_17 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(Var_43);
    Var_44 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
    Var_62 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
    Var_64 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
    Var_66 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
    Params_18 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_44);
    Var_45 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
    Var_67 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
    Var_71 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
    NewPredMap_19 = transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(Var_45);
    Var_72 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
    Caller_20 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
    PredInfo_21 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
    ProcInfo_22 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
    Var_76 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
    transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_3_p_0((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14, Args0_12, &Args_23);
    Var_122 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
    Var_123 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
    Var_124 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
    Var_125 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
    ProcInfo_112 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
    Var_126 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_112, &VarTable_113);
    parse_tree__var_table__lookup_var_types_3_p_0(VarTable_113, Args_23, &ArgTypes_114);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(ArgTypes_114, &AllTVars_115);
    if ((AllTVars_115 == (MR_Word) ((MR_Unsigned) 0U)))
      ExtraTypeInfoTVars_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word RttiVarMaps_116;
      MR_Word TypeInfoTVars_117;
      MR_Word ExtraTypeInfoTVars0_118;
      MR_Word Var_119 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
      MR_Word Var_120;
      MR_Word Var_127 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
      MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 1))));
      MR_Word Var_129 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
      MR_Word Var_130 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
      MR_Word Var_131 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
      MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5)));
      MR_Box conv1_TypeInfoTVars_117;

      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(Var_119, &RttiVarMaps_116);
      {
        Var_120 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_120, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_7[0]));
        MR_hl_field(0, Var_120, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_1));
        MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_120, 3) = ((MR_Box) (RttiVarMaps_116));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[4]), Var_120, Args_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_TypeInfoTVars_117);
      TypeInfoTVars_117 = ((MR_Word) (conv1_TypeInfoTVars_117));
      mercury__list__delete_elems_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), AllTVars_115, TypeInfoTVars_117, &ExtraTypeInfoTVars0_118);
      mercury__list__remove_dups_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]), ExtraTypeInfoTVars0_118, &ExtraTypeInfoTVars_24);
    }
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_22, &VarTable_25);
    {
      PairWithType_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PairWithType_26, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[1]));
      MR_hl_field(0, PairWithType_26, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_2));
      MR_hl_field(0, PairWithType_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, PairWithType_26, 3) = ((MR_Box) (VarTable_25));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[2]), PairWithType_26, Args0_12, &ArgsTypes0_29);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_30);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (CalledPred_10));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (CalledProc_11));
    }
    {
      Request_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Request_31, 0) = ((MR_Box) (Caller_20));
      MR_hl_field(0, Request_31, 1) = ((MR_Box) (Var_48));
      MR_hl_field(0, Request_31, 2) = ((MR_Box) (ArgsTypes0_29));
      MR_hl_field(0, Request_31, 3) = ((MR_Box) (ExtraTypeInfoTVars_24));
      MR_hl_field(0, Request_31, 4) = ((MR_Box) ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrderArgs_14));
      MR_hl_field(0, Request_31, 5) = ((MR_Box) (TVarSet_30));
      MR_hl_field(0, Request_31, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (RequestKind_15)));
      MR_hl_field(0, Request_31, 7) = ((MR_Box) (Context_13));
    }
    (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[3]), NewPredMap_19, ((MR_Box) (Var_48)), &conv3_Versions0_32);
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      Versions0_32 = ((MR_Word) (conv3_Versions0_32));
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
    {
      TypeCtorInfo_110_110 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0);
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_110_110, Versions0_32, &Versions_33);
      Var_51 = (MR_Word) ((MR_Unsigned) 0U);
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = transform_hlds__higher_order__specialize_calls__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_102_111_114_95_118_101_114_115_105_111_110_95_95_91_49_93_95_48_7_p_0(Params_18, ModuleInfo_17, Request_31, Versions_33, Var_51, &Match_34);
    }
    if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
      *Result_16 = (MR_Word) (MR_mkword(1, (MR_Word) (Match_34)));
    else
    {
      MR_Word TypeSpec_36;
      MR_Word UserTypeSpec_37;
      MR_Integer Var_89;
      MR_Integer Var_90;
      MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(0, Params_18, (MR_Integer) 0)));

      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__HigherOrder_35 = ((((MR_Unsigned) ((MR_hl_field(0, Params_18, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      TypeSpec_36 = ((((MR_Unsigned) ((MR_hl_field(0, Params_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      UserTypeSpec_37 = ((MR_Unsigned) ((MR_hl_field(0, Params_18, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_89 = ((MR_Integer) ((MR_hl_field(0, Params_18, (MR_Integer) 1))));
      Var_90 = ((MR_Integer) ((MR_hl_field(0, Params_18, (MR_Integer) 2))));
      (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (UserTypeSpec_37 == (MR_Integer) 0);
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (RequestKind_15 == (MR_Integer) 1);
      if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
      {
        MR_Word CalledPredInfo_38;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_17, CalledPred_10, &CalledPredInfo_38);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalledPredInfo_38);
        (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded);
        if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        {
          {
            MR_Word Markers_39;

            (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (UserTypeSpec_37 == (MR_Integer) 0);
            if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(CalledPredInfo_38, &Markers_39);
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_39, (MR_Integer) 11);
              if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
                (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_39, (MR_Integer) 12);
            }
          }
          if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
          {
            transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_6(&env);
            if (!((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded))
              (env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded = (TypeSpec_36 == (MR_Integer) 0);
          }
        }
      }
      if ((env).transform_hlds__higher_order__specialize_calls__find_matching_version_8_p_0_env_0__succeeded)
        *Result_16 = (MR_Word) (MR_mkword(2, (MR_Word) (Request_31)));
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
        MR_Word MatchIsPartial_23 = ((MR_Word) ((MR_hl_field(0, Match1_21, (MR_Integer) 1))));

        succeeded = (MatchIsPartial_23 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *Match_7 = Match1_21;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word MaybeMatch2_26;
          MR_Word next_value_of_HeadVar__5_5;
          MR_Word next_value_of_HeadVar__6_6;

          if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeMatch2_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeMatch2_26, 0) = ((MR_Box) (Match1_21));
            }
          else
          {
            MR_Word Match0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
            MR_Integer NumMatches0_29;
            MR_Integer NumMatches1_33;
            MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Match0_27, (MR_Integer) 1))));
            MR_Word Var_37;

            succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NumMatches0_29 = ((MR_Integer) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
              Var_37 = ((MR_Word) ((MR_hl_field(0, Match1_21, (MR_Integer) 1))));
              succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                NumMatches1_33 = ((MR_Integer) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              succeeded = (NumMatches0_29 > NumMatches1_33);
              if (succeeded)
                MaybeMatch2_26 = HeadVar__6_6;
              else
                {
                  MaybeMatch2_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeMatch2_26, 0) = ((MR_Box) (Match1_21));
                }
            }
            else
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.specialize_calls.search_for_version\'/7", (MR_String) "comparison failed");
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__5_5 = Versions_18;
          next_value_of_HeadVar__6_6 = MaybeMatch2_26;
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
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_42 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv0_Var_42));
  transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv2_Instance_35));
  transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_4(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 0))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 1))));
    MR_Word Var_53;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_38;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word TypeInfo_31_88;
    MR_Word TypeCtorInfo_32_89;
    MR_Word InstanceTVarSet_72;
    MR_Word InstanceTypes0_74;
    MR_Word Constraints0_75;
    MR_Word Renaming_81;
    MR_Word InstanceTypes_82;
    MR_Word Constraints1_83;
    MR_Word InstanceTVars_84;
    MR_Word UnconstrainedTVars0_85;
    MR_Word Subst_86;
    MR_Word KindMap_87;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_41;
    MR_Word Var_39;
    MR_Word Var_40;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVarSet_52 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 2))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 3))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes0_54 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 4))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints0_55 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 5))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 6))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 7))));
    Var_58 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 8))));
    Var_59 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 9))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 10))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet_19, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVarSet_52, &Var_38, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Renaming_61);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Renaming_61, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes0_54, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes_62);
    parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Renaming_61, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints0_55, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints1_63);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes_62, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVars_64);
    parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTVars_64, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints1_63, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__UnconstrainedTVars0_65);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTypes_62, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes_32, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Subst_66);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
    {
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Subst_66, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Constraints1_63, &Var_36);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_31_68 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_32_69 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
      mercury__map__init_1_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_31_68, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_32_69, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__KindMap_67);
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__KindMap_67, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Subst_66, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__UnconstrainedTVars0_65, &Var_37);
      Var_70 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 0))));
      Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 1))));
      InstanceTVarSet_72 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 2))));
      Var_73 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 3))));
      InstanceTypes0_74 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 4))));
      Constraints0_75 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 5))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 6))));
      Var_77 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 7))));
      Var_78 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 8))));
      Var_79 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 9))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instance_35, (MR_Integer) 10))));
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet_19, InstanceTVarSet_72, &Var_41, &Renaming_81);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(Renaming_81, InstanceTypes0_74, &InstanceTypes_82);
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(Renaming_81, Constraints0_75, &Constraints1_83);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(InstanceTypes_82, &InstanceTVars_84);
      parse_tree__prog_type_scan__get_unconstrained_tvars_3_p_0(InstanceTVars_84, Constraints1_83, &UnconstrainedTVars0_85);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(InstanceTypes_82, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes0_29, &Subst_86);
      if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
      {
        parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(Subst_86, Constraints1_83, &Var_39);
        TypeInfo_31_88 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[2]);
        TypeCtorInfo_32_89 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_31_88, TypeCtorInfo_32_89, &KindMap_87);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(KindMap_87, Subst_86, UnconstrainedTVars0_85, &Var_40);
        (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = MR_TRUE;
      }
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = !((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded);
      if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
        transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _ClassName_31;
    MR_Box conv1_Instances_34;

    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint0_26 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_42, (MR_Integer) 0))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint_27 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_42, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassName_28 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint0_26, (MR_Integer) 0))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes0_29 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint0_26, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__list__length_2_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_46_46, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes0_29, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassArity_30);
    _ClassName_31 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint_27, (MR_Integer) 0))));
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ConstraintArgTypes_32 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraint_27, (MR_Integer) 1))));
    hlds__hlds_module__module_info_get_instance_table_2_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ModuleInfo_9, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTable_33);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_48_48 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[1]);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_43 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassName_28));
      MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ClassArity_30));
    }
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = mercury__map__search_3_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_47_47, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeInfo_48_48, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__InstanceTable_33, ((MR_Box) ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Var_43)), &conv1_Instances_34);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instances_34 = ((MR_Word) (conv1_Instances_34));
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = MR_TRUE;
    }
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_49_49 = (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0);
      mercury__list__member_2_p_1((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TypeCtorInfo_49_49, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv2_Instance_35, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__Instances_34, transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_5, env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeCtorInfo_44_44;
        MR_Word TypeInfo_45_45;
        MR_Word TypeRenaming_20;
        MR_Word CalleeArgTypes1_21;
        MR_Word TypeSubn_22;
        MR_Word CalleeUnivConstraints1_23;
        MR_Word CalleeUnivConstraints_24;
        MR_Word CalleeUnivConstraintAL_25;
        MR_Word Var_17;
        MR_Word Var_18;

        (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10 != (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10, (MR_Integer) 1))));
          parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet0_11, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeTVarSet_14, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet_19, &TypeRenaming_20);
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TypeRenaming_20, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeArgTypes0_16, &CalleeArgTypes1_21);
          parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(CalleeArgTypes1_21, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ArgTypes_13, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CallerHeadTypeParams_12, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeExistQVars_15, &TypeSubn_22);
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(TypeRenaming_20, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10, &CalleeUnivConstraints1_23);
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(TypeSubn_22, CalleeUnivConstraints1_23, &CalleeUnivConstraints_24);
          TypeCtorInfo_44_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0);
          mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_44_44, TypeCtorInfo_44_44, (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10, CalleeUnivConstraints_24, &CalleeUnivConstraintAL_25);
          TypeInfo_45_45 = (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[1]);
          mercury__list__member_2_p_1(TypeInfo_45_45, &(env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__conv0_Var_42, CalleeUnivConstraintAL_25, transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_3, env_ptr);
        }
      }
      (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word CalleeUnivConstraints0_10,
  MR_Word TVarSet0_11,
  MR_Word CallerHeadTypeParams_12,
  MR_Word ArgTypes_13,
  MR_Word CalleeTVarSet_14,
  MR_Word CalleeExistQVars_15,
  MR_Word CalleeArgTypes0_16)
{
  struct transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0_s env;

  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ModuleInfo_9 = ModuleInfo_9;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeUnivConstraints0_10 = CalleeUnivConstraints0_10;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__TVarSet0_11 = TVarSet0_11;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CallerHeadTypeParams_12 = CallerHeadTypeParams_12;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__ArgTypes_13 = ArgTypes_13;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeTVarSet_14 = CalleeTVarSet_14;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeExistQVars_15 = CalleeExistQVars_15;
  (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__CalleeArgTypes0_16 = CalleeArgTypes0_16;
  transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_6(&env);
  return (env).transform_hlds__higher_order__specialize_calls__type_subst_makes_instance_known_8_p_0_env_0__succeeded;
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
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__conv2_HOCurriedArg_63));
  transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_3(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 0))));
    MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 1))));
    MR_Integer Var_81 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 2))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 3))));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 4))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 5))));
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 6))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 7)));

    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__Var_77 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArg_63, (MR_Integer) 7))) & (MR_Integer) 1);
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__Var_77 == (MR_Integer) 0);
    if ((env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
      transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), &(env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__conv2_HOCurriedArg_63, (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArgs_61, transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_4, env_ptr);
      (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_RevHOArgs_0_9,
  MR_Word * STATE_VARIABLE_RevHOArgs_10)
{
  struct transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0_s env;

  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevHOArgs_10 = STATE_VARIABLE_RevHOArgs_0_9;
    else
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
        MR_Word STATE_VARIABLE_RevHOArgs_78_78;
        MR_Word ConsId_45;
        MR_Word CurriedArgs_46;
        MR_Word Var_69;
        MR_Box conv0_Var_69;
        MR_Word Var_70;
        MR_Integer Var_47;
        MR_Word Var_48;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_ArgNo_8;
        MR_Word next_value_of_STATE_VARIABLE_RevHOArgs_0_9;

        (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap_7, ((MR_Box) (Var_95)), &conv0_Var_69);
        if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
        {
          Var_69 = ((MR_Word) (conv0_Var_69));
          (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = MR_TRUE;
        }
        if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
        {
          ConsId_45 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 0))));
          CurriedArgs_46 = ((MR_Word) ((MR_hl_field(0, Var_69, (MR_Integer) 1))));
          (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
          {
            Var_70 = ((MR_Word) ((MR_hl_field(3, ConsId_45, (MR_Integer) 1))));
            (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_Integer) 0);
            if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
              Var_47 = ((MR_Integer) ((MR_hl_field(0, Var_70, (MR_Integer) 0))));
          }
          (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded);
          if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
          {
            (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
            {
              Var_48 = ((MR_Word) ((MR_hl_field(3, ConsId_45, (MR_Integer) 1))));
              {
                MR_Word Var_71 = (MR_Word) (CalleeStatus_2);
                MR_Word Var_50;
                MR_Unsigned packed_word_0;
                MR_Word Var_72;
                MR_Word Var_51;

                (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_71)) == (MR_Integer) 2);
                if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
                {
                  packed_word_0 = (MR_Unsigned) ((MR_hl_field(2, Var_71, (MR_Integer) 0)));
                  Var_50 = ((MR_Unsigned) ((MR_hl_field(2, Var_71, (MR_Integer) 0))) & (MR_Integer) 7);
                }
                (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded);
                if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
                {
                  Var_72 = (MR_Word) (CalleeStatus_2);
                  (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
                  if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
                    Var_51 = ((MR_Word) ((MR_hl_field(1, Var_72, (MR_Integer) 0))));
                  (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded);
                  if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
                    (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(CalleeArgType_37);
                }
              }
            }
            else
              (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
        {
          MR_Word CurriedArgTypes_52;
          MR_Word CurriedArgRttiInfo_53;
          MR_Word CurriedCalleeArgTypes_59;
          MR_Word HOCurriedArgs0_60;
          MR_Integer NumArgs_62;
          MR_Word IsConst_64;
          MR_Word HOArg_65;
          MR_Word Var_73;
          MR_Word ShroudedPredProcId_54;
          MR_Integer Var_93;

          parse_tree__var_table__lookup_var_types_3_p_0(VarTable_5, CurriedArgs_46, &CurriedArgTypes_52);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_6[0]));
            MR_hl_field(0, Var_73, 1) = ((MR_Box) (transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_1));
            MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_73, 3) = ((MR_Box) (RttiVarMaps_6));
          }
          mercury__list__map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0), Var_73, CurriedArgs_46, &CurriedArgRttiInfo_53);
          (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ConsId_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_45, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
          {
            ShroudedPredProcId_54 = ((MR_Word) ((MR_hl_field(3, ConsId_45, (MR_Integer) 1))));
            {
              MR_Word PredId_56;
              MR_Word PredInfo_58;
              MR_Word Var_74;
              MR_Integer Var_57;

              Var_74 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_54);
              PredId_56 = ((MR_Word) ((MR_hl_field(0, Var_74, (MR_Integer) 0))));
              Var_57 = ((MR_Integer) ((MR_hl_field(0, Var_74, (MR_Integer) 1))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_56, &PredInfo_58);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_58, &CurriedCalleeArgTypes_59);
            }
          }
          else
            CurriedCalleeArgTypes_59 = CurriedArgTypes_52;
          transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0(ModuleInfo_1, CalleeStatus_2, CurriedArgs_46, CurriedCalleeArgTypes_59, VarTable_5, RttiVarMaps_6, KnownVarMap_7, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &HOCurriedArgs0_60);
          mercury__list__reverse_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), HOCurriedArgs0_60, &(env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArgs_61);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), CurriedArgs_46, &NumArgs_62);
          Var_93 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArgs_61);
          (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = (NumArgs_62 == Var_93);
          if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
          {
            transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_5(&env);
            (env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded);
          }
          if ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__succeeded)
            IsConst_64 = (MR_Integer) 1;
          else
            IsConst_64 = (MR_Integer) 0;
          {
            HOArg_65 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HOArg_65, 0) = ((MR_Box) (ConsId_45));
            MR_hl_field(0, HOArg_65, 1) = ((MR_Box) (ArgNo_8));
            MR_hl_field(0, HOArg_65, 2) = ((MR_Box) (NumArgs_62));
            MR_hl_field(0, HOArg_65, 3) = ((MR_Box) (CurriedArgs_46));
            MR_hl_field(0, HOArg_65, 4) = ((MR_Box) (CurriedArgTypes_52));
            MR_hl_field(0, HOArg_65, 5) = ((MR_Box) (CurriedArgRttiInfo_53));
            MR_hl_field(0, HOArg_65, 6) = ((MR_Box) ((env).transform_hlds__higher_order__specialize_calls__find_higher_order_args_10_p_0_env_0__HOCurriedArgs_61));
            MR_hl_field(0, HOArg_65, 7) = (MR_Box) ((MR_Unsigned) (IsConst_64));
          }
          mercury__list__cons_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), ((MR_Box) (HOArg_65)), STATE_VARIABLE_RevHOArgs_0_9, &STATE_VARIABLE_RevHOArgs_78_78);
        }
        else
          STATE_VARIABLE_RevHOArgs_78_78 = STATE_VARIABLE_RevHOArgs_0_9;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_94;
        next_value_of_HeadVar__4_4 = CalleeArgTypes_38;
        next_value_of_ArgNo_8 = NextArg_44;
        next_value_of_STATE_VARIABLE_RevHOArgs_0_9 = STATE_VARIABLE_RevHOArgs_78_78;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        ArgNo_8 = next_value_of_ArgNo_8;
        STATE_VARIABLE_RevHOArgs_0_9 = next_value_of_STATE_VARIABLE_RevHOArgs_0_9;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__update_changed_status_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__3_3 = HeadVar__2_2;
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
        MR_Word IsInteresting_24;
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));

        Params_23 = transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(Var_33);
        IsInteresting_24 = transform_hlds__higher_order__specialize_calls__is_interesting_cons_id_2_f_0(Params_23, ConsId_17);
        switch (IsInteresting_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
            break;
          case (MR_Integer) 1:
            {
              MR_Word KnownVarMap0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
              MR_Word KnownVarMap_26;
              MR_Word Var_34;
              MR_Word Var_48;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_52;
              MR_Word Var_53;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = ((MR_Box) (ConsId_17));
                MR_hl_field(0, Var_34, 1) = ((MR_Box) (Args_18));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (LVar_16)), ((MR_Box) (Var_34)), KnownVarMap0_25, &KnownVarMap_26);
              Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
              Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
              Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));
              Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 4))));
              Var_53 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 5))) & (MR_Integer) 3);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_31 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
                MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_26));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_51));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
                MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_53));
              }
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
        MR_Word KnownVarMap0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 1))));
        MR_Word KnownConst_57;
        MR_Box conv0_KnownConst_57;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), KnownVarMap0_56, ((MR_Box) (Var2_9)), &conv0_KnownConst_57);
        if (succeeded)
        {
          KnownConst_57 = ((MR_Word) (conv0_KnownConst_57));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word KnownVarMap_58;
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;

          mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_1[0]), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0), ((MR_Box) (Var1_8)), ((MR_Box) (KnownConst_57)), KnownVarMap0_56, &KnownVarMap_58);
          Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 0))));
          Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 2))));
          Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 3))));
          Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 4))));
          Var_69 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_30, (MR_Integer) 5))) & (MR_Integer) 3);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_31 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_64));
            MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_58));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_66));
            MR_hl_field(0, base, 3) = ((MR_Box) (Var_67));
            MR_hl_field(0, base, 4) = ((MR_Box) (Var_68));
            MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_69));
          }
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

static MR_Word MR_CALL 
transform_hlds__higher_order__specialize_calls__is_interesting_cons_id_2_f_0(
  MR_Word Params_4,
  MR_Word ConsId_5)
{
  MR_Word IsInteresting_6;

  switch (MR_tag((MR_Word) ConsId_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word UserTypeSpec_45 = ((MR_Unsigned) ((MR_hl_field(0, Params_4, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (UserTypeSpec_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            IsInteresting_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            IsInteresting_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UserTypeSpec_45 = ((MR_Unsigned) ((MR_hl_field(0, Params_4, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (UserTypeSpec_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            IsInteresting_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            IsInteresting_6 = (MR_Integer) 1;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      IsInteresting_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId_5, (MR_Integer) 0))))) {
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
          IsInteresting_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 4:
          {
            MR_Word HigherOrder_44 = ((((MR_Unsigned) ((MR_hl_field(0, Params_4, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

            switch (HigherOrder_44) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                IsInteresting_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                IsInteresting_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_20 = ((MR_Word) ((MR_hl_field(3, ConsId_5, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) IntConst_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word UserTypeSpec_31 = ((MR_Unsigned) ((MR_hl_field(0, Params_4, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (UserTypeSpec_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      IsInteresting_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 0:
                      IsInteresting_6 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                IsInteresting_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                IsInteresting_6 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
          {
            MR_Word UserTypeSpec_45 = ((MR_Unsigned) ((MR_hl_field(0, Params_4, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (UserTypeSpec_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                IsInteresting_6 = (MR_Integer) 0;
                break;
              case (MR_Integer) 0:
                IsInteresting_6 = (MR_Integer) 1;
                break;
            }
          }
          break;
      }
      break;
  }
  return IsInteresting_6;
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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_post_branch_infos_into_one__495__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_17);
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

    mercury__list__filter_map_3_p_0((MR_Word) (&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_post_branch_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[0]), (MR_Word) (&transform_hlds__higher_order__specialize_calls_scalar_common_2[4]), PostInfos_3, &ReachableVarMaps_10);
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
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_7, (MR_Integer) 5))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_post_branch_info_for_goal_3_p_0(
  MR_Word HOInfo_4,
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
  Var_10 = ((MR_Word) ((MR_hl_field(0, HOInfo_4, (MR_Integer) 1))));
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
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 5))) & (MR_Integer) 3);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (KnownVarMap_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = (MR_Box) ((MR_Unsigned) (Var_13));
  }
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls__get_pre_branch_info_2_p_0(
  MR_Word Info_3,
  MR_Word * HeadVar__2_2)
{
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));

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

  succeeded = transform_hlds__higher_order__specialize_calls__IntroducedFrom__pred__merge_common_var_const_list__611__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_5[0]));
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
  MR_Word conv0_STATE_VARIABLE_GlobalInfo_24;

  transform_hlds__higher_order__specialize_calls__ho_traverse_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_GlobalInfo_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_GlobalInfo_24));
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
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__higher_order__specialize_calls_scalar_common_4[0]));
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
transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____higher_order_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____higher_order_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__specialize_calls____Unify____ho_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__specialize_calls____Compare____ho_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_higher_order_info_0);
	MR_register_type_ctor_info(&transform_hlds__higher_order__specialize_calls__transform_hlds__higher_order__specialize_calls__type_ctor_info_ho_changed_0);
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
