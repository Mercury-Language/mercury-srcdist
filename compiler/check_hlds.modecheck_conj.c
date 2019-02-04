/*
** Automatically generated from `modecheck_conj.m'
** by the Mercury compiler,
** version rotd-2017-06-13
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


/* :- module check_hlds.modecheck_conj. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_conj__init
ENDINIT
*/

#include "check_hlds.modecheck_conj.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3);

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3);

static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_conj__Vars_3);

static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
  MR_Box check_hlds__modecheck_conj__closure_arg,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
  MR_Word check_hlds__modecheck_conj__Goal_7,
  MR_Word * check_hlds__modecheck_conj__Goals_8,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);

static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1);

static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1(
  MR_Box check_hlds__modecheck_conj__closure_arg,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1);

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(
  MR_Word check_hlds__modecheck_conj__ConjType_9,
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
  MR_Word * check_hlds__modecheck_conj__Goals_12,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_25,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_26,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_28);

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8);


static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[2][5];

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[1][3];




static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_conj_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[0])),
    ((MR_Box) (check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001)),
  (MR_String) "check_hlds.modecheck_conj",
  (MR_String) "impurity_errors",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_conj__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0_10001(
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;

    {
      check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj____Unify____impurity_errors_0_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2));
    }
    return check_hlds__modecheck_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0_10001(
  MR_Box * check_hlds__modecheck_conj__wrapper_arg_1,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_2,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_3)
{
  {
    MR_Word check_hlds__modecheck_conj__conv0_HeadVar__1_1;

    {
      check_hlds__modecheck_conj____Compare____impurity_errors_0_0(&check_hlds__modecheck_conj__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_3));
    }
    *check_hlds__modecheck_conj__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_conj__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__modecheck_conj____Compare____impurity_errors_0_0(
  MR_Word * check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word check_hlds__modecheck_conj__HeadVar__3_3)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_4 = check_hlds__modecheck_conj__HeadVar__2_2;
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_5 = check_hlds__modecheck_conj__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1], check_hlds__modecheck_conj__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj____Unify____impurity_errors_0_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar1_3 = check_hlds__modecheck_conj__HeadVar__1_1;
    MR_Word check_hlds__modecheck_conj__Cast_HeadVar2_4 = check_hlds__modecheck_conj__HeadVar__2_2;

    {
      check_hlds__modecheck_conj__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_conj__Cast_HeadVar2_4)));
    }
    return check_hlds__modecheck_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__redelay_goals_3_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_conj__succeeded;

        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_3 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2;
        else
          {
            MR_Word check_hlds__modecheck_conj__DelayedGoal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_conj__DelayedGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_conj__ModeErrorInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_conj__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 2)));
            MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;
            MR_Word check_hlds__modecheck_conj___WaitingVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__DelayedGoal_7, (MR_Integer) 0)));

            {
              check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__ModeErrorInfo_11, check_hlds__modecheck_conj__Goal_12, check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modecheck_conj__next_value_of_HeadVar__1_1 = check_hlds__modecheck_conj__DelayedGoals_8;
              MR_Word check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_DelayInfo_0_2 = check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_15_15;

              check_hlds__modecheck_conj__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_DelayInfo_0_2;
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word * check_hlds__modecheck_conj__Vars_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_conj__succeeded;

        if ((check_hlds__modecheck_conj__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__modecheck_conj__Vars_3 = check_hlds__modecheck_conj__HeadVar__2_2;
        else
          {
            MR_Word check_hlds__modecheck_conj__Vars1_5;
            MR_Word check_hlds__modecheck_conj__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_conj__Vars2_11;
            MR_Word check_hlds__modecheck_conj__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_conj__Var_6;
            MR_Word check_hlds__modecheck_conj__Var_7;

            check_hlds__modecheck_conj__Vars1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_12, (MR_Integer) 0)));
            check_hlds__modecheck_conj__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_12, (MR_Integer) 1)));
            check_hlds__modecheck_conj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_12, (MR_Integer) 2)));
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__HeadVar__2_2, check_hlds__modecheck_conj__Vars1_5, &check_hlds__modecheck_conj__Vars2_11);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__modecheck_conj__next_value_of_HeadVar__1_1 = check_hlds__modecheck_conj__Rest_8;
              MR_Word check_hlds__modecheck_conj__next_value_of_HeadVar__2_2 = check_hlds__modecheck_conj__Vars2_11;

              check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__next_value_of_HeadVar__2_2;
              check_hlds__modecheck_conj__HeadVar__1_1 = check_hlds__modecheck_conj__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVars_3,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_conj__Var_7;
    MR_Word check_hlds__modecheck_conj__RHS_8;
    MR_Word check_hlds__modecheck_conj__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_conj__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_conj__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_conj__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_6, (MR_Integer) 1)));
    MR_Word check_hlds__modecheck_conj__Var_9;
    MR_Word check_hlds__modecheck_conj__Var_10;
    MR_Word check_hlds__modecheck_conj__Var_11;

    check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__Var_13)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__modecheck_conj__succeeded)
      {
        check_hlds__modecheck_conj__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_13, (MR_Integer) 0)));
        check_hlds__modecheck_conj__RHS_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_13, (MR_Integer) 1)));
        check_hlds__modecheck_conj__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_13, (MR_Integer) 2)));
        check_hlds__modecheck_conj__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_13, (MR_Integer) 3)));
        check_hlds__modecheck_conj__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_13, (MR_Integer) 4)));
        {
          {
            check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0], ((MR_Box) (check_hlds__modecheck_conj__Var_7)), check_hlds__modecheck_conj__HeadVars_3);
          }
        }
        if (!(check_hlds__modecheck_conj__succeeded))
          {
            MR_Word check_hlds__modecheck_conj__TypeInfo_16_16;
            MR_Word check_hlds__modecheck_conj__OtherVar_12;

            check_hlds__modecheck_conj__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_conj__RHS_8)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__modecheck_conj__succeeded)
              {
                check_hlds__modecheck_conj__OtherVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__RHS_8, (MR_Integer) 0)));
                check_hlds__modecheck_conj__TypeInfo_16_16 = (MR_Word) &check_hlds__modecheck_conj_scalar_common_1[0];
                {
                  check_hlds__modecheck_conj__succeeded = mercury__list__member_2_p_0(check_hlds__modecheck_conj__TypeInfo_16_16, ((MR_Box) (check_hlds__modecheck_conj__OtherVar_12)), check_hlds__modecheck_conj__HeadVars_3);
                }
              }
          }
      }
    return check_hlds__modecheck_conj__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1(
  MR_Box check_hlds__modecheck_conj__closure_arg,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;

    {
      check_hlds__modecheck_conj__succeeded = check_hlds__modecheck_conj__is_headvar_unification_goal_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
    return check_hlds__modecheck_conj__succeeded;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(
  MR_Word check_hlds__modecheck_conj__Goal_7,
  MR_Word * check_hlds__modecheck_conj__Goals_8,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__DelayInfo0_11;
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_12;
    MR_Word check_hlds__modecheck_conj__DelayInfo1_13;
    MR_Word check_hlds__modecheck_conj__ModuleInfo_14;
    MR_Word check_hlds__modecheck_conj__PredId_15;
    MR_Word check_hlds__modecheck_conj__PredInfo_16;
    MR_Word check_hlds__modecheck_conj__ClausesInfo_17;
    MR_Word check_hlds__modecheck_conj__HeadVars_18;
    MR_Word check_hlds__modecheck_conj__HeadVarUnificationGoals_19;
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20;
    MR_Word check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21;
    MR_Word check_hlds__modecheck_conj__DelayInfo2_22;
    MR_Word check_hlds__modecheck_conj__DelayInfo3_23;
    MR_Word check_hlds__modecheck_conj__DelayInfo_24;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
    MR_Word check_hlds__modecheck_conj__Var_47;

    {
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__DelayInfo0_11);
    }
    {
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo0_11, &check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__DelayInfo1_13);
    }
    {
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_34, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__ModuleInfo_14);
    }
    {
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__PredId_15);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__modecheck_conj__ModuleInfo_14, check_hlds__modecheck_conj__PredId_15, &check_hlds__modecheck_conj__PredInfo_16);
    }
    {
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__modecheck_conj__PredInfo_16, &check_hlds__modecheck_conj__ClausesInfo_17);
    }
    {
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__modecheck_conj__ClausesInfo_17, &check_hlds__modecheck_conj__HeadVars_18);
    }
    {
      check_hlds__modecheck_conj__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_47, 0) = ((MR_Box) (&check_hlds__modecheck_conj_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_47, 1) = ((MR_Box) (check_hlds__modecheck_conj__check_for_impurity_error_6_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_47, 3) = ((MR_Box) (check_hlds__modecheck_conj__HeadVars_18));
    }
    {
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__modecheck_conj__Var_47, check_hlds__modecheck_conj__DelayedGoals0_12, &check_hlds__modecheck_conj__HeadVarUnificationGoals_19, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20);
    }
    {
      check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0((MR_Integer) 0, check_hlds__modecheck_conj__NonHeadVarUnificationGoals0_20, &check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, check_hlds__modecheck_conj__Goals_8, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_32, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_36_36, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
    }
    {
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo2_22);
    }
    {
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo2_22, &check_hlds__modecheck_conj__DelayInfo3_23);
    }
    {
      check_hlds__modecheck_conj__redelay_goals_3_p_0(check_hlds__modecheck_conj__HeadVarUnificationGoals_19, check_hlds__modecheck_conj__DelayInfo3_23, &check_hlds__modecheck_conj__DelayInfo_24);
    }
    {
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_24, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35);
    }
    if ((check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38;
    else
      {
        MR_Word check_hlds__modecheck_conj__Vars_27;
        MR_Word check_hlds__modecheck_conj__ModeError_28;
        MR_Word check_hlds__modecheck_conj__Context_29;
        MR_Word check_hlds__modecheck_conj__ModeContext_30;
        MR_Word check_hlds__modecheck_conj__ImpurityError_31;
        MR_Word check_hlds__modecheck_conj__Var_41;
        MR_Word check_hlds__modecheck_conj__Var_52;
        MR_Word check_hlds__modecheck_conj__Vars1_55;
        MR_Word check_hlds__modecheck_conj__Rest_58;
        MR_Word check_hlds__modecheck_conj__Vars2_61;
        MR_Word check_hlds__modecheck_conj__Var_62;
        MR_Word check_hlds__modecheck_conj__Var_56;
        MR_Word check_hlds__modecheck_conj__Var_57;

        {
          check_hlds__modecheck_conj__Var_52 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
        check_hlds__modecheck_conj__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 0)));
        check_hlds__modecheck_conj__Rest_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21, (MR_Integer) 1)));
        check_hlds__modecheck_conj__Vars1_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_62, (MR_Integer) 0)));
        check_hlds__modecheck_conj__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_62, (MR_Integer) 1)));
        check_hlds__modecheck_conj__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_62, (MR_Integer) 2)));
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Var_52, check_hlds__modecheck_conj__Vars1_55, &check_hlds__modecheck_conj__Vars2_61);
        }
        {
          check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_58, check_hlds__modecheck_conj__Vars2_61, &check_hlds__modecheck_conj__Vars_27);
        }
        {
          check_hlds__modecheck_conj__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_41, 0) = ((MR_Box) (check_hlds__modecheck_conj__Goal_7));
        }
        {
          check_hlds__modecheck_conj__ModeError_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 1) = ((MR_Box) (check_hlds__modecheck_conj__NonHeadVarUnificationGoals_21));
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_28, 2) = ((MR_Box) (check_hlds__modecheck_conj__Var_41));
        }
        {
          check_hlds__mode_info__mode_info_get_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__Context_29);
        }
        {
          check_hlds__mode_info__mode_info_get_mode_context_2_p_0(*check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_35, &check_hlds__modecheck_conj__ModeContext_30);
        }
        {
          check_hlds__modecheck_conj__ImpurityError_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_27));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 1) = ((MR_Box) (check_hlds__modecheck_conj__ModeError_28));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_29));
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpurityError_31, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_33 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpurityError_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_38_38));
        }
      }
  }
}

static MR_Word MR_CALL 
check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word check_hlds__modecheck_conj___WaitingVars_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__modecheck_conj___ModeError_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__HeadVar__1_1, (MR_Integer) 1)));

    return check_hlds__modecheck_conj__Goal_5;
  }
}

static MR_Box MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0_1(
  MR_Box check_hlds__modecheck_conj__closure_arg,
  MR_Box check_hlds__modecheck_conj__wrapper_arg_1)
{
  {
    MR_Box check_hlds__modecheck_conj__wrapper_arg_2;
    MR_Box check_hlds__modecheck_conj__closure = check_hlds__modecheck_conj__closure_arg;
    MR_Word check_hlds__modecheck_conj__conv0_Goal_5;

    {
      check_hlds__modecheck_conj__conv0_Goal_5 = check_hlds__modecheck_conj__hlds_goal_from_delayed_goal_1_f_0(((MR_Word) check_hlds__modecheck_conj__wrapper_arg_1));
    }
    check_hlds__modecheck_conj__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_conj__conv0_Goal_5));
    return check_hlds__modecheck_conj__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(
  MR_Word check_hlds__modecheck_conj__ConjType_9,
  MR_Word check_hlds__modecheck_conj__DelayedGoals0_10,
  MR_Word * check_hlds__modecheck_conj__DelayedGoals_11,
  MR_Word * check_hlds__modecheck_conj__Goals_12,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_25,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_26,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_27,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_28)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;

    if ((check_hlds__modecheck_conj__DelayedGoals0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__modecheck_conj__DelayedGoals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_conj__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_26 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_25;
        *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_28 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_27;
      }
    else
      {
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_38_38 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_21_55;
        MR_Word check_hlds__modecheck_conj__Goals0_17;
        MR_Word check_hlds__modecheck_conj__DelayInfo0_18;
        MR_Word check_hlds__modecheck_conj__DelayInfo1_19;
        MR_Word check_hlds__modecheck_conj__Goals1_20;
        MR_Word check_hlds__modecheck_conj__DelayInfo2_21;
        MR_Word check_hlds__modecheck_conj__DelayedGoals1_22;
        MR_Word check_hlds__modecheck_conj__DelayInfo3_23;
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_30_30;
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_31_31;
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_32_32;
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_33_33;
        MR_Word check_hlds__modecheck_conj__GoalsCord_51;
        MR_Word check_hlds__modecheck_conj__Var_52;
        MR_Integer check_hlds__modecheck_conj__Var_34;
        MR_Integer check_hlds__modecheck_conj__Var_35;

        {
          check_hlds__modecheck_conj__Goals0_17 = mercury__list__map_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_38_38, check_hlds__modecheck_conj__TypeCtorInfo_39_39, (MR_Word) &check_hlds__modecheck_conj_scalar_common_3[0], check_hlds__modecheck_conj__DelayedGoals0_10);
        }
        {
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_conj__DelayInfo0_18);
        }
        {
          check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_18, &check_hlds__modecheck_conj__DelayInfo1_19);
        }
        {
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_19, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_30_30);
        }
        check_hlds__modecheck_conj__TypeCtorInfo_21_55 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          check_hlds__modecheck_conj__Var_52 = mercury__cord__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_55);
        }
        {
          check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__Goals0_17, check_hlds__modecheck_conj__Var_52, &check_hlds__modecheck_conj__GoalsCord_51, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_25, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_31_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_30_30, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_32_32);
        }
        {
          check_hlds__modecheck_conj__Goals1_20 = mercury__cord__list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_55, check_hlds__modecheck_conj__GoalsCord_51);
        }
        {
          check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modecheck_conj__DelayInfo2_21);
        }
        {
          check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_21, &check_hlds__modecheck_conj__DelayedGoals1_22, &check_hlds__modecheck_conj__DelayInfo3_23);
        }
        {
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_23, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_32_32, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_33_33);
        }
        {
          check_hlds__modecheck_conj__Var_34 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_38_38, check_hlds__modecheck_conj__DelayedGoals1_22);
        }
        {
          check_hlds__modecheck_conj__Var_35 = mercury__list__length_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_38_38, check_hlds__modecheck_conj__DelayedGoals0_10);
        }
        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__Var_34 < check_hlds__modecheck_conj__Var_35);
        if (check_hlds__modecheck_conj__succeeded)
          {
            MR_Word check_hlds__modecheck_conj__Goals2_24;

            {
              check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(check_hlds__modecheck_conj__ConjType_9, check_hlds__modecheck_conj__DelayedGoals1_22, check_hlds__modecheck_conj__DelayedGoals_11, &check_hlds__modecheck_conj__Goals2_24, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_31_31, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_26, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_33_33, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_28);
            }
            {
              *check_hlds__modecheck_conj__Goals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_39_39, check_hlds__modecheck_conj__Goals1_20, check_hlds__modecheck_conj__Goals2_24);
            }
          }
        else
          {
            *check_hlds__modecheck_conj__DelayedGoals_11 = check_hlds__modecheck_conj__DelayedGoals1_22;
            *check_hlds__modecheck_conj__Goals_12 = check_hlds__modecheck_conj__Goals1_20;
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_28 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_33_33;
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_26 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_31_31;
          }
      }
  }
}

static void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(
  MR_Word check_hlds__modecheck_conj__HeadVar__1_1,
  MR_Word check_hlds__modecheck_conj__HeadVar__2_2,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__modecheck_conj__succeeded;

        if ((check_hlds__modecheck_conj__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7;
            *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5;
            *check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3;
          }
        else
          {
            MR_Word check_hlds__modecheck_conj__Goal0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_conj__Goals0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_conj__ConjGoals_25;
            MR_Word check_hlds__modecheck_conj__Var_62;
            MR_Word check_hlds__modecheck_conj__Var_63;
            MR_Word check_hlds__modecheck_conj__Var_26;

            check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == (MR_Integer) 0);
            if (check_hlds__modecheck_conj__succeeded)
              {
                check_hlds__modecheck_conj__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_20, (MR_Integer) 0)));
                check_hlds__modecheck_conj__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal0_20, (MR_Integer) 1)));
                check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__Var_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_62, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (check_hlds__modecheck_conj__succeeded)
                  {
                    check_hlds__modecheck_conj__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_62, (MR_Integer) 1)));
                    check_hlds__modecheck_conj__ConjGoals_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_62, (MR_Integer) 2)));
                    check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__Var_63 == (MR_Integer) 0);
                  }
              }
            if (check_hlds__modecheck_conj__succeeded)
              {
                MR_Word check_hlds__modecheck_conj__Goals1_27;

                {
                  check_hlds__modecheck_conj__Goals1_27 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__ConjGoals_25, check_hlds__modecheck_conj__Goals0_21);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__modecheck_conj__next_value_of_HeadVar__2_2 = check_hlds__modecheck_conj__Goals1_27;

                  check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__modecheck_conj__Purity_28;
                MR_Word check_hlds__modecheck_conj__Impure_29;
                MR_Word check_hlds__modecheck_conj__InstMap0_31;
                MR_Word check_hlds__modecheck_conj__DelayInfo0_32;
                MR_Word check_hlds__modecheck_conj__NonLocalVars_33;
                MR_Word check_hlds__modecheck_conj__Goal_34;
                MR_Word check_hlds__modecheck_conj__Errors_35;
                MR_Word check_hlds__modecheck_conj__DelayInfo1_38;
                MR_Word check_hlds__modecheck_conj__WokenGoals_49;
                MR_Word check_hlds__modecheck_conj__DelayInfo_50;
                MR_Word check_hlds__modecheck_conj__InstMap_55;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93;
                MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94;
                MR_Word check_hlds__modecheck_conj__Goals1_99;

                {
                  check_hlds__modecheck_conj__Purity_28 = hlds__hlds_goal__goal_get_purity_1_f_0(check_hlds__modecheck_conj__Goal0_20);
                }
                switch (check_hlds__modecheck_conj__Purity_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__modecheck_conj__TypeCtorInfo_101_101;
                      MR_Word check_hlds__modecheck_conj__ScheduledSolverGoals_30;
                      MR_Word check_hlds__modecheck_conj__Var_70;

                      check_hlds__modecheck_conj__Impure_29 = (MR_Integer) 1;
                      {
                        check_hlds__modecheck_conj__check_for_impurity_error_6_p_0(check_hlds__modecheck_conj__Goal0_20, &check_hlds__modecheck_conj__ScheduledSolverGoals_30, check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5, &check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68);
                      }
                      check_hlds__modecheck_conj__TypeCtorInfo_101_101 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                      {
                        check_hlds__modecheck_conj__Var_70 = mercury__cord__from_list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_101_101, check_hlds__modecheck_conj__ScheduledSolverGoals_30);
                      }
                      {
                        check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69 = mercury__cord__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_101_101, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3, check_hlds__modecheck_conj__Var_70);
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      check_hlds__modecheck_conj__Impure_29 = (MR_Integer) 0;
                      check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3;
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5;
                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7;
                    }
                    break;
                }
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__InstMap0_31);
                }
                {
                  check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__DelayInfo0_32);
                }
                {
                  check_hlds__modecheck_conj__NonLocalVars_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_conj__Goal0_20);
                }
                {
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_33, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_68_68, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71);
                }
                {
                  check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_conj__Goal0_20, &check_hlds__modecheck_conj__Goal_34, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_71_71, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72);
                }
                {
                  check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__Errors_35);
                }
                if ((check_hlds__modecheck_conj__Errors_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__modecheck_conj__SubGoals_47;
                    MR_Word check_hlds__modecheck_conj__Var_73;
                    MR_Word check_hlds__modecheck_conj__Var_105;
                    MR_Word check_hlds__modecheck_conj__Var_48;

                    {
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__DelayInfo1_38);
                    }
                    check_hlds__modecheck_conj__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_34, (MR_Integer) 0)));
                    check_hlds__modecheck_conj__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Goal_34, (MR_Integer) 1)));
                    check_hlds__modecheck_conj__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_conj__Var_73)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_73, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__modecheck_conj__succeeded)
                      {
                        check_hlds__modecheck_conj__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_73, (MR_Integer) 1)));
                        check_hlds__modecheck_conj__SubGoals_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__Var_73, (MR_Integer) 2)));
                        check_hlds__modecheck_conj__succeeded = (check_hlds__modecheck_conj__HeadVar__1_1 == check_hlds__modecheck_conj__Var_105);
                      }
                    if (check_hlds__modecheck_conj__succeeded)
                      {
                        MR_Word check_hlds__modecheck_conj__TypeCtorInfo_102_102 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
                        MR_Word check_hlds__modecheck_conj__Var_75;

                        {
                          check_hlds__modecheck_conj__Var_75 = mercury__cord__from_list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_102_102, check_hlds__modecheck_conj__SubGoals_47);
                        }
                        {
                          check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = mercury__cord__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_102_102, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69, check_hlds__modecheck_conj__Var_75);
                        }
                      }
                    else
                      {
                        {
                          check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = mercury__cord__snoc_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69, ((MR_Box) (check_hlds__modecheck_conj__Goal_34)));
                        }
                      }
                    check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
                    check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72;
                  }
                else
                  {
                    MR_Word check_hlds__modecheck_conj__FirstErrorInfo_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_35, (MR_Integer) 0)));
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78;
                    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79;
                    MR_Word check_hlds__modecheck_conj__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Errors_35, (MR_Integer) 1)));

                    {
                      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_72_72, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78);
                    }
                    {
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_conj__InstMap0_31, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_78_78, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79);
                    }
                    {
                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_conj__NonLocalVars_33, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_79_79, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80);
                    }
                    {
                      check_hlds__delay_info__delay_info_delay_goal_4_p_0(check_hlds__modecheck_conj__FirstErrorInfo_36, check_hlds__modecheck_conj__Goal0_20, check_hlds__modecheck_conj__DelayInfo0_32, &check_hlds__modecheck_conj__DelayInfo1_38);
                    }
                    switch (check_hlds__modecheck_conj__Impure_29) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__modecheck_conj__Vars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 0)));
                          MR_Word check_hlds__modecheck_conj__ImpureError_43;
                          MR_Word check_hlds__modecheck_conj__Context_44;
                          MR_Word check_hlds__modecheck_conj__ModeContext_45;
                          MR_Word check_hlds__modecheck_conj__ImpureErrorInfo_46;
                          MR_Word check_hlds__modecheck_conj__Var_81;
                          MR_Word check_hlds__modecheck_conj__Var_82;
                          MR_Word check_hlds__modecheck_conj__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 1)));
                          MR_Word check_hlds__modecheck_conj__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 2)));
                          MR_Word check_hlds__modecheck_conj__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstErrorInfo_36, (MR_Integer) 3)));

                          {
                            check_hlds__modecheck_conj__Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_82, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_39));
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_82, 1) = ((MR_Box) (check_hlds__modecheck_conj__FirstErrorInfo_36));
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_82, 2) = ((MR_Box) (check_hlds__modecheck_conj__Goal0_20));
                          }
                          {
                            check_hlds__modecheck_conj__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_81, 0) = ((MR_Box) (check_hlds__modecheck_conj__Var_82));
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__modecheck_conj__ImpureError_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 1) = ((MR_Box) (check_hlds__modecheck_conj__Var_81));
                            MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ImpureError_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__Context_44);
                          }
                          {
                            check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__ModeContext_45);
                          }
                          {
                            check_hlds__modecheck_conj__ImpureErrorInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 0) = ((MR_Box) (check_hlds__modecheck_conj__Vars_39));
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 1) = ((MR_Box) (check_hlds__modecheck_conj__ImpureError_43));
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 2) = ((MR_Box) (check_hlds__modecheck_conj__Context_44));
                            MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__ImpureErrorInfo_46, 3) = ((MR_Box) (check_hlds__modecheck_conj__ModeContext_45));
                          }
                          {
                            check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85, 0) = ((MR_Box) (check_hlds__modecheck_conj__ImpureErrorInfo_46));
                            MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85, 1) = ((MR_Box) (check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_67_67));
                          }
                        }
                        break;
                    }
                    check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_69_69;
                  }
                {
                  check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&check_hlds__modecheck_conj__WokenGoals_49, check_hlds__modecheck_conj__DelayInfo1_38, &check_hlds__modecheck_conj__DelayInfo_50);
                }
                {
                  check_hlds__modecheck_conj__Goals1_99 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__WokenGoals_49, check_hlds__modecheck_conj__Goals0_21);
                }
                if ((check_hlds__modecheck_conj__WokenGoals_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80;
                else
                  {
                    MR_Word check_hlds__modecheck_conj__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_49, (MR_Integer) 1)));
                    MR_Word check_hlds__modecheck_conj__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__WokenGoals_49, (MR_Integer) 0)));

                    if ((check_hlds__modecheck_conj__Var_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goal", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93);
                        }
                      }
                    else
                      {
                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 2, (MR_String) "goals", check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_80_80, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93);
                        }
                      }
                  }
                {
                  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo_50, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_93_93, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94);
                }
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94, &check_hlds__modecheck_conj__InstMap_55);
                }
                {
                  check_hlds__modecheck_conj__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_conj__InstMap_55);
                }
                if (check_hlds__modecheck_conj__succeeded)
                  {
                    {
                      check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_conj__Goals1_99, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_8);
                    }
                    *check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_6 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
                    *check_hlds__modecheck_conj__STATE_VARIABLE_Goals_4 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__modecheck_conj__next_value_of_HeadVar__2_2 = check_hlds__modecheck_conj__Goals1_99;
                      MR_Word check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_Goals_0_3 = check_hlds__modecheck_conj__STATE_VARIABLE_Goals_74_74;
                      MR_Word check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_ImpurityErrors_0_5 = check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_85_85;
                      MR_Word check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_ModeInfo_0_7 = check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_94_94;

                      check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_7 = check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_ModeInfo_0_7;
                      check_hlds__modecheck_conj__STATE_VARIABLE_ImpurityErrors_0_5 = check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_ImpurityErrors_0_5;
                      check_hlds__modecheck_conj__STATE_VARIABLE_Goals_0_3 = check_hlds__modecheck_conj__next_value_of_STATE_VARIABLE_Goals_0_3;
                      check_hlds__modecheck_conj__HeadVar__2_2 = check_hlds__modecheck_conj__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__modecheck_conj__modecheck_conj_list_5_p_0(
  MR_Word check_hlds__modecheck_conj__ConjType_6,
  MR_Word check_hlds__modecheck_conj__Goals0_7,
  MR_Word * check_hlds__modecheck_conj__Goals_8,
  MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_36,
  MR_Word * check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_37)
{
  {
    MR_bool check_hlds__modecheck_conj__succeeded;
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_53_53;
    MR_Word check_hlds__modecheck_conj__TypeCtorInfo_21_67;
    MR_Word check_hlds__modecheck_conj__OldErrors_10;
    MR_Word check_hlds__modecheck_conj__DelayInfo0_11;
    MR_Word check_hlds__modecheck_conj__DelayInfo1_12;
    MR_Word check_hlds__modecheck_conj__LiveVars1_13;
    MR_Word check_hlds__modecheck_conj__Goals1_14;
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors0_15;
    MR_Word check_hlds__modecheck_conj__DelayInfo2_16;
    MR_Word check_hlds__modecheck_conj__DelayedGoals0_17;
    MR_Word check_hlds__modecheck_conj__DelayInfo3_18;
    MR_Word check_hlds__modecheck_conj__DelayedGoals_19;
    MR_Word check_hlds__modecheck_conj__Goals2_20;
    MR_Word check_hlds__modecheck_conj__RevImpurityErrors_21;
    MR_Word check_hlds__modecheck_conj__NewErrors_22;
    MR_Word check_hlds__modecheck_conj__Errors_23;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_45_45;
    MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46;
    MR_Word check_hlds__modecheck_conj__GoalsCord_63;
    MR_Word check_hlds__modecheck_conj__Var_64;

    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_conj__OldErrors_10);
    }
    {
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_0_36, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39);
    }
    {
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__DelayInfo0_11);
    }
    {
      check_hlds__delay_info__delay_info_enter_conj_2_p_0(check_hlds__modecheck_conj__DelayInfo0_11, &check_hlds__modecheck_conj__DelayInfo1_12);
    }
    {
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo1_12, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_39_39, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40);
    }
    {
      check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__LiveVars1_13);
    }
    {
      check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41);
    }
    check_hlds__modecheck_conj__TypeCtorInfo_21_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      check_hlds__modecheck_conj__Var_64 = mercury__cord__init_0_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_67);
    }
    {
      check_hlds__modecheck_conj__modecheck_conj_list_flatten_and_schedule_acc_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__Goals0_7, check_hlds__modecheck_conj__Var_64, &check_hlds__modecheck_conj__GoalsCord_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_conj__RevImpurityErrors0_15, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43);
    }
    {
      check_hlds__modecheck_conj__Goals1_14 = mercury__cord__list_1_f_0(check_hlds__modecheck_conj__TypeCtorInfo_21_67, check_hlds__modecheck_conj__GoalsCord_63);
    }
    {
      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_conj__DelayInfo2_16);
    }
    {
      check_hlds__delay_info__delay_info_leave_conj_3_p_0(check_hlds__modecheck_conj__DelayInfo2_16, &check_hlds__modecheck_conj__DelayedGoals0_17, &check_hlds__modecheck_conj__DelayInfo3_18);
    }
    {
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_conj__DelayInfo3_18, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44);
    }
    {
      check_hlds__modecheck_conj__modecheck_delayed_goals_8_p_0(check_hlds__modecheck_conj__ConjType_6, check_hlds__modecheck_conj__DelayedGoals0_17, &check_hlds__modecheck_conj__DelayedGoals_19, &check_hlds__modecheck_conj__Goals2_20, check_hlds__modecheck_conj__RevImpurityErrors0_15, &check_hlds__modecheck_conj__RevImpurityErrors_21, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_45_45);
    }
    {
      *check_hlds__modecheck_conj__Goals_8 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_conj__Goals1_14, check_hlds__modecheck_conj__Goals2_20);
    }
    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_conj__NewErrors_22);
    }
    check_hlds__modecheck_conj__TypeCtorInfo_53_53 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0;
    {
      check_hlds__modecheck_conj__Errors_23 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_53_53, check_hlds__modecheck_conj__OldErrors_10, check_hlds__modecheck_conj__NewErrors_22);
    }
    {
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors_23, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46);
    }
    if ((check_hlds__modecheck_conj__DelayedGoals_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__modecheck_conj__ImpurityErrors_24;
        MR_Word check_hlds__modecheck_conj__Errors5_25;
        MR_Word check_hlds__modecheck_conj__Errors6_26;

        {
          mercury__list__reverse_2_p_0(check_hlds__modecheck_conj__TypeCtorInfo_53_53, check_hlds__modecheck_conj__RevImpurityErrors_21, &check_hlds__modecheck_conj__ImpurityErrors_24);
        }
        {
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__Errors5_25);
        }
        {
          check_hlds__modecheck_conj__Errors6_26 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_conj__TypeCtorInfo_53_53, check_hlds__modecheck_conj__Errors5_25, check_hlds__modecheck_conj__ImpurityErrors_24);
        }
        {
          check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__modecheck_conj__Errors6_26, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_37);
        }
      }
    else
      {
        MR_Word check_hlds__modecheck_conj__FirstDelayedGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_19, (MR_Integer) 0)));
        MR_Word check_hlds__modecheck_conj__MoreDelayedGoals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_19, (MR_Integer) 1)));
        MR_Word check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47;

        {
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__modecheck_conj__LiveVars1_13, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47);
        }
        if ((check_hlds__modecheck_conj__MoreDelayedGoals_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__modecheck_conj__Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_27, (MR_Integer) 1)));
            MR_Word check_hlds__modecheck_conj___DVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_27, (MR_Integer) 0)));
            MR_Word check_hlds__modecheck_conj___DGoal_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__FirstDelayedGoal_27, (MR_Integer) 2)));

            {
              check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__modecheck_conj__Error_30, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_37);
            }
          }
        else
          {
            MR_Word check_hlds__modecheck_conj__Vars_34;
            MR_Word check_hlds__modecheck_conj__ModeError_35;
            MR_Word check_hlds__modecheck_conj__Var_70;
            MR_Word check_hlds__modecheck_conj__Vars1_73;
            MR_Word check_hlds__modecheck_conj__Rest_76;
            MR_Word check_hlds__modecheck_conj__Vars2_79;
            MR_Word check_hlds__modecheck_conj__Var_80;
            MR_Word check_hlds__modecheck_conj__Var_74;
            MR_Word check_hlds__modecheck_conj__Var_75;

            {
              check_hlds__modecheck_conj__Var_70 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            }
            check_hlds__modecheck_conj__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_19, (MR_Integer) 0)));
            check_hlds__modecheck_conj__Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_conj__DelayedGoals_19, (MR_Integer) 1)));
            check_hlds__modecheck_conj__Vars1_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_80, (MR_Integer) 0)));
            check_hlds__modecheck_conj__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_80, (MR_Integer) 1)));
            check_hlds__modecheck_conj__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_conj__Var_80, (MR_Integer) 2)));
            {
              parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_conj__Var_70, check_hlds__modecheck_conj__Vars1_73, &check_hlds__modecheck_conj__Vars2_79);
            }
            {
              check_hlds__modecheck_conj__get_all_waiting_vars_2_3_p_0(check_hlds__modecheck_conj__Rest_76, check_hlds__modecheck_conj__Vars2_79, &check_hlds__modecheck_conj__Vars_34);
            }
            {
              check_hlds__modecheck_conj__ModeError_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_35, 1) = ((MR_Box) (check_hlds__modecheck_conj__DelayedGoals_19));
              MR_hl_field(MR_mktag(3), check_hlds__modecheck_conj__ModeError_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
            {
              check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_conj__Vars_34, check_hlds__modecheck_conj__ModeError_35, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_47_47, check_hlds__modecheck_conj__STATE_VARIABLE_ModeInfo_37);
            }
          }
      }
  }
}

void mercury__check_hlds__modecheck_conj__init(void)
{
}

void mercury__check_hlds__modecheck_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_conj__check_hlds__modecheck_conj__type_ctor_info_impurity_errors_0);
}

void mercury__check_hlds__modecheck_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.modecheck_conj. */
