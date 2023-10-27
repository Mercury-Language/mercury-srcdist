/*
** Automatically generated from `simplify_goal_switch.m'
** by the Mercury compiler,
** version rotd-2023-10-27
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


// :- module check_hlds.simplify.simplify_goal_switch.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_switch__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_switch.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.pd_cost.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_ordinal_ordered_seen_non_ground_term_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__339__1_2_p_0(
  MR_Word LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__329__1_3_p_0(
  MR_Word ModuleInfo_15,
  MR_Word LambdaHeadVar__1_40,
  MR_Word * LambdaHeadVar__2_41);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Integer ConsArity_10,
  MR_Word * ExtraGoal_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevCases_0_6,
  MR_Word * STATE_VARIABLE_RevCases_7,
  MR_Word STATE_VARIABLE_RevInstMapDeltas_0_8,
  MR_Word * STATE_VARIABLE_RevInstMapDeltas_9,
  MR_Word STATE_VARIABLE_CanFail_0_10,
  MR_Word * STATE_VARIABLE_CanFail_11,
  MR_Word STATE_VARIABLE_SeenNonGroundTerm_0_12,
  MR_Word * STATE_VARIABLE_SeenNonGroundTerm_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch__find_outermost_switch_on_var_3_p_0(
  MR_Word Var_4,
  MR_Word Arms_5,
  MR_Word * OutermostArm_6);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__update_switch_goal_info_8_p_0(
  MR_Word VarTable_9,
  MR_Word InstMap0_10,
  MR_Word InstMapDeltas_11,
  MR_Word SeenNonGroundTerm_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][6];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_4[2][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_5[1][5];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_3[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_5[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_switch__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0 = {
  (MR_String) "not_seen_non_ground_term",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1 = {
  (MR_String) "seen_non_ground_term",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_ordinal_ordered_seen_non_ground_term_0[2] = {
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0,
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0[2] = {
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0,
  &check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1
};

static const MR_Integer check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__type_ctor_info_seen_non_ground_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_switch",
  (MR_String) "seen_non_ground_term",
  { check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0 },
  { check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_ordinal_ordered_seen_non_ground_term_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__339__1_2_p_0(
  MR_Word LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_46 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LambdaHeadVar__1_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_45));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (LambdaHeadVar__1_45));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__329__1_3_p_0(
  MR_Word ModuleInfo_15,
  MR_Word LambdaHeadVar__1_40,
  MR_Word * LambdaHeadVar__2_41)
{
  MR_Word IsDummy_62;

  IsDummy_62 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_15, LambdaHeadVar__1_40);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_41 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_40));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_62));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
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
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_76,
  MR_Word * STATE_VARIABLE_Info_77)
{
  MR_bool succeeded;
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 1))));
  MR_Word SwitchCanFail0_21 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_11, (MR_Integer) 3))));
  MR_Word ModuleInfo0_23;
  MR_Word VarInst_24;
  MR_Word VarTable_25;
  MR_Word Cases1_32;
  MR_Word MaybeInstConsIds_34;
  MR_Word RevCases_38;
  MR_Word RevInstMapDeltas_39;
  MR_Word SwitchCanFail_40;
  MR_Word SeenNonGroundTerm_41;
  MR_Word Cases_42;
  MR_Integer Cases0Length_74;
  MR_Integer CasesLength_75;
  MR_Word STATE_VARIABLE_Info_78_78;
  MR_Word STATE_VARIABLE_Info_82_82;
  MR_Word STATE_VARIABLE_Info_84_84;
  MR_Word BoundInsts_26;

  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_76, &ModuleInfo0_23);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, Var_20, &VarInst_24);
  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_76, &VarTable_25);
  succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo0_23, VarInst_24, &BoundInsts_26);
  if (succeeded)
  {
    MR_Word VarType_27;
    MR_Word VarTypeCtor_28;
    MR_Word ConsIds_29;
    MR_Word SortedConsIds_30;
    MR_Word ConsIdSet_31;
    MR_Word UnreachableCaseGoals_33;
    MR_Word DeletedCallCallees0_35;
    MR_Word SubGoalCalledProcs_36;
    MR_Word DeletedCallCallees_37;

    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, Var_20, &VarType_27);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_27, &VarTypeCtor_28);
    parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(VarTypeCtor_28, BoundInsts_26, &ConsIds_29);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConsIds_29, &SortedConsIds_30);
    mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConsIds_29, &ConsIdSet_31);
    check_hlds__det_util__delete_unreachable_cases_4_p_0(Cases0_22, ConsIdSet_31, &Cases1_32, &UnreachableCaseGoals_33);
    {
      MaybeInstConsIds_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeInstConsIds_34, 0) = ((MR_Box) (SortedConsIds_30));
    }
    check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_0_76, &DeletedCallCallees0_35);
    SubGoalCalledProcs_36 = hlds__goal_util__goals_proc_refs_1_f_0(UnreachableCaseGoals_33);
    mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_36, DeletedCallCallees0_35, &DeletedCallCallees_37);
    check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_37, STATE_VARIABLE_Info_0_76, &STATE_VARIABLE_Info_78_78);
  }
  else
  {
    Cases1_32 = Cases0_22;
    MaybeInstConsIds_34 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Info_78_78 = STATE_VARIABLE_Info_0_76;
  }
  check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(Var_20, Cases1_32, NestedContext0_15, InstMap0_16, Common0_17, (MR_Word) ((MR_Unsigned) 0U), &RevCases_38, (MR_Word) ((MR_Unsigned) 0U), &RevInstMapDeltas_39, SwitchCanFail0_21, &SwitchCanFail_40, (MR_Integer) 0, &SeenNonGroundTerm_41, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_82_82);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevCases_38, &Cases_42);
  if ((Cases_42 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Context_43;
    MR_Integer Var_83;
    MR_Word Var_85;

    Var_83 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
    check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Var_83, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_84_84);
    Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
    Var_85 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_43);
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, Var_85, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, Cases_42, (MR_Integer) 1))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, Cases_42, (MR_Integer) 0))));

    if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MainConsId_45 = ((MR_Word) ((MR_hl_field(0, Var_114, (MR_Integer) 0))));
      MR_Word OtherConsIds_46 = ((MR_Word) ((MR_hl_field(0, Var_114, (MR_Integer) 1))));
      MR_Word SingleGoal_47 = ((MR_Word) ((MR_hl_field(0, Var_114, (MR_Integer) 2))));

      if ((OtherConsIds_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer MainConsIdArity_48;
        MR_Word STATE_VARIABLE_Info_89_89;
        MR_Integer Var_95;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_112;

        MainConsIdArity_48 = parse_tree__prog_util__cons_id_arity_1_f_0(MainConsId_45);
        succeeded = (SwitchCanFail_40 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (MaybeInstConsIds_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_87 = ((MR_Word) ((MR_hl_field(1, MaybeInstConsIds_34, (MR_Integer) 0))));
            succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_112 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 0))));
              Var_88 = ((MR_Word) ((MR_hl_field(1, Var_87, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____cons_id_0_0(MainConsId_45, Var_112);
              if (succeeded)
                succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Type_49;
          MR_Word ModuleInfo1_50;

          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_25, Var_20, &Type_49);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_82_82, &ModuleInfo1_50);
          succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(ModuleInfo1_50, Type_49, MainConsId_45);
          if (succeeded)
          {
            MR_Word NonLocals_51;
            MR_Word NewDelta_52;
            MR_Word ModuleInfo2_53;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_42));
            }
            NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
            hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_25, NonLocals_51, InstMap0_16, RevInstMapDeltas_39, &NewDelta_52, ModuleInfo1_50, &ModuleInfo2_53);
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_53, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_89_89);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_52, GoalInfo0_13, GoalInfo_14);
          }
          else
          {
            MR_Word UnifyGoal_54;
            MR_Word SingleGoalConj_55;
            MR_Word GoalList_56;
            MR_Word NonLocals0_57;
            MR_Word InstMapDelta0_58;
            MR_Word InstMapDelta_59;
            MR_Word ModuleInfo_60;
            MR_Word CaseDetism_61;
            MR_Word Detism_62;
            MR_Word Purity_63;
            MR_Word STATE_VARIABLE_Info_90_90;
            MR_Word STATE_VARIABLE_Info_91_91;
            MR_Word NonLocals_103;

            check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(Var_20, MainConsId_45, MainConsIdArity_48, &UnifyGoal_54, InstMap0_16, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_90_90);
            hlds__hlds_goal__goal_to_conj_list_2_p_0(SingleGoal_47, &SingleGoalConj_55);
            {
              GoalList_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, GoalList_56, 0) = ((MR_Box) (UnifyGoal_54));
              MR_hl_field(1, GoalList_56, 1) = ((MR_Box) (SingleGoalConj_55));
            }
            NonLocals0_57 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, NonLocals0_57, &NonLocals_103);
            InstMapDelta0_58 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
            hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(Var_20, Type_49, MainConsId_45, InstMap0_16, InstMapDelta0_58, &InstMapDelta_59, ModuleInfo1_50, &ModuleInfo_60);
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_60, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_91_91);
            CaseDetism_61 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
            parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, CaseDetism_61, &Detism_62);
            hlds__hlds_goal__goal_list_purity_2_p_0(GoalList_56, &Purity_63);
            hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_103, InstMapDelta_59, Detism_62, Purity_63, GoalInfo_14);
            check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_89_89);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_12 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, base, 2) = ((MR_Box) (GoalList_56));
            }
          }
        }
        else
        {
          *GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, SingleGoal_47, (MR_Integer) 0))));
          *GoalInfo_14 = ((MR_Word) ((MR_hl_field(0, SingleGoal_47, (MR_Integer) 1))));
          STATE_VARIABLE_Info_89_89 = STATE_VARIABLE_Info_82_82;
        }
        Var_95 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Var_95, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_84_84);
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
          MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
          MR_hl_field(3, base, 3) = ((MR_Box) (Cases_42));
        }
        check_hlds__simplify__simplify_goal_switch__update_switch_goal_info_8_p_0(VarTable_25, InstMap0_16, RevInstMapDeltas_39, SeenNonGroundTerm_41, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_84_84);
      }
    }
    else
    {
      MR_Word SwitchArms0_70;
      MR_Word STATE_VARIABLE_Info_99_99;
      MR_Word OutermostArm_71;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
        MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
        MR_hl_field(3, base, 3) = ((MR_Box) (Cases_42));
      }
      check_hlds__simplify__simplify_goal_switch__update_switch_goal_info_8_p_0(VarTable_25, InstMap0_16, RevInstMapDeltas_39, SeenNonGroundTerm_41, GoalInfo0_13, GoalInfo_14, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_99_99);
      SwitchArms0_70 = ((MR_Word) ((MR_hl_field(0, NestedContext0_15, (MR_Integer) 3))));
      succeeded = check_hlds__simplify__simplify_goal_switch__find_outermost_switch_on_var_3_p_0(Var_20, SwitchArms0_70, &OutermostArm_71);
      if (succeeded)
      {
        MR_Word ToSplit0_72;
        MR_Word ToSplit_73;

        check_hlds__simplify__simplify_info__simplify_info_get_switch_arms_to_split_2_p_0(STATE_VARIABLE_Info_99_99, &ToSplit0_72);
        mercury__set__insert_3_p_0((MR_Word) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_switch_arm_0), ((MR_Box) (OutermostArm_71)), ToSplit0_72, &ToSplit_73);
        check_hlds__simplify__simplify_info__simplify_info_set_switch_arms_to_split_3_p_0(ToSplit_73, STATE_VARIABLE_Info_99_99, &STATE_VARIABLE_Info_84_84);
      }
      else
        STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_99_99;
    }
  }
  *Common_18 = Common0_17;
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_22, &Cases0Length_74);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_42, &CasesLength_75);
  succeeded = (CasesLength_75 == Cases0Length_74);
  if (succeeded)
    *STATE_VARIABLE_Info_77 = STATE_VARIABLE_Info_84_84;
  else
  {
    MR_Word STATE_VARIABLE_Info_101_101;

    check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_101_101);
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_77);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_46;

  check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__339__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_46);
  *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_46));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_2(
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
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_41;

  check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__329__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_41);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_41));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Integer ConsArity_10,
  MR_Word * ExtraGoal_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_Word VarTable0_14;
  MR_Word ModuleInfo_15;
  MR_Word VarType_16;
  MR_Word ArgTypes_17;
  MR_Word MakeArgEntry_18;
  MR_Word ArgEntries_21;
  MR_Word ArgVars_22;
  MR_Word VarTable_23;
  MR_Word Inst0_24;
  MR_Word Inst1_25;
  MR_Word ArgInsts_26;
  MR_Word ArgUnifyModes_30;
  MR_Word UnifyMode_31;
  MR_Word Unification_33;
  MR_Word ExtraGoalExpr_34;
  MR_Word NonLocals_35;
  MR_Word InstMapDelta_36;
  MR_Word ExtraGoalInfo_37;
  MR_Word Var_57;
  MR_Box conv3_VarTable_23;

  check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_38, &VarTable0_14);
  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_38, &ModuleInfo_15);
  parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_14, Var_8, &VarType_16);
  check_hlds__type_util__get_cons_id_arg_types_4_p_0(ModuleInfo_15, VarType_16, ConsId_9, &ArgTypes_17);
  {
    MakeArgEntry_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeArgEntry_18, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_2[0]));
    MR_hl_field(0, MakeArgEntry_18, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1));
    MR_hl_field(0, MakeArgEntry_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeArgEntry_18, 3) = ((MR_Box) (ModuleInfo_15));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), MakeArgEntry_18, ArgTypes_17, &ArgEntries_21);
  mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&check_hlds__simplify__simplify_goal_switch_scalar_common_4[0]), ArgEntries_21, &ArgVars_22, ((MR_Box) (VarTable0_14)), &conv3_VarTable_23);
  VarTable_23 = ((MR_Word) (conv3_VarTable_23));
  check_hlds__simplify__simplify_info__simplify_info_set_var_table_3_p_0(VarTable_23, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, Var_8, &Inst0_24);
  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo_15, Inst0_24, &Inst1_25);
  parse_tree__prog_mode__get_arg_insts_det_4_p_0(Inst1_25, ConsId_9, ConsArity_10, &ArgInsts_26);
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&check_hlds__simplify__simplify_goal_switch_scalar_common_4[1]), ArgInsts_26, &ArgUnifyModes_30);
  {
    UnifyMode_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_31, 0) = ((MR_Box) (Inst0_24));
    MR_hl_field(0, UnifyMode_31, 1) = ((MR_Box) (Inst0_24));
    MR_hl_field(0, UnifyMode_31, 2) = ((MR_Box) (Inst0_24));
    MR_hl_field(0, UnifyMode_31, 3) = ((MR_Box) (Inst0_24));
  }
  {
    Unification_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Unification_33, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Unification_33, 1) = ((MR_Box) (ConsId_9));
    MR_hl_field(1, Unification_33, 2) = ((MR_Box) (ArgVars_22));
    MR_hl_field(1, Unification_33, 3) = ((MR_Box) (ArgUnifyModes_30));
    MR_hl_field(1, Unification_33, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (ConsId_9));
    MR_hl_field(1, Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_57, 2) = ((MR_Box) (ArgVars_22));
  }
  {
    ExtraGoalExpr_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ExtraGoalExpr_34, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, ExtraGoalExpr_34, 1) = ((MR_Box) (Var_57));
    MR_hl_field(1, ExtraGoalExpr_34, 2) = ((MR_Box) (UnifyMode_31));
    MR_hl_field(1, ExtraGoalExpr_34, 3) = ((MR_Box) (Unification_33));
    MR_hl_field(1, ExtraGoalExpr_34, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[1]));
  }
  NonLocals_35 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8);
  hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_36);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_35, InstMapDelta_36, (MR_Integer) 1, (MR_Integer) 0, &ExtraGoalInfo_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ExtraGoal_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ExtraGoalExpr_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExtraGoalInfo_37));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevCases_0_6,
  MR_Word * STATE_VARIABLE_RevCases_7,
  MR_Word STATE_VARIABLE_RevInstMapDeltas_0_8,
  MR_Word * STATE_VARIABLE_RevInstMapDeltas_9,
  MR_Word STATE_VARIABLE_CanFail_0_10,
  MR_Word * STATE_VARIABLE_CanFail_11,
  MR_Word STATE_VARIABLE_SeenNonGroundTerm_0_12,
  MR_Word * STATE_VARIABLE_SeenNonGroundTerm_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      *STATE_VARIABLE_SeenNonGroundTerm_13 = STATE_VARIABLE_SeenNonGroundTerm_0_12;
      *STATE_VARIABLE_CanFail_11 = STATE_VARIABLE_CanFail_0_10;
      *STATE_VARIABLE_RevInstMapDeltas_9 = STATE_VARIABLE_RevInstMapDeltas_0_8;
      *STATE_VARIABLE_RevCases_7 = STATE_VARIABLE_RevCases_0_6;
    }
    else
    {
      MR_Word Case0_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MainConsId_46 = ((MR_Word) ((MR_hl_field(0, Case0_36, (MR_Integer) 0))));
      MR_Word OtherConsIds_47 = ((MR_Word) ((MR_hl_field(0, Case0_36, (MR_Integer) 1))));
      MR_Word Goal0_48 = ((MR_Word) ((MR_hl_field(0, Case0_36, (MR_Integer) 2))));
      MR_Word ModuleInfo0_49;
      MR_Word VarTable_50;
      MR_Word Type_51;
      MR_Word CaseInstMap0_52;
      MR_Word ModuleInfo1_53;
      MR_Word ConsIdSet_54;
      MR_Word SwitchArms0_55;
      MR_Word SwitchArm_56;
      MR_Word SwitchArms_57;
      MR_Word NestedContext_58;
      MR_Word Goal_59;
      MR_Word STATE_VARIABLE_Info_82_82;
      MR_Word Var_83;
      MR_Word STATE_VARIABLE_Info_84_84;
      MR_Word STATE_VARIABLE_CanFail_87_87;
      MR_Word STATE_VARIABLE_SeenNonGroundTerm_89_89;
      MR_Word STATE_VARIABLE_Info_90_90;
      MR_Word STATE_VARIABLE_RevInstMapDeltas_91_91;
      MR_Word STATE_VARIABLE_RevCases_92_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Unsigned Var_95;
      MR_Word _Common1_60;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevCases_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_8;
      MR_Word next_value_of_STATE_VARIABLE_CanFail_0_10;
      MR_Word next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_14;

      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_14, &ModuleInfo0_49);
      check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_14, &VarTable_50);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_50, Var_1, &Type_51);
      hlds__instmap__bind_var_to_functors_8_p_0(Var_1, Type_51, MainConsId_46, OtherConsIds_47, HeadVar__4_4, &CaseInstMap0_52, ModuleInfo0_49, &ModuleInfo1_53);
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo1_53, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_82_82);
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (MainConsId_46));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) (OtherConsIds_47));
      }
      mercury__set__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_83, &ConsIdSet_54);
      Var_93 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      Var_95 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
      SwitchArms0_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
      {
        SwitchArm_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SwitchArm_56, 0) = ((MR_Box) (Var_1));
        MR_hl_field(0, SwitchArm_56, 1) = ((MR_Box) (ConsIdSet_54));
      }
      {
        SwitchArms_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SwitchArms_57, 0) = ((MR_Box) (SwitchArm_56));
        MR_hl_field(1, SwitchArms_57, 1) = ((MR_Box) (SwitchArms0_55));
      }
      {
        NestedContext_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NestedContext_58, 0) = (MR_Box) ((MR_Unsigned) (Var_93));
        MR_hl_field(0, NestedContext_58, 1) = ((MR_Box) (Var_94));
        MR_hl_field(0, NestedContext_58, 2) = ((MR_Box) (Var_95));
        MR_hl_field(0, NestedContext_58, 3) = ((MR_Box) (SwitchArms_57));
      }
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_48, &Goal_59, NestedContext_58, CaseInstMap0_52, HeadVar__5_5, &_Common1_60, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_84_84);
      Var_85 = ((MR_Word) ((MR_hl_field(0, Goal_59, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_85)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_85, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_86 = ((MR_Word) ((MR_hl_field(3, Var_85, (MR_Integer) 1))));
        succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        STATE_VARIABLE_CanFail_87_87 = (MR_Integer) 0;
        STATE_VARIABLE_Info_90_90 = STATE_VARIABLE_Info_84_84;
        STATE_VARIABLE_SeenNonGroundTerm_89_89 = STATE_VARIABLE_SeenNonGroundTerm_0_12;
        STATE_VARIABLE_RevInstMapDeltas_91_91 = STATE_VARIABLE_RevInstMapDeltas_0_8;
        STATE_VARIABLE_RevCases_92_92 = STATE_VARIABLE_RevCases_0_6;
      }
      else
      {
        MR_Word Case_62;
        MR_Word GoalExpr_63;
        MR_Word GoalInfo_64;
        MR_Word InstMapDelta0_68;
        MR_Word ModuleInfo2_69;
        MR_Word InstMapDelta_70;
        MR_Word ModuleInfo_71;
        MR_Word Reason_65;
        MR_Word Var_88;

        {
          Case_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_62, 0) = ((MR_Box) (MainConsId_46));
          MR_hl_field(0, Case_62, 1) = ((MR_Box) (OtherConsIds_47));
          MR_hl_field(0, Case_62, 2) = ((MR_Box) (Goal_59));
        }
        GoalExpr_63 = ((MR_Word) ((MR_hl_field(0, Goal_59, (MR_Integer) 0))));
        GoalInfo_64 = ((MR_Word) ((MR_hl_field(0, Goal_59, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) GoalExpr_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          Reason_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_63, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Reason_65)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_65, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_88 = ((MR_Unsigned) ((MR_hl_field(3, Reason_65, (MR_Integer) 2))) & (MR_Integer) 3);
            succeeded = (Var_88 == (MR_Integer) 1);
          }
        }
        if (succeeded)
          STATE_VARIABLE_SeenNonGroundTerm_89_89 = STATE_VARIABLE_SeenNonGroundTerm_0_12;
        else
          STATE_VARIABLE_SeenNonGroundTerm_89_89 = (MR_Integer) 1;
        InstMapDelta0_68 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_64);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_84_84, &ModuleInfo2_69);
        hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(Var_1, Type_51, MainConsId_46, OtherConsIds_47, HeadVar__4_4, InstMapDelta0_68, &InstMapDelta_70, ModuleInfo2_69, &ModuleInfo_71);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_71, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_90_90);
        {
          STATE_VARIABLE_RevInstMapDeltas_91_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevInstMapDeltas_91_91, 0) = ((MR_Box) (InstMapDelta_70));
          MR_hl_field(1, STATE_VARIABLE_RevInstMapDeltas_91_91, 1) = ((MR_Box) (STATE_VARIABLE_RevInstMapDeltas_0_8));
        }
        {
          STATE_VARIABLE_RevCases_92_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevCases_92_92, 0) = ((MR_Box) (Case_62));
          MR_hl_field(1, STATE_VARIABLE_RevCases_92_92, 1) = ((MR_Box) (STATE_VARIABLE_RevCases_0_6));
        }
        STATE_VARIABLE_CanFail_87_87 = STATE_VARIABLE_CanFail_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases0_37;
      next_value_of_STATE_VARIABLE_RevCases_0_6 = STATE_VARIABLE_RevCases_92_92;
      next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_8 = STATE_VARIABLE_RevInstMapDeltas_91_91;
      next_value_of_STATE_VARIABLE_CanFail_0_10 = STATE_VARIABLE_CanFail_87_87;
      next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_12 = STATE_VARIABLE_SeenNonGroundTerm_89_89;
      next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_90_90;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevCases_0_6 = next_value_of_STATE_VARIABLE_RevCases_0_6;
      STATE_VARIABLE_RevInstMapDeltas_0_8 = next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_8;
      STATE_VARIABLE_CanFail_0_10 = next_value_of_STATE_VARIABLE_CanFail_0_10;
      STATE_VARIABLE_SeenNonGroundTerm_0_12 = next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_12;
      STATE_VARIABLE_Info_0_14 = next_value_of_STATE_VARIABLE_Info_0_14;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch__find_outermost_switch_on_var_3_p_0(
  MR_Word Var_4,
  MR_Word Arms_5,
  MR_Word * OutermostArm_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Arms_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word InnerArm_7;
    MR_Word OuterArms_8;
    MR_Word ArmVar_9;
    MR_Word TypeInfo_12_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      InnerArm_7 = ((MR_Word) ((MR_hl_field(1, Arms_5, (MR_Integer) 0))));
      OuterArms_8 = ((MR_Word) ((MR_hl_field(1, Arms_5, (MR_Integer) 1))));
      ArmVar_9 = ((MR_Word) ((MR_hl_field(0, InnerArm_7, (MR_Integer) 0))));
      TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (Var_4)), ((MR_Box) (ArmVar_9)));
      if (succeeded)
      {
        MR_Word OutermostArmPrime_11;

        succeeded = check_hlds__simplify__simplify_goal_switch__find_outermost_switch_on_var_3_p_0(Var_4, OuterArms_8, &OutermostArmPrime_11);
        if (succeeded)
          *OutermostArm_6 = OutermostArmPrime_11;
        else
          *OutermostArm_6 = InnerArm_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_Arms_5 = OuterArms_8;

        // direct tailcall eliminated
        ;
        Arms_5 = next_value_of_Arms_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__update_switch_goal_info_8_p_0(
  MR_Word VarTable_9,
  MR_Word InstMap0_10,
  MR_Word InstMapDeltas_11,
  MR_Word SeenNonGroundTerm_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 17);
  if (!(succeeded))
    succeeded = (SeenNonGroundTerm_12 == (MR_Integer) 0);
  if (succeeded)
  {
    *GoalInfo_14 = GoalInfo0_13;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
  else
  {
    MR_Word ModuleInfo1_16;
    MR_Word NonLocals_17;
    MR_Word NewDelta_18;
    MR_Word ModuleInfo2_19;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_20, &ModuleInfo1_16);
    NonLocals_17 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
    hlds__instmap__merge_instmap_deltas_7_p_0(VarTable_9, NonLocals_17, InstMap0_10, InstMapDeltas_11, &NewDelta_18, ModuleInfo1_16, &ModuleInfo2_19);
    check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_18, GoalInfo0_13, GoalInfo_14);
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_switch__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__type_ctor_info_seen_non_ground_term_0);
}

void mercury__check_hlds__simplify__simplify_goal_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_switch__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_switch.
