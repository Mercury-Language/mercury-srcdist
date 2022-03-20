/*
** Automatically generated from `simplify_goal_scope.m'
** by the Mercury compiler,
** version rotd-2022-03-20
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


// :- module check_hlds.simplify.simplify_goal_scope.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_goal_scope__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_goal_scope.mih"


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
#include "ops.mih"
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
#include "time.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0;

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__319__1_2_p_0(
  MR_Word TermVar_14,
  MR_Word LHSVar_34);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__308__1_4_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__disable_simplify_warning_3_p_0(
  MR_Word Warning_4,
  MR_Word STATE_VARIABLE_Tasks_0_6,
  MR_Word * STATE_VARIABLE_Tasks_7);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
  MR_Word MaybeCompiletimeExpr_8,
  MR_Word MaybeRuntimeExpr_9,
  MR_Word SubGoal_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
  MR_Word TraceExpr_4,
  MR_Word Info_5);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0(
  MR_Word DefinedWhere_12,
  MR_Word VarTypes_13,
  MR_Word TermVar_14,
  MR_Word Conjunct_15,
  MR_Word Conjuncts_16,
  MR_Word STATE_VARIABLE_ElimVars_0_48,
  MR_Word * STATE_VARIABLE_ElimVars_49,
  MR_Word STATE_VARIABLE_VarArgMap_0_50,
  MR_Word * STATE_VARIABLE_VarArgMap_51,
  MR_Word STATE_VARIABLE_ConstStructDb_0_52,
  MR_Word * STATE_VARIABLE_ConstStructDb_53);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
  MR_Word Reason0_5,
  MR_Word * Reason_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_3[1][1];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_4[1][7];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_5[1][5];

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_6[1][6];




static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_1[2][2] = {
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

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0])),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_4[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_6[0])),
    ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_goal_scope_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0)),
    ((MR_Box) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__simplify_goal_scope__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_goal_scope",
  (MR_String) "var_to_arg_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__simplify_goal_scope__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__const_struct__type_ctor_info_const_struct_arg_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__319__1_2_p_0(
  MR_Word TermVar_14,
  MR_Word LHSVar_34)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), ((MR_Box) (TermVar_14)), ((MR_Box) (LHSVar_34)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__308__1_4_p_0(
  MR_Word HeadVar__1_67,
  MR_Word * HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70)
{
  MR_Box conv0_HeadVar__2_68;

  mercury__map__det_remove_4_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ((MR_Box) (HeadVar__1_67)), &conv0_HeadVar__2_68, HeadVar__3_69, HeadVar__4_70);
  *HeadVar__2_68 = ((MR_Word) (conv0_HeadVar__2_68));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__disable_simplify_warning_3_p_0(
  MR_Word Warning_4,
  MR_Word STATE_VARIABLE_Tasks_0_6,
  MR_Word * STATE_VARIABLE_Tasks_7)
{
  switch (Warning_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      {
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Tasks_0_6, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Tasks_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 0)));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Tasks_7 = STATE_VARIABLE_Tasks_0_6;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Tasks_7 = STATE_VARIABLE_Tasks_0_6;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_Tasks_7 = STATE_VARIABLE_Tasks_0_6;
      break;
    case (MR_Integer) 3:
      {
        MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Tasks_0_6, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Tasks_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Tasks_7;

  check_hlds__simplify__simplify_goal_scope__disable_simplify_warning_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Tasks_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Tasks_7));
}

void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_scope_10_p_0(
  MR_Word GoalExpr0_11,
  MR_Word * GoalExpr_12,
  MR_Word GoalInfo0_13,
  MR_Word * GoalInfo_14,
  MR_Word NestedContext0_15,
  MR_Word InstMap0_16,
  MR_Word Common0_17,
  MR_Word * Common_18,
  MR_Word STATE_VARIABLE_Info_0_89,
  MR_Word * STATE_VARIABLE_Info_90)
{
  MR_bool succeeded;
  MR_Word Reason0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 1))));
  MR_Word SubGoal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_11, (MR_Integer) 2))));
  MR_Word TermVar_22;
  MR_Word Var_91;

  succeeded = ((((MR_tag((MR_Word) Reason0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
  if (succeeded)
  {
    TermVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_20, (MR_Integer) 1))));
    Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_20, (MR_Integer) 2))) & (MR_Integer) 3);
    succeeded = (Var_91 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word ModuleInfo0_23;
    MR_Word ConstStructDb0_24;
    MR_Word ConstStructEnabled_25;

    check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_89, &ModuleInfo0_23);
    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo0_23, &ConstStructDb0_24);
    hlds__const_struct__const_struct_db_get_ground_term_enabled_2_p_0(ConstStructDb0_24, &ConstStructEnabled_25);
    switch (ConstStructEnabled_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Globals_26;
          MR_Word OptTuple_27;
          MR_Word CommonStruct_28;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_23, &Globals_26);
          libs__globals__get_opt_tuple_2_p_0(Globals_26, &OptTuple_27);
          CommonStruct_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_27, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
          switch (CommonStruct_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word SubGoal_29;
                MR_Word NewReason_30;

                check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(SubGoal0_21, &SubGoal_29, NestedContext0_15, InstMap0_16, Common0_17, Common_18, STATE_VARIABLE_Info_0_89, STATE_VARIABLE_Info_90);
                {
                  NewReason_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NewReason_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), NewReason_30, 1) = ((MR_Box) (TermVar_22));
                  MR_hl_field(MR_mktag(3), NewReason_30, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *GoalExpr_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (NewReason_30));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_29));
                }
                *GoalInfo_14 = GoalInfo0_13;
              }
              break;
            case (MR_Integer) 0:
              {
                *GoalExpr_12 = GoalExpr0_11;
                *GoalInfo_14 = GoalInfo0_13;
                *Common_18 = Common0_17;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_0_89;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word HeadConjunct_36;
          MR_Word TailConjuncts_37;
          MR_Word VarTypes_38;
          MR_Word DefinedWhere_39;
          MR_Word ElimVars_40;
          MR_Word VarArgMap_41;
          MR_Word ConstStructDb_42;
          MR_Word ModuleInfo_43;
          MR_Word VarArgs_44;
          MR_Integer TermConstNum_47;
          MR_Word TermConstStruct_48;
          MR_Word TermConsId_49;
          MR_Word ConsId_50;
          MR_Word RHS_51;
          MR_Word Unification_52;
          MR_Word InstMapDelta_53;
          MR_Word TermInst_54;
          MR_Word UnifyMode_55;
          MR_Word Var_96;
          MR_Word STATE_VARIABLE_Info_97_97;
          MR_Word HeadConjunctPrime_34;
          MR_Word TailConjunctsPrime_35;
          MR_Word SubGoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_21, (MR_Integer) 0))));
          MR_Word Conjuncts_33;
          MR_Word Var_92;
          MR_Integer TermConstNumPrime_46;
          MR_Word TypeInfo_265_265;
          MR_Word TermArg_45;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_Word Var_263;

          succeeded = ((((MR_tag((MR_Word) SubGoalExpr_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 1))) & (MR_Integer) 1);
            Conjuncts_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 2))));
            succeeded = (Var_92 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Conjuncts_33 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                HeadConjunctPrime_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_33, (MR_Integer) 0))));
                TailConjunctsPrime_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_33, (MR_Integer) 1))));
              }
            }
          }
          if (succeeded)
          {
            HeadConjunct_36 = HeadConjunctPrime_34;
            TailConjuncts_37 = TailConjunctsPrime_35;
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "from_ground_term_construct scope is not conjunction");
              return;
            }
          check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(STATE_VARIABLE_Info_0_89, &VarTypes_38);
          check_hlds__simplify__simplify_info__simplify_info_get_defined_where_2_p_0(STATE_VARIABLE_Info_0_89, &DefinedWhere_39);
          Var_96 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0));
          check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0(DefinedWhere_39, VarTypes_38, TermVar_22, HeadConjunct_36, TailConjuncts_37, (MR_Word) ((MR_Unsigned) 0U), &ElimVars_40, Var_96, &VarArgMap_41, ConstStructDb0_24, &ConstStructDb_42);
          hlds__hlds_module__module_info_set_const_struct_db_3_p_0(ConstStructDb_42, ModuleInfo0_23, &ModuleInfo_43);
          check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(ElimVars_40, STATE_VARIABLE_Info_0_89, &STATE_VARIABLE_Info_97_97);
          check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(ModuleInfo_43, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_90);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), VarArgMap_41, &VarArgs_44);
          succeeded = (VarArgs_44 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarArgs_44, (MR_Integer) 0))));
            Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarArgs_44, (MR_Integer) 1))));
            Var_263 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
            TermArg_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 1))));
            TypeInfo_265_265 = (MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_265_265, ((MR_Box) (TermVar_22)), ((MR_Box) (Var_263)));
            if (succeeded)
            {
              succeeded = (Var_100 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) TermArg_45)) == (MR_Integer) 0);
                if (succeeded)
                  TermConstNumPrime_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TermArg_45, (MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
            TermConstNum_47 = TermConstNumPrime_46;
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_goal_scope\'/10", (MR_String) "unexpected VarArgMap");
              return;
            }
          hlds__const_struct__lookup_const_struct_num_3_p_0(ConstStructDb_42, TermConstNum_47, &TermConstStruct_48);
          TermConsId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermConstStruct_48, (MR_Integer) 0))));
          {
            ConsId_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsId_50, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(MR_mktag(3), ConsId_50, 1) = ((MR_Box) (TermConstNum_47));
            MR_hl_field(MR_mktag(3), ConsId_50, 2) = ((MR_Box) (TermConsId_49));
          }
          {
            RHS_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RHS_51, 0) = ((MR_Box) (ConsId_50));
            MR_hl_field(MR_mktag(1), RHS_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), RHS_51, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Unification_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Unification_52, 0) = ((MR_Box) (TermVar_22));
            MR_hl_field(MR_mktag(0), Unification_52, 1) = ((MR_Box) (ConsId_50));
            MR_hl_field(MR_mktag(0), Unification_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Unification_52, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Unification_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__simplify_goal_scope_scalar_common_3[0])));
            MR_hl_field(MR_mktag(0), Unification_52, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Unification_52, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          InstMapDelta_53 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_13);
          hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta_53, TermVar_22, &TermInst_54);
          {
            UnifyMode_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnifyMode_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), UnifyMode_55, 1) = ((MR_Box) (TermInst_54));
            MR_hl_field(MR_mktag(0), UnifyMode_55, 2) = ((MR_Box) (TermInst_54));
            MR_hl_field(MR_mktag(0), UnifyMode_55, 3) = ((MR_Box) (TermInst_54));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TermVar_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RHS_51));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (UnifyMode_55));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Unification_52));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[1]));
          }
          *GoalInfo_14 = GoalInfo0_13;
          *Common_18 = Common0_17;
        }
        break;
    }
  }
  else
  {
    MR_Word Common1_61;
    MR_Word Goal1_62;
    MR_Word GoalExpr1_63;
    MR_Word Goal_72;
    MR_Word STATE_VARIABLE_Info_122_122;
    MR_Word SubGoal_127;
    MR_Word HeadWarning_57;
    MR_Word TailWarnings_58;
    MR_Word FinalReason_65;
    MR_Word FinalSubGoal_66;

    succeeded = ((MR_tag((MR_Word) Reason0_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      HeadWarning_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason0_20, (MR_Integer) 0))) & (MR_Integer) 7);
      TailWarnings_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason0_20, (MR_Integer) 1))));
      {
        MR_Word Tasks0_59;
        MR_Word ScopeTasks_60;
        MR_Word Var_119;
        MR_Word STATE_VARIABLE_Info_120_120;
        MR_Word STATE_VARIABLE_Info_121_121;
        MR_Box conv1_ScopeTasks_60;

        check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(STATE_VARIABLE_Info_0_89, &Tasks0_59);
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (HeadWarning_57));
          MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (TailWarnings_58));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), (MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0), (MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_2[2]), Var_119, ((MR_Box) (Tasks0_59)), &conv1_ScopeTasks_60);
        ScopeTasks_60 = ((MR_Word) (conv1_ScopeTasks_60));
        check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(ScopeTasks_60, STATE_VARIABLE_Info_0_89, &STATE_VARIABLE_Info_120_120);
        check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(SubGoal0_21, &SubGoal_127, NestedContext0_15, InstMap0_16, Common0_17, &Common1_61, STATE_VARIABLE_Info_120_120, &STATE_VARIABLE_Info_121_121);
        check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(Tasks0_59, STATE_VARIABLE_Info_121_121, &STATE_VARIABLE_Info_122_122);
      }
    }
    else
      check_hlds__simplify__simplify_goal__simplify_goal_8_p_0(SubGoal0_21, &SubGoal_127, NestedContext0_15, InstMap0_16, Common0_17, &Common1_61, STATE_VARIABLE_Info_0_89, &STATE_VARIABLE_Info_122_122);
    check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(Reason0_20, SubGoal_127, GoalInfo0_13, &Goal1_62);
    GoalExpr1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_62, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExpr1_63)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr1_63, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      FinalReason_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_63, (MR_Integer) 1))));
      FinalSubGoal_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr1_63, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) FinalReason_65)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Goal_72 = Goal1_62;
            *Common_18 = Common0_17;
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
          }
          break;
        case (MR_Integer) 1:
          {
            Goal_72 = Goal1_62;
            *Common_18 = Common1_61;
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
          }
          break;
        case (MR_Integer) 2:
          {
            Goal_72 = Goal1_62;
            *Common_18 = Common0_17;
            *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FinalReason_65, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Goal_72 = Goal1_62;
                *Common_18 = Common1_61;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                Goal_72 = FinalSubGoal_66;
                *Common_18 = Common1_61;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
              }
              break;
            case (MR_Integer) 4:
              {
                Goal_72 = Goal1_62;
                *Common_18 = Common0_17;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), FinalReason_65, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (Var_264) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      Goal_72 = Goal1_62;
                      *Common_18 = Common0_17;
                      *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      Goal_72 = Goal1_62;
                      *Common_18 = Common1_61;
                      *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                Goal_72 = Goal1_62;
                *Common_18 = Common1_61;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word MaybeCompiletimeExpr_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalReason_65, (MR_Integer) 1))));
                MR_Word MaybeRuntimeExpr_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FinalReason_65, (MR_Integer) 2))));

                succeeded = check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(STATE_VARIABLE_Info_122_122);
                if (succeeded)
                  check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(MaybeCompiletimeExpr_84, MaybeRuntimeExpr_85, FinalSubGoal_66, Goal1_62, &Goal_72, STATE_VARIABLE_Info_122_122, STATE_VARIABLE_Info_90);
                else
                {
                  Goal_72 = Goal1_62;
                  *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
                }
                *Common_18 = Common0_17;
              }
              break;
            case (MR_Integer) 8:
              {
                Goal_72 = Goal1_62;
                *Common_18 = Common0_17;
                *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
              }
              break;
          }
          break;
      }
    }
    else
    {
      Goal_72 = Goal1_62;
      *Common_18 = Common1_61;
      *STATE_VARIABLE_Info_90 = STATE_VARIABLE_Info_122_122;
    }
    *GoalExpr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_72, (MR_Integer) 0))));
    *GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_72, (MR_Integer) 1))));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_goal_trace_goal_7_p_0(
  MR_Word MaybeCompiletimeExpr_8,
  MR_Word MaybeRuntimeExpr_9,
  MR_Word SubGoal_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_Word KeepGoal_15;

  if ((MaybeCompiletimeExpr_8 == (MR_Word) ((MR_Unsigned) 0U)))
    KeepGoal_15 = (MR_Integer) 1;
  else
  {
    MR_Word CompiletimeExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompiletimeExpr_8, (MR_Integer) 0))));

    KeepGoal_15 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(CompiletimeExpr_14, STATE_VARIABLE_Info_0_33);
  }
  switch (KeepGoal_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word GoalInfo0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
        MR_Word Context_18;
        MR_Word DeletedCallCallees0_19;
        MR_Word SubGoalCalledProcs_20;
        MR_Word DeletedCallCallees_21;

        Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_17);
        *Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_18);
        check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(STATE_VARIABLE_Info_0_33, &DeletedCallCallees0_19);
        SubGoalCalledProcs_20 = hlds__goal_util__goal_proc_refs_1_f_0(SubGoal_10);
        mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SubGoalCalledProcs_20, DeletedCallCallees0_19, &DeletedCallCallees_21);
        check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(DeletedCallCallees_21, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      }
      break;
    case (MR_Integer) 1:
      {
        if ((MaybeRuntimeExpr_9 == (MR_Word) ((MR_Unsigned) 0U)))
          *Goal_12 = Goal0_11;
        else
        {
          MR_Word ModuleInfo_23;
          MR_Word Globals_24;
          MR_Word Target_25;
          MR_Word PrivateBuiltin_26;
          MR_Word EvalAttributes_28;
          MR_Word CondGoal_31;
          MR_Word GoalExpr_32;
          MR_Word STATE_VARIABLE_EvalAttributes_39_39;
          MR_Word STATE_VARIABLE_EvalAttributes_42_42;
          MR_Word STATE_VARIABLE_EvalAttributes_44_44;
          MR_Word STATE_VARIABLE_EvalAttributes_46_46;
          MR_Word STATE_VARIABLE_EvalAttributes_48_48;
          MR_Word STATE_VARIABLE_EvalAttributes_50_50;
          MR_Word STATE_VARIABLE_EvalAttributes_52_52;
          MR_Word Var_59;
          MR_Word Var_65;
          MR_Word GoalInfo0_69;
          MR_Word Context_70;

          check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_33, &ModuleInfo_23);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_23, &Globals_24);
          libs__globals__get_target_2_p_0(Globals_24, &Target_25);
          PrivateBuiltin_26 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          switch (Target_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_EvalAttributes_39_39 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_EvalAttributes_39_39 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 1);
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_EvalAttributes_39_39 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 2);
              break;
          }
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_EvalAttributes_39_39, &STATE_VARIABLE_EvalAttributes_42_42);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_EvalAttributes_42_42, &STATE_VARIABLE_EvalAttributes_44_44);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, STATE_VARIABLE_EvalAttributes_44_44, &STATE_VARIABLE_EvalAttributes_46_46);
          parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_EvalAttributes_46_46, &STATE_VARIABLE_EvalAttributes_48_48);
          parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_EvalAttributes_48_48, &STATE_VARIABLE_EvalAttributes_50_50);
          parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_EvalAttributes_50_50, &STATE_VARIABLE_EvalAttributes_52_52);
          parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_EvalAttributes_52_52, &EvalAttributes_28);
          GoalInfo0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));
          Context_70 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_69);
          Var_59 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
          hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_23, (MR_Integer) 0, PrivateBuiltin_26, (MR_String) "trace_evaluate_runtime_condition", (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_59, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), EvalAttributes_28, MaybeRuntimeExpr_9, (MR_String) "", Context_70, &CondGoal_31);
          Var_65 = hlds__make_goal__true_goal_0_f_0();
          {
            GoalExpr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), GoalExpr_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), GoalExpr_32, 2) = ((MR_Box) (CondGoal_31));
            MR_hl_field(MR_mktag(3), GoalExpr_32, 3) = ((MR_Box) (SubGoal_10));
            MR_hl_field(MR_mktag(3), GoalExpr_32, 4) = ((MR_Box) (Var_65));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_32));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_69));
          }
        }
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
      }
      break;
  }
}

static MR_Word MR_CALL 
check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(
  MR_Word TraceExpr_4,
  MR_Word Info_5)
{
  MR_bool succeeded;
  MR_Word Result_6;

  switch (MR_tag((MR_Word) TraceExpr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word BaseExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TraceExpr_4, (MR_Integer) 0))));
        MR_Word ModuleInfo_18;
        MR_Word Globals_19;

        check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(Info_5, &ModuleInfo_18);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_18, &Globals_19);
        switch (MR_tag((MR_Word) BaseExpr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String FlagName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), BaseExpr_7, (MR_Integer) 0))));
              MR_Word Flags_21;

              libs__globals__lookup_accumulating_option_3_p_0(Globals_19, (MR_Integer) 159, &Flags_21);
              succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FlagName_20)), Flags_21);
              if (succeeded)
                Result_6 = (MR_Integer) 1;
              else
                Result_6 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Grade_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BaseExpr_7, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (Grade_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 9:
                  {
                    MR_Word Target_27;

                    libs__globals__get_target_2_p_0(Globals_19, &Target_27);
                    succeeded = (Target_27 == (MR_Integer) 0);
                    if (succeeded)
                      Result_6 = (MR_Integer) 1;
                    else
                      Result_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 10:
                  {
                    MR_Word Target_49;

                    libs__globals__get_target_2_p_0(Globals_19, &Target_49);
                    succeeded = (Target_49 == (MR_Integer) 1);
                    if (succeeded)
                      Result_6 = (MR_Integer) 1;
                    else
                      Result_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 0:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 228, &Result_6);
                  break;
                case (MR_Integer) 11:
                  {
                    MR_Word Target_50;

                    libs__globals__get_target_2_p_0(Globals_19, &Target_50);
                    succeeded = (Target_50 == (MR_Integer) 2);
                    if (succeeded)
                      Result_6 = (MR_Integer) 1;
                    else
                      Result_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Word NotResult_26;

                    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 302, &NotResult_26);
                    mercury__bool__not_2_p_0(NotResult_26, &Result_6);
                  }
                  break;
                case (MR_Integer) 8:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 302, &Result_6);
                  break;
                case (MR_Integer) 4:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 258, &Result_6);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ProfCalls_23;
                    MR_Word ProfTime_24;
                    MR_Word ProfMem_25;
                    MR_Word Var_42;
                    MR_Word Var_43;
                    MR_Word Var_44;

                    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 234, &ProfCalls_23);
                    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 235, &ProfTime_24);
                    libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 236, &ProfMem_25);
                    {
                      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ProfMem_25));
                      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ProfTime_24));
                      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
                    }
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ProfCalls_23));
                      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
                    }
                    mercury__bool__or_list_2_p_0(Var_42, &Result_6);
                  }
                  break;
                case (MR_Integer) 3:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 237, &Result_6);
                  break;
                case (MR_Integer) 6:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 271, &Result_6);
                  break;
                case (MR_Integer) 1:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 275, &Result_6);
                  break;
                case (MR_Integer) 5:
                  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 260, &Result_6);
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Level_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), BaseExpr_7, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word TraceLevel_29;
              MR_Word PredInfo_30;
              MR_Word ProcInfo_31;
              MR_Word EffTraceLevel_32;

              libs__globals__get_trace_level_2_p_0(Globals_19, &TraceLevel_29);
              check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(Info_5, &PredInfo_30, &ProcInfo_31);
              EffTraceLevel_32 = libs__trace_params__eff_trace_level_4_f_0(ModuleInfo_18, PredInfo_30, ProcInfo_31, TraceLevel_29);
              switch (Level_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Result_6 = libs__trace_params__at_least_at_deep_1_f_0(EffTraceLevel_32);
                  break;
                case (MR_Integer) 0:
                  Result_6 = libs__trace_params__at_least_at_shallow_1_f_0(EffTraceLevel_32);
                  break;
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExprA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TraceExpr_4, (MR_Integer) 0))));
        MR_Word ResultA_9;

        ResultA_9 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(ExprA_8, Info_5);
        Result_6 = mercury__bool__not_1_f_0(ResultA_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Op_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), TraceExpr_4, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ExprB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_4, (MR_Integer) 2))));
        MR_Word ResultB_12;
        MR_Word ExprA_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TraceExpr_4, (MR_Integer) 1))));
        MR_Word ResultA_14;

        ResultA_14 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(ExprA_13, Info_5);
        ResultB_12 = check_hlds__simplify__simplify_goal_scope__evaluate_compile_time_condition_2_f_0(ExprB_11, Info_5);
        switch (Op_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Result_6 = mercury__bool__and_2_f_0(ResultA_14, ResultB_12);
            break;
          case (MR_Integer) 0:
            Result_6 = mercury__bool__or_2_f_0(ResultA_14, ResultB_12);
            break;
        }
      }
      break;
  }
  return Result_6;
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__319__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_68;
  MR_Word conv0_HeadVar__4_70;

  check_hlds__simplify__simplify_goal_scope__IntroducedFrom__pred__simplify_construct_ground_terms__308__1_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_68, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_70);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_68));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_70));
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0(
  MR_Word DefinedWhere_12,
  MR_Word VarTypes_13,
  MR_Word TermVar_14,
  MR_Word Conjunct_15,
  MR_Word Conjuncts_16,
  MR_Word STATE_VARIABLE_ElimVars_0_48,
  MR_Word * STATE_VARIABLE_ElimVars_49,
  MR_Word STATE_VARIABLE_VarArgMap_0_50,
  MR_Word * STATE_VARIABLE_VarArgMap_51,
  MR_Word STATE_VARIABLE_ConstStructDb_0_52,
  MR_Word * STATE_VARIABLE_ConstStructDb_53)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_15, (MR_Integer) 0))));
    MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_15, (MR_Integer) 1))));
    MR_Word LHSVar_34;
    MR_Word ConsId_35;
    MR_Word RHSVars_36;
    MR_Word TermType_37;
    MR_Word Arg_38;
    MR_Word STATE_VARIABLE_VarArgMap_57_57;
    MR_Word STATE_VARIABLE_ConstStructDb_58_58;
    MR_Word STATE_VARIABLE_VarArgMap_59_59;
    MR_Word LHSVarPrime_27;
    MR_Word ConsIdPrime_28;
    MR_Word RHSVarsPrime_29;
    MR_Word Unify_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unify_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_20, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Unify_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        LHSVarPrime_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_25, (MR_Integer) 0))));
        ConsIdPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_25, (MR_Integer) 1))));
        RHSVarsPrime_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unify_25, (MR_Integer) 2))));
      }
    }
    if (succeeded)
    {
      LHSVar_34 = LHSVarPrime_27;
      ConsId_35 = ConsIdPrime_28;
      RHSVars_36 = RHSVarsPrime_29;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/11", (MR_String) "not construction unification");
        return;
      }
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_13, LHSVar_34, &TermType_37);
    if ((RHSVars_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        Arg_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Arg_38, 0) = ((MR_Box) (ConsId_35));
        MR_hl_field(MR_mktag(1), Arg_38, 1) = ((MR_Box) (TermType_37));
      }
      STATE_VARIABLE_VarArgMap_57_57 = STATE_VARIABLE_VarArgMap_0_50;
      STATE_VARIABLE_ConstStructDb_58_58 = STATE_VARIABLE_ConstStructDb_0_52;
    }
    else
    {
      MR_Word RHSArgs_41;
      MR_Word InstMapDelta_42;
      MR_Word TermInst_43;
      MR_Word ConstStruct_44;
      MR_Integer ConstNum_45;
      MR_Box conv2_STATE_VARIABLE_VarArgMap_57_57;

      mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), (MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_2[1]), RHSVars_36, &RHSArgs_41, ((MR_Box) (STATE_VARIABLE_VarArgMap_0_50)), &conv2_STATE_VARIABLE_VarArgMap_57_57);
      STATE_VARIABLE_VarArgMap_57_57 = ((MR_Word) (conv2_STATE_VARIABLE_VarArgMap_57_57));
      InstMapDelta_42 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_21);
      hlds__instmap__instmap_delta_lookup_var_3_p_0(InstMapDelta_42, LHSVar_34, &TermInst_43);
      {
        ConstStruct_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConstStruct_44, 0) = ((MR_Box) (ConsId_35));
        MR_hl_field(MR_mktag(0), ConstStruct_44, 1) = ((MR_Box) (RHSArgs_41));
        MR_hl_field(MR_mktag(0), ConstStruct_44, 2) = ((MR_Box) (TermType_37));
        MR_hl_field(MR_mktag(0), ConstStruct_44, 3) = ((MR_Box) (TermInst_43));
        MR_hl_field(MR_mktag(0), ConstStruct_44, 4) = (MR_Box) ((MR_Unsigned) (DefinedWhere_12));
      }
      hlds__const_struct__lookup_insert_const_struct_4_p_0(ConstStruct_44, &ConstNum_45, STATE_VARIABLE_ConstStructDb_0_52, &STATE_VARIABLE_ConstStructDb_58_58);
      {
        Arg_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg_38, 0) = ((MR_Box) (ConstNum_45));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), (MR_Word) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_arg_0), ((MR_Box) (LHSVar_34)), ((MR_Box) (Arg_38)), STATE_VARIABLE_VarArgMap_57_57, &STATE_VARIABLE_VarArgMap_59_59);
    if ((Conjuncts_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_64;

      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&check_hlds__simplify__simplify_goal_scope_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (check_hlds__simplify__simplify_goal_scope__simplify_construct_ground_terms_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (TermVar_14));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (LHSVar_34));
      }
      mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140check_hlds.simplify.simplify_goal_scope.simplify_construct_ground_terms\'/11", (MR_String) "last var is not TermVar");
      *STATE_VARIABLE_ElimVars_49 = STATE_VARIABLE_ElimVars_0_48;
      *STATE_VARIABLE_VarArgMap_51 = STATE_VARIABLE_VarArgMap_59_59;
      *STATE_VARIABLE_ConstStructDb_53 = STATE_VARIABLE_ConstStructDb_58_58;
    }
    else
    {
      MR_Word HeadConjunct_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_16, (MR_Integer) 0))));
      MR_Word TailConjuncts_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_16, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ElimVars_60_60;
      MR_Word next_value_of_Conjunct_15;
      MR_Word next_value_of_Conjuncts_16;
      MR_Word next_value_of_STATE_VARIABLE_ElimVars_0_48;
      MR_Word next_value_of_STATE_VARIABLE_VarArgMap_0_50;
      MR_Word next_value_of_STATE_VARIABLE_ConstStructDb_0_52;

      {
        STATE_VARIABLE_ElimVars_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ElimVars_60_60, 0) = ((MR_Box) (LHSVar_34));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_ElimVars_60_60, 1) = ((MR_Box) (STATE_VARIABLE_ElimVars_0_48));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Conjunct_15 = HeadConjunct_46;
      next_value_of_Conjuncts_16 = TailConjuncts_47;
      next_value_of_STATE_VARIABLE_ElimVars_0_48 = STATE_VARIABLE_ElimVars_60_60;
      next_value_of_STATE_VARIABLE_VarArgMap_0_50 = STATE_VARIABLE_VarArgMap_59_59;
      next_value_of_STATE_VARIABLE_ConstStructDb_0_52 = STATE_VARIABLE_ConstStructDb_58_58;
      Conjunct_15 = next_value_of_Conjunct_15;
      Conjuncts_16 = next_value_of_Conjuncts_16;
      STATE_VARIABLE_ElimVars_0_48 = next_value_of_STATE_VARIABLE_ElimVars_0_48;
      STATE_VARIABLE_VarArgMap_0_50 = next_value_of_STATE_VARIABLE_VarArgMap_0_50;
      STATE_VARIABLE_ConstStructDb_0_52 = next_value_of_STATE_VARIABLE_ConstStructDb_0_52;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_goal_scope__try_to_merge_nested_scopes_4_p_0(
  MR_Word Reason0_5,
  MR_Word InnerGoal0_6,
  MR_Word OuterGoalInfo_7,
  MR_Word * Goal_8)
{
  MR_bool succeeded;
  MR_Word Reason_9;
  MR_Word InnerGoal_10;
  MR_Word GoalInfo_12;
  MR_Word Detism_14;
  MR_Word OuterDetism_15;

  check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(Reason0_5, &Reason_9, InnerGoal0_6, &InnerGoal_10);
  GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerGoal_10, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Reason_9)) == (MR_Integer) 0);
  if (succeeded)
  {
    Detism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_12);
    OuterDetism_15 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(OuterGoalInfo_7);
    succeeded = (Detism_14 == OuterDetism_15);
  }
  if (succeeded)
    *Goal_8 = InnerGoal_10;
  else
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (Reason_9));
      MR_hl_field(MR_mktag(3), Var_16, 2) = ((MR_Box) (InnerGoal_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OuterGoalInfo_7));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope__loop_over_any_nested_scopes_4_p_0(
  MR_Word Reason0_5,
  MR_Word * Reason_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Goal1_10;
    MR_Word Reason2_14;
    MR_Word Reason1_9;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word Vars0_12;
    MR_Word Vars1_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      Reason1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 1))));
      Goal1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_21, (MR_Integer) 2))));
      succeeded = ((MR_tag((MR_Word) Reason0_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Vars0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason0_5, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Reason1_9)) == (MR_Integer) 0);
        if (succeeded)
          Vars1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason1_9, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word Var_22;

        Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__simplify_goal_scope_scalar_common_1[0]), Vars0_12, Vars1_13);
        {
          Reason2_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Reason2_14, 0) = ((MR_Box) (Var_22));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Removable0_15;
        MR_Word Removable1_16;

        succeeded = ((((MR_tag((MR_Word) Reason0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (succeeded)
        {
          Removable0_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_5, (MR_Integer) 1))) & (MR_Integer) 1);
          succeeded = ((((MR_tag((MR_Word) Reason1_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
            Removable1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason1_9, (MR_Integer) 1))) & (MR_Integer) 1);
        }
        if (succeeded)
        {
          MR_Word Removable2_17;

          succeeded = (Removable0_15 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Removable1_16 == (MR_Integer) 0);
          if (succeeded)
            Removable2_17 = (MR_Integer) 0;
          else
            Removable2_17 = (MR_Integer) 1;
          {
            Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason2_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Reason2_14, 1) = (MR_Box) ((MR_Unsigned) (Removable2_17));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ForcePruning0_18;
          MR_Word ForcePruning1_19;
          MR_Word ForcePruning2_20;

          succeeded = ((((MR_tag((MR_Word) Reason0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            ForcePruning0_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_5, (MR_Integer) 1))) & (MR_Integer) 1);
            succeeded = ((((MR_tag((MR_Word) Reason1_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason1_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              ForcePruning1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason1_9, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = (ForcePruning0_18 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (ForcePruning1_19 == (MR_Integer) 1);
              if (succeeded)
                ForcePruning2_20 = (MR_Integer) 1;
              else
                ForcePruning2_20 = (MR_Integer) 0;
              {
                Reason2_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Reason2_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Reason2_14, 1) = (MR_Box) ((MR_Unsigned) (ForcePruning2_20));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_Reason0_5 = Reason2_14;
      MR_Word next_value_of_Goal0_7 = Goal1_10;

      // direct tailcall eliminated
      ;
      Reason0_5 = next_value_of_Reason0_5;
      Goal0_7 = next_value_of_Goal0_7;
      continue;
    }
    else
    {
      *Reason_6 = Reason0_5;
      *Goal_8 = Goal0_7;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__simplify_goal_scope____Unify____var_to_arg_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__simplify_goal_scope____Compare____var_to_arg_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__simplify__simplify_goal_scope__init(void)
{
}

void mercury__check_hlds__simplify__simplify_goal_scope__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_goal_scope__check_hlds__simplify__simplify_goal_scope__type_ctor_info_var_to_arg_map_0);
}

void mercury__check_hlds__simplify__simplify_goal_scope__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_goal_scope__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_goal_scope.
