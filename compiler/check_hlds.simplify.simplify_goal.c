/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2019-08-20
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


// :- module check_hlds.simplify.simplify_goal.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.pd_cost.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_goal_conj.mih"
#include "check_hlds.simplify.simplify_goal_disj.mih"
#include "check_hlds.simplify.simplify_goal_ite.mih"
#include "check_hlds.simplify.simplify_goal_scope.mih"
#include "check_hlds.simplify.simplify_goal_switch.mih"
#include "check_hlds.simplify.simplify_goal_unify.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"



struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s {
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
  MR_bool check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded;
  jmp_buf check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25;
};


static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
  MR_Word GoalInfo0_5,
  MR_Word * GoalInfo_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
  MR_Word BeforeAfter_6,
  MR_Word GoalExpr_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Common_0_10,
  MR_Word * STATE_VARIABLE_Common_11);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[2][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "replacing it with"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The compiler will optimize away this goal,"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this goal cannot succeed."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[7])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[11])))
  },
  /* row 13 */
  {
    (MR_Box) (((((MR_Unsigned) 24U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[1][3] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 24U << 1)) | (MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[9])))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0 = {
  (MR_String) "before",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1 = {
  (MR_String) "after",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2] = {
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1,
  &check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0
};

static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal",
  (MR_String) "before_after",
  {     check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0 },
  {     check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_value_ordered_before_after_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0
};

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
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
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_maybe_wrap_goal_7_p_0(
  MR_Word OuterGoalInfo_8,
  MR_Word InnerGoalInfo_9,
  MR_Word GoalExpr1_10,
  MR_Word * GoalExpr_11,
  MR_Word * GoalInfo_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word InnerDet_14;
    MR_Word OuterDet_15;

    InnerDet_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerGoalInfo_9);
    OuterDet_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OuterGoalInfo_8);
    succeeded = (InnerDet_14 == OuterDet_15);
    if (succeeded)
    {
      *GoalExpr_11 = GoalExpr1_10;
      *GoalInfo_12 = InnerGoalInfo_9;
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
    }
    else
    {
      MR_Word Var_20;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (GoalExpr1_10));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (InnerGoalInfo_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *GoalExpr_11 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__simplify_goal_scalar_common_1[15])));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_20));
      }
      *GoalInfo_12 = OuterGoalInfo_8;
      check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 0))));
      MR_Word Var_67;
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, (MR_Integer) 1))));

      (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if ((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_66, (MR_Integer) 1))));
        (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (!((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
      (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25);
    if ((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0) == 0)
      {
        hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &(env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_25, check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2, env_ptr);
        (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word NestedContext0_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Common_0_55,
  MR_Word * STATE_VARIABLE_Common_56,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  {
    struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s env;

    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9 = Goal0_9;
    {
      MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 1))));
      MR_Word NestedContext_17;
      MR_Word Goal0ContainsTrace_18;
      MR_Word Detism_19;
      MR_Word ModuleInfo0_20;
      MR_Word Goal0CanLoopOrThrow_21;
      MR_Word ModuleInfo_22;
      MR_Word Purity_23;
      MR_Word Goal1_34;
      MR_Word GoalExpr1_39;
      MR_Word GoalInfo1_40;
      MR_Word Goal2_43;
      MR_Word Goal3_49;
      MR_Word GoalExpr3_50;
      MR_Word GoalInfo3_51;
      MR_Word GoalExpr4_52;
      MR_Word GoalInfo4_53;
      MR_Word GoalInfo_54;
      MR_Word STATE_VARIABLE_Info_63_63;
      MR_Word STATE_VARIABLE_Info_64_64;
      MR_Word STATE_VARIABLE_Info_104_104;
      MR_Word STATE_VARIABLE_Common_112_112;
      MR_Word STATE_VARIABLE_Common_113_113;
      MR_Word STATE_VARIABLE_Info_114_114;
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 0))));
      MR_Word Reason1_41;
      MR_Word SomeGoal1_42;
      MR_Word SomeGoal2_45;
      MR_Word Reason2_44;
      MR_Word Var_109;
      MR_Word _GoalInfo2_46;

      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_16, (MR_Integer) 16);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NestedContext0_11, (MR_Integer) 1))));
        MR_Unsigned Var_126 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext0_11, (MR_Integer) 2))));
        MR_Word Var_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext0_11, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), NestedContext0_11, (MR_Integer) 0)));

        {
          NestedContext_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), NestedContext_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), NestedContext_17, 1) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), NestedContext_17, 2) = ((MR_Box) (Var_126));
        }
      }
      else
        NestedContext_17 = NestedContext0_11;
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_16, (MR_Integer) 20);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_57, &STATE_VARIABLE_Info_63_63);
        Goal0ContainsTrace_18 = (MR_Integer) 0;
      }
      else
      {
        Goal0ContainsTrace_18 = (MR_Integer) 1;
        STATE_VARIABLE_Info_63_63 = STATE_VARIABLE_Info_0_57;
      }
      Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_16);
      check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_63_63, &ModuleInfo0_20);
      hlds__goal_form__goal_can_loop_or_throw_4_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &Goal0CanLoopOrThrow_21, ModuleInfo0_20, &ModuleInfo_22);
      check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_22, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_64_64);
      Purity_23 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_16);
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Detism_19 == (MR_Integer) 7);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        switch (Purity_23) {
          default:
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0ContainsTrace_18 == (MR_Integer) 1);
          if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
          {
            {
              MR_Word Var_129;

              check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_64_64, &Var_129);
              (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_129);
            }
            if (!((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
              (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
          }
        }
      }
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        MR_Word Context_24;
        MR_Word NonLocals0_32;
        MR_Integer CostDelta_33;
        MR_Word STATE_VARIABLE_Info_102_102;
        MR_Word STATE_VARIABLE_Info_103_103;

        Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_64_64);
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(&env);
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
        }
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          MR_Word Msg_29;
          MR_Word Spec_31;
          MR_Word Var_100;

          {
            Msg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_29, 0) = ((MR_Box) (Context_24));
            MR_hl_field(MR_mktag(0), Msg_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_1[14])));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Msg_29));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__simplify_goal_scalar_common_2[0])));
            MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scalar_common_3[1])));
            MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_100));
          }
          check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_31, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_102_102);
        }
        else
          STATE_VARIABLE_Info_102_102 = STATE_VARIABLE_Info_64_64;
        NonLocals0_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_32);
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
          STATE_VARIABLE_Info_103_103 = STATE_VARIABLE_Info_102_102;
        else
          check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_103_103);
        transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &CostDelta_33);
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_33, STATE_VARIABLE_Info_103_103, &STATE_VARIABLE_Info_104_104);
        Goal1_34 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_24);
      }
      else
      {
        MR_Word MaxSoln_35;
        MR_Word InstMapDelta_36;
        MR_Word NonLocalVars_37;
        MR_Word VarTypes_38;
        MR_Word Var_130;
        MR_Word Var_131;

        parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &Var_130, &MaxSoln_35);
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 1 == Var_130);
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (MaxSoln_35 != (MR_Integer) 0);
          if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
          {
            InstMapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_16);
            NonLocalVars_37 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
            check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_64_64, &Var_131);
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_module____Unify____module_info_0_0(ModuleInfo_22, Var_131);
            if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            {
              check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_64_64, &VarTypes_38);
              (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(ModuleInfo_22, VarTypes_38, InstMap0_12, InstMapDelta_36, NonLocalVars_37);
              if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
              {
                switch (Purity_23) {
                  default:
                    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 1:
                    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
                    break;
                }
                if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                {
                  (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0ContainsTrace_18 == (MR_Integer) 1);
                  if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
                  {
                    {
                      MR_Word Var_132;

                      check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_64_64, &Var_132);
                      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_132);
                    }
                    if (!((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
                      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
                  }
                }
              }
            }
          }
        }
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          MR_Word STATE_VARIABLE_Info_107_107;
          MR_Word Context_118;
          MR_Word NonLocals0_119;
          MR_Integer CostDelta_120;

          NonLocals0_119 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_119);
          if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
            STATE_VARIABLE_Info_107_107 = STATE_VARIABLE_Info_64_64;
          else
            check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_107_107);
          transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &CostDelta_120);
          check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_120, STATE_VARIABLE_Info_107_107, &STATE_VARIABLE_Info_104_104);
          Context_118 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
          Goal1_34 = hlds__make_goal__true_goal_with_context_1_f_0(Context_118);
        }
        else
        {
          Goal1_34 = (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
          STATE_VARIABLE_Info_104_104 = STATE_VARIABLE_Info_64_64;
        }
      }
      GoalExpr1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_34, (MR_Integer) 0))));
      GoalInfo1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_34, (MR_Integer) 1))));
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) GoalExpr1_39)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_39, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        Reason1_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_39, (MR_Integer) 1))));
        SomeGoal1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_39, (MR_Integer) 2))));
        check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(Reason1_41, SomeGoal1_42, GoalInfo1_40, &Goal2_43);
      }
      else
        Goal2_43 = Goal1_34;
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(STATE_VARIABLE_Info_104_104);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal2_43, (MR_Integer) 0))));
        _GoalInfo2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal2_43, (MR_Integer) 1))));
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_109)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          Reason2_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 1))));
          SomeGoal2_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_109, (MR_Integer) 2))));
          if (((((MR_tag((MR_Word) Reason2_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 0)))) == (MR_Integer) 5))))
          {
            MR_Word Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 1)));

            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Var_110 == (MR_Integer) 0);
          }
          else
          if (((((MR_tag((MR_Word) Reason2_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 0)))) == (MR_Integer) 6))))
          {
            MR_Word Kind_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 1))));
            MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason2_44, (MR_Integer) 2)));

            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Kind_48 == (MR_Integer) 3);
          }
          else
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
        }
      }
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        Goal3_49 = SomeGoal2_45;
      else
        Goal3_49 = Goal2_43;
      GoalExpr3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal3_49, (MR_Integer) 0))));
      GoalInfo3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal3_49, (MR_Integer) 1))));
      check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 0, GoalExpr3_50, STATE_VARIABLE_Info_104_104, STATE_VARIABLE_Common_0_55, &STATE_VARIABLE_Common_112_112);
      check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(GoalExpr3_50, &GoalExpr4_52, GoalInfo3_51, &GoalInfo4_53, NestedContext_17, InstMap0_12, STATE_VARIABLE_Common_112_112, &STATE_VARIABLE_Common_113_113, STATE_VARIABLE_Info_104_104, &STATE_VARIABLE_Info_114_114);
      check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0((MR_Integer) 1, GoalExpr4_52, STATE_VARIABLE_Info_114_114, STATE_VARIABLE_Common_113_113, STATE_VARIABLE_Common_56);
      check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(GoalInfo4_53, &GoalInfo_54, STATE_VARIABLE_Info_114_114, STATE_VARIABLE_Info_58);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr4_52));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_54));
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(
  MR_Word GoalInfo0_5,
  MR_Word * GoalInfo_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word Determinism0_8;
    MR_Word InstmapDelta0_9;
    MR_Word CanFail0_10;
    MR_Word NumSolns0_11;

    Determinism0_8 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_5);
    InstmapDelta0_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_5);
    parse_tree__prog_data__determinism_components_3_p_0(Determinism0_8, &CanFail0_10, &NumSolns0_11);
    succeeded = (NumSolns0_11 == (MR_Integer) 0);
    if (succeeded)
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta0_9);
    if (succeeded)
    {
      MR_Word UnreachableInstMapDelta_12;

      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&UnreachableInstMapDelta_12);
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(UnreachableInstMapDelta_12, GoalInfo0_5, GoalInfo_6);
      check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
    }
    else
    {
      succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta0_9);
      if (succeeded)
      {
        succeeded = (NumSolns0_11 != (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word Determinism_13;

        parse_tree__prog_data__determinism_components_3_p_1(&Determinism_13, CanFail0_10, (MR_Integer) 0);
        hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_13, GoalInfo0_5, GoalInfo_6);
        check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
      }
      else
      {
        *GoalInfo_6 = GoalInfo0_5;
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_clear_common_structs_5_p_0(
  MR_Word BeforeAfter_6,
  MR_Word GoalExpr_7,
  MR_Word Info_8,
  MR_Word STATE_VARIABLE_Common_0_10,
  MR_Word * STATE_VARIABLE_Common_11)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(Info_8);
    if (succeeded)
    {
      succeeded = check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(Info_8);
      succeeded = !(succeeded);
      if (succeeded)
        switch (MR_tag((MR_Word) GoalExpr_7)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Unify_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

              succeeded = ((((MR_tag((MR_Word) Unify_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Unify_20, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word BuiltinState_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);

              succeeded = (BuiltinState_28 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (BeforeAfter_6 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word GenericCall_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                  MR_Word WillFlush0_40;

                  switch (MR_tag((MR_Word) GenericCall_31)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      WillFlush0_40 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      WillFlush0_40 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      WillFlush0_40 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      WillFlush0_40 = (MR_Integer) 0;
                      break;
                  }
                  succeeded = (BeforeAfter_6 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (WillFlush0_40 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 1:
                succeeded = (BeforeAfter_6 == (MR_Integer) 1);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ConjType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);

                  succeeded = (ConjType_54 == (MR_Integer) 1);
                }
                break;
              case (MR_Integer) 3:
                succeeded = (BeforeAfter_6 == (MR_Integer) 0);
                break;
              case (MR_Integer) 6:
                succeeded = (BeforeAfter_6 == (MR_Integer) 0);
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ShortHand_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                  switch (MR_tag((MR_Word) ShortHand_67)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal.will_flush\'/2", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                      }
                      break;
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
    }
    if (succeeded)
      check_hlds__simplify__common__common_info_clear_structs_2_p_0(STATE_VARIABLE_Common_0_10, STATE_VARIABLE_Common_11);
    else
      *STATE_VARIABLE_Common_11 = STATE_VARIABLE_Common_0_10;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word SymName_9;
    MR_Word Var_10;
    MR_String Var_11;
    MR_Word Var_12;

    succeeded = ((MR_tag((MR_Word) GoalExpr_2)) == (MR_Integer) 2);
    if (succeeded)
    {
      SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_2, (MR_Integer) 5))));
      succeeded = ((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 1))));
        Var_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_10, Var_12);
        if (succeeded)
          succeeded = (strcmp(Var_11, (MR_String) "false") == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_66,
  MR_Word * STATE_VARIABLE_GoalExpr_67,
  MR_Word STATE_VARIABLE_GoalInfo_0_68,
  MR_Word * STATE_VARIABLE_GoalInfo_69,
  MR_Word NestedContext0_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_Common_0_70,
  MR_Word * STATE_VARIABLE_Common_71,
  MR_Word STATE_VARIABLE_Info_0_72,
  MR_Word * STATE_VARIABLE_Info_73)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_66)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
      break;
    case (MR_Integer) 1:
      check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
      break;
    case (MR_Integer) 2:
      check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 2))));

            switch (ConjType_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(Goals_18, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
                break;
              case (MR_Integer) 0:
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(Goals_18, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 4:
          check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 5:
          check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 6:
          check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(STATE_VARIABLE_GoalExpr_0_66, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_GoalExpr_0_66, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "bi_implication");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 1))));
                  MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 3))));
                  MR_Word MainGoal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 4))));
                  MR_Word OrElseGoals_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 5))));
                  MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_53, (MR_Integer) 6))));

                  check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(GoalType_54, Outer_55, Inner_56, MaybeOutputVars_57, MainGoal_58, OrElseGoals_59, OrElseInners_60, STATE_VARIABLE_GoalExpr_67, STATE_VARIABLE_GoalInfo_0_68, STATE_VARIABLE_GoalInfo_69, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_70, STATE_VARIABLE_Common_71, STATE_VARIABLE_Info_0_72, STATE_VARIABLE_Info_73);
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "try_goal");
                    return;
                  }
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_goal____Unify____before_after_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_goal____Compare____before_after_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__simplify_goal__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__type_ctor_info_before_after_0);
}

void mercury__check_hlds__simplify__simplify_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal.
