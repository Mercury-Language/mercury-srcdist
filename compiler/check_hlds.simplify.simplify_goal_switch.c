/*
** Automatically generated from `simplify_goal_switch.m'
** by the Mercury compiler,
** version rotd-2019-03-31
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
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
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
#include "transform_hlds.pd_cost.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

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
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevCases_0_3,
  MR_Word * STATE_VARIABLE_RevCases_4,
  MR_Word STATE_VARIABLE_RevInstMapDeltas_0_5,
  MR_Word * STATE_VARIABLE_RevInstMapDeltas_6,
  MR_Word STATE_VARIABLE_SeenNonGroundTerm_0_7,
  MR_Word * STATE_VARIABLE_SeenNonGroundTerm_8,
  MR_Word STATE_VARIABLE_CanFail_0_9,
  MR_Word * STATE_VARIABLE_CanFail_10,
  MR_Word HeadVar__11_11,
  MR_Word HeadVar__12_12,
  MR_Word HeadVar__13_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0 = {
  (MR_String) "not_seen_non_ground_term",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1 = {
  (MR_String) "seen_non_ground_term",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_switch",
  (MR_String) "seen_non_ground_term",
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0 },
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0
};

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(
  MR_Word LambdaHeadVar__1_43,
  MR_Word * LambdaHeadVar__2_44)
{
  {
    MR_Word Var_45;
    MR_Word Var_47;

    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (LambdaHeadVar__1_43));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (LambdaHeadVar__1_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *LambdaHeadVar__2_44 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
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
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  {
    MR_bool succeeded;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
    MR_Word SwitchCanFail0_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Cases0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 3))));
    MR_Word ModuleInfo0_23;
    MR_Word VarInst_24;
    MR_Word VarTypes_25;
    MR_Word Cases1_31;
    MR_Word MaybeInstConsIds_33;
    MR_Word RevCases_37;
    MR_Word RevInstMapDeltas_38;
    MR_Word SeenNonGroundTerm_39;
    MR_Word SwitchCanFail_40;
    MR_Word Cases_41;
    MR_Integer Cases0Length_69;
    MR_Integer CasesLength_70;
    MR_Word STATE_VARIABLE_Info_73_73;
    MR_Word STATE_VARIABLE_Info_77_77;
    MR_Word STATE_VARIABLE_Info_98_98;
    MR_Word BoundInsts_26;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_71, &ModuleInfo0_23);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_16, Var_20, &VarInst_24);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_71, &VarTypes_25);
    succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo0_23, VarInst_24, &BoundInsts_26);
    if (succeeded)
    {
      MR_Word VarType_27;
      MR_Word VarTypeCtor_28;
      MR_Word ConsIds_29;
      MR_Word SortedConsIds_30;
      MR_Word UnreachableCaseGoals_32;
      MR_Word DeletedCallCallees0_34;
      MR_Word SubGoalCalledProcs_35;
      MR_Word DeletedCallCallees_36;

      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_25, Var_20, &VarType_27);
      parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_27, &VarTypeCtor_28);
      parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(VarTypeCtor_28, BoundInsts_26, &ConsIds_29);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConsIds_29, &SortedConsIds_30);
      check_hlds__det_util__delete_unreachable_cases_4_p_0(Cases0_22, SortedConsIds_30, &Cases1_31, &UnreachableCaseGoals_32);
      {
        MaybeInstConsIds_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeInstConsIds_33, 0) = ((MR_Box) (SortedConsIds_30));
      }
      check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_0_71, &DeletedCallCallees0_34);
      SubGoalCalledProcs_35 = hlds__goal_util__goals_proc_refs_1_f_0(UnreachableCaseGoals_32);
      mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_35, DeletedCallCallees0_34, &DeletedCallCallees_36);
      check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_36, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_73_73);
    }
    else
    {
      Cases1_31 = Cases0_22;
      MaybeInstConsIds_33 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_73_73 = STATE_VARIABLE_Info_0_71;
    }
    check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(Var_20, Cases1_31, (MR_Word) ((MR_Unsigned) 0U), &RevCases_37, (MR_Word) ((MR_Unsigned) 0U), &RevInstMapDeltas_38, (MR_Integer) 0, &SeenNonGroundTerm_39, SwitchCanFail0_21, &SwitchCanFail_40, NestedContext0_15, InstMap0_16, Common0_17, STATE_VARIABLE_Info_73_73, &STATE_VARIABLE_Info_77_77);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), RevCases_37, &Cases_41);
    if ((Cases_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Context_42;
      MR_Integer Var_97;
      MR_Word Var_99;

      Var_97 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
      check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Var_97, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_98_98);
      Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
      Var_99 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_42);
      *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
      *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1))));
    }
    else
    {
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_41, (MR_Integer) 1))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases_41, (MR_Integer) 0))));

      if ((Var_136 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 2))));
        MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 1))));
        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_137, (MR_Integer) 0))));

        if ((Var_139 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer MainConsIdArity_45;
          MR_Word STATE_VARIABLE_Info_89_89;
          MR_Integer Var_95;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_119;

          MainConsIdArity_45 = parse_tree__prog_util__cons_id_arity_1_f_0(Var_140);
          succeeded = (SwitchCanFail_40 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (MaybeInstConsIds_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstConsIds_33, (MR_Integer) 0))));
              succeeded = (Var_87 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 0))));
                Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_87, (MR_Integer) 1))));
                succeeded = parse_tree__prog_data____Unify____cons_id_0_0(Var_140, Var_119);
                if (succeeded)
                  succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Type_46;
            MR_Word ModuleInfo1_47;

            hlds__vartypes__lookup_var_type_3_p_0(VarTypes_25, Var_20, &Type_46);
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_77_77, &ModuleInfo1_47);
            succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(ModuleInfo1_47, Type_46, Var_140);
            if (succeeded)
            {
              MR_Word NonLocals_48;
              MR_Word NewDelta_49;
              MR_Word ModuleInfo2_50;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_41));
              }
              NonLocals_48 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
              hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_16, NonLocals_48, VarTypes_25, RevInstMapDeltas_38, &NewDelta_49, ModuleInfo1_47, &ModuleInfo2_50);
              check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_50, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_89_89);
              hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_49, GoalInfo0_13, GoalInfo_14);
            }
            else
            {
              MR_Word UnifyGoal_51;
              MR_Word SingleGoalConj_52;
              MR_Word GoalList_53;
              MR_Word NonLocals0_54;
              MR_Word InstMapDelta0_55;
              MR_Word InstMapDelta_56;
              MR_Word ModuleInfo_57;
              MR_Word CaseDetism_58;
              MR_Word Detism_59;
              MR_Word Purity_60;
              MR_Word STATE_VARIABLE_Info_90_90;
              MR_Word STATE_VARIABLE_Info_91_91;
              MR_Word NonLocals_102;

              check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(Var_20, Var_140, MainConsIdArity_45, &UnifyGoal_51, InstMap0_16, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_90_90);
              hlds__hlds_goal__goal_to_conj_list_2_p_0(Var_138, &SingleGoalConj_52);
              {
                GoalList_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), GoalList_53, 0) = ((MR_Box) (UnifyGoal_51));
                MR_hl_field(MR_mktag(1), GoalList_53, 1) = ((MR_Box) (SingleGoalConj_52));
              }
              NonLocals0_54 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_20, NonLocals0_54, &NonLocals_102);
              InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
              hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(Var_20, Type_46, Var_140, InstMap0_16, InstMapDelta0_55, &InstMapDelta_56, ModuleInfo1_47, &ModuleInfo_57);
              check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_57, STATE_VARIABLE_Info_90_90, &STATE_VARIABLE_Info_91_91);
              CaseDetism_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
              parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, CaseDetism_58, &Detism_59);
              hlds__hlds_goal__goal_list_purity_2_p_0(GoalList_53, &Purity_60);
              hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_102, InstMapDelta_56, Detism_59, Purity_60, GoalInfo_14);
              check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_89_89);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (GoalList_53));
              }
            }
          }
          else
          {
            *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_138, (MR_Integer) 0))));
            *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_138, (MR_Integer) 1))));
            STATE_VARIABLE_Info_89_89 = STATE_VARIABLE_Info_77_77;
          }
          Var_95 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
          check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(Var_95, STATE_VARIABLE_Info_89_89, &STATE_VARIABLE_Info_98_98);
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_41));
          }
          succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 17);
          if (!(succeeded))
            succeeded = (SeenNonGroundTerm_39 == (MR_Integer) 0);
          if (succeeded)
          {
            *GoalInfo_14 = GoalInfo0_13;
            STATE_VARIABLE_Info_98_98 = STATE_VARIABLE_Info_77_77;
          }
          else
          {
            MR_Word ModuleInfo1_103;
            MR_Word NonLocals_104;
            MR_Word NewDelta_105;
            MR_Word ModuleInfo2_106;

            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_77_77, &ModuleInfo1_103);
            NonLocals_104 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
            hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_16, NonLocals_104, VarTypes_25, RevInstMapDeltas_38, &NewDelta_105, ModuleInfo1_103, &ModuleInfo2_106);
            check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_106, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_98_98);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_105, GoalInfo0_13, GoalInfo_14);
          }
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (SwitchCanFail_40));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_41));
        }
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_13, (MR_Integer) 17);
        if (!(succeeded))
          succeeded = (SeenNonGroundTerm_39 == (MR_Integer) 0);
        if (succeeded)
        {
          *GoalInfo_14 = GoalInfo0_13;
          STATE_VARIABLE_Info_98_98 = STATE_VARIABLE_Info_77_77;
        }
        else
        {
          MR_Word ModuleInfo1_122;
          MR_Word NonLocals_123;
          MR_Word NewDelta_124;
          MR_Word ModuleInfo2_125;

          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_77_77, &ModuleInfo1_122);
          NonLocals_123 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
          hlds__instmap__merge_instmap_deltas_7_p_0(InstMap0_16, NonLocals_123, VarTypes_25, RevInstMapDeltas_38, &NewDelta_124, ModuleInfo1_122, &ModuleInfo2_125);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo2_125, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_98_98);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(NewDelta_124, GoalInfo0_13, GoalInfo_14);
        }
      }
    }
    *Common_18 = Common0_17;
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases0_22, &Cases0Length_69);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_41, &CasesLength_70);
    succeeded = (CasesLength_70 == Cases0Length_69);
    if (succeeded)
      *STATE_VARIABLE_Info_72 = STATE_VARIABLE_Info_98_98;
    else
    {
      MR_Word STATE_VARIABLE_Info_100_100;

      check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_98_98, &STATE_VARIABLE_Info_100_100);
      check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(STATE_VARIABLE_Info_100_100, STATE_VARIABLE_Info_72);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_44;

    check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_44);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
  MR_Word Var_8,
  MR_Word ConsId_9,
  MR_Integer ConsArity_10,
  MR_Word * ExtraGoal_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  {
    MR_bool succeeded;
    MR_Word VarSet0_14;
    MR_Word VarTypes0_15;
    MR_Word ArgVars_16;
    MR_Word VarSet_17;
    MR_Word VarType_18;
    MR_Word ModuleInfo_19;
    MR_Word ArgTypes_20;
    MR_Word VarTypes_21;
    MR_Word Inst0_22;
    MR_Word ArgInsts_25;
    MR_Word ArgUnifyModes_29;
    MR_Word UnifyMode_30;
    MR_Word Unification_32;
    MR_Word ExtraGoalExpr_33;
    MR_Word NonLocals_34;
    MR_Word InstMapDelta_35;
    MR_Word ExtraGoalInfo_36;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word Var_49;
    MR_Word Var_57;
    MR_Word ArgInsts1_24;
    MR_Word Inst1_23;

    check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(STATE_VARIABLE_Info_0_37, &VarSet0_14);
    check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_37, &VarTypes0_15);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsArity_10, &ArgVars_16, VarSet0_14, &VarSet_17);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_15, Var_8, &VarType_18);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_37, &ModuleInfo_19);
    check_hlds__type_util__get_cons_id_arg_types_4_p_0(ModuleInfo_19, VarType_18, ConsId_9, &ArgTypes_20);
    hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(ArgVars_16, ArgTypes_20, VarTypes0_15, &VarTypes_21);
    check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(VarSet_17, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_39_39);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_21, STATE_VARIABLE_Info_39_39, STATE_VARIABLE_Info_38);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, Var_8, &Inst0_22);
    check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo_19, Inst0_22, &Inst1_23);
    succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(Inst1_23, ConsId_9, ConsArity_10, &ArgInsts1_24);
    if (succeeded)
      ArgInsts_25 = ArgInsts1_24;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_switch.create_test_unification\'/7", (MR_String) "get_arg_insts failed");
        return;
      }
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), (MR_Word) (&check_hlds__simplify__simplify_goal_switch_scalar_common_2[0]), ArgInsts_25, &ArgUnifyModes_29);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Inst0_22));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (Inst0_22));
    }
    {
      UnifyMode_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyMode_30, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), UnifyMode_30, 1) = ((MR_Box) (Var_49));
    }
    {
      Unification_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Unification_32, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Unification_32, 1) = ((MR_Box) (ConsId_9));
      MR_hl_field(MR_mktag(1), Unification_32, 2) = ((MR_Box) (ArgVars_16));
      MR_hl_field(MR_mktag(1), Unification_32, 3) = ((MR_Box) (ArgUnifyModes_29));
      MR_hl_field(MR_mktag(1), Unification_32, 4) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ConsId_9));
      MR_hl_field(MR_mktag(1), Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_57, 2) = ((MR_Box) (ArgVars_16));
    }
    {
      ExtraGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_33, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_33, 1) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_33, 2) = ((MR_Box) (UnifyMode_30));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_33, 3) = ((MR_Box) (Unification_32));
      MR_hl_field(MR_mktag(1), ExtraGoalExpr_33, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_3[0]));
    }
    NonLocals_34 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8);
    hlds__instmap__instmap_delta_init_reachable_1_p_0(&InstMapDelta_35);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_34, InstMapDelta_35, (MR_Integer) 1, (MR_Integer) 0, &ExtraGoalInfo_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ExtraGoal_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExtraGoalExpr_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExtraGoalInfo_36));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevCases_0_3,
  MR_Word * STATE_VARIABLE_RevCases_4,
  MR_Word STATE_VARIABLE_RevInstMapDeltas_0_5,
  MR_Word * STATE_VARIABLE_RevInstMapDeltas_6,
  MR_Word STATE_VARIABLE_SeenNonGroundTerm_0_7,
  MR_Word * STATE_VARIABLE_SeenNonGroundTerm_8,
  MR_Word STATE_VARIABLE_CanFail_0_9,
  MR_Word * STATE_VARIABLE_CanFail_10,
  MR_Word HeadVar__11_11,
  MR_Word HeadVar__12_12,
  MR_Word HeadVar__13_13,
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
      *STATE_VARIABLE_CanFail_10 = STATE_VARIABLE_CanFail_0_9;
      *STATE_VARIABLE_SeenNonGroundTerm_8 = STATE_VARIABLE_SeenNonGroundTerm_0_7;
      *STATE_VARIABLE_RevInstMapDeltas_6 = STATE_VARIABLE_RevInstMapDeltas_0_5;
      *STATE_VARIABLE_RevCases_4 = STATE_VARIABLE_RevCases_0_3;
    }
    else
    {
      MR_Word Case0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MainConsId_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_36, (MR_Integer) 0))));
      MR_Word OtherConsIds_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_36, (MR_Integer) 1))));
      MR_Word Goal0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_36, (MR_Integer) 2))));
      MR_Word ModuleInfo0_49;
      MR_Word VarTypes_50;
      MR_Word Type_51;
      MR_Word CaseInstMap0_52;
      MR_Word ModuleInfo1_53;
      MR_Word Goal_54;
      MR_Word STATE_VARIABLE_Info_77_77;
      MR_Word STATE_VARIABLE_Info_78_78;
      MR_Word STATE_VARIABLE_CanFail_81_81;
      MR_Word STATE_VARIABLE_SeenNonGroundTerm_83_83;
      MR_Word STATE_VARIABLE_Info_84_84;
      MR_Word STATE_VARIABLE_RevInstMapDeltas_85_85;
      MR_Word STATE_VARIABLE_RevCases_86_86;
      MR_Word _Common1_55;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevCases_0_3;
      MR_Word next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_5;
      MR_Word next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CanFail_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_14;

      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_14, &ModuleInfo0_49);
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_14, &VarTypes_50);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_50, Var_1, &Type_51);
      hlds__instmap__bind_var_to_functors_8_p_0(Var_1, Type_51, MainConsId_46, OtherConsIds_47, HeadVar__12_12, &CaseInstMap0_52, ModuleInfo0_49, &ModuleInfo1_53);
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo1_53, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_77_77);
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(Goal0_48, &Goal_54, HeadVar__11_11, CaseInstMap0_52, HeadVar__13_13, &_Common1_55, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_78_78);
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_54, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_79)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_79, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_79, (MR_Integer) 1))));
        succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        STATE_VARIABLE_CanFail_81_81 = (MR_Integer) 0;
        STATE_VARIABLE_Info_84_84 = STATE_VARIABLE_Info_78_78;
        STATE_VARIABLE_SeenNonGroundTerm_83_83 = STATE_VARIABLE_SeenNonGroundTerm_0_7;
        STATE_VARIABLE_RevInstMapDeltas_85_85 = STATE_VARIABLE_RevInstMapDeltas_0_5;
        STATE_VARIABLE_RevCases_86_86 = STATE_VARIABLE_RevCases_0_3;
      }
      else
      {
        MR_Word Case_57;
        MR_Word GoalExpr_58;
        MR_Word GoalInfo_59;
        MR_Word InstMapDelta0_63;
        MR_Word ModuleInfo2_64;
        MR_Word InstMapDelta_65;
        MR_Word ModuleInfo_66;
        MR_Word Reason_60;
        MR_Word Var_82;

        {
          Case_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Case_57, 0) = ((MR_Box) (MainConsId_46));
          MR_hl_field(MR_mktag(0), Case_57, 1) = ((MR_Box) (OtherConsIds_47));
          MR_hl_field(MR_mktag(0), Case_57, 2) = ((MR_Box) (Goal_54));
        }
        GoalExpr_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_54, (MR_Integer) 0))));
        GoalInfo_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_54, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) GoalExpr_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          Reason_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_58, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Reason_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Var_82 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
            succeeded = (Var_82 == (MR_Integer) 1);
          }
        }
        if (succeeded)
          STATE_VARIABLE_SeenNonGroundTerm_83_83 = STATE_VARIABLE_SeenNonGroundTerm_0_7;
        else
          STATE_VARIABLE_SeenNonGroundTerm_83_83 = (MR_Integer) 1;
        InstMapDelta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_59);
        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_78_78, &ModuleInfo2_64);
        hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(Var_1, Type_51, MainConsId_46, OtherConsIds_47, HeadVar__12_12, InstMapDelta0_63, &InstMapDelta_65, ModuleInfo2_64, &ModuleInfo_66);
        check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_66, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_84_84);
        {
          STATE_VARIABLE_RevInstMapDeltas_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstMapDeltas_85_85, 0) = ((MR_Box) (InstMapDelta_65));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevInstMapDeltas_85_85, 1) = ((MR_Box) (STATE_VARIABLE_RevInstMapDeltas_0_5));
        }
        {
          STATE_VARIABLE_RevCases_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCases_86_86, 0) = ((MR_Box) (Case_57));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevCases_86_86, 1) = ((MR_Box) (STATE_VARIABLE_RevCases_0_3));
        }
        STATE_VARIABLE_CanFail_81_81 = STATE_VARIABLE_CanFail_0_9;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases0_37;
      next_value_of_STATE_VARIABLE_RevCases_0_3 = STATE_VARIABLE_RevCases_86_86;
      next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_5 = STATE_VARIABLE_RevInstMapDeltas_85_85;
      next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_7 = STATE_VARIABLE_SeenNonGroundTerm_83_83;
      next_value_of_STATE_VARIABLE_CanFail_0_9 = STATE_VARIABLE_CanFail_81_81;
      next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_84_84;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevCases_0_3 = next_value_of_STATE_VARIABLE_RevCases_0_3;
      STATE_VARIABLE_RevInstMapDeltas_0_5 = next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_5;
      STATE_VARIABLE_SeenNonGroundTerm_0_7 = next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_7;
      STATE_VARIABLE_CanFail_0_9 = next_value_of_STATE_VARIABLE_CanFail_0_9;
      STATE_VARIABLE_Info_0_14 = next_value_of_STATE_VARIABLE_Info_0_14;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
