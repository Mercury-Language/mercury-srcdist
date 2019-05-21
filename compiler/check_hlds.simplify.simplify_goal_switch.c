/*
** Automatically generated from `simplify_goal_switch.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module check_hlds.simplify.simplify_goal_switch. */
/* :- implementation. */

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
#include "hlds.goal_util.mih"
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__1_44,
  MR_Word * check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__2_45);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_8,
  MR_Word check_hlds__simplify__simplify_goal_switch__ConsId_9,
  MR_Integer check_hlds__simplify__simplify_goal_switch__ConsArity_10,
  MR_Word * check_hlds__simplify__simplify_goal_switch__ExtraGoal_11,
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_12,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38);

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__11_11,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__12_12,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__13_13,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_1[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_switch_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_0 = {
  (MR_String) "not_seen_non_ground_term",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_functor_desc_seen_non_ground_term_0_1 = {
  (MR_String) "seen_non_ground_term",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_switch",
  (MR_String) "seen_non_ground_term",
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_name_ordered_seen_non_ground_term_0 },
  {     check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__enum_value_ordered_seen_non_ground_term_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_goal_switch__check_hlds__simplify__simplify_goal_switch__functor_number_map_seen_non_ground_term_0
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0_10001(
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;

    {
      check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_goal_switch__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(&check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_goal_switch__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__1_44,
  MR_Word * check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__2_45)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_46;
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_48;

    {
      check_hlds__simplify__simplify_goal_switch__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_46, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__1_44));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_46, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__1_44));
    }
    {
      check_hlds__simplify__simplify_goal_switch__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_48, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__1_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_goal_switch__LambdaHeadVar__2_45 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_46));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_48));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch____Compare____seen_non_ground_term_0_0(
  MR_Word * check_hlds__simplify__simplify_goal_switch__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__simplify_goal_switch__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__simplify_goal_switch__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__simplify_goal_switch__HeadVar__1_1, check_hlds__simplify__simplify_goal_switch__Cast_HeadVar1_4, check_hlds__simplify__simplify_goal_switch__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_switch____Unify____seen_non_ground_term_0_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__HeadVar__2_1 == check_hlds__simplify__simplify_goal_switch__HeadVar__2_2);

    return check_hlds__simplify__simplify_goal_switch__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__GoalExpr0_11,
  MR_Word * check_hlds__simplify__simplify_goal_switch__GoalExpr_12,
  MR_Word check_hlds__simplify__simplify_goal_switch__GoalInfo0_13,
  MR_Word * check_hlds__simplify__simplify_goal_switch__GoalInfo_14,
  MR_Word check_hlds__simplify__simplify_goal_switch__NestedContext0_15,
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_16,
  MR_Word check_hlds__simplify__simplify_goal_switch__Common0_17,
  MR_Word * check_hlds__simplify__simplify_goal_switch__Common_18,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_72)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_117_117;
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_goal_switch__SwitchCanFail0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr0_11, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarInst_24;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_25;
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases1_31;
    MR_Word check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33;
    MR_Word check_hlds__simplify__simplify_goal_switch__RevCases_37;
    MR_Word check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_38;
    MR_Word check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_39;
    MR_Word check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40;
    MR_Word check_hlds__simplify__simplify_goal_switch__Cases_41;
    MR_Integer check_hlds__simplify__simplify_goal_switch__Cases0Length_69;
    MR_Integer check_hlds__simplify__simplify_goal_switch__CasesLength_70;
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_73_73;
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98;
    MR_Word check_hlds__simplify__simplify_goal_switch__BoundInsts_26;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71, &check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__VarInst_24);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71, &check_hlds__simplify__simplify_goal_switch__VarTypes_25);
    }
    {
      check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo0_23, check_hlds__simplify__simplify_goal_switch__VarInst_24, &check_hlds__simplify__simplify_goal_switch__BoundInsts_26);
    }
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_goal_switch__VarType_27;
        MR_Word check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28;
        MR_Word check_hlds__simplify__simplify_goal_switch__ConsIds_29;
        MR_Word check_hlds__simplify__simplify_goal_switch__SortedConsIds_30;
        MR_Word check_hlds__simplify__simplify_goal_switch__UnreachableCaseGoals_32;
        MR_Word check_hlds__simplify__simplify_goal_switch__DeletedCallCallees0_34;
        MR_Word check_hlds__simplify__simplify_goal_switch__SubGoalCalledProcs_35;
        MR_Word check_hlds__simplify__simplify_goal_switch__DeletedCallCallees_36;

        {
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__VarType_27);
        }
        {
          parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__simplify__simplify_goal_switch__VarType_27, &check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28);
        }
        {
          parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypeCtor_28, check_hlds__simplify__simplify_goal_switch__BoundInsts_26, &check_hlds__simplify__simplify_goal_switch__ConsIds_29);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, check_hlds__simplify__simplify_goal_switch__ConsIds_29, &check_hlds__simplify__simplify_goal_switch__SortedConsIds_30);
        }
        {
          check_hlds__det_util__delete_unreachable_cases_4_p_0(check_hlds__simplify__simplify_goal_switch__Cases0_22, check_hlds__simplify__simplify_goal_switch__SortedConsIds_30, &check_hlds__simplify__simplify_goal_switch__Cases1_31, &check_hlds__simplify__simplify_goal_switch__UnreachableCaseGoals_32);
        }
        {
          check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SortedConsIds_30));
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71, &check_hlds__simplify__simplify_goal_switch__DeletedCallCallees0_34);
        }
        {
          check_hlds__simplify__simplify_goal_switch__SubGoalCalledProcs_35 = hlds__goal_util__goals_proc_refs_1_f_0(check_hlds__simplify__simplify_goal_switch__UnreachableCaseGoals_32);
        }
        {
          mercury__set__union_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__simplify__simplify_goal_switch__SubGoalCalledProcs_35, check_hlds__simplify__simplify_goal_switch__DeletedCallCallees0_34, &check_hlds__simplify__simplify_goal_switch__DeletedCallCallees_36);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(check_hlds__simplify__simplify_goal_switch__DeletedCallCallees_36, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_73_73);
        }
      }
    else
      {
        check_hlds__simplify__simplify_goal_switch__Cases1_31 = check_hlds__simplify__simplify_goal_switch__Cases0_22;
        check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_73_73 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_71;
      }
    {
      check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__Cases1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_switch__RevCases_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_38, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_39, check_hlds__simplify__simplify_goal_switch__SwitchCanFail0_21, &check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40, check_hlds__simplify__simplify_goal_switch__NestedContext0_15, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__Common0_17, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_73_73, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77);
    }
    check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_117_117 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
    {
      mercury__list__reverse_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_117_117, check_hlds__simplify__simplify_goal_switch__RevCases_37, &check_hlds__simplify__simplify_goal_switch__Cases_41);
    }
    if ((check_hlds__simplify__simplify_goal_switch__Cases_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__simplify_goal_switch__Context_42;
        MR_Integer check_hlds__simplify__simplify_goal_switch__Var_97;
        MR_Word check_hlds__simplify__simplify_goal_switch__Var_99;

        {
          check_hlds__simplify__simplify_goal_switch__Var_97 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__Var_97, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98);
        }
        {
          check_hlds__simplify__simplify_goal_switch__Context_42 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
        }
        {
          check_hlds__simplify__simplify_goal_switch__Var_99 = hlds__make_goal__fail_goal_with_context_1_f_0(check_hlds__simplify__simplify_goal_switch__Context_42);
        }
        *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_99, (MR_Integer) 0)));
        *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_99, (MR_Integer) 1)));
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_switch__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Cases_41, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_goal_switch__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Cases_41, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_goal_switch__Var_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_137, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_137, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_137, (MR_Integer) 0)));

            if ((check_hlds__simplify__simplify_goal_switch__Var_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer check_hlds__simplify__simplify_goal_switch__MainConsIdArity_45;
                MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_89_89;
                MR_Integer check_hlds__simplify__simplify_goal_switch__Var_95;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_87;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_88;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_119;

                {
                  check_hlds__simplify__simplify_goal_switch__MainConsIdArity_45 = parse_tree__prog_util__cons_id_arity_1_f_0(check_hlds__simplify__simplify_goal_switch__Var_140);
                }
                check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40 == (MR_Integer) 0);
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_switch__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__simplify_goal_switch__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_switch__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__MaybeInstConsIds_33, (MR_Integer) 0)));
                        check_hlds__simplify__simplify_goal_switch__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__Var_87)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__simplify_goal_switch__succeeded)
                          {
                            check_hlds__simplify__simplify_goal_switch__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Var_87, (MR_Integer) 0)));
                            check_hlds__simplify__simplify_goal_switch__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Var_87, (MR_Integer) 1)));
                            {
                              check_hlds__simplify__simplify_goal_switch__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__simplify__simplify_goal_switch__Var_140, check_hlds__simplify__simplify_goal_switch__Var_119);
                            }
                            if (check_hlds__simplify__simplify_goal_switch__succeeded)
                              check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    check_hlds__simplify__simplify_goal_switch__succeeded = !(check_hlds__simplify__simplify_goal_switch__succeeded);
                  }
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
                  {
                    MR_Word check_hlds__simplify__simplify_goal_switch__Type_46;
                    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_47;

                    {
                      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__Var_20, &check_hlds__simplify__simplify_goal_switch__Type_46);
                    }
                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_47);
                    }
                    {
                      check_hlds__simplify__simplify_goal_switch__succeeded = check_hlds__type_util__cons_id_is_existq_cons_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo1_47, check_hlds__simplify__simplify_goal_switch__Type_46, check_hlds__simplify__simplify_goal_switch__Var_140);
                    }
                    if (check_hlds__simplify__simplify_goal_switch__succeeded)
                      {
                        MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_48;
                        MR_Word check_hlds__simplify__simplify_goal_switch__NewDelta_49;
                        MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_50;

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_20));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Cases_41));
                        }
                        {
                          check_hlds__simplify__simplify_goal_switch__NonLocals_48 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                        }
                        {
                          hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__NonLocals_48, check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_38, &check_hlds__simplify__simplify_goal_switch__NewDelta_49, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_47, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_50);
                        }
                        {
                          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo2_50, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_89_89);
                        }
                        {
                          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__NewDelta_49, check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_goal_switch__UnifyGoal_51;
                        MR_Word check_hlds__simplify__simplify_goal_switch__SingleGoalConj_52;
                        MR_Word check_hlds__simplify__simplify_goal_switch__GoalList_53;
                        MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals0_54;
                        MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta0_55;
                        MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_56;
                        MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_57;
                        MR_Word check_hlds__simplify__simplify_goal_switch__CaseDetism_58;
                        MR_Word check_hlds__simplify__simplify_goal_switch__Detism_59;
                        MR_Word check_hlds__simplify__simplify_goal_switch__Purity_60;
                        MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_90_90;
                        MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_91_91;
                        MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_102;

                        {
                          check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__Var_140, check_hlds__simplify__simplify_goal_switch__MainConsIdArity_45, &check_hlds__simplify__simplify_goal_switch__UnifyGoal_51, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_90_90);
                        }
                        {
                          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__simplify_goal_switch__Var_138, &check_hlds__simplify__simplify_goal_switch__SingleGoalConj_52);
                        }
                        {
                          check_hlds__simplify__simplify_goal_switch__GoalList_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__GoalList_53, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__UnifyGoal_51));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__GoalList_53, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SingleGoalConj_52));
                        }
                        {
                          check_hlds__simplify__simplify_goal_switch__NonLocals0_54 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                        }
                        {
                          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__NonLocals0_54, &check_hlds__simplify__simplify_goal_switch__NonLocals_102);
                        }
                        {
                          check_hlds__simplify__simplify_goal_switch__InstMapDelta0_55 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                        }
                        {
                          hlds__instmap__instmap_delta_bind_var_to_functor_8_p_0(check_hlds__simplify__simplify_goal_switch__Var_20, check_hlds__simplify__simplify_goal_switch__Type_46, check_hlds__simplify__simplify_goal_switch__Var_140, check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__InstMapDelta0_55, &check_hlds__simplify__simplify_goal_switch__InstMapDelta_56, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_47, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_57);
                        }
                        {
                          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_57, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_90_90, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_91_91);
                        }
                        {
                          check_hlds__simplify__simplify_goal_switch__CaseDetism_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                        }
                        {
                          parse_tree__prog_detism__det_conjunction_detism_3_p_0((MR_Integer) 1, check_hlds__simplify__simplify_goal_switch__CaseDetism_58, &check_hlds__simplify__simplify_goal_switch__Detism_59);
                        }
                        {
                          hlds__hlds_goal__goal_list_purity_2_p_0(check_hlds__simplify__simplify_goal_switch__GoalList_53, &check_hlds__simplify__simplify_goal_switch__Purity_60);
                        }
                        {
                          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_switch__NonLocals_102, check_hlds__simplify__simplify_goal_switch__InstMapDelta_56, check_hlds__simplify__simplify_goal_switch__Detism_59, check_hlds__simplify__simplify_goal_switch__Purity_60, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                        }
                        {
                          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_91_91, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_89_89);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__GoalList_53));
                        }
                      }
                  }
                else
                  {
                    *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_138, (MR_Integer) 0)));
                    *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_138, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_89_89 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
                  }
                {
                  check_hlds__simplify__simplify_goal_switch__Var_95 = transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0();
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__Var_95, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_89_89, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98);
                }
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_20));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Cases_41));
                }
                {
                  check_hlds__simplify__simplify_goal_switch__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, (MR_Integer) 15);
                }
                if (!(check_hlds__simplify__simplify_goal_switch__succeeded))
                  check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_39 == (MR_Integer) 0);
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
                  {
                    *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = check_hlds__simplify__simplify_goal_switch__GoalInfo0_13;
                    check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
                  }
                else
                  {
                    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_103;
                    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_104;
                    MR_Word check_hlds__simplify__simplify_goal_switch__NewDelta_105;
                    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_106;

                    {
                      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_103);
                    }
                    {
                      check_hlds__simplify__simplify_goal_switch__NonLocals_104 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                    }
                    {
                      hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__NonLocals_104, check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_38, &check_hlds__simplify__simplify_goal_switch__NewDelta_105, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_103, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_106);
                    }
                    {
                      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo2_106, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98);
                    }
                    {
                      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__NewDelta_105, check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                    }
                  }
              }
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__simplify__simplify_goal_switch__GoalExpr_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__SwitchCanFail_40));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Cases_41));
            }
            {
              check_hlds__simplify__simplify_goal_switch__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, (MR_Integer) 15);
            }
            if (!(check_hlds__simplify__simplify_goal_switch__succeeded))
              check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__SeenNonGroundTerm_39 == (MR_Integer) 0);
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
              {
                *check_hlds__simplify__simplify_goal_switch__GoalInfo_14 = check_hlds__simplify__simplify_goal_switch__GoalInfo0_13;
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_122;
                MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_123;
                MR_Word check_hlds__simplify__simplify_goal_switch__NewDelta_124;
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_125;

                {
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_122);
                }
                {
                  check_hlds__simplify__simplify_goal_switch__NonLocals_123 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo0_13);
                }
                {
                  hlds__instmap__merge_instmap_deltas_7_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_16, check_hlds__simplify__simplify_goal_switch__NonLocals_123, check_hlds__simplify__simplify_goal_switch__VarTypes_25, check_hlds__simplify__simplify_goal_switch__RevInstMapDeltas_38, &check_hlds__simplify__simplify_goal_switch__NewDelta_124, check_hlds__simplify__simplify_goal_switch__ModuleInfo1_122, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_125);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo2_125, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98);
                }
                {
                  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__simplify__simplify_goal_switch__NewDelta_124, check_hlds__simplify__simplify_goal_switch__GoalInfo0_13, check_hlds__simplify__simplify_goal_switch__GoalInfo_14);
                }
              }
          }
      }
    *check_hlds__simplify__simplify_goal_switch__Common_18 = check_hlds__simplify__simplify_goal_switch__Common0_17;
    {
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_117_117, check_hlds__simplify__simplify_goal_switch__Cases0_22, &check_hlds__simplify__simplify_goal_switch__Cases0Length_69);
    }
    {
      mercury__list__length_2_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_117_117, check_hlds__simplify__simplify_goal_switch__Cases_41, &check_hlds__simplify__simplify_goal_switch__CasesLength_70);
    }
    check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__CasesLength_70 == check_hlds__simplify__simplify_goal_switch__Cases0Length_69);
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
      *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_72 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98;
    else
      {
        MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_100_100;

        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_98_98, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_100_100);
        }
        {
          check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_100_100, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_72);
        }
      }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0_1(
  MR_Box check_hlds__simplify__simplify_goal_switch__closure_arg,
  MR_Box check_hlds__simplify__simplify_goal_switch__wrapper_arg_1,
  MR_Box * check_hlds__simplify__simplify_goal_switch__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__simplify_goal_switch__closure = check_hlds__simplify__simplify_goal_switch__closure_arg;
    MR_Word check_hlds__simplify__simplify_goal_switch__conv0_LambdaHeadVar__2_45;

    {
      check_hlds__simplify__simplify_goal_switch__IntroducedFrom__pred__create_test_unification__288__1_2_p_0(((MR_Word) check_hlds__simplify__simplify_goal_switch__wrapper_arg_1), &check_hlds__simplify__simplify_goal_switch__conv0_LambdaHeadVar__2_45);
    }
    *check_hlds__simplify__simplify_goal_switch__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__conv0_LambdaHeadVar__2_45));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__create_test_unification_7_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_8,
  MR_Word check_hlds__simplify__simplify_goal_switch__ConsId_9,
  MR_Integer check_hlds__simplify__simplify_goal_switch__ConsArity_10,
  MR_Word * check_hlds__simplify__simplify_goal_switch__ExtraGoal_11,
  MR_Word check_hlds__simplify__simplify_goal_switch__InstMap0_12,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38)
{
  {
    MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;
    MR_Word check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarSet0_14;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes0_15;
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgVars_16;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarSet_17;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarType_18;
    MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_19;
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgTypes_20;
    MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_21;
    MR_Word check_hlds__simplify__simplify_goal_switch__Inst0_22;
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgInsts_25;
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgUnifyModes_29;
    MR_Word check_hlds__simplify__simplify_goal_switch__UnifyMode_30;
    MR_Word check_hlds__simplify__simplify_goal_switch__Unification_32;
    MR_Word check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33;
    MR_Word check_hlds__simplify__simplify_goal_switch__NonLocals_34;
    MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_35;
    MR_Word check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36;
    MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39;
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_50;
    MR_Word check_hlds__simplify__simplify_goal_switch__Var_58;
    MR_Word check_hlds__simplify__simplify_goal_switch__ArgInsts1_24;
    MR_Word check_hlds__simplify__simplify_goal_switch__Inst1_23;

    {
      check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__VarSet0_14);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__VarTypes0_15);
    }
    check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      mercury__varset__new_vars_4_p_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_switch__ConsArity_10, &check_hlds__simplify__simplify_goal_switch__ArgVars_16, check_hlds__simplify__simplify_goal_switch__VarSet0_14, &check_hlds__simplify__simplify_goal_switch__VarSet_17);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes0_15, check_hlds__simplify__simplify_goal_switch__Var_8, &check_hlds__simplify__simplify_goal_switch__VarType_18);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_19);
    }
    {
      check_hlds__type_util__get_cons_id_arg_types_4_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_19, check_hlds__simplify__simplify_goal_switch__VarType_18, check_hlds__simplify__simplify_goal_switch__ConsId_9, &check_hlds__simplify__simplify_goal_switch__ArgTypes_20);
    }
    {
      hlds__vartypes__vartypes_add_corresponding_lists_4_p_0(check_hlds__simplify__simplify_goal_switch__ArgVars_16, check_hlds__simplify__simplify_goal_switch__ArgTypes_20, check_hlds__simplify__simplify_goal_switch__VarTypes0_15, &check_hlds__simplify__simplify_goal_switch__VarTypes_21);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(check_hlds__simplify__simplify_goal_switch__VarSet_17, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_37, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39);
    }
    {
      check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_21, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_39_39, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_38);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__simplify__simplify_goal_switch__InstMap0_12, check_hlds__simplify__simplify_goal_switch__Var_8, &check_hlds__simplify__simplify_goal_switch__Inst0_22);
    }
    {
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_19, check_hlds__simplify__simplify_goal_switch__Inst0_22, &check_hlds__simplify__simplify_goal_switch__Inst1_23);
    }
    {
      check_hlds__simplify__simplify_goal_switch__succeeded = parse_tree__prog_mode__get_arg_insts_4_p_0(check_hlds__simplify__simplify_goal_switch__Inst1_23, check_hlds__simplify__simplify_goal_switch__ConsId_9, check_hlds__simplify__simplify_goal_switch__ConsArity_10, &check_hlds__simplify__simplify_goal_switch__ArgInsts1_24);
    }
    if (check_hlds__simplify__simplify_goal_switch__succeeded)
      check_hlds__simplify__simplify_goal_switch__ArgInsts_25 = check_hlds__simplify__simplify_goal_switch__ArgInsts1_24;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.simplify_goal_switch", (MR_String) "predicate \140check_hlds.simplify.simplify_goal_switch.create_test_unification\'/7", (MR_String) "get_arg_insts failed");
          return;
        }
      }
    {
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, (MR_Word) &check_hlds__simplify__simplify_goal_switch_scalar_common_2[0], check_hlds__simplify__simplify_goal_switch__ArgInsts_25, &check_hlds__simplify__simplify_goal_switch__ArgUnifyModes_29);
    }
    {
      check_hlds__simplify__simplify_goal_switch__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_50, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Inst0_22));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Var_50, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Inst0_22));
    }
    {
      check_hlds__simplify__simplify_goal_switch__UnifyMode_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__UnifyMode_30, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_50));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__UnifyMode_30, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_50));
    }
    {
      check_hlds__simplify__simplify_goal_switch__Unification_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ConsId_9));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ArgVars_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ArgUnifyModes_29));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Unification_32, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      check_hlds__simplify__simplify_goal_switch__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Var_58, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ConsId_9));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Var_58, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__Var_58, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ArgVars_16));
    }
    {
      check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_8));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Var_58));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__UnifyMode_30));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 3) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Unification_32));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_switch_scalar_common_3[0]));
    }
    {
      check_hlds__simplify__simplify_goal_switch__NonLocals_34 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__simplify__simplify_goal_switch__TypeCtorInfo_64_64, check_hlds__simplify__simplify_goal_switch__Var_8);
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__simplify__simplify_goal_switch__InstMapDelta_35);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__simplify_goal_switch__NonLocals_34, check_hlds__simplify__simplify_goal_switch__InstMapDelta_35, (MR_Integer) 1, (MR_Integer) 0, &check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_goal_switch__ExtraGoal_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ExtraGoalExpr_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__ExtraGoalInfo_36));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_switch__simplify_switch_cases_15_p_0(
  MR_Word check_hlds__simplify__simplify_goal_switch__Var_1,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__11_11,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__12_12,
  MR_Word check_hlds__simplify__simplify_goal_switch__HeadVar__13_13,
  MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14,
  MR_Word * check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__simplify_goal_switch__succeeded;

        if ((check_hlds__simplify__simplify_goal_switch__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_15 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14;
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_10 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9;
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_8 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_6 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5;
            *check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_4 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3;
          }
        else
          {
            MR_Word check_hlds__simplify__simplify_goal_switch__Case0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_switch__Cases0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_switch__MainConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__simplify_goal_switch__OtherConsIds_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__simplify_goal_switch__Goal0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case0_36, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49;
            MR_Word check_hlds__simplify__simplify_goal_switch__VarTypes_50;
            MR_Word check_hlds__simplify__simplify_goal_switch__Type_51;
            MR_Word check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52;
            MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53;
            MR_Word check_hlds__simplify__simplify_goal_switch__Goal_54;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85;
            MR_Word check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86;
            MR_Word check_hlds__simplify__simplify_goal_switch___Common1_55;
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_79;
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_80;
            MR_Word check_hlds__simplify__simplify_goal_switch__Var_56;

            {
              check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__VarTypes_50);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__simplify__simplify_goal_switch__VarTypes_50, check_hlds__simplify__simplify_goal_switch__Var_1, &check_hlds__simplify__simplify_goal_switch__Type_51);
            }
            {
              hlds__instmap__bind_var_to_functors_8_p_0(check_hlds__simplify__simplify_goal_switch__Var_1, check_hlds__simplify__simplify_goal_switch__Type_51, check_hlds__simplify__simplify_goal_switch__MainConsId_46, check_hlds__simplify__simplify_goal_switch__OtherConsIds_47, check_hlds__simplify__simplify_goal_switch__HeadVar__12_12, &check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52, check_hlds__simplify__simplify_goal_switch__ModuleInfo0_49, &check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53);
            }
            {
              check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo1_53, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77);
            }
            {
              check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(check_hlds__simplify__simplify_goal_switch__Goal0_48, &check_hlds__simplify__simplify_goal_switch__Goal_54, check_hlds__simplify__simplify_goal_switch__HeadVar__11_11, check_hlds__simplify__simplify_goal_switch__CaseInstMap0_52, check_hlds__simplify__simplify_goal_switch__HeadVar__13_13, &check_hlds__simplify__simplify_goal_switch___Common1_55, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_77_77, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78);
            }
            check_hlds__simplify__simplify_goal_switch__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 0)));
            check_hlds__simplify__simplify_goal_switch__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 1)));
            check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__Var_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Var_79, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
              {
                check_hlds__simplify__simplify_goal_switch__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Var_79, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__Var_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            if (check_hlds__simplify__simplify_goal_switch__succeeded)
              {
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81 = (MR_Integer) 0;
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78;
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5;
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3;
              }
            else
              {
                MR_Word check_hlds__simplify__simplify_goal_switch__Case_57;
                MR_Word check_hlds__simplify__simplify_goal_switch__GoalExpr_58;
                MR_Word check_hlds__simplify__simplify_goal_switch__GoalInfo_59;
                MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63;
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64;
                MR_Word check_hlds__simplify__simplify_goal_switch__InstMapDelta_65;
                MR_Word check_hlds__simplify__simplify_goal_switch__ModuleInfo_66;
                MR_Word check_hlds__simplify__simplify_goal_switch__Reason_60;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_82;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_61;
                MR_Word check_hlds__simplify__simplify_goal_switch__Var_62;

                {
                  check_hlds__simplify__simplify_goal_switch__Case_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__MainConsId_46));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__OtherConsIds_47));
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Case_57, 2) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Goal_54));
                }
                check_hlds__simplify__simplify_goal_switch__GoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 0)));
                check_hlds__simplify__simplify_goal_switch__GoalInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_goal_switch__Goal_54, (MR_Integer) 1)));
                check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__GoalExpr_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
                  {
                    check_hlds__simplify__simplify_goal_switch__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 1)));
                    check_hlds__simplify__simplify_goal_switch__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__GoalExpr_58, (MR_Integer) 2)));
                    check_hlds__simplify__simplify_goal_switch__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__simplify_goal_switch__Reason_60)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (check_hlds__simplify__simplify_goal_switch__succeeded)
                      {
                        check_hlds__simplify__simplify_goal_switch__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 1)));
                        check_hlds__simplify__simplify_goal_switch__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__simplify_goal_switch__Reason_60, (MR_Integer) 2)));
                        check_hlds__simplify__simplify_goal_switch__succeeded = (check_hlds__simplify__simplify_goal_switch__Var_82 == (MR_Integer) 1);
                      }
                  }
                if (check_hlds__simplify__simplify_goal_switch__succeeded)
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7;
                else
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83 = (MR_Integer) 1;
                {
                  check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__simplify_goal_switch__GoalInfo_59);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78, &check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64);
                }
                {
                  hlds__instmap__instmap_delta_bind_var_to_functors_9_p_0(check_hlds__simplify__simplify_goal_switch__Var_1, check_hlds__simplify__simplify_goal_switch__Type_51, check_hlds__simplify__simplify_goal_switch__MainConsId_46, check_hlds__simplify__simplify_goal_switch__OtherConsIds_47, check_hlds__simplify__simplify_goal_switch__HeadVar__12_12, check_hlds__simplify__simplify_goal_switch__InstMapDelta0_63, &check_hlds__simplify__simplify_goal_switch__InstMapDelta_65, check_hlds__simplify__simplify_goal_switch__ModuleInfo2_64, &check_hlds__simplify__simplify_goal_switch__ModuleInfo_66);
                }
                {
                  check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(check_hlds__simplify__simplify_goal_switch__ModuleInfo_66, check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_78_78, &check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84);
                }
                {
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__InstMapDelta_65));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5));
                }
                {
                  check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86, 0) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__Case_57));
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3));
                }
                check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_HeadVar__2_2 = check_hlds__simplify__simplify_goal_switch__Cases0_37;
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_RevCases_0_3 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_86_86;
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_5 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_85_85;
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_7 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_83_83;
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_CanFail_0_9 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_81_81;
              MR_Word check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_Info_0_14 = check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_84_84;

              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_Info_0_14 = check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_Info_0_14;
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_CanFail_0_9 = check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_CanFail_0_9;
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_SeenNonGroundTerm_0_7 = check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_SeenNonGroundTerm_0_7;
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevInstMapDeltas_0_5 = check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_RevInstMapDeltas_0_5;
              check_hlds__simplify__simplify_goal_switch__STATE_VARIABLE_RevCases_0_3 = check_hlds__simplify__simplify_goal_switch__next_value_of_STATE_VARIABLE_RevCases_0_3;
              check_hlds__simplify__simplify_goal_switch__HeadVar__2_2 = check_hlds__simplify__simplify_goal_switch__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
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

/* :- end_module check_hlds.simplify.simplify_goal_switch. */
