/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2024-05-14
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
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
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s {
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
  MR_bool check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded;
  jmp_buf check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_24;
};


static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_ordinal_ordered_before_after_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0[2];

static const MR_Integer check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0[2];

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word HeadVar__1_1,
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
check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0(
  MR_Word BeforeAfter_5,
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Common_0_9,
  MR_Word * STATE_VARIABLE_Common_10);

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


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[26][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[2][1];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this goal cannot succeed."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "replacing it with"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The compiler will optimize away this goal,"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: atomic goals are"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not implemented yet when targeting"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "C#"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Java"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[6])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[6])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[22])))
  },
  /* row  24 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[12])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__simplify__simplify_goal_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_0 = {
  (MR_String) "before",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_functor_desc_before_after_0_1 = {
  (MR_String) "after",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_ordinal_ordered_before_after_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal",
  (MR_String) "before_after",
  { check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_name_ordered_before_after_0 },
  { check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__enum_ordinal_ordered_before_after_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__simplify_goal__check_hlds__simplify__simplify_goal__functor_number_map_before_after_0,

};

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0(
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
check_hlds__simplify__simplify_goal____Unify____before_after_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (GoalExpr1_10));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (InnerGoalInfo_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *GoalExpr_11 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[17])));
      MR_hl_field(3, base, 2) = ((MR_Box) (Var_20));
    }
    *GoalInfo_12 = OuterGoalInfo_8;
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_24, (MR_Integer) 0))));
    MR_Word Var_75;
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_24, (MR_Integer) 1))));

    (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_74, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if ((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      Var_75 = ((MR_Word) ((MR_hl_field(3, Var_74, (MR_Integer) 1))));
      (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (!((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
    (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_24);
  if ((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__commit_0) == 0)
    {
      hlds__goal_util__goal_contains_goal_2_p_0((env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &(env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__SubGoal_24, check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_2, env_ptr);
      (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word NestedContext0_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Common_0_61,
  MR_Word * STATE_VARIABLE_Common_62,
  MR_Word STATE_VARIABLE_Info_0_63,
  MR_Word * STATE_VARIABLE_Info_64)
{
  struct check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0_s env;

  (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9 = Goal0_9;
  {
    MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 1))));
    MR_Word NestedContext_17;
    MR_Word Goal0ContainsTrace_18;
    MR_Word Detism_19;
    MR_Word Goal0CanLoopOrThrow_21;
    MR_Word Purity_22;
    MR_Word Goal1_32;
    MR_Word GoalExpr1_37;
    MR_Word GoalInfo1_38;
    MR_Word Goal2_41;
    MR_Word Goal3_47;
    MR_Word GoalExpr3_48;
    MR_Word GoalInfo3_49;
    MR_Word GoalExpr4_50;
    MR_Word GoalInfo4_51;
    MR_Word GoalInfo_52;
    MR_Word STATE_VARIABLE_Info_69_69;
    MR_Word STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word STATE_VARIABLE_Info_72_72;
    MR_Word STATE_VARIABLE_Info_119_119;
    MR_Word STATE_VARIABLE_Common_127_127;
    MR_Word STATE_VARIABLE_Common_128_128;
    MR_Word STATE_VARIABLE_Info_129_129;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, (MR_Integer) 0))));
    MR_Word Reason1_39;
    MR_Word SomeGoal1_40;
    MR_Word SomeGoal2_43;
    MR_Word Reason2_42;
    MR_Word Var_124;
    MR_Word _GoalInfo2_44;

    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_16, (MR_Integer) 16);
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      MR_Word Var_146 = ((MR_Word) ((MR_hl_field(0, NestedContext0_11, (MR_Integer) 1))));
      MR_Unsigned Var_147 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_11, (MR_Integer) 2))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(0, NestedContext0_11, (MR_Integer) 3))));
      MR_Word Var_145 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, NestedContext0_11, (MR_Integer) 0)));

      {
        NestedContext_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NestedContext_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, NestedContext_17, 1) = ((MR_Box) (Var_146));
        MR_hl_field(0, NestedContext_17, 2) = ((MR_Box) (Var_147));
        MR_hl_field(0, NestedContext_17, 3) = ((MR_Box) (Var_148));
      }
    }
    else
      NestedContext_17 = NestedContext0_11;
    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_16, (MR_Integer) 20);
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_63, &STATE_VARIABLE_Info_69_69);
      Goal0ContainsTrace_18 = (MR_Integer) 0;
    }
    else
    {
      Goal0ContainsTrace_18 = (MR_Integer) 1;
      STATE_VARIABLE_Info_69_69 = STATE_VARIABLE_Info_0_63;
    }
    Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_16);
    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_ModuleInfo_70_70);
    hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &Goal0CanLoopOrThrow_21, STATE_VARIABLE_ModuleInfo_70_70, &STATE_VARIABLE_ModuleInfo_71_71);
    check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_71_71, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_72_72);
    Purity_22 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_16);
    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Detism_19 == (MR_Integer) 7);
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      switch (Purity_22) {
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
            MR_Word Var_152;

            check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_72_72, &Var_152);
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_152);
          }
          if (!((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
            (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
        }
      }
    }
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      MR_Word Context_23;
      MR_Word NonLocals0_30;
      MR_Integer CostDelta_31;
      MR_Word STATE_VARIABLE_Info_117_117;
      MR_Word STATE_VARIABLE_Info_118_118;

      Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(STATE_VARIABLE_Info_72_72);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_3(&env);
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded);
      }
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        MR_Word MainPieces_26;
        MR_Word Msg_28;
        MR_Word Spec_29;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_115;

        Var_81 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[3])));
        Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_81, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[4])));
        MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[1])), Var_80);
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_104, 0) = ((MR_Box) (MainPieces_26));
        }
        {
          Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(1, Var_103, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[25])));
        }
        {
          Msg_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Msg_28, 0) = ((MR_Box) (Context_23));
          MR_hl_field(2, Msg_28, 1) = ((MR_Box) (Var_103));
        }
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Msg_28));
          MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal\'/8"));
          MR_hl_field(3, Spec_29, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 27) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(3, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Spec_29, 3) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[0])));
          MR_hl_field(3, Spec_29, 4) = ((MR_Box) (Var_115));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_29, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_117_117);
      }
      else
        STATE_VARIABLE_Info_117_117 = STATE_VARIABLE_Info_72_72;
      NonLocals0_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_30);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        STATE_VARIABLE_Info_118_118 = STATE_VARIABLE_Info_117_117;
      else
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
      transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &CostDelta_31);
      check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_31, STATE_VARIABLE_Info_118_118, &STATE_VARIABLE_Info_119_119);
      Goal1_32 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_23);
    }
    else
    {
      MR_Word MaxSoln_33;
      MR_Word InstMapDelta_34;
      MR_Word NonLocalVars_35;
      MR_Word VarTable_36;
      MR_Word ModuleInfo_141;
      MR_Word Var_153;

      parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &Var_153, &MaxSoln_33);
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 1 == Var_153);
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (MaxSoln_33 != (MR_Integer) 0);
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
        {
          InstMapDelta_34 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_16);
          NonLocalVars_35 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_72_72, &ModuleInfo_141);
          check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_72_72, &VarTable_36);
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(ModuleInfo_141, VarTable_36, InstMap0_12, InstMapDelta_34, NonLocalVars_35);
          if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
          {
            switch (Purity_22) {
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
                  MR_Word Var_154;

                  check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_72_72, &Var_154);
                  (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_154);
                }
                if (!((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded))
                  (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_21 == (MR_Integer) 1);
              }
            }
          }
        }
      }
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        MR_Word STATE_VARIABLE_Info_122_122;
        MR_Word Context_142;
        MR_Word NonLocals0_143;
        MR_Integer CostDelta_144;

        NonLocals0_143 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_16);
        (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_143);
        if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
          STATE_VARIABLE_Info_122_122 = STATE_VARIABLE_Info_72_72;
        else
          check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_122_122);
        transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9, &CostDelta_144);
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_144, STATE_VARIABLE_Info_122_122, &STATE_VARIABLE_Info_119_119);
        Context_142 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_16);
        Goal1_32 = hlds__make_goal__true_goal_with_context_1_f_0(Context_142);
      }
      else
      {
        Goal1_32 = (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__Goal0_9;
        STATE_VARIABLE_Info_119_119 = STATE_VARIABLE_Info_72_72;
      }
    }
    GoalExpr1_37 = ((MR_Word) ((MR_hl_field(0, Goal1_32, (MR_Integer) 0))));
    GoalInfo1_38 = ((MR_Word) ((MR_hl_field(0, Goal1_32, (MR_Integer) 1))));
    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) GoalExpr1_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_37, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      Reason1_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_37, (MR_Integer) 1))));
      SomeGoal1_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_37, (MR_Integer) 2))));
      check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(Reason1_39, SomeGoal1_40, GoalInfo1_38, &Goal2_41);
    }
    else
      Goal2_41 = Goal1_32;
    (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(STATE_VARIABLE_Info_119_119);
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
    {
      Var_124 = ((MR_Word) ((MR_hl_field(0, Goal2_41, (MR_Integer) 0))));
      _GoalInfo2_44 = ((MR_Word) ((MR_hl_field(0, Goal2_41, (MR_Integer) 1))));
      (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_124)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_124, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      {
        Reason2_42 = ((MR_Word) ((MR_hl_field(3, Var_124, (MR_Integer) 1))));
        SomeGoal2_43 = ((MR_Word) ((MR_hl_field(3, Var_124, (MR_Integer) 2))));
        if (((((MR_tag((MR_Word) Reason2_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason2_42, (MR_Integer) 0)))) == (MR_Integer) 5))))
        {
          MR_Word Var_125 = ((MR_Unsigned) ((MR_hl_field(3, Reason2_42, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(3, Reason2_42, (MR_Integer) 1)));

          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Var_125 == (MR_Integer) 0);
        }
        else
        if (((((MR_tag((MR_Word) Reason2_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason2_42, (MR_Integer) 0)))) == (MR_Integer) 6))))
        {
          MR_Word Kind_46 = ((MR_Unsigned) ((MR_hl_field(3, Reason2_42, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(3, Reason2_42, (MR_Integer) 1))));
          MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(3, Reason2_42, (MR_Integer) 2)));

          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = (Kind_46 == (MR_Integer) 3);
        }
        else
          (env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded = MR_FALSE;
      }
    }
    if ((env).check_hlds__simplify__simplify_goal__simplify_goal_8_p_0_env_0__succeeded)
      Goal3_47 = SomeGoal2_43;
    else
      Goal3_47 = Goal2_41;
    GoalExpr3_48 = ((MR_Word) ((MR_hl_field(0, Goal3_47, (MR_Integer) 0))));
    GoalInfo3_49 = ((MR_Word) ((MR_hl_field(0, Goal3_47, (MR_Integer) 1))));
    check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0((MR_Integer) 0, GoalExpr3_48, STATE_VARIABLE_Common_0_61, &STATE_VARIABLE_Common_127_127);
    check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(GoalExpr3_48, &GoalExpr4_50, GoalInfo3_49, &GoalInfo4_51, NestedContext_17, InstMap0_12, STATE_VARIABLE_Common_127_127, &STATE_VARIABLE_Common_128_128, STATE_VARIABLE_Info_119_119, &STATE_VARIABLE_Info_129_129);
    check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0((MR_Integer) 1, GoalExpr4_50, STATE_VARIABLE_Common_128_128, STATE_VARIABLE_Common_62);
    check_hlds__simplify__simplify_goal__enforce_unreachability_invariant_4_p_0(GoalInfo4_51, &GoalInfo_52, STATE_VARIABLE_Info_129_129, STATE_VARIABLE_Info_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr4_50));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_52));
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
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  }
  else
  {
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta0_9);
    if (succeeded)
      succeeded = (NumSolns0_11 != (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Determinism_13;

      parse_tree__prog_data__determinism_components_3_p_1(&Determinism_13, CanFail0_10, (MR_Integer) 0);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_13, GoalInfo0_5, GoalInfo_6);
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
    }
    else
    {
      *GoalInfo_6 = GoalInfo0_5;
      *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0(
  MR_Word BeforeAfter_5,
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Common_0_9,
  MR_Word * STATE_VARIABLE_Common_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unify_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));

        succeeded = ((((MR_tag((MR_Word) Unify_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unify_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
          check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
        else
          *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);

        switch (BuiltinState_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
            break;
          case (MR_Integer) 1:
            switch (BeforeAfter_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
                break;
              case (MR_Integer) 0:
                *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

            switch (BeforeAfter_5) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) GenericCall_25)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
                    break;
                }
                break;
              case (MR_Integer) 0:
                *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          switch (BeforeAfter_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
              break;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_47 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (ConjType_47) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
                break;
              case (MR_Integer) 0:
                *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (BeforeAfter_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
              break;
            case (MR_Integer) 0:
              check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
              break;
          }
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
          break;
        case (MR_Integer) 6:
          switch (BeforeAfter_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
              break;
            case (MR_Integer) 0:
              check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
              break;
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand_60)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.simplify.simplify_goal.will_flush\'/2", (MR_String) "bi_implication");
                  return;
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
            check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal__goal_is_call_to_builtin_false_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SymName_9;
  MR_Word Var_10;
  MR_String Var_11;
  MR_Word Var_12;

  succeeded = ((MR_tag((MR_Word) GoalExpr_2)) == (MR_Integer) 2);
  if (succeeded)
  {
    SymName_9 = ((MR_Word) ((MR_hl_field(2, GoalExpr_2, (MR_Integer) 5))));
    succeeded = ((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));
      Var_11 = ((MR_String) ((MR_hl_field(1, SymName_9, (MR_Integer) 1))));
      Var_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_10, Var_12);
      if (succeeded)
        succeeded = (strcmp(Var_11, (MR_String) "false") == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(
  MR_Word STATE_VARIABLE_GoalExpr_0_73,
  MR_Word * STATE_VARIABLE_GoalExpr_74,
  MR_Word STATE_VARIABLE_GoalInfo_0_75,
  MR_Word * STATE_VARIABLE_GoalInfo_76,
  MR_Word NestedContext0_13,
  MR_Word InstMap0_14,
  MR_Word STATE_VARIABLE_Common_0_77,
  MR_Word * STATE_VARIABLE_Common_78,
  MR_Word STATE_VARIABLE_Info_0_79,
  MR_Word * STATE_VARIABLE_Info_80)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_GoalExpr_0_73)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      check_hlds__simplify__simplify_goal_ite__simplify_goal_neg_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
      break;
    case (MR_Integer) 1:
      check_hlds__simplify__simplify_goal_unify__simplify_goal_unify_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
      break;
    case (MR_Integer) 2:
      check_hlds__simplify__simplify_goal_call__simplify_goal_plain_call_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, (MR_Integer) 2))));

            switch (ConjType_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                check_hlds__simplify__simplify_goal_conj__simplify_goal_parallel_conj_10_p_0(Goals_18, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
                break;
              case (MR_Integer) 0:
                check_hlds__simplify__simplify_goal_conj__simplify_goal_plain_conj_10_p_0(Goals_18, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          check_hlds__simplify__simplify_goal_disj__simplify_goal_disj_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 4:
          check_hlds__simplify__simplify_goal_switch__simplify_goal_switch_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 5:
          check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 6:
          check_hlds__simplify__simplify_goal_ite__simplify_goal_ite_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_53)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 1))));
                  MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 3))));
                  MR_Word MainGoal_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 4))));
                  MR_Word OrElseGoals_59 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 5))));
                  MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, (MR_Integer) 6))));
                  MR_Word ModuleInfo_61;
                  MR_Word Globals_62;
                  MR_Word Target_63;
                  MR_Word STATE_VARIABLE_Info_142_142;

                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_79, &ModuleInfo_61);
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_61, &Globals_62);
                  libs__globals__get_target_2_p_0(Globals_62, &Target_63);
                  switch (Target_63) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Info_142_142 = STATE_VARIABLE_Info_0_79;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word StmSpec_67;
                        MR_Word Var_141;

                        Var_141 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_75);
                        {
                          StmSpec_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, StmSpec_67, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10"));
                          MR_hl_field(0, StmSpec_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, StmSpec_67, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[1])));
                          MR_hl_field(0, StmSpec_67, 3) = ((MR_Box) (Var_141));
                          MR_hl_field(0, StmSpec_67, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[20])));
                        }
                        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(StmSpec_67, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_142_142);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word StmSpec_154;
                        MR_Word Var_166;

                        Var_166 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_75);
                        {
                          StmSpec_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, StmSpec_154, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10"));
                          MR_hl_field(0, StmSpec_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, StmSpec_154, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[1])));
                          MR_hl_field(0, StmSpec_154, 3) = ((MR_Box) (Var_166));
                          MR_hl_field(0, StmSpec_154, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[23])));
                        }
                        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(StmSpec_154, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_142_142);
                      }
                      break;
                  }
                  check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(GoalType_54, Outer_55, Inner_56, MaybeOutputVars_57, MainGoal_58, OrElseGoals_59, OrElseInners_60, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_142_142, STATE_VARIABLE_Info_80);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10", (MR_String) "try_goal");
                  return;
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
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal____Unify____before_after_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal____Compare____before_after_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
