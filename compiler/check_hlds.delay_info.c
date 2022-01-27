/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2016-03-21
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


/* :- module check_hlds.delay_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__delay_info__init
ENDINIT
*/

#include "check_hlds.delay_info.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2);

static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);

static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__GoalNum_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3,
  MR_Word * check_hlds__delay_info__HeadVar__4_4);

static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6);

static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__Goal_2,
  MR_Word check_hlds__delay_info__AllVars_3,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5);

static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
  MR_Integer check_hlds__delay_info__Depth_3,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5);


static /* final */ const MR_Box check_hlds__delay_info_scalar_common_1[4][3];

static /* final */ const MR_Box check_hlds__delay_info_scalar_common_2[5][2];




static /* final */ const MR_Box check_hlds__delay_info_scalar_common_1[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[0])),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box check_hlds__delay_info_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&check_hlds__delay_info_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0 = {
  (MR_String) "delay_goal_num",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_num",
  {     check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0 },
  {     check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_stack",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0,
  check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_info_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_info",
  {     check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0 },
  {     check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_depth_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____depth_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____depth_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "depth_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_pending_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____pending_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____pending_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "pending_goals_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_seq_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____seq_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____seq_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "seq_num",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_stack_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____delay_goal_stack_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
  MR_Box check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    {
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
  MR_Box check_hlds__delay_info__wrapper_arg_2,
  MR_Box check_hlds__delay_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

    {
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    {
      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    {
      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    {
      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
    return check_hlds__delay_info__succeeded;
  }
}

void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CastX_18 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
    MR_Integer check_hlds__delay_info__CastY_19 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_18 == check_hlds__delay_info__CastY_19);
    if (check_hlds__delay_info__succeeded)
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__delay_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__delay_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__delay_info__V_14_14;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_14_14, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_9_9);
        }
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_14_14 == (MR_Integer) 0);
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
        if (check_hlds__delay_info__succeeded)
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_14_14;
        else
          {
            MR_Word check_hlds__delay_info__V_15_15;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], &check_hlds__delay_info__V_15_15, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
            }
            check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_15_15 == (MR_Integer) 0);
            check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
            if (check_hlds__delay_info__succeeded)
              *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_15_15;
            else
              {
                MR_Word check_hlds__delay_info__V_16_16;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], &check_hlds__delay_info__V_16_16, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                }
                check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_16_16 == (MR_Integer) 0);
                check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
                if (check_hlds__delay_info__succeeded)
                  *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_16_16;
                else
                  {
                    MR_Word check_hlds__delay_info__V_17_17;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], &check_hlds__delay_info__V_17_17, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                    }
                    check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_17_17 == (MR_Integer) 0);
                    check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
                    if (check_hlds__delay_info__succeeded)
                      *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_17_17;
                    else
                      {
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[4], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__V_8_8)), ((MR_Box) (check_hlds__delay_info__V_13_13)));
                        }
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CastX_13 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
    MR_Integer check_hlds__delay_info__CastY_14 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_13 == check_hlds__delay_info__CastY_14);
    if (check_hlds__delay_info__succeeded)
      check_hlds__delay_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__delay_info__TypeInfo_15_15;
        MR_Word check_hlds__delay_info__TypeInfo_16_16;
        MR_Word check_hlds__delay_info__TypeInfo_17_17;
        MR_Word check_hlds__delay_info__TypeInfo_18_18;
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__delay_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer check_hlds__delay_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__delay_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));

        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
        if (check_hlds__delay_info__succeeded)
          {
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
            {
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
            if (check_hlds__delay_info__succeeded)
              {
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
                {
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
                if (check_hlds__delay_info__succeeded)
                  {
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
                    {
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
                    if (check_hlds__delay_info__succeeded)
                      {
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
                        {
                          check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_18_18, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                        }
                      }
                  }
              }
          }
      }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

    {
      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CastX_9 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
    MR_Integer check_hlds__delay_info__CastY_10 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_9 == check_hlds__delay_info__CastY_10);
    if (check_hlds__delay_info__succeeded)
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer check_hlds__delay_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_8_8, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_6_6);
        }
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_8_8 == (MR_Integer) 0);
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
        if (check_hlds__delay_info__succeeded)
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__V_5_5, check_hlds__delay_info__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CastX_7 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
    MR_Integer check_hlds__delay_info__CastY_8 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_7 == check_hlds__delay_info__CastY_8);
    if (check_hlds__delay_info__succeeded)
      check_hlds__delay_info__succeeded = MR_TRUE;
    else
      {
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));

        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
        if (check_hlds__delay_info__succeeded)
          check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_4_4 == check_hlds__delay_info__V_6_6);
      }
    return check_hlds__delay_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4)
{
  {
    MR_bool check_hlds__delay_info__succeeded;

    if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__delay_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4 = check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3;
      }
    else
      {
        MR_Integer check_hlds__delay_info__SeqNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__delay_info__SeqNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__delay_info__Goal_10;
        MR_Word check_hlds__delay_info__Goals_11;
        MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15;
        MR_Word check_hlds__delay_info__DelayedGoal_22;
        MR_Box check_hlds__delay_info__conv0_DelayedGoal_22;
        MR_Word check_hlds__delay_info___Vars_23;
        MR_Word check_hlds__delay_info___ErrorReason_24;

        {
          mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__SeqNum_8)), &check_hlds__delay_info__conv0_DelayedGoal_22, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3, &check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15);
        }
        check_hlds__delay_info__DelayedGoal_22 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_22);
        check_hlds__delay_info___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 0)));
        check_hlds__delay_info___ErrorReason_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 1)));
        check_hlds__delay_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 2)));
        {
          check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__SeqNums_9, &check_hlds__delay_info__Goals_11, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__delay_info__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__Goal_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__Goals_11));
        }
      }
  }
}

static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__GoalNum_2,
  MR_Word check_hlds__delay_info__HeadVar__3_3,
  MR_Word * check_hlds__delay_info__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_info__succeeded;

        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__delay_info__HeadVar__4_4 = check_hlds__delay_info__HeadVar__3_3;
        else
          {
            MR_Word check_hlds__delay_info__TypeInfo_20_20 = (MR_Word) &check_hlds__delay_info_scalar_common_2[0];
            MR_Word check_hlds__delay_info__TypeInfo_21_21 = (MR_Word) &check_hlds__delay_info_scalar_common_1[1];
            MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
            MR_Word check_hlds__delay_info__TypeInfo_23_23;
            MR_Word check_hlds__delay_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__delay_info__WaitingGoals0_13;
            MR_Word check_hlds__delay_info__WaitingGoals_14;
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_13;

            {
              mercury__map__lookup_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, check_hlds__delay_info__HeadVar__3_3, ((MR_Box) (check_hlds__delay_info__Var_9)), &check_hlds__delay_info__conv0_WaitingGoals0_13);
            }
            check_hlds__delay_info__WaitingGoals0_13 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_13);
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
            check_hlds__delay_info__TypeInfo_23_23 = (MR_Word) &check_hlds__delay_info_scalar_common_2[1];
            {
              mercury__map__delete_3_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, ((MR_Box) (check_hlds__delay_info__GoalNum_2)), check_hlds__delay_info__WaitingGoals0_13, &check_hlds__delay_info__WaitingGoals_14);
            }
            {
              check_hlds__delay_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, check_hlds__delay_info__WaitingGoals_14);
            }
            if (check_hlds__delay_info__succeeded)
              {
                mercury__map__delete_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
            else
              {
                mercury__map__det_update_4_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_14)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_10;
              MR_Word check_hlds__delay_info__HeadVar__3__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;

              check_hlds__delay_info__HeadVar__3_3 = check_hlds__delay_info__HeadVar__3__tmp_copy_3;
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__HeadVar__2_2,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_info__succeeded;

        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5;
            *check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3;
          }
        else
          {
            MR_Word check_hlds__delay_info__DelayGoalNums_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer check_hlds__delay_info__Depth_19;
            MR_Integer check_hlds__delay_info__SeqNum_20;
            MR_Word check_hlds__delay_info__GoalNum_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__WaitingVars_22;
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;
            MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
            MR_Box check_hlds__delay_info__conv0_WaitingVars_22;
            MR_Word check_hlds__delay_info__PendingSeqNums0_23;
            MR_Box check_hlds__delay_info__conv1_PendingSeqNums0_23;

            check_hlds__delay_info__Depth_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 0)));
            check_hlds__delay_info__SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 1)));
            {
              mercury__map__lookup_3_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__HeadVar__2_2, ((MR_Box) (check_hlds__delay_info__GoalNum_21)), &check_hlds__delay_info__conv0_WaitingVars_22);
            }
            check_hlds__delay_info__WaitingVars_22 = ((MR_Word) check_hlds__delay_info__conv0_WaitingVars_22);
            {
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__WaitingVars_22, check_hlds__delay_info__GoalNum_21, check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29);
            }
            {
              check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, check_hlds__delay_info__Depth_19, &check_hlds__delay_info__conv1_PendingSeqNums0_23);
            }
            if (check_hlds__delay_info__succeeded)
              {
                check_hlds__delay_info__PendingSeqNums0_23 = ((MR_Word) check_hlds__delay_info__conv1_PendingSeqNums0_23);
                check_hlds__delay_info__succeeded = MR_TRUE;
              }
            if (check_hlds__delay_info__succeeded)
              {
                MR_Word check_hlds__delay_info__PendingSeqNums_24;

                {
                  check_hlds__delay_info__PendingSeqNums_24 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__delay_info__PendingSeqNums0_23, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_24)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
              }
            else
              {
                MR_Word check_hlds__delay_info__PendingSeqNums_34;

                {
                  check_hlds__delay_info__PendingSeqNums_34 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_34)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__DelayGoalNums_15;
              MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;

              check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5;
              check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3;
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__Goal_2,
  MR_Word check_hlds__delay_info__AllVars_3,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_info__succeeded;

        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
        else
          {
            MR_Word check_hlds__delay_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__delay_info__WaitingGoals1_17;
            MR_Word check_hlds__delay_info__WaitingGoals_18;
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;
            MR_Word check_hlds__delay_info__WaitingGoals0_16;
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_16;

            {
              check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, ((MR_Box) (check_hlds__delay_info__Var_11)), &check_hlds__delay_info__conv0_WaitingGoals0_16);
            }
            if (check_hlds__delay_info__succeeded)
              {
                check_hlds__delay_info__WaitingGoals0_16 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_16);
                check_hlds__delay_info__succeeded = MR_TRUE;
              }
            if (check_hlds__delay_info__succeeded)
              check_hlds__delay_info__WaitingGoals1_17 = check_hlds__delay_info__WaitingGoals0_16;
            else
              {
                {
                  mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], &check_hlds__delay_info__WaitingGoals1_17);
                }
              }
            {
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], ((MR_Box) (check_hlds__delay_info__Goal_2)), ((MR_Box) (check_hlds__delay_info__AllVars_3)), check_hlds__delay_info__WaitingGoals1_17, &check_hlds__delay_info__WaitingGoals_18);
            }
            {
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Var_11)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_18)), check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_12;
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;

              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
  MR_Integer check_hlds__delay_info__Depth_3,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_info__succeeded;

        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
        else
          {
            MR_Integer check_hlds__delay_info__SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__SeqNums_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__delay_info__DelayedGoal_16;
            MR_Word check_hlds__delay_info__Vars_17;
            MR_Word check_hlds__delay_info__GoalNum_20;
            MR_Word check_hlds__delay_info__VarList_21;
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;
            MR_Box check_hlds__delay_info__conv0_DelayedGoal_16;
            MR_Word check_hlds__delay_info___Error_18;
            MR_Word check_hlds__delay_info___Goal_19;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__DelayedGoalsTable_2, check_hlds__delay_info__SeqNum_11, &check_hlds__delay_info__conv0_DelayedGoal_16);
            }
            check_hlds__delay_info__DelayedGoal_16 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_16);
            check_hlds__delay_info__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 0)));
            check_hlds__delay_info___Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 1)));
            check_hlds__delay_info___Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 2)));
            {
              check_hlds__delay_info__GoalNum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 0) = ((MR_Box) (check_hlds__delay_info__Depth_3));
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_11));
            }
            {
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_17, &check_hlds__delay_info__VarList_21);
            }
            {
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__VarList_21, check_hlds__delay_info__GoalNum_20, check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__SeqNums_12;
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;

              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(
  MR_Word * check_hlds__delay_info__Goals_4,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__DelayedGoalStack0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__WaitingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__PendingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 4)));
    MR_Word check_hlds__delay_info__PendingGoals0_11;
    MR_Box check_hlds__delay_info__conv0_PendingGoals0_11;

    {
      check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__PendingGoalsTable0_9, check_hlds__delay_info__CurrentDepth_6, &check_hlds__delay_info__conv0_PendingGoals0_11);
    }
    if (check_hlds__delay_info__succeeded)
      {
        check_hlds__delay_info__PendingGoals0_11 = ((MR_Word) check_hlds__delay_info__conv0_PendingGoals0_11);
        check_hlds__delay_info__succeeded = MR_TRUE;
      }
    if (check_hlds__delay_info__succeeded)
      {
        MR_Word check_hlds__delay_info__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word check_hlds__delay_info__SeqNums_12;

        {
          check_hlds__delay_info__SeqNums_12 = mercury__cord__list_1_f_0(check_hlds__delay_info__TypeCtorInfo_29_29, check_hlds__delay_info__PendingGoals0_11);
        }
        if ((check_hlds__delay_info__SeqNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
          }
        else
          {
            MR_Word check_hlds__delay_info__TypeInfo_31_31;
            MR_Integer check_hlds__delay_info__HeadSeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__TailSeqNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 1)));
            MR_Word check_hlds__delay_info__PendingGoalsTable_15;
            MR_Word check_hlds__delay_info__DelayedGoals0_16;
            MR_Word check_hlds__delay_info__DelayedGoalStack1_17;
            MR_Word check_hlds__delay_info__HeadGoal_18;
            MR_Word check_hlds__delay_info__DelayedGoals1_19;
            MR_Word check_hlds__delay_info__TailGoals_20;
            MR_Word check_hlds__delay_info__DelayedGoals_21;
            MR_Word check_hlds__delay_info__DelayedGoalStack_22;
            MR_Word check_hlds__delay_info__V_25_25;
            MR_Word check_hlds__delay_info__DelayedGoal_53;
            MR_Box check_hlds__delay_info__conv1_DelayedGoals0_16;
            MR_Box check_hlds__delay_info__conv2_DelayedGoal_53;
            MR_Word check_hlds__delay_info___Vars_54;
            MR_Word check_hlds__delay_info___ErrorReason_55;

            {
              check_hlds__delay_info__V_25_25 = mercury__cord__init_0_f_0(check_hlds__delay_info__TypeCtorInfo_29_29);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__CurrentDepth_6, ((MR_Box) (check_hlds__delay_info__V_25_25)), check_hlds__delay_info__PendingGoalsTable0_9, &check_hlds__delay_info__PendingGoalsTable_15);
            }
            check_hlds__delay_info__TypeInfo_31_31 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
            {
              mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_31_31, &check_hlds__delay_info__conv1_DelayedGoals0_16, check_hlds__delay_info__DelayedGoalStack0_7, &check_hlds__delay_info__DelayedGoalStack1_17);
            }
            check_hlds__delay_info__DelayedGoals0_16 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_16);
            {
              mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__HeadSeqNum_13)), &check_hlds__delay_info__conv2_DelayedGoal_53, check_hlds__delay_info__DelayedGoals0_16, &check_hlds__delay_info__DelayedGoals1_19);
            }
            check_hlds__delay_info__DelayedGoal_53 = ((MR_Word) check_hlds__delay_info__conv2_DelayedGoal_53);
            check_hlds__delay_info___Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 0)));
            check_hlds__delay_info___ErrorReason_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 1)));
            check_hlds__delay_info__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 2)));
            {
              check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__TailSeqNums_14, &check_hlds__delay_info__TailGoals_20, check_hlds__delay_info__DelayedGoals1_19, &check_hlds__delay_info__DelayedGoals_21);
            }
            {
              mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_31_31, ((MR_Box) (check_hlds__delay_info__DelayedGoals_21)), check_hlds__delay_info__DelayedGoalStack1_17, &check_hlds__delay_info__DelayedGoalStack_22);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__delay_info__Goals_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__HeadGoal_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__TailGoals_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_22));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoals_8));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoalsTable_15));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
            }
          }
      }
    else
      {
        *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
      }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__WaitingVars_4;
    MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 2)));
    MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 4)));

    {
      mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__V_7_7, &check_hlds__delay_info__WaitingVars_4);
    }
    {
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__delay_info__WaitingVars_4, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6);
    }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_3_p_0(
  MR_Word check_hlds__delay_info__Var_4,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__DelayedGoalStack_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__PendingGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 4)));
    MR_Word check_hlds__delay_info__GoalsWaitingOnVar_11;
    MR_Box check_hlds__delay_info__conv0_GoalsWaitingOnVar_11;

    {
      check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__WaitingGoalsTable0_8, ((MR_Box) (check_hlds__delay_info__Var_4)), &check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
    }
    if (check_hlds__delay_info__succeeded)
      {
        check_hlds__delay_info__GoalsWaitingOnVar_11 = ((MR_Word) check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
        check_hlds__delay_info__succeeded = MR_TRUE;
      }
    if (check_hlds__delay_info__succeeded)
      {
        MR_Word check_hlds__delay_info__NewlyPendingGoals_12;
        MR_Word check_hlds__delay_info__PendingGoals_13;
        MR_Word check_hlds__delay_info__WaitingGoalsTable_14;

        {
          mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__GoalsWaitingOnVar_11, &check_hlds__delay_info__NewlyPendingGoals_12);
        }
        {
          check_hlds__delay_info__add_pending_goals_6_p_0(check_hlds__delay_info__NewlyPendingGoals_12, check_hlds__delay_info__GoalsWaitingOnVar_11, check_hlds__delay_info__PendingGoals0_9, &check_hlds__delay_info__PendingGoals_13, check_hlds__delay_info__WaitingGoalsTable0_8, &check_hlds__delay_info__WaitingGoalsTable_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_7));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_13));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
        }
      }
    else
      *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15;
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_list_3_p_0(
  MR_Word check_hlds__delay_info__HeadVar__1_1,
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2,
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__delay_info__succeeded;

        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2;
        else
          {
            MR_Word check_hlds__delay_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__delay_info__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

            {
              check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__delay_info__Var_7, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_8;
              MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

              check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__delay_info__delay_info_delay_goal_4_p_0(
  MR_Word check_hlds__delay_info__Error_5,
  MR_Word check_hlds__delay_info__Goal_6,
  MR_Word check_hlds__delay_info__DelayInfo0_7,
  MR_Word * check_hlds__delay_info__DelayInfo_8)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word check_hlds__delay_info__TypeInfo_33_33;
    MR_Word check_hlds__delay_info__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 0)));
    MR_Integer check_hlds__delay_info__CurrentDepth_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__DelayedGoalStack0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__PendingGoals_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__NextSeqNums0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 4)));
    MR_Integer check_hlds__delay_info__SeqNum_18;
    MR_Word check_hlds__delay_info__NextSeqNums1_19;
    MR_Integer check_hlds__delay_info__NextSeq_20;
    MR_Word check_hlds__delay_info__NextSeqNums_21;
    MR_Word check_hlds__delay_info__DelayedGoals0_22;
    MR_Word check_hlds__delay_info__DelayedGoalStack1_23;
    MR_Word check_hlds__delay_info__DelayedGoals_24;
    MR_Word check_hlds__delay_info__DelayedGoalStack_25;
    MR_Word check_hlds__delay_info__GoalNum_26;
    MR_Word check_hlds__delay_info__VarList_27;
    MR_Word check_hlds__delay_info__WaitingGoalsTable_28;
    MR_Word check_hlds__delay_info__V_30_30;
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 3)));
    MR_Box check_hlds__delay_info__conv0_SeqNum_18;
    MR_Box check_hlds__delay_info__conv1_DelayedGoals0_22;

    {
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, &check_hlds__delay_info__conv0_SeqNum_18, check_hlds__delay_info__NextSeqNums0_17, &check_hlds__delay_info__NextSeqNums1_19);
    }
    check_hlds__delay_info__SeqNum_18 = ((MR_Integer) check_hlds__delay_info__conv0_SeqNum_18);
    check_hlds__delay_info__NextSeq_20 = (check_hlds__delay_info__SeqNum_18 + (MR_Integer) 1);
    {
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, ((MR_Box) (check_hlds__delay_info__NextSeq_20)), check_hlds__delay_info__NextSeqNums1_19, &check_hlds__delay_info__NextSeqNums_21);
    }
    check_hlds__delay_info__TypeInfo_33_33 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
    {
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_33_33, &check_hlds__delay_info__conv1_DelayedGoals0_22, check_hlds__delay_info__DelayedGoalStack0_14, &check_hlds__delay_info__DelayedGoalStack1_23);
    }
    check_hlds__delay_info__DelayedGoals0_22 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_22);
    {
      check_hlds__delay_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 0) = ((MR_Box) (check_hlds__delay_info__Vars_9));
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 1) = ((MR_Box) (check_hlds__delay_info__Error_5));
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 2) = ((MR_Box) (check_hlds__delay_info__Goal_6));
    }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__SeqNum_18, ((MR_Box) (check_hlds__delay_info__V_30_30)), check_hlds__delay_info__DelayedGoals0_22, &check_hlds__delay_info__DelayedGoals_24);
    }
    {
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_33_33, ((MR_Box) (check_hlds__delay_info__DelayedGoals_24)), check_hlds__delay_info__DelayedGoalStack1_23, &check_hlds__delay_info__DelayedGoalStack_25);
    }
    {
      check_hlds__delay_info__GoalNum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_18));
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_9, &check_hlds__delay_info__VarList_27);
    }
    {
      check_hlds__delay_info__add_waiting_vars_5_p_0(check_hlds__delay_info__VarList_27, check_hlds__delay_info__GoalNum_26, check_hlds__delay_info__VarList_27, check_hlds__delay_info__WaitingGoalsTable0_15, &check_hlds__delay_info__WaitingGoalsTable_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__delay_info__DelayInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_21));
    }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_leave_conj_3_p_0(
  MR_Word check_hlds__delay_info__DelayInfo0_4,
  MR_Word * check_hlds__delay_info__DelayedGoalsList_5,
  MR_Word * check_hlds__delay_info__DelayInfo_6)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__TypeCtorInfo_21_21;
    MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
    MR_Integer check_hlds__delay_info__CurrentDepth0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__DelayedGoalStack0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__PendingGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__NextSeqNums0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 4)));
    MR_Word check_hlds__delay_info__DelayedGoals_12;
    MR_Word check_hlds__delay_info__DelayedGoalStack_13;
    MR_Word check_hlds__delay_info__SeqNums_14;
    MR_Word check_hlds__delay_info__WaitingGoalsTable_15;
    MR_Word check_hlds__delay_info__NextSeqNums_17;
    MR_Integer check_hlds__delay_info__CurrentDepth_18;
    MR_Box check_hlds__delay_info__conv0_DelayedGoals_12;
    MR_Integer check_hlds__delay_info__V_16_16;
    MR_Box check_hlds__delay_info__conv1_V_16_16;

    {
      mercury__stack__det_pop_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__conv0_DelayedGoals_12, check_hlds__delay_info__DelayedGoalStack0_8, &check_hlds__delay_info__DelayedGoalStack_13);
    }
    check_hlds__delay_info__DelayedGoals_12 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoals_12);
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
    {
      mercury__map__keys_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, &check_hlds__delay_info__SeqNums_14);
    }
    {
      check_hlds__delay_info__remove_delayed_goals_5_p_0(check_hlds__delay_info__SeqNums_14, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__CurrentDepth0_7, check_hlds__delay_info__WaitingGoalsTable0_9, &check_hlds__delay_info__WaitingGoalsTable_15);
    }
    {
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, &check_hlds__delay_info__conv1_V_16_16, check_hlds__delay_info__NextSeqNums0_11, &check_hlds__delay_info__NextSeqNums_17);
    }
    check_hlds__delay_info__V_16_16 = ((MR_Integer) check_hlds__delay_info__conv1_V_16_16);
    check_hlds__delay_info__CurrentDepth_18 = (check_hlds__delay_info__CurrentDepth0_7 - (MR_Integer) 1);
    {
      mercury__map__values_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__DelayedGoalsList_5);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__delay_info__DelayInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_17));
    }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_enter_conj_2_p_0(
  MR_Word check_hlds__delay_info__DelayInfo0_3,
  MR_Word * check_hlds__delay_info__DelayInfo_4)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Integer check_hlds__delay_info__CurrentDepth0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 0)));
    MR_Word check_hlds__delay_info__DelayedGoalStack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 1)));
    MR_Word check_hlds__delay_info__WaitingGoalsTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 2)));
    MR_Word check_hlds__delay_info__PendingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 3)));
    MR_Word check_hlds__delay_info__NextSeqNums0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 4)));
    MR_Word check_hlds__delay_info__DelayedGoals_10;
    MR_Word check_hlds__delay_info__DelayedGoalStack_11;
    MR_Word check_hlds__delay_info__NextSeqNums_12;
    MR_Integer check_hlds__delay_info__CurrentDepth_13;

    {
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, &check_hlds__delay_info__DelayedGoals_10);
    }
    {
      mercury__stack__push_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], ((MR_Box) (check_hlds__delay_info__DelayedGoals_10)), check_hlds__delay_info__DelayedGoalStack0_6, &check_hlds__delay_info__DelayedGoalStack_11);
    }
    {
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, ((MR_Box) ((MR_Integer) 0)), check_hlds__delay_info__NextSeqNums0_9, &check_hlds__delay_info__NextSeqNums_12);
    }
    check_hlds__delay_info__CurrentDepth_13 = (check_hlds__delay_info__CurrentDepth0_5 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__delay_info__DelayInfo_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_12));
    }
  }
}

void MR_CALL 
check_hlds__delay_info__delay_info_init_1_p_0(
  MR_Word * check_hlds__delay_info__DelayInfo_2)
{
  {
    MR_bool check_hlds__delay_info__succeeded;
    MR_Word check_hlds__delay_info__TypeCtorInfo_11_11;
    MR_Word check_hlds__delay_info__DelayedGoalStack_4;
    MR_Word check_hlds__delay_info__WaitingGoalsTable_5;
    MR_Word check_hlds__delay_info__PendingGoals_6;
    MR_Word check_hlds__delay_info__NextSeqNums_7;

    {
      mercury__stack__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__DelayedGoalStack_4);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], &check_hlds__delay_info__WaitingGoalsTable_5);
    }
    check_hlds__delay_info__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, (MR_Word) &check_hlds__delay_info_scalar_common_2[2], &check_hlds__delay_info__PendingGoals_6);
    }
    {
      mercury__stack__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, &check_hlds__delay_info__NextSeqNums_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__delay_info__DelayInfo_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_5));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_7));
    }
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.delay_info. */
