/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2024-02-29
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


// :- module check_hlds.delay_info.
// :- implementation.

/*
INIT mercury__check_hlds__delay_info__init
ENDINIT
*/

#include "check_hlds.delay_info.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_DelayedGoalMap_0_3,
  MR_Word * STATE_VARIABLE_DelayedGoalMap_4);

static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PendingGoals_0_3,
  MR_Word * STATE_VARIABLE_PendingGoals_4,
  MR_Word STATE_VARIABLE_WaitingGoals_0_5,
  MR_Word * STATE_VARIABLE_WaitingGoals_6);

static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Goal_2,
  MR_Word AllVars_3,
  MR_Word STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * STATE_VARIABLE_WaitingGoalsTable_5);

static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DelayedGoalsTable_2,
  MR_Integer Depth_3,
  MR_Word STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * STATE_VARIABLE_WaitingGoalsTable_5);

static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word GoalNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__delay_info_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__delay_info_scalar_common_2[5][2];




static /* final */ const MR_Box check_hlds__delay_info_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[0])),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box check_hlds__delay_info_scalar_common_2[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"


static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0 = {
  (MR_String) "delay_goal_num",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = { &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0 };

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = { &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0 };

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_num",
  { check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0 },
  { check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_stack",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0),
    (MR_TypeInfo) (&check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goal_stack",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seq_stack"
};

static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0 = {
  (MR_String) "delay_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0,
  check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = { &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0 };

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = { &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0 };

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_info_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_info",
  { check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0 },
  { check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_depth_num_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____depth_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____depth_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "depth_num",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_pending_goals_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____pending_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____pending_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "pending_goals_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_seq_num_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____seq_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____seq_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "seq_num",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
check_hlds__delay_info____Unify____seq_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
check_hlds__delay_info____Unify____depth_num_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_15_15 = (MR_Word) (&check_hlds__delay_info_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__delay_info_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&check_hlds__delay_info_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__delay_info_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(
  MR_Word * Goals_4,
  MR_Word STATE_VARIABLE_DelayInfo_0_23,
  MR_Word * STATE_VARIABLE_DelayInfo_24)
{
  MR_bool succeeded;
  MR_Integer CurrentDepth_6 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 0))));
  MR_Word DelayedGoalStack0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 1))));
  MR_Word WaitingGoals_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 2))));
  MR_Word PendingGoalsTable0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 3))));
  MR_Word NextSeqNums_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 4))));
  MR_Word PendingGoals0_11;
  MR_Box conv0_PendingGoals0_11;

  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), PendingGoalsTable0_9, CurrentDepth_6, &conv0_PendingGoals0_11);
  if (succeeded)
  {
    PendingGoals0_11 = ((MR_Word) (conv0_PendingGoals0_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SeqNums_12;

    SeqNums_12 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PendingGoals0_11);
    if ((SeqNums_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Goals_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DelayInfo_24 = STATE_VARIABLE_DelayInfo_0_23;
    }
    else
    {
      MR_Integer HeadSeqNum_13 = ((MR_Integer) ((MR_hl_field(1, SeqNums_12, (MR_Integer) 0))));
      MR_Word TailSeqNums_14 = ((MR_Word) ((MR_hl_field(1, SeqNums_12, (MR_Integer) 1))));
      MR_Word PendingGoalsTable_15;
      MR_Word DelayedGoals0_16;
      MR_Word DelayedGoalStack1_17;
      MR_Word HeadGoal_18;
      MR_Word DelayedGoals1_19;
      MR_Word TailGoals_20;
      MR_Word DelayedGoals_21;
      MR_Word DelayedGoalStack_22;
      MR_Word Var_25;
      MR_Word DelayedGoal_45;
      MR_Box conv1_DelayedGoals0_16;
      MR_Box conv2_DelayedGoal_45;

      Var_25 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), CurrentDepth_6, ((MR_Box) (Var_25)), PendingGoalsTable0_9, &PendingGoalsTable_15);
      mercury__stack__det_pop_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), &conv1_DelayedGoals0_16, DelayedGoalStack0_7, &DelayedGoalStack1_17);
      DelayedGoals0_16 = ((MR_Word) (conv1_DelayedGoals0_16));
      mercury__map__det_remove_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), ((MR_Box) (HeadSeqNum_13)), &conv2_DelayedGoal_45, DelayedGoals0_16, &DelayedGoals1_19);
      DelayedGoal_45 = ((MR_Word) (conv2_DelayedGoal_45));
      HeadGoal_18 = ((MR_Word) ((MR_hl_field(0, DelayedGoal_45, (MR_Integer) 2))));
      check_hlds__delay_info__lookup_delayed_goals_4_p_0(TailSeqNums_14, &TailGoals_20, DelayedGoals1_19, &DelayedGoals_21);
      mercury__stack__push_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), ((MR_Box) (DelayedGoals_21)), DelayedGoalStack1_17, &DelayedGoalStack_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_20));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_DelayInfo_24 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (CurrentDepth_6));
        MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_22));
        MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoals_8));
        MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoalsTable_15));
        MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_10));
      }
    }
  }
  else
  {
    *Goals_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayInfo_24 = STATE_VARIABLE_DelayInfo_0_23;
  }
}

static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_DelayedGoalMap_0_3,
  MR_Word * STATE_VARIABLE_DelayedGoalMap_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DelayedGoalMap_4 = STATE_VARIABLE_DelayedGoalMap_0_3;
  }
  else
  {
    MR_Integer SeqNum_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word SeqNums_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_DelayedGoalMap_15_15;
    MR_Word DelayedGoal_16;
    MR_Box conv0_DelayedGoal_16;

    mercury__map__det_remove_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), ((MR_Box) (SeqNum_8)), &conv0_DelayedGoal_16, STATE_VARIABLE_DelayedGoalMap_0_3, &STATE_VARIABLE_DelayedGoalMap_15_15);
    DelayedGoal_16 = ((MR_Word) (conv0_DelayedGoal_16));
    Goal_10 = ((MR_Word) ((MR_hl_field(0, DelayedGoal_16, (MR_Integer) 2))));
    check_hlds__delay_info__lookup_delayed_goals_4_p_0(SeqNums_9, &Goals_11, STATE_VARIABLE_DelayedGoalMap_15_15, STATE_VARIABLE_DelayedGoalMap_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(
  MR_Word STATE_VARIABLE_DelayInfo_0_5,
  MR_Word * STATE_VARIABLE_DelayInfo_6)
{
  MR_Word WaitingVars_4;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 2))));

  mercury__map__keys_2_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), Var_7, &WaitingVars_4);
  check_hlds__delay_info__delay_info_bind_var_list_3_p_0(WaitingVars_4, STATE_VARIABLE_DelayInfo_0_5, STATE_VARIABLE_DelayInfo_6);
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * STATE_VARIABLE_DelayInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DelayInfo_3 = STATE_VARIABLE_DelayInfo_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DelayInfo_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DelayInfo_0_2;

      check_hlds__delay_info__delay_info_bind_var_3_p_0(Var_7, STATE_VARIABLE_DelayInfo_0_2, &STATE_VARIABLE_DelayInfo_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_DelayInfo_0_2 = STATE_VARIABLE_DelayInfo_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DelayInfo_0_2 = next_value_of_STATE_VARIABLE_DelayInfo_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_DelayInfo_0_15,
  MR_Word * STATE_VARIABLE_DelayInfo_16)
{
  MR_bool succeeded;
  MR_Integer CurrentDepth_6 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 0))));
  MR_Word DelayedGoalStack_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 1))));
  MR_Word WaitingGoalsTable0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 2))));
  MR_Word PendingGoals0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 3))));
  MR_Word NextSeqNums_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 4))));
  MR_Word GoalsWaitingOnVar_11;
  MR_Box conv0_GoalsWaitingOnVar_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), WaitingGoalsTable0_8, ((MR_Box) (Var_4)), &conv0_GoalsWaitingOnVar_11);
  if (succeeded)
  {
    GoalsWaitingOnVar_11 = ((MR_Word) (conv0_GoalsWaitingOnVar_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word NewlyPendingGoals_12;
    MR_Word PendingGoals_13;
    MR_Word WaitingGoalsTable_14;

    mercury__map__keys_2_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), GoalsWaitingOnVar_11, &NewlyPendingGoals_12);
    check_hlds__delay_info__add_pending_goals_6_p_0(NewlyPendingGoals_12, GoalsWaitingOnVar_11, PendingGoals0_9, &PendingGoals_13, WaitingGoalsTable0_8, &WaitingGoalsTable_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_DelayInfo_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CurrentDepth_6));
      MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_7));
      MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoalsTable_14));
      MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoals_13));
      MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_10));
    }
  }
  else
    *STATE_VARIABLE_DelayInfo_16 = STATE_VARIABLE_DelayInfo_0_15;
}

static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PendingGoals_0_3,
  MR_Word * STATE_VARIABLE_PendingGoals_4,
  MR_Word STATE_VARIABLE_WaitingGoals_0_5,
  MR_Word * STATE_VARIABLE_WaitingGoals_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_WaitingGoals_6 = STATE_VARIABLE_WaitingGoals_0_5;
      *STATE_VARIABLE_PendingGoals_4 = STATE_VARIABLE_PendingGoals_0_3;
    }
    else
    {
      MR_Word DelayGoalNums_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Depth_19;
      MR_Integer SeqNum_20;
      MR_Word GoalNum_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word WaitingVars_22;
      MR_Word STATE_VARIABLE_WaitingGoals_29_29;
      MR_Word STATE_VARIABLE_PendingGoals_30_30;
      MR_Box conv0_WaitingVars_22;
      MR_Word PendingSeqNums0_23;
      MR_Box conv1_PendingSeqNums0_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PendingGoals_0_3;
      MR_Word next_value_of_STATE_VARIABLE_WaitingGoals_0_5;

      Depth_19 = ((MR_Integer) ((MR_hl_field(0, GoalNum_21, (MR_Integer) 0))));
      SeqNum_20 = ((MR_Integer) ((MR_hl_field(0, GoalNum_21, (MR_Integer) 1))));
      mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), HeadVar__2_2, ((MR_Box) (GoalNum_21)), &conv0_WaitingVars_22);
      WaitingVars_22 = ((MR_Word) (conv0_WaitingVars_22));
      check_hlds__delay_info__delete_waiting_vars_4_p_0(WaitingVars_22, GoalNum_21, STATE_VARIABLE_WaitingGoals_0_5, &STATE_VARIABLE_WaitingGoals_29_29);
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), STATE_VARIABLE_PendingGoals_0_3, Depth_19, &conv1_PendingSeqNums0_23);
      if (succeeded)
      {
        PendingSeqNums0_23 = ((MR_Word) (conv1_PendingSeqNums0_23));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PendingSeqNums_24;

        PendingSeqNums_24 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PendingSeqNums0_23, ((MR_Box) (SeqNum_20)));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), Depth_19, ((MR_Box) (PendingSeqNums_24)), STATE_VARIABLE_PendingGoals_0_3, &STATE_VARIABLE_PendingGoals_30_30);
      }
      else
      {
        MR_Word PendingSeqNums_34;

        PendingSeqNums_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (SeqNum_20)));
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), Depth_19, ((MR_Box) (PendingSeqNums_34)), STATE_VARIABLE_PendingGoals_0_3, &STATE_VARIABLE_PendingGoals_30_30);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = DelayGoalNums_15;
      next_value_of_STATE_VARIABLE_PendingGoals_0_3 = STATE_VARIABLE_PendingGoals_30_30;
      next_value_of_STATE_VARIABLE_WaitingGoals_0_5 = STATE_VARIABLE_WaitingGoals_29_29;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PendingGoals_0_3 = next_value_of_STATE_VARIABLE_PendingGoals_0_3;
      STATE_VARIABLE_WaitingGoals_0_5 = next_value_of_STATE_VARIABLE_WaitingGoals_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_delay_goal_4_p_0(
  MR_Word Error_5,
  MR_Word Goal_6,
  MR_Word DelayInfo0_7,
  MR_Word * DelayInfo_8)
{
  MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(0, Error_5, (MR_Integer) 0))));
  MR_Integer CurrentDepth_13 = ((MR_Integer) ((MR_hl_field(0, DelayInfo0_7, (MR_Integer) 0))));
  MR_Word DelayedGoalStack0_14 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_7, (MR_Integer) 1))));
  MR_Word WaitingGoalsTable0_15 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_7, (MR_Integer) 2))));
  MR_Word PendingGoals_16 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_7, (MR_Integer) 3))));
  MR_Word NextSeqNums0_17 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_7, (MR_Integer) 4))));
  MR_Integer SeqNum_18;
  MR_Word NextSeqNums1_19;
  MR_Integer NextSeq_20;
  MR_Word NextSeqNums_21;
  MR_Word DelayedGoals0_22;
  MR_Word DelayedGoalStack1_23;
  MR_Word DelayedGoals_24;
  MR_Word DelayedGoalStack_25;
  MR_Word GoalNum_26;
  MR_Word VarList_27;
  MR_Word WaitingGoalsTable_28;
  MR_Word Var_30;
  MR_Box conv0_SeqNum_18;
  MR_Box conv1_DelayedGoals0_22;

  mercury__stack__det_pop_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &conv0_SeqNum_18, NextSeqNums0_17, &NextSeqNums1_19);
  SeqNum_18 = ((MR_Integer) (conv0_SeqNum_18));
  NextSeq_20 = (MR_Integer) ((MR_Unsigned) SeqNum_18 + (MR_Unsigned) 1);
  mercury__stack__push_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (NextSeq_20)), NextSeqNums1_19, &NextSeqNums_21);
  mercury__stack__det_pop_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), &conv1_DelayedGoals0_22, DelayedGoalStack0_14, &DelayedGoalStack1_23);
  DelayedGoals0_22 = ((MR_Word) (conv1_DelayedGoals0_22));
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (Vars_9));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (Error_5));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) (Goal_6));
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), SeqNum_18, ((MR_Box) (Var_30)), DelayedGoals0_22, &DelayedGoals_24);
  mercury__stack__push_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), ((MR_Box) (DelayedGoals_24)), DelayedGoalStack1_23, &DelayedGoalStack_25);
  {
    GoalNum_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GoalNum_26, 0) = ((MR_Box) (CurrentDepth_13));
    MR_hl_field(0, GoalNum_26, 1) = ((MR_Box) (SeqNum_18));
  }
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_9, &VarList_27);
  check_hlds__delay_info__add_waiting_vars_5_p_0(VarList_27, GoalNum_26, VarList_27, WaitingGoalsTable0_15, &WaitingGoalsTable_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DelayInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CurrentDepth_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoalsTable_28));
    MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoals_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_21));
  }
}

static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Goal_2,
  MR_Word AllVars_3,
  MR_Word STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * STATE_VARIABLE_WaitingGoalsTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WaitingGoalsTable_5 = STATE_VARIABLE_WaitingGoalsTable_0_4;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word WaitingGoals1_17;
      MR_Word WaitingGoals_18;
      MR_Word STATE_VARIABLE_WaitingGoalsTable_21_21;
      MR_Word WaitingGoals0_16;
      MR_Box conv0_WaitingGoals0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), STATE_VARIABLE_WaitingGoalsTable_0_4, ((MR_Box) (Var_11)), &conv0_WaitingGoals0_16);
      if (succeeded)
      {
        WaitingGoals0_16 = ((MR_Word) (conv0_WaitingGoals0_16));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        WaitingGoals1_17 = WaitingGoals0_16;
      else
        mercury__map__init_1_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), &WaitingGoals1_17);
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), ((MR_Box) (Goal_2)), ((MR_Box) (AllVars_3)), WaitingGoals1_17, &WaitingGoals_18);
      mercury__map__set_4_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), ((MR_Box) (Var_11)), ((MR_Box) (WaitingGoals_18)), STATE_VARIABLE_WaitingGoalsTable_0_4, &STATE_VARIABLE_WaitingGoalsTable_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_12;
      next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4 = STATE_VARIABLE_WaitingGoalsTable_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_WaitingGoalsTable_0_4 = next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_leave_conj_3_p_0(
  MR_Word DelayInfo0_4,
  MR_Word * DelayedGoalsList_5,
  MR_Word * DelayInfo_6)
{
  MR_Integer CurrentDepth0_7 = ((MR_Integer) ((MR_hl_field(0, DelayInfo0_4, (MR_Integer) 0))));
  MR_Word DelayedGoalStack0_8 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_4, (MR_Integer) 1))));
  MR_Word WaitingGoalsTable0_9 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_4, (MR_Integer) 2))));
  MR_Word PendingGoals_10 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_4, (MR_Integer) 3))));
  MR_Word NextSeqNums0_11 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_4, (MR_Integer) 4))));
  MR_Word DelayedGoals_12;
  MR_Word DelayedGoalStack_13;
  MR_Word SeqNums_14;
  MR_Word WaitingGoalsTable_15;
  MR_Word NextSeqNums_17;
  MR_Integer CurrentDepth_18;
  MR_Box conv0_DelayedGoals_12;
  MR_Box conv1_Var_16;

  mercury__stack__det_pop_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), &conv0_DelayedGoals_12, DelayedGoalStack0_8, &DelayedGoalStack_13);
  DelayedGoals_12 = ((MR_Word) (conv0_DelayedGoals_12));
  mercury__map__keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), DelayedGoals_12, &SeqNums_14);
  check_hlds__delay_info__remove_delayed_goals_5_p_0(SeqNums_14, DelayedGoals_12, CurrentDepth0_7, WaitingGoalsTable0_9, &WaitingGoalsTable_15);
  mercury__stack__det_pop_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &conv1_Var_16, NextSeqNums0_11, &NextSeqNums_17);
  CurrentDepth_18 = (MR_Integer) ((MR_Unsigned) CurrentDepth0_7 - (MR_Unsigned) 1);
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), DelayedGoals_12, DelayedGoalsList_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DelayInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CurrentDepth_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoalsTable_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoals_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_17));
  }
}

static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DelayedGoalsTable_2,
  MR_Integer Depth_3,
  MR_Word STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * STATE_VARIABLE_WaitingGoalsTable_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_WaitingGoalsTable_5 = STATE_VARIABLE_WaitingGoalsTable_0_4;
    else
    {
      MR_Integer SeqNum_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SeqNums_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word DelayedGoal_16;
      MR_Word Vars_17;
      MR_Word GoalNum_20;
      MR_Word VarList_21;
      MR_Word STATE_VARIABLE_WaitingGoalsTable_24_24;
      MR_Box conv0_DelayedGoal_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), DelayedGoalsTable_2, SeqNum_11, &conv0_DelayedGoal_16);
      DelayedGoal_16 = ((MR_Word) (conv0_DelayedGoal_16));
      Vars_17 = ((MR_Word) ((MR_hl_field(0, DelayedGoal_16, (MR_Integer) 0))));
      {
        GoalNum_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, GoalNum_20, 0) = ((MR_Box) (Depth_3));
        MR_hl_field(0, GoalNum_20, 1) = ((MR_Box) (SeqNum_11));
      }
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_17, &VarList_21);
      check_hlds__delay_info__delete_waiting_vars_4_p_0(VarList_21, GoalNum_20, STATE_VARIABLE_WaitingGoalsTable_0_4, &STATE_VARIABLE_WaitingGoalsTable_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SeqNums_12;
      next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4 = STATE_VARIABLE_WaitingGoalsTable_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_WaitingGoalsTable_0_4 = next_value_of_STATE_VARIABLE_WaitingGoalsTable_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word GoalNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word WaitingGoals0_13;
      MR_Word WaitingGoals_14;
      MR_Word STATE_VARIABLE_WaitingGoalsTable_17_17;
      MR_Box conv0_WaitingGoals0_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), HeadVar__3_3, ((MR_Box) (Var_9)), &conv0_WaitingGoals0_13);
      WaitingGoals0_13 = ((MR_Word) (conv0_WaitingGoals0_13));
      mercury__map__delete_3_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), ((MR_Box) (GoalNum_2)), WaitingGoals0_13, &WaitingGoals_14);
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[1]), WaitingGoals_14);
      if (succeeded)
        mercury__map__delete_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), ((MR_Box) (Var_9)), HeadVar__3_3, &STATE_VARIABLE_WaitingGoalsTable_17_17);
      else
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), ((MR_Box) (Var_9)), ((MR_Box) (WaitingGoals_14)), HeadVar__3_3, &STATE_VARIABLE_WaitingGoalsTable_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_10;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_WaitingGoalsTable_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_enter_conj_2_p_0(
  MR_Word DelayInfo0_3,
  MR_Word * DelayInfo_4)
{
  MR_Integer CurrentDepth0_5 = ((MR_Integer) ((MR_hl_field(0, DelayInfo0_3, (MR_Integer) 0))));
  MR_Word DelayedGoalStack0_6 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_3, (MR_Integer) 1))));
  MR_Word WaitingGoalsTable_7 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_3, (MR_Integer) 2))));
  MR_Word PendingGoals_8 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_3, (MR_Integer) 3))));
  MR_Word NextSeqNums0_9 = ((MR_Word) ((MR_hl_field(0, DelayInfo0_3, (MR_Integer) 4))));
  MR_Word DelayedGoals_10;
  MR_Word DelayedGoalStack_11;
  MR_Word NextSeqNums_12;
  MR_Integer CurrentDepth_13;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0), &DelayedGoals_10);
  mercury__stack__push_3_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), ((MR_Box) (DelayedGoals_10)), DelayedGoalStack0_6, &DelayedGoalStack_11);
  mercury__stack__push_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) ((MR_Integer) 0)), NextSeqNums0_9, &NextSeqNums_12);
  CurrentDepth_13 = (MR_Integer) ((MR_Unsigned) CurrentDepth0_5 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DelayInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CurrentDepth_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoalsTable_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoals_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_12));
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_init_1_p_0(
  MR_Word * DelayInfo_2)
{
  MR_Word DelayedGoalStack_4;
  MR_Word WaitingGoalsTable_5;
  MR_Word PendingGoals_6;
  MR_Word NextSeqNums_7;

  mercury__stack__init_1_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_1[0]), &DelayedGoalStack_4);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__delay_info_scalar_common_2[0]), (MR_Word) (&check_hlds__delay_info_scalar_common_1[1]), &WaitingGoalsTable_5);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__delay_info_scalar_common_2[2]), &PendingGoals_6);
  mercury__stack__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &NextSeqNums_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *DelayInfo_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 1) = ((MR_Box) (DelayedGoalStack_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (WaitingGoalsTable_5));
    MR_hl_field(0, base, 3) = ((MR_Box) (PendingGoals_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextSeqNums_7));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____delay_goal_num_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____delay_goal_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____delay_goal_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____delay_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____depth_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____pending_goals_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____seq_num_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____waiting_goals_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__delay_info____Compare____waiting_goals_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__delay_info__init(void)
{
}

void mercury__check_hlds__delay_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_stack_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_depth_num_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_pending_goals_table_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_seq_num_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_0);
	MR_register_type_ctor_info(&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_table_0);
}

void mercury__check_hlds__delay_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__delay_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.delay_info.
