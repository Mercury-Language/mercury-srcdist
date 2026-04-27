/*
** Automatically generated from `simplify_goal.m'
** by the Mercury compiler,
** version rotd-2026-04-27
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_contains.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_parse_tree.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s {
  MR_Word check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9;
  MR_bool check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded;
  jmp_buf check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__commit_0;
  MR_Word check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__SubGoal_86;
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
check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0(
  MR_Word BeforeAfter_5,
  MR_Word GoalExpr_6,
  MR_Word STATE_VARIABLE_Common_0_9,
  MR_Word * STATE_VARIABLE_Common_10);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0(
  MR_Word InstMap0_7,
  MR_Word Goal0ContainsTrace_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal____Unify____before_after_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal____Compare____before_after_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[3][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[26][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_1[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 186U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scalar_common_2[26][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: atomic goals are"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not implemented yet when targeting"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "this goal cannot succeed."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[4])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replacing it with"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The compiler will optimize away this goal,"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[13])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "C#"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[4])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Java"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[4])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[22])))
  },
  /* row  24 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[15])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
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
      MR_hl_field(3, base, 1) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_2[5])));
      MR_hl_field(3, base, 2) = ((MR_Box) (Var_20));
    }
    *GoalInfo_12 = OuterGoalInfo_8;
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word NestedContext0_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_Common_0_45,
  MR_Word * STATE_VARIABLE_Common_46,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
  MR_Word FeaturesSet0_17;
  MR_Word NestedContext_18;
  MR_Word Goal0ContainsTrace_19;
  MR_Word Goal1_20;
  MR_Word GoalExpr1_21;
  MR_Word GoalInfo1_22;
  MR_Word Goal2_25;
  MR_Word Goal3_31;
  MR_Word GoalExpr3_32;
  MR_Word GoalInfo3_33;
  MR_Word GoalExpr4_34;
  MR_Word GoalInfo4_35;
  MR_Word GoalInfo_36;
  MR_Word STATE_VARIABLE_Info_1_53;
  MR_Word STATE_VARIABLE_Info_2_54;
  MR_Word STATE_VARIABLE_Common_1_58;
  MR_Word STATE_VARIABLE_Common_2_59;
  MR_Word STATE_VARIABLE_Info_3_60;
  MR_Word Determinism0_78;
  MR_Word InstmapDelta0_79;
  MR_Word CanFail0_80;
  MR_Word NumSolns0_81;
  MR_Word Reason1_23;
  MR_Word SomeGoal1_24;
  MR_Word SomeGoal2_27;
  MR_Word Reason2_26;
  MR_Word Var_55;

  FeaturesSet0_17 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo0_16);
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), FeaturesSet0_17, ((MR_Box) ((MR_Integer) 17)));
  if (succeeded)
  {
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, NestedContext0_11, 1))));
    MR_Unsigned Var_74 = ((MR_Unsigned) ((MR_hl_field(0, NestedContext0_11, 2))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, NestedContext0_11, 3))));

    {
      NestedContext_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NestedContext_18, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, NestedContext_18, 1) = ((MR_Box) (Var_73));
      MR_hl_field(0, NestedContext_18, 2) = ((MR_Box) (Var_74));
      MR_hl_field(0, NestedContext_18, 3) = ((MR_Box) (Var_75));
    }
  }
  else
    NestedContext_18 = NestedContext0_11;
  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), FeaturesSet0_17, ((MR_Box) ((MR_Integer) 21)));
  if (succeeded)
  {
    check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_1_53);
    Goal0ContainsTrace_19 = (MR_Integer) 0;
  }
  else
  {
    Goal0ContainsTrace_19 = (MR_Integer) 1;
    STATE_VARIABLE_Info_1_53 = STATE_VARIABLE_Info_0_47;
  }
  check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0(InstMap0_12, Goal0ContainsTrace_19, Goal0_9, &Goal1_20, STATE_VARIABLE_Info_1_53, &STATE_VARIABLE_Info_2_54);
  GoalExpr1_21 = ((MR_Word) ((MR_hl_field(0, Goal1_20, 0))));
  GoalInfo1_22 = ((MR_Word) ((MR_hl_field(0, Goal1_20, 1))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr1_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr1_21, 0)))) == (MR_Integer) 5)));
  if (succeeded)
  {
    Reason1_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_21, 1))));
    SomeGoal1_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr1_21, 2))));
    check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(Reason1_23, SomeGoal1_24, GoalInfo1_22, &Goal2_25);
  }
  else
    Goal2_25 = Goal1_20;
  succeeded = check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(STATE_VARIABLE_Info_2_54);
  if (succeeded)
  {
    Var_55 = ((MR_Word) ((MR_hl_field(0, Goal2_25, 0))));
    succeeded = ((((MR_tag((MR_Word) Var_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_55, 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Reason2_26 = ((MR_Word) ((MR_hl_field(3, Var_55, 1))));
      SomeGoal2_27 = ((MR_Word) ((MR_hl_field(3, Var_55, 2))));
      if (((((MR_tag((MR_Word) Reason2_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason2_26, 0)))) == (MR_Integer) 5))))
      {
        MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(3, Reason2_26, 1))) & (MR_Integer) 1);

        succeeded = (Var_56 == (MR_Integer) 0);
      }
      else
      if (((((MR_tag((MR_Word) Reason2_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason2_26, 0)))) == (MR_Integer) 6))))
      {
        MR_Word Kind_30 = ((MR_Unsigned) ((MR_hl_field(3, Reason2_26, 2))) & (MR_Integer) 3);

        succeeded = (Kind_30 == (MR_Integer) 3);
      }
      else
        succeeded = MR_FALSE;
    }
  }
  if (succeeded)
    Goal3_31 = SomeGoal2_27;
  else
    Goal3_31 = Goal2_25;
  GoalExpr3_32 = ((MR_Word) ((MR_hl_field(0, Goal3_31, 0))));
  GoalInfo3_33 = ((MR_Word) ((MR_hl_field(0, Goal3_31, 1))));
  check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0((MR_Integer) 0, GoalExpr3_32, STATE_VARIABLE_Common_0_45, &STATE_VARIABLE_Common_1_58);
  check_hlds__simplify__simplify_goal__simplify_goal_expr_10_p_0(GoalExpr3_32, &GoalExpr4_34, GoalInfo3_33, &GoalInfo4_35, NestedContext_18, InstMap0_12, STATE_VARIABLE_Common_1_58, &STATE_VARIABLE_Common_2_59, STATE_VARIABLE_Info_2_54, &STATE_VARIABLE_Info_3_60);
  check_hlds__simplify__simplify_goal__maybe_handle_stack_flush_4_p_0((MR_Integer) 1, GoalExpr4_34, STATE_VARIABLE_Common_2_59, STATE_VARIABLE_Common_46);
  Determinism0_78 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo4_35);
  InstmapDelta0_79 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo4_35);
  parse_tree__prog_data__determinism_components_3_p_0(Determinism0_78, &CanFail0_80, &NumSolns0_81);
  succeeded = (NumSolns0_81 == (MR_Integer) 0);
  if (succeeded)
    succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(InstmapDelta0_79);
  if (succeeded)
  {
    MR_Word UnreachableInstMapDelta_82;

    hlds__instmap__instmap_delta_init_unreachable_1_p_0(&UnreachableInstMapDelta_82);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(UnreachableInstMapDelta_82, GoalInfo4_35, &GoalInfo_36);
    check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_3_60, STATE_VARIABLE_Info_48);
  }
  else
  {
    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(InstmapDelta0_79);
    if (succeeded)
      succeeded = (NumSolns0_81 != (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Determinism_83;

      parse_tree__prog_data__determinism_components_3_p_1(&Determinism_83, CanFail0_80, (MR_Integer) 0);
      hlds__hlds_goal__goal_info_set_determinism_3_p_0(Determinism_83, GoalInfo4_35, &GoalInfo_36);
      check_hlds__simplify__simplify_info__simplify_info_set_rerun_det_2_p_0(STATE_VARIABLE_Info_3_60, STATE_VARIABLE_Info_48);
    }
    else
    {
      GoalInfo_36 = GoalInfo4_35;
      *STATE_VARIABLE_Info_48 = STATE_VARIABLE_Info_3_60;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr4_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_36));
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
        MR_Word Unify_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));

        succeeded = ((((MR_tag((MR_Word) Unify_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Unify_14, 0)))) == (MR_Integer) 1)));
        if (succeeded)
          check_hlds__simplify__common__common_info_stack_flush_2_p_0(STATE_VARIABLE_Common_0_9, STATE_VARIABLE_Common_10);
        else
          *STATE_VARIABLE_Common_10 = STATE_VARIABLE_Common_0_9;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinState_22 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_6, 3))) & (MR_Integer) 1);

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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

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
            MR_Word ConjType_48 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_6, 1))) & (MR_Integer) 1);

            switch (ConjType_48) {
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
            MR_Word ShortHand_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

            switch (MR_tag((MR_Word) ShortHand_61)) {
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

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__SubGoal_86, 0))));
    MR_Word Var_38;
    MR_Word Var_20;

    (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_37, 0)))) == (MR_Integer) 3)));
    if ((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(3, Var_37, 1))));
      (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  if (!((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded))
  {
    MR_Word GoalExpr_97 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__SubGoal_86, 0))));
    MR_Word SymName_104;
    MR_Word Var_105;
    MR_String Var_106;
    MR_Word Var_107;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Integer Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;

    (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) GoalExpr_97)) == (MR_Integer) 2);
    if ((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
    {
      SymName_104 = ((MR_Word) ((MR_hl_field(2, GoalExpr_97, 5))));
      (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) SymName_104)) == (MR_Integer) 1);
      if ((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        Var_105 = ((MR_Word) ((MR_hl_field(1, SymName_104, 0))));
        Var_106 = ((MR_String) ((MR_hl_field(1, SymName_104, 1))));
        Var_107 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_105, Var_107);
        if ((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
          (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (strcmp(Var_106, (MR_String) "false") == 0);
      }
    }
  }
  if ((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
    check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s * env_ptr = (struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__commit_0) == 0)
    {
      hlds__goal_contains__goal_contains_goal_2_p_0((env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9, &(env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__SubGoal_86, check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_2, env_ptr);
      (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0(
  MR_Word InstMap0_7,
  MR_Word Goal0ContainsTrace_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  struct check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0_s env;

  (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9 = Goal0_9;
  {
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9, 1))));
    MR_Word Goal0CanLoopOrThrow_15;
    MR_Word Detism_16;
    MR_Word Purity_17;
    MR_Word STATE_VARIABLE_ModuleInfo_1_33;
    MR_Word STATE_VARIABLE_ModuleInfo_2_34;
    MR_Word STATE_VARIABLE_Info_1_35;
    MR_Word Var_12;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_ModuleInfo_1_33);
    hlds__goal_form__goal_can_loop_or_throw_imaf_4_p_0((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9, &Goal0CanLoopOrThrow_15, STATE_VARIABLE_ModuleInfo_1_33, &STATE_VARIABLE_ModuleInfo_2_34);
    check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(STATE_VARIABLE_ModuleInfo_2_34, STATE_VARIABLE_Info_0_31, &STATE_VARIABLE_Info_1_35);
    Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
    Purity_17 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_13);
    (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Detism_16 == (MR_Integer) 7);
    if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
    {
      switch (Purity_17) {
        default:
          (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Goal0ContainsTrace_8 == (MR_Integer) 1);
        if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
        {
          {
            MR_Word Var_94;

            check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_1_35, &Var_94);
            (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_94);
          }
          if (!((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded))
            (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_15 == (MR_Integer) 1);
        }
      }
    }
    if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
    {
      MR_Word Context_18;
      MR_Word NonLocals0_25;
      MR_Integer CostDelta_26;
      MR_Word STATE_VARIABLE_Info_2_79;
      MR_Word STATE_VARIABLE_Info_3_80;

      Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
      (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = check_hlds__simplify__simplify_info__simplify_do_warn_dodgy_simple_code_1_p_0(STATE_VARIABLE_Info_1_35);
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_3(&env);
        (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = !((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded);
      }
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        MR_Word MainPieces_21;
        MR_Word Msg_23;
        MR_Word Spec_24;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_77;

        Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[9])));
        Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[2])));
        MainPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[7])), Var_43);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (MainPieces_21));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[25])));
        }
        {
          Msg_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Msg_23, 0) = ((MR_Box) (Context_18));
          MR_hl_field(2, Msg_23, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Msg_23));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal.maybe_simplify_goal_to_true_or_fail\'/6"));
          MR_hl_field(2, Spec_24, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_1[1])));
          MR_hl_field(2, Spec_24, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[2])));
          MR_hl_field(2, Spec_24, 3) = ((MR_Box) (Var_77));
        }
        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(Spec_24, STATE_VARIABLE_Info_1_35, &STATE_VARIABLE_Info_2_79);
      }
      else
        STATE_VARIABLE_Info_2_79 = STATE_VARIABLE_Info_1_35;
      NonLocals0_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
      (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_25);
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
        STATE_VARIABLE_Info_3_80 = STATE_VARIABLE_Info_2_79;
      else
        check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_2_79, &STATE_VARIABLE_Info_3_80);
      transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9, &CostDelta_26);
      check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_26, STATE_VARIABLE_Info_3_80, STATE_VARIABLE_Info_32);
      *Goal_10 = hlds__make_goal__fail_goal_with_context_1_f_0(Context_18);
    }
    else
    {
      MR_Word MaxSoln_27;
      MR_Word InstMapDelta_28;
      MR_Word NonLocalVars_29;
      MR_Word VarTable_30;
      MR_Word ModuleInfo_87;
      MR_Word Var_95;

      parse_tree__prog_data__determinism_components_3_p_0(Detism_16, &Var_95, &MaxSoln_27);
      (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((MR_Integer) 1 == Var_95);
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (MaxSoln_27 != (MR_Integer) 0);
        if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
        {
          InstMapDelta_28 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
          NonLocalVars_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_35, &ModuleInfo_87);
          check_hlds__simplify__simplify_info__simplify_info_get_var_table_2_p_0(STATE_VARIABLE_Info_1_35, &VarTable_30);
          (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = hlds__instmap__instmap_delta_no_output_vars_5_p_0(ModuleInfo_87, VarTable_30, InstMap0_7, InstMapDelta_28, NonLocalVars_29);
          if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
          {
            switch (Purity_17) {
              default:
                (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = MR_TRUE;
                break;
            }
            if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
            {
              (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Goal0ContainsTrace_8 == (MR_Integer) 1);
              if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
              {
                {
                  MR_Word Var_96;

                  check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(STATE_VARIABLE_Info_1_35, &Var_96);
                  (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = ((MR_Integer) 0 == Var_96);
                }
                if (!((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded))
                  (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = (Goal0CanLoopOrThrow_15 == (MR_Integer) 1);
              }
            }
          }
        }
      }
      if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
      {
        MR_Word STATE_VARIABLE_Info_5_84;
        MR_Word Context_88;
        MR_Word NonLocals0_89;
        MR_Integer CostDelta_90;

        NonLocals0_89 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
        (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals0_89);
        if ((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__succeeded)
          STATE_VARIABLE_Info_5_84 = STATE_VARIABLE_Info_1_35;
        else
          check_hlds__simplify__simplify_info__simplify_info_set_rerun_quant_instmap_delta_2_p_0(STATE_VARIABLE_Info_1_35, &STATE_VARIABLE_Info_5_84);
        transform_hlds__pd_cost__goal_cost_2_p_0((env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9, &CostDelta_90);
        check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(CostDelta_90, STATE_VARIABLE_Info_5_84, STATE_VARIABLE_Info_32);
        Context_88 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
        *Goal_10 = hlds__make_goal__true_goal_with_context_1_f_0(Context_88);
      }
      else
      {
        *Goal_10 = (env).check_hlds__simplify__simplify_goal__maybe_simplify_goal_to_true_or_fail_6_p_0_env_0__Goal0_9;
        *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_1_35;
      }
    }
  }
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
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          check_hlds__simplify__simplify_goal_call__simplify_goal_generic_call_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 1:
          check_hlds__simplify__simplify_goal_call__simplify_goal_foreign_proc_10_p_0(STATE_VARIABLE_GoalExpr_0_73, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_0_79, STATE_VARIABLE_Info_80);
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_17 = ((MR_Unsigned) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, 1))) & (MR_Integer) 1);
            MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, 2))));

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
            MR_Word ShortHand0_53 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_GoalExpr_0_73, 1))));

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
                  MR_Word GoalType_54 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_53, 0))) & (MR_Integer) 3);
                  MR_Word Outer_55 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 1))));
                  MR_Word Inner_56 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 2))));
                  MR_Word MaybeOutputVars_57 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 3))));
                  MR_Word MainGoal_58 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 4))));
                  MR_Word OrElseGoals_59 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 5))));
                  MR_Word OrElseInners_60 = ((MR_Word) ((MR_hl_field(1, ShortHand0_53, 6))));
                  MR_Word ModuleInfo_61;
                  MR_Word Globals_62;
                  MR_Word Target_63;
                  MR_Word STATE_VARIABLE_Info_12_142;

                  check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_79, &ModuleInfo_61);
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_61, &Globals_62);
                  libs__globals__get_target_2_p_0(Globals_62, &Target_63);
                  switch (Target_63) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Info_12_142 = STATE_VARIABLE_Info_0_79;
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
                          MR_hl_field(0, StmSpec_67, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[0])));
                          MR_hl_field(0, StmSpec_67, 3) = ((MR_Box) (Var_141));
                          MR_hl_field(0, StmSpec_67, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[19])));
                        }
                        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(StmSpec_67, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_12_142);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word StmSpec_154;
                        MR_Word Var_163;

                        Var_163 = hlds__hlds_goal__goal_info_get_context_1_f_0(STATE_VARIABLE_GoalInfo_0_75);
                        {
                          StmSpec_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, StmSpec_154, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.simplify.simplify_goal.simplify_goal_expr\'/10"));
                          MR_hl_field(0, StmSpec_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(0, StmSpec_154, 2) = ((MR_Box) (MR_mkword(3, &check_hlds__simplify__simplify_goal_scalar_common_1[0])));
                          MR_hl_field(0, StmSpec_154, 3) = ((MR_Box) (Var_163));
                          MR_hl_field(0, StmSpec_154, 4) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__simplify_goal_scalar_common_2[23])));
                        }
                        check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(StmSpec_154, STATE_VARIABLE_Info_0_79, &STATE_VARIABLE_Info_12_142);
                      }
                      break;
                  }
                  check_hlds__simplify__simplify_goal_disj__simplify_goal_atomic_goal_16_p_0(GoalType_54, Outer_55, Inner_56, MaybeOutputVars_57, MainGoal_58, OrElseGoals_59, OrElseInners_60, STATE_VARIABLE_GoalExpr_74, STATE_VARIABLE_GoalInfo_0_75, STATE_VARIABLE_GoalInfo_76, NestedContext0_13, InstMap0_14, STATE_VARIABLE_Common_0_77, STATE_VARIABLE_Common_78, STATE_VARIABLE_Info_12_142, STATE_VARIABLE_Info_80);
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
