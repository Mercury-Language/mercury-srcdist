/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 130 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

#line 133 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

#line 136 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

#line 139 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

#line 142 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

#line 145 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

#line 148 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 151 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 154 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0;

#line 169 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0;

#line 172 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

#line 175 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

#line 178 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

#line 181 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

#line 184 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

#line 187 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

#line 190 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

#line 193 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

#line 196 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 199 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 201 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 204 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 207 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 209 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 211 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 214 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 217 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 219 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 222 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 225 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 227 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 229 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 232 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 235 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 237 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 240 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 243 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 245 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 247 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 250 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 253 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 255 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 258 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 261 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 263 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 265 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 268 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 271 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 273 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 276 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 279 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 281 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 283 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 286 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 289 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 291 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 294 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 297 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 299 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 301 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 304 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 307 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 309 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 312 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 315 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 317 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 319 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 143 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 143 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 143 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 146 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 146 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 146 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 157 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
#line 157 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 157 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 148 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 148 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 148 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 156 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 156 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 156 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 150 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 150 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 150 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 415 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__GoalNum_2,
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3,
#line 415 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__4_4);

#line 386 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 386 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 386 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6);

#line 329 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 329 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5);

#line 277 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 277 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 277 "delay_info.m"
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 566 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 572 "check_hlds.delay_info.c"
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
  NULL
};

#line 587 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 592 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

#line 601 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 606 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

#line 611 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_num",
  {
    check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0
  },
  {
    check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0
};

#line 632 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 641 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 649 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 657 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 665 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 674 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 683 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 691 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 700 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 708 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
};

#line 717 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goals",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seqs"
};

#line 726 "check_hlds.delay_info.c"
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
  NULL
};

#line 741 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 746 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

#line 755 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 760 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

#line 765 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_info_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_info_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_info",
  {
    check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0
  },
  {
    check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0
};

#line 786 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_depth_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____depth_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____depth_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "depth_num",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 807 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_pending_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____pending_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____pending_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "pending_goals_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 828 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_seq_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____seq_num_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____seq_num_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "seq_num",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 849 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 870 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "waiting_goals_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 891 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 894 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 896 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 898 "check_hlds.delay_info.c"
{
#line 900 "check_hlds.delay_info.c"
  {
#line 902 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 905 "check_hlds.delay_info.c"
    {
#line 907 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 910 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 912 "check_hlds.delay_info.c"
  }
#line 914 "check_hlds.delay_info.c"
}

#line 917 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 920 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 922 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 924 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 926 "check_hlds.delay_info.c"
{
#line 928 "check_hlds.delay_info.c"
  {
#line 930 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 933 "check_hlds.delay_info.c"
    {
#line 935 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 938 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 940 "check_hlds.delay_info.c"
  }
#line 942 "check_hlds.delay_info.c"
}

#line 945 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 948 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 950 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 952 "check_hlds.delay_info.c"
{
#line 954 "check_hlds.delay_info.c"
  {
#line 956 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 959 "check_hlds.delay_info.c"
    {
#line 961 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 964 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 966 "check_hlds.delay_info.c"
  }
#line 968 "check_hlds.delay_info.c"
}

#line 971 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 974 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 976 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 978 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 980 "check_hlds.delay_info.c"
{
#line 982 "check_hlds.delay_info.c"
  {
#line 984 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 987 "check_hlds.delay_info.c"
    {
#line 989 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 992 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 994 "check_hlds.delay_info.c"
  }
#line 996 "check_hlds.delay_info.c"
}

#line 999 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 1002 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1004 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1006 "check_hlds.delay_info.c"
{
#line 1008 "check_hlds.delay_info.c"
  {
#line 1010 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1013 "check_hlds.delay_info.c"
    {
#line 1015 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1018 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1020 "check_hlds.delay_info.c"
  }
#line 1022 "check_hlds.delay_info.c"
}

#line 1025 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 1028 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1030 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1032 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1034 "check_hlds.delay_info.c"
{
#line 1036 "check_hlds.delay_info.c"
  {
#line 1038 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1041 "check_hlds.delay_info.c"
    {
#line 1043 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1046 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1048 "check_hlds.delay_info.c"
  }
#line 1050 "check_hlds.delay_info.c"
}

#line 1053 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 1056 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1058 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1060 "check_hlds.delay_info.c"
{
#line 1062 "check_hlds.delay_info.c"
  {
#line 1064 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1067 "check_hlds.delay_info.c"
    {
#line 1069 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1072 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1074 "check_hlds.delay_info.c"
  }
#line 1076 "check_hlds.delay_info.c"
}

#line 1079 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 1082 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1084 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1086 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1088 "check_hlds.delay_info.c"
{
#line 1090 "check_hlds.delay_info.c"
  {
#line 1092 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1095 "check_hlds.delay_info.c"
    {
#line 1097 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1100 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1102 "check_hlds.delay_info.c"
  }
#line 1104 "check_hlds.delay_info.c"
}

#line 1107 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 1110 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1112 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1114 "check_hlds.delay_info.c"
{
#line 1116 "check_hlds.delay_info.c"
  {
#line 1118 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1121 "check_hlds.delay_info.c"
    {
#line 1123 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1126 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1128 "check_hlds.delay_info.c"
  }
#line 1130 "check_hlds.delay_info.c"
}

#line 1133 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 1136 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1138 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1140 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1142 "check_hlds.delay_info.c"
{
#line 1144 "check_hlds.delay_info.c"
  {
#line 1146 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1149 "check_hlds.delay_info.c"
    {
#line 1151 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1154 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1156 "check_hlds.delay_info.c"
  }
#line 1158 "check_hlds.delay_info.c"
}

#line 1161 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 1164 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1166 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1168 "check_hlds.delay_info.c"
{
#line 1170 "check_hlds.delay_info.c"
  {
#line 1172 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1175 "check_hlds.delay_info.c"
    {
#line 1177 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1180 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1182 "check_hlds.delay_info.c"
  }
#line 1184 "check_hlds.delay_info.c"
}

#line 1187 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 1190 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1192 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1194 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1196 "check_hlds.delay_info.c"
{
#line 1198 "check_hlds.delay_info.c"
  {
#line 1200 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1203 "check_hlds.delay_info.c"
    {
#line 1205 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1208 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1210 "check_hlds.delay_info.c"
  }
#line 1212 "check_hlds.delay_info.c"
}

#line 1215 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 1218 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1220 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1222 "check_hlds.delay_info.c"
{
#line 1224 "check_hlds.delay_info.c"
  {
#line 1226 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1229 "check_hlds.delay_info.c"
    {
#line 1231 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1234 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1236 "check_hlds.delay_info.c"
  }
#line 1238 "check_hlds.delay_info.c"
}

#line 1241 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 1244 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1246 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1248 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1250 "check_hlds.delay_info.c"
{
#line 1252 "check_hlds.delay_info.c"
  {
#line 1254 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1257 "check_hlds.delay_info.c"
    {
#line 1259 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1262 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1264 "check_hlds.delay_info.c"
  }
#line 1266 "check_hlds.delay_info.c"
}

#line 38 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_p_0(void)
#line 38 "delay_info.m"
{
#line 161 "delay_info.m"
  {
#line 161 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;

#line 161 "delay_info.m"
  }
#line 38 "delay_info.m"
}

#line 143 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 143 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 143 "delay_info.m"
{
#line 143 "delay_info.m"
  {
#line 143 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 143 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 143 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 143 "delay_info.m"
    {
#line 143 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 143 "delay_info.m"
      return;
    }
#line 143 "delay_info.m"
  }
#line 143 "delay_info.m"
}

#line 143 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 143 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 143 "delay_info.m"
{
#line 143 "delay_info.m"
  {
#line 143 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 143 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 143 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 143 "delay_info.m"
    {
#line 143 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 143 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 143 "delay_info.m"
  }
#line 143 "delay_info.m"
}

#line 146 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 146 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 146 "delay_info.m"
{
#line 146 "delay_info.m"
  {
#line 146 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 146 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 146 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 146 "delay_info.m"
    {
#line 146 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 146 "delay_info.m"
      return;
    }
#line 146 "delay_info.m"
  }
#line 146 "delay_info.m"
}

#line 146 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 146 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 146 "delay_info.m"
{
#line 146 "delay_info.m"
  {
#line 146 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 146 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 146 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 146 "delay_info.m"
    {
#line 146 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 146 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 146 "delay_info.m"
  }
#line 146 "delay_info.m"
}

#line 157 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
#line 157 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
#line 157 "delay_info.m"
{
#line 157 "delay_info.m"
  {
#line 157 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 157 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 157 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 157 "delay_info.m"
    {
#line 157 "delay_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
#line 157 "delay_info.m"
      return;
    }
#line 157 "delay_info.m"
  }
#line 157 "delay_info.m"
}

#line 157 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 157 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
#line 157 "delay_info.m"
{
#line 157 "delay_info.m"
  {
#line 157 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 157 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 157 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 157 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
#line 157 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 157 "delay_info.m"
  }
#line 157 "delay_info.m"
}

#line 148 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 148 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 148 "delay_info.m"
{
#line 148 "delay_info.m"
  {
#line 148 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 148 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 148 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 148 "delay_info.m"
    {
#line 148 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 148 "delay_info.m"
      return;
    }
#line 148 "delay_info.m"
  }
#line 148 "delay_info.m"
}

#line 148 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 148 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 148 "delay_info.m"
{
#line 148 "delay_info.m"
  {
#line 148 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 148 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 148 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 148 "delay_info.m"
    {
#line 148 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 148 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 148 "delay_info.m"
  }
#line 148 "delay_info.m"
}

#line 156 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 156 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
#line 156 "delay_info.m"
{
#line 156 "delay_info.m"
  {
#line 156 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 156 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 156 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 156 "delay_info.m"
    {
#line 156 "delay_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
#line 156 "delay_info.m"
      return;
    }
#line 156 "delay_info.m"
  }
#line 156 "delay_info.m"
}

#line 156 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 156 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
#line 156 "delay_info.m"
{
#line 156 "delay_info.m"
  {
#line 156 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 156 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 156 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 156 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
#line 156 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 156 "delay_info.m"
  }
#line 156 "delay_info.m"
}

#line 116 "delay_info.m"
void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0(
#line 116 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 116 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 116 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 116 "delay_info.m"
{
#line 116 "delay_info.m"
  {
#line 116 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 116 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_18 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 116 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_19 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 116 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_18 == check_hlds__delay_info__CastY_19);
#line 116 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 1612 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "delay_info.m"
    else
#line 116 "delay_info.m"
      {
#line 116 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));
#line 116 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 2)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 3)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 4)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_14_14;

#line 116 "delay_info.m"
        {
#line 116 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_14_14, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_9_9);
        }
#line 1646 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_14_14 == (MR_Integer) 0);
#line 116 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 116 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_14_14;
#line 116 "delay_info.m"
        else
#line 116 "delay_info.m"
          {
#line 116 "delay_info.m"
            MR_Word check_hlds__delay_info__V_15_15;

#line 116 "delay_info.m"
            {
#line 116 "delay_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], &check_hlds__delay_info__V_15_15, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
            }
#line 1666 "check_hlds.delay_info.c"
            check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_15_15 == (MR_Integer) 0);
#line 116 "delay_info.m"
            check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 116 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
              *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_15_15;
#line 116 "delay_info.m"
            else
#line 116 "delay_info.m"
              {
#line 116 "delay_info.m"
                MR_Word check_hlds__delay_info__V_16_16;

#line 116 "delay_info.m"
                {
#line 116 "delay_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], &check_hlds__delay_info__V_16_16, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                }
#line 1686 "check_hlds.delay_info.c"
                check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_16_16 == (MR_Integer) 0);
#line 116 "delay_info.m"
                check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 116 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                  *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_16_16;
#line 116 "delay_info.m"
                else
#line 116 "delay_info.m"
                  {
#line 116 "delay_info.m"
                    MR_Word check_hlds__delay_info__V_17_17;

#line 116 "delay_info.m"
                    {
#line 116 "delay_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], &check_hlds__delay_info__V_17_17, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                    }
#line 1706 "check_hlds.delay_info.c"
                    check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_17_17 == (MR_Integer) 0);
#line 116 "delay_info.m"
                    check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 116 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                      *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_17_17;
#line 116 "delay_info.m"
                    else
#line 116 "delay_info.m"
                      {
#line 116 "delay_info.m"
                        {
#line 116 "delay_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[4], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__V_8_8)), ((MR_Box) (check_hlds__delay_info__V_13_13)));
#line 116 "delay_info.m"
                          return;
                        }
#line 116 "delay_info.m"
                      }
#line 116 "delay_info.m"
                  }
#line 116 "delay_info.m"
              }
#line 116 "delay_info.m"
          }
#line 116 "delay_info.m"
      }
#line 116 "delay_info.m"
  }
#line 116 "delay_info.m"
}

#line 116 "delay_info.m"
MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0(
#line 116 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 116 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 116 "delay_info.m"
{
#line 116 "delay_info.m"
  {
#line 116 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 116 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_13 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 116 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_14 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 116 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_13 == check_hlds__delay_info__CastY_14);
#line 116 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 116 "delay_info.m"
    else
#line 116 "delay_info.m"
      {
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_15_15;
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_16_16;
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_17_17;
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_18_18;
#line 116 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 2)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 3)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 4)));
#line 116 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 116 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1797 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
#line 116 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
          {
#line 1803 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
#line 1805 "check_hlds.delay_info.c"
            {
#line 1807 "check_hlds.delay_info.c"
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
#line 116 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
              {
#line 1814 "check_hlds.delay_info.c"
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
#line 1816 "check_hlds.delay_info.c"
                {
#line 1818 "check_hlds.delay_info.c"
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
#line 116 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                  {
#line 1825 "check_hlds.delay_info.c"
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
#line 1827 "check_hlds.delay_info.c"
                    {
#line 1829 "check_hlds.delay_info.c"
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
#line 116 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                      {
#line 1836 "check_hlds.delay_info.c"
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
#line 1838 "check_hlds.delay_info.c"
                        {
#line 1840 "check_hlds.delay_info.c"
                          return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_18_18, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                        }
#line 116 "delay_info.m"
                      }
#line 116 "delay_info.m"
                  }
#line 116 "delay_info.m"
              }
#line 116 "delay_info.m"
          }
#line 116 "delay_info.m"
      }
#line 116 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 116 "delay_info.m"
  }
#line 116 "delay_info.m"
}

#line 150 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 150 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 150 "delay_info.m"
{
#line 150 "delay_info.m"
  {
#line 150 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 150 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_9 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 150 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_10 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 150 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_9 == check_hlds__delay_info__CastY_10);
#line 150 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 1884 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "delay_info.m"
    else
#line 150 "delay_info.m"
      {
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8;

#line 150 "delay_info.m"
        {
#line 150 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_8_8, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_6_6);
        }
#line 1906 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_8_8 == (MR_Integer) 0);
#line 150 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 150 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 150 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_8_8;
#line 150 "delay_info.m"
        else
#line 150 "delay_info.m"
          {
#line 150 "delay_info.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__V_5_5, check_hlds__delay_info__V_7_7);
#line 150 "delay_info.m"
            return;
          }
#line 150 "delay_info.m"
      }
#line 150 "delay_info.m"
  }
#line 150 "delay_info.m"
}

#line 150 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 150 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 150 "delay_info.m"
{
#line 150 "delay_info.m"
  {
#line 150 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 150 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_7 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 150 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_8 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 150 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_7 == check_hlds__delay_info__CastY_8);
#line 150 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 150 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 150 "delay_info.m"
    else
#line 150 "delay_info.m"
      {
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));

#line 1967 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
#line 150 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 1971 "check_hlds.delay_info.c"
          check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_4_4 == check_hlds__delay_info__V_6_6);
#line 150 "delay_info.m"
      }
#line 150 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 150 "delay_info.m"
  }
#line 150 "delay_info.m"
}

#line 415 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__GoalNum_2,
#line 415 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3,
#line 415 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__4_4)
#line 415 "delay_info.m"
{
#line 418 "delay_info.m"
  while (MR_TRUE)
#line 418 "delay_info.m"
    {
#line 418 "delay_info.m"
      /* tailcall optimized into a loop */
#line 418 "delay_info.m"
      {
#line 418 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 418 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "delay_info.m"
          *check_hlds__delay_info__HeadVar__4_4 = check_hlds__delay_info__HeadVar__3_3;
#line 418 "delay_info.m"
        else
#line 419 "delay_info.m"
          {
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_20_20 = (MR_Word) &check_hlds__delay_info_scalar_common_2[0];
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_21_21 = (MR_Word) &check_hlds__delay_info_scalar_common_1[1];
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_23_23;
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals0_13;
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals_14;
#line 419 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;
#line 420 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_13;

#line 420 "delay_info.m"
            {
#line 420 "delay_info.m"
              mercury__map__lookup_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, check_hlds__delay_info__HeadVar__3_3, ((MR_Box) (check_hlds__delay_info__Var_9)), &check_hlds__delay_info__conv0_WaitingGoals0_13);
            }
#line 420 "delay_info.m"
            check_hlds__delay_info__WaitingGoals0_13 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_13);
#line 2042 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
#line 2044 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_23_23 = (MR_Word) &check_hlds__delay_info_scalar_common_2[1];
#line 421 "delay_info.m"
            {
#line 421 "delay_info.m"
              mercury__map__delete_3_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, ((MR_Box) (check_hlds__delay_info__GoalNum_2)), check_hlds__delay_info__WaitingGoals0_13, &check_hlds__delay_info__WaitingGoals_14);
            }
#line 422 "delay_info.m"
            {
#line 422 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, check_hlds__delay_info__WaitingGoals_14);
            }
#line 424 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 423 "delay_info.m"
              {
#line 423 "delay_info.m"
                mercury__map__delete_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
#line 424 "delay_info.m"
            else
#line 425 "delay_info.m"
              {
#line 425 "delay_info.m"
                mercury__map__set_4_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_14)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
#line 427 "delay_info.m"
            /* direct tailcall eliminated */
#line 427 "delay_info.m"
            {
#line 427 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_10;
#line 427 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__3__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;

#line 427 "delay_info.m"
              check_hlds__delay_info__HeadVar__3_3 = check_hlds__delay_info__HeadVar__3__tmp_copy_3;
#line 427 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 427 "delay_info.m"
            }
#line 427 "delay_info.m"
            continue;
#line 419 "delay_info.m"
          }
#line 418 "delay_info.m"
      }
#line 418 "delay_info.m"
      break;
#line 418 "delay_info.m"
    }
#line 415 "delay_info.m"
}

#line 386 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 386 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 386 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 386 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6)
#line 386 "delay_info.m"
{
#line 391 "delay_info.m"
  while (MR_TRUE)
#line 391 "delay_info.m"
    {
#line 391 "delay_info.m"
      /* tailcall optimized into a loop */
#line 391 "delay_info.m"
      {
#line 391 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 391 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "delay_info.m"
          {
#line 391 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5;
#line 391 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3;
#line 391 "delay_info.m"
          }
#line 391 "delay_info.m"
        else
#line 393 "delay_info.m"
          {
#line 393 "delay_info.m"
            MR_Integer check_hlds__delay_info__Depth_14;
#line 393 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_15;
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingVars_21;
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingSeqNums_23;
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;
#line 393 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_33_33;
#line 396 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingVars_21;
#line 403 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingSeqNums0_22;
#line 400 "delay_info.m"
            MR_Box check_hlds__delay_info__conv1_PendingSeqNums0_22;

#line 392 "delay_info.m"
            check_hlds__delay_info__Depth_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, (MR_Integer) 0)));
#line 392 "delay_info.m"
            check_hlds__delay_info__SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, (MR_Integer) 1)));
#line 396 "delay_info.m"
            {
#line 396 "delay_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__HeadVar__2_2, ((MR_Box) (check_hlds__delay_info__GoalNum_20)), &check_hlds__delay_info__conv0_WaitingVars_21);
            }
#line 396 "delay_info.m"
            check_hlds__delay_info__WaitingVars_21 = ((MR_Word) check_hlds__delay_info__conv0_WaitingVars_21);
#line 397 "delay_info.m"
            {
#line 397 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__WaitingVars_21, check_hlds__delay_info__GoalNum_20, check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29);
            }
#line 400 "delay_info.m"
            {
#line 400 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, check_hlds__delay_info__Depth_14, &check_hlds__delay_info__conv1_PendingSeqNums0_22);
            }
#line 400 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 400 "delay_info.m"
              {
#line 400 "delay_info.m"
                check_hlds__delay_info__PendingSeqNums0_22 = ((MR_Word) check_hlds__delay_info__conv1_PendingSeqNums0_22);
#line 400 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 400 "delay_info.m"
              }
#line 403 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 402 "delay_info.m"
              {
#line 402 "delay_info.m"
                MR_Word check_hlds__delay_info__V_30_30;

#line 402 "delay_info.m"
                {
#line 402 "delay_info.m"
                  check_hlds__delay_info__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "delay_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_info__V_30_30, 0) = ((MR_Box) (check_hlds__delay_info__SeqNum_15));
#line 402 "delay_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_info__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "delay_info.m"
                }
#line 402 "delay_info.m"
                {
#line 402 "delay_info.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__delay_info__PendingSeqNums0_22, check_hlds__delay_info__V_30_30, &check_hlds__delay_info__PendingSeqNums_23);
                }
#line 402 "delay_info.m"
              }
#line 403 "delay_info.m"
            else
#line 404 "delay_info.m"
              {
#line 404 "delay_info.m"
                {
#line 404 "delay_info.m"
                  check_hlds__delay_info__PendingSeqNums_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "delay_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_info__PendingSeqNums_23, 0) = ((MR_Box) (check_hlds__delay_info__SeqNum_15));
#line 404 "delay_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__delay_info__PendingSeqNums_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "delay_info.m"
                }
#line 404 "delay_info.m"
              }
#line 406 "delay_info.m"
            {
#line 406 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_14, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_23)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_33_33);
            }
#line 409 "delay_info.m"
            /* direct tailcall eliminated */
#line 409 "delay_info.m"
            {
#line 409 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Rest_16;
#line 409 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_33_33;
#line 409 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;

#line 409 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5;
#line 409 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3;
#line 409 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 409 "delay_info.m"
            }
#line 409 "delay_info.m"
            continue;
#line 393 "delay_info.m"
          }
#line 391 "delay_info.m"
      }
#line 391 "delay_info.m"
      break;
#line 391 "delay_info.m"
    }
#line 386 "delay_info.m"
}

#line 329 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 329 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 329 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 329 "delay_info.m"
{
#line 333 "delay_info.m"
  while (MR_TRUE)
#line 333 "delay_info.m"
    {
#line 333 "delay_info.m"
      /* tailcall optimized into a loop */
#line 333 "delay_info.m"
      {
#line 333 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 333 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 333 "delay_info.m"
        else
#line 334 "delay_info.m"
          {
#line 334 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals1_17;
#line 334 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals_18;
#line 334 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;
#line 337 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals0_16;
#line 335 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_16;

#line 335 "delay_info.m"
            {
#line 335 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, ((MR_Box) (check_hlds__delay_info__Var_11)), &check_hlds__delay_info__conv0_WaitingGoals0_16);
            }
#line 335 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 335 "delay_info.m"
              {
#line 335 "delay_info.m"
                check_hlds__delay_info__WaitingGoals0_16 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_16);
#line 335 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 335 "delay_info.m"
              }
#line 337 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 336 "delay_info.m"
              check_hlds__delay_info__WaitingGoals1_17 = check_hlds__delay_info__WaitingGoals0_16;
#line 337 "delay_info.m"
            else
#line 338 "delay_info.m"
              {
#line 338 "delay_info.m"
                {
#line 338 "delay_info.m"
                  mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], &check_hlds__delay_info__WaitingGoals1_17);
                }
#line 338 "delay_info.m"
              }
#line 340 "delay_info.m"
            {
#line 340 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], ((MR_Box) (check_hlds__delay_info__Goal_2)), ((MR_Box) (check_hlds__delay_info__AllVars_3)), check_hlds__delay_info__WaitingGoals1_17, &check_hlds__delay_info__WaitingGoals_18);
            }
#line 341 "delay_info.m"
            {
#line 341 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Var_11)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_18)), check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21);
            }
#line 342 "delay_info.m"
            /* direct tailcall eliminated */
#line 342 "delay_info.m"
            {
#line 342 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_12;
#line 342 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;

#line 342 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 342 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 342 "delay_info.m"
            }
#line 342 "delay_info.m"
            continue;
#line 334 "delay_info.m"
          }
#line 333 "delay_info.m"
      }
#line 333 "delay_info.m"
      break;
#line 333 "delay_info.m"
    }
#line 329 "delay_info.m"
}

#line 277 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 277 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 277 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 277 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 277 "delay_info.m"
{
#line 280 "delay_info.m"
  while (MR_TRUE)
#line 280 "delay_info.m"
    {
#line 280 "delay_info.m"
      /* tailcall optimized into a loop */
#line 280 "delay_info.m"
      {
#line 280 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 280 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 280 "delay_info.m"
        else
#line 282 "delay_info.m"
          {
#line 282 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__SeqNums_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoal_16;
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_17;
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_20;
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__VarList_21;
#line 282 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;
#line 283 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_DelayedGoal_16;
#line 284 "delay_info.m"
            MR_Word check_hlds__delay_info___Error_18;
#line 284 "delay_info.m"
            MR_Word check_hlds__delay_info___Goal_19;

#line 283 "delay_info.m"
            {
#line 283 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__DelayedGoalsTable_2, check_hlds__delay_info__SeqNum_11, &check_hlds__delay_info__conv0_DelayedGoal_16);
            }
#line 283 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_16 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_16);
#line 284 "delay_info.m"
            check_hlds__delay_info__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 0)));
#line 284 "delay_info.m"
            check_hlds__delay_info___Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 1)));
#line 284 "delay_info.m"
            check_hlds__delay_info___Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 2)));
#line 285 "delay_info.m"
            {
#line 285 "delay_info.m"
              check_hlds__delay_info__GoalNum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 0) = ((MR_Box) (check_hlds__delay_info__Depth_3));
#line 285 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_11));
#line 285 "delay_info.m"
            }
#line 286 "delay_info.m"
            {
#line 286 "delay_info.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_17, &check_hlds__delay_info__VarList_21);
            }
#line 287 "delay_info.m"
            {
#line 287 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__VarList_21, check_hlds__delay_info__GoalNum_20, check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24);
            }
#line 288 "delay_info.m"
            /* direct tailcall eliminated */
#line 288 "delay_info.m"
            {
#line 288 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__SeqNums_12;
#line 288 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;

#line 288 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 288 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 288 "delay_info.m"
            }
#line 288 "delay_info.m"
            continue;
#line 282 "delay_info.m"
          }
#line 280 "delay_info.m"
      }
#line 280 "delay_info.m"
      break;
#line 280 "delay_info.m"
    }
#line 277 "delay_info.m"
}

#line 91 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(
#line 91 "delay_info.m"
  MR_Word * check_hlds__delay_info__Goals_4,
#line 91 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8,
#line 91 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_9)
#line 91 "delay_info.m"
{
#line 435 "delay_info.m"
  {
#line 435 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 435 "delay_info.m"
    MR_Word check_hlds__delay_info__Goal_6;
#line 435 "delay_info.m"
    MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeInfo_26_34 = (MR_Word) &check_hlds__delay_info_scalar_common_2[2];
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeInfo_27_35;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_28_36;
#line 452 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8, (MR_Integer) 0)));
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8, (MR_Integer) 1)));
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoals_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8, (MR_Integer) 2)));
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoalsTable0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8, (MR_Integer) 3)));
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8, (MR_Integer) 4)));
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_21;
#line 452 "delay_info.m"
    MR_Integer check_hlds__delay_info__SeqNum_22;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_23;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoalsTable_24;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals0_25;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack1_26;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoal_27;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_30;
#line 452 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_31;
#line 458 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_PendingGoals0_21;
#line 465 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_DelayedGoals0_25;
#line 466 "delay_info.m"
    MR_Box check_hlds__delay_info__conv2_DelayedGoal_27;
#line 467 "delay_info.m"
    MR_Word check_hlds__delay_info___Vars_28;
#line 467 "delay_info.m"
    MR_Word check_hlds__delay_info___ErrorReason_29;

#line 458 "delay_info.m"
    {
#line 458 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__delay_info__TypeInfo_26_34, check_hlds__delay_info__PendingGoalsTable0_19, check_hlds__delay_info__CurrentDepth_16, &check_hlds__delay_info__conv0_PendingGoals0_21);
    }
#line 458 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 458 "delay_info.m"
      {
#line 458 "delay_info.m"
        check_hlds__delay_info__PendingGoals0_21 = ((MR_Word) check_hlds__delay_info__conv0_PendingGoals0_21);
#line 458 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 458 "delay_info.m"
      }
#line 452 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 452 "delay_info.m"
      {
#line 462 "delay_info.m"
        check_hlds__delay_info__succeeded = ((MR_tag((MR_Word) check_hlds__delay_info__PendingGoals0_21)) == (MR_mktag((MR_Integer) 1)));
#line 462 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 462 "delay_info.m"
          {
#line 462 "delay_info.m"
            check_hlds__delay_info__SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__PendingGoals0_21, (MR_Integer) 0)));
#line 462 "delay_info.m"
            check_hlds__delay_info__PendingGoals_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__PendingGoals0_21, (MR_Integer) 1)));
#line 463 "delay_info.m"
            {
#line 463 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(check_hlds__delay_info__TypeInfo_26_34, check_hlds__delay_info__CurrentDepth_16, ((MR_Box) (check_hlds__delay_info__PendingGoals_23)), check_hlds__delay_info__PendingGoalsTable0_19, &check_hlds__delay_info__PendingGoalsTable_24);
            }
#line 2602 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_27_35 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 465 "delay_info.m"
            {
#line 465 "delay_info.m"
              mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_27_35, &check_hlds__delay_info__conv1_DelayedGoals0_25, check_hlds__delay_info__DelayedGoalStack0_17, &check_hlds__delay_info__DelayedGoalStack1_26);
            }
#line 465 "delay_info.m"
            check_hlds__delay_info__DelayedGoals0_25 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_25);
#line 2611 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_28_36 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 466 "delay_info.m"
            {
#line 466 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(check_hlds__delay_info__TypeCtorInfo_28_36, check_hlds__delay_info__DelayedGoals0_25, check_hlds__delay_info__SeqNum_22, &check_hlds__delay_info__conv2_DelayedGoal_27);
            }
#line 466 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_27 = ((MR_Word) check_hlds__delay_info__conv2_DelayedGoal_27);
#line 467 "delay_info.m"
            check_hlds__delay_info___Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_27, (MR_Integer) 0)));
#line 467 "delay_info.m"
            check_hlds__delay_info___ErrorReason_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_27, (MR_Integer) 1)));
#line 467 "delay_info.m"
            check_hlds__delay_info__Goal_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_27, (MR_Integer) 2)));
#line 468 "delay_info.m"
            {
#line 468 "delay_info.m"
              mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__delay_info__TypeCtorInfo_28_36, ((MR_Box) (check_hlds__delay_info__SeqNum_22)), check_hlds__delay_info__DelayedGoals0_25, &check_hlds__delay_info__DelayedGoals_30);
            }
#line 469 "delay_info.m"
            {
#line 469 "delay_info.m"
              mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_27_35, ((MR_Box) (check_hlds__delay_info__DelayedGoals_30)), check_hlds__delay_info__DelayedGoalStack1_26, &check_hlds__delay_info__DelayedGoalStack_31);
            }
#line 470 "delay_info.m"
            {
#line 470 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 470 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_16));
#line 470 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_31));
#line 470 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoals_18));
#line 470 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoalsTable_24));
#line 470 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_20));
#line 470 "delay_info.m"
            }
#line 470 "delay_info.m"
            check_hlds__delay_info__succeeded = MR_TRUE;
#line 462 "delay_info.m"
          }
#line 452 "delay_info.m"
      }
#line 435 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 433 "delay_info.m"
      {
#line 433 "delay_info.m"
        MR_Word check_hlds__delay_info__Goals1_7;

#line 434 "delay_info.m"
        {
#line 434 "delay_info.m"
          check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(&check_hlds__delay_info__Goals1_7, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_10_10, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_9);
        }
#line 433 "delay_info.m"
        {
#line 433 "delay_info.m"
          MR_Word base;
#line 433 "delay_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "delay_info.m"
          *check_hlds__delay_info__Goals_4 = base;
#line 433 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__Goal_6));
#line 433 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__Goals1_7));
#line 433 "delay_info.m"
        }
#line 433 "delay_info.m"
      }
#line 435 "delay_info.m"
    else
#line 436 "delay_info.m"
      {
#line 436 "delay_info.m"
        *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "delay_info.m"
        *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_9 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_8;
#line 436 "delay_info.m"
      }
#line 435 "delay_info.m"
  }
#line 91 "delay_info.m"
}

#line 79 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(
#line 79 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5,
#line 79 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6)
#line 79 "delay_info.m"
{
#line 352 "delay_info.m"
  {
#line 352 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 352 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingVars_4;
#line 352 "delay_info.m"
    MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 2)));
#line 353 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 0)));
#line 353 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 1)));
#line 353 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 3)));
#line 353 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 4)));

#line 353 "delay_info.m"
    {
#line 353 "delay_info.m"
      mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__V_7_7, &check_hlds__delay_info__WaitingVars_4);
    }
#line 354 "delay_info.m"
    {
#line 354 "delay_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__delay_info__WaitingVars_4, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6);
#line 354 "delay_info.m"
      return;
    }
#line 352 "delay_info.m"
  }
#line 79 "delay_info.m"
}

#line 72 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_3_p_0(
#line 72 "delay_info.m"
  MR_Word check_hlds__delay_info__Var_4,
#line 72 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15,
#line 72 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16)
#line 72 "delay_info.m"
{
#line 366 "delay_info.m"
  {
#line 366 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 366 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 0)));
#line 366 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 1)));
#line 366 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 2)));
#line 366 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 3)));
#line 366 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 4)));
#line 378 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalsWaitingOnVar_11;
#line 370 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_GoalsWaitingOnVar_11;

#line 370 "delay_info.m"
    {
#line 370 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__WaitingGoalsTable0_8, ((MR_Box) (check_hlds__delay_info__Var_4)), &check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
    }
#line 370 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 370 "delay_info.m"
      {
#line 370 "delay_info.m"
        check_hlds__delay_info__GoalsWaitingOnVar_11 = ((MR_Word) check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
#line 370 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 370 "delay_info.m"
      }
#line 378 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 371 "delay_info.m"
      {
#line 371 "delay_info.m"
        MR_Word check_hlds__delay_info__NewlyPendingGoals_12;
#line 371 "delay_info.m"
        MR_Word check_hlds__delay_info__PendingGoals_13;
#line 371 "delay_info.m"
        MR_Word check_hlds__delay_info__WaitingGoalsTable_14;

#line 371 "delay_info.m"
        {
#line 371 "delay_info.m"
          mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__GoalsWaitingOnVar_11, &check_hlds__delay_info__NewlyPendingGoals_12);
        }
#line 372 "delay_info.m"
        {
#line 372 "delay_info.m"
          check_hlds__delay_info__add_pending_goals_6_p_0(check_hlds__delay_info__NewlyPendingGoals_12, check_hlds__delay_info__GoalsWaitingOnVar_11, check_hlds__delay_info__PendingGoals0_9, &check_hlds__delay_info__PendingGoals_13, check_hlds__delay_info__WaitingGoalsTable0_8, &check_hlds__delay_info__WaitingGoalsTable_14);
        }
#line 375 "delay_info.m"
        {
#line 375 "delay_info.m"
          MR_Word base;
#line 375 "delay_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 375 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = base;
#line 375 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
#line 375 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_7));
#line 375 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_14));
#line 375 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_13));
#line 375 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
#line 375 "delay_info.m"
        }
#line 371 "delay_info.m"
      }
#line 378 "delay_info.m"
    else
#line 377 "delay_info.m"
      *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15;
#line 366 "delay_info.m"
  }
#line 72 "delay_info.m"
}

#line 65 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_list_3_p_0(
#line 65 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 65 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2,
#line 65 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3)
#line 65 "delay_info.m"
{
#line 356 "delay_info.m"
  while (MR_TRUE)
#line 356 "delay_info.m"
    {
#line 356 "delay_info.m"
      /* tailcall optimized into a loop */
#line 356 "delay_info.m"
      {
#line 356 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 356 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2;
#line 356 "delay_info.m"
        else
#line 357 "delay_info.m"
          {
#line 357 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 358 "delay_info.m"
            {
#line 358 "delay_info.m"
              check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__delay_info__Var_7, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12);
            }
#line 359 "delay_info.m"
            /* direct tailcall eliminated */
#line 359 "delay_info.m"
            {
#line 359 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_8;
#line 359 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 359 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 359 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 359 "delay_info.m"
            }
#line 359 "delay_info.m"
            continue;
#line 357 "delay_info.m"
          }
#line 356 "delay_info.m"
      }
#line 356 "delay_info.m"
      break;
#line 356 "delay_info.m"
    }
#line 65 "delay_info.m"
}

#line 57 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_delay_goal_4_p_0(
#line 57 "delay_info.m"
  MR_Word check_hlds__delay_info__Error_5,
#line 57 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_6,
#line 57 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_7,
#line 57 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_8)
#line 57 "delay_info.m"
{
#line 296 "delay_info.m"
  {
#line 296 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeInfo_33_33;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 0)));
#line 296 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 0)));
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 1)));
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 2)));
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 3)));
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 4)));
#line 296 "delay_info.m"
    MR_Integer check_hlds__delay_info__SeqNum_18;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums1_19;
#line 296 "delay_info.m"
    MR_Integer check_hlds__delay_info__NextSeq_20;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_21;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals0_22;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack1_23;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_24;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_25;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalNum_26;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__VarList_27;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_28;
#line 296 "delay_info.m"
    MR_Word check_hlds__delay_info__V_30_30;
#line 298 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 1)));
#line 298 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 2)));
#line 298 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 3)));
#line 303 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_SeqNum_18;
#line 308 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_DelayedGoals0_22;

#line 303 "delay_info.m"
    {
#line 303 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, &check_hlds__delay_info__conv0_SeqNum_18, check_hlds__delay_info__NextSeqNums0_17, &check_hlds__delay_info__NextSeqNums1_19);
    }
#line 303 "delay_info.m"
    check_hlds__delay_info__SeqNum_18 = ((MR_Integer) check_hlds__delay_info__conv0_SeqNum_18);
#line 304 "delay_info.m"
    check_hlds__delay_info__NextSeq_20 = (check_hlds__delay_info__SeqNum_18 + (MR_Integer) 1);
#line 305 "delay_info.m"
    {
#line 305 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, ((MR_Box) (check_hlds__delay_info__NextSeq_20)), check_hlds__delay_info__NextSeqNums1_19, &check_hlds__delay_info__NextSeqNums_21);
    }
#line 2993 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeInfo_33_33 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 308 "delay_info.m"
    {
#line 308 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_33_33, &check_hlds__delay_info__conv1_DelayedGoals0_22, check_hlds__delay_info__DelayedGoalStack0_14, &check_hlds__delay_info__DelayedGoalStack1_23);
    }
#line 308 "delay_info.m"
    check_hlds__delay_info__DelayedGoals0_22 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_22);
#line 309 "delay_info.m"
    {
#line 309 "delay_info.m"
      check_hlds__delay_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 0) = ((MR_Box) (check_hlds__delay_info__Vars_9));
#line 309 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 1) = ((MR_Box) (check_hlds__delay_info__Error_5));
#line 309 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 2) = ((MR_Box) (check_hlds__delay_info__Goal_6));
#line 309 "delay_info.m"
    }
#line 309 "delay_info.m"
    {
#line 309 "delay_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__SeqNum_18, ((MR_Box) (check_hlds__delay_info__V_30_30)), check_hlds__delay_info__DelayedGoals0_22, &check_hlds__delay_info__DelayedGoals_24);
    }
#line 311 "delay_info.m"
    {
#line 311 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_33_33, ((MR_Box) (check_hlds__delay_info__DelayedGoals_24)), check_hlds__delay_info__DelayedGoalStack1_23, &check_hlds__delay_info__DelayedGoalStack_25);
    }
#line 314 "delay_info.m"
    {
#line 314 "delay_info.m"
      check_hlds__delay_info__GoalNum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 314 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_18));
#line 314 "delay_info.m"
    }
#line 315 "delay_info.m"
    {
#line 315 "delay_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_9, &check_hlds__delay_info__VarList_27);
    }
#line 316 "delay_info.m"
    {
#line 316 "delay_info.m"
      check_hlds__delay_info__add_waiting_vars_5_p_0(check_hlds__delay_info__VarList_27, check_hlds__delay_info__GoalNum_26, check_hlds__delay_info__VarList_27, check_hlds__delay_info__WaitingGoalsTable0_15, &check_hlds__delay_info__WaitingGoalsTable_28);
    }
#line 319 "delay_info.m"
    {
#line 319 "delay_info.m"
      MR_Word base;
#line 319 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 319 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_8 = base;
#line 319 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 319 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_25));
#line 319 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_28));
#line 319 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_16));
#line 319 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_21));
#line 319 "delay_info.m"
    }
#line 296 "delay_info.m"
  }
#line 57 "delay_info.m"
}

#line 52 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_leave_conj_3_p_0(
#line 52 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_4,
#line 52 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayedGoalsList_5,
#line 52 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_6)
#line 52 "delay_info.m"
{
#line 257 "delay_info.m"
  {
#line 257 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_21_21;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
#line 257 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 0)));
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 1)));
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 2)));
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 3)));
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 4)));
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_12;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_13;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__SeqNums_14;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_15;
#line 257 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_17;
#line 257 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_18;
#line 261 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_DelayedGoals_12;
#line 265 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_16_16;
#line 265 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_V_16_16;

#line 261 "delay_info.m"
    {
#line 261 "delay_info.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__conv0_DelayedGoals_12, check_hlds__delay_info__DelayedGoalStack0_8, &check_hlds__delay_info__DelayedGoalStack_13);
    }
#line 261 "delay_info.m"
    check_hlds__delay_info__DelayedGoals_12 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoals_12);
#line 3124 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3126 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 262 "delay_info.m"
    {
#line 262 "delay_info.m"
      mercury__map__keys_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, &check_hlds__delay_info__SeqNums_14);
    }
#line 263 "delay_info.m"
    {
#line 263 "delay_info.m"
      check_hlds__delay_info__remove_delayed_goals_5_p_0(check_hlds__delay_info__SeqNums_14, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__CurrentDepth0_7, check_hlds__delay_info__WaitingGoalsTable0_9, &check_hlds__delay_info__WaitingGoalsTable_15);
    }
#line 265 "delay_info.m"
    {
#line 265 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, &check_hlds__delay_info__conv1_V_16_16, check_hlds__delay_info__NextSeqNums0_11, &check_hlds__delay_info__NextSeqNums_17);
    }
#line 265 "delay_info.m"
    check_hlds__delay_info__V_16_16 = ((MR_Integer) check_hlds__delay_info__conv1_V_16_16);
#line 266 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_18 = (check_hlds__delay_info__CurrentDepth0_7 - (MR_Integer) 1);
#line 267 "delay_info.m"
    {
#line 267 "delay_info.m"
      mercury__map__values_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__DelayedGoalsList_5);
    }
#line 268 "delay_info.m"
    {
#line 268 "delay_info.m"
      MR_Word base;
#line 268 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 268 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_6 = base;
#line 268 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_18));
#line 268 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_13));
#line 268 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_15));
#line 268 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_10));
#line 268 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_17));
#line 268 "delay_info.m"
    }
#line 257 "delay_info.m"
  }
#line 52 "delay_info.m"
}

#line 46 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_enter_conj_2_p_0(
#line 46 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_3,
#line 46 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_4)
#line 46 "delay_info.m"
{
#line 243 "delay_info.m"
  {
#line 243 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 243 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 0)));
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 1)));
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 2)));
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 3)));
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 4)));
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_10;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_11;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_12;
#line 243 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13;

#line 247 "delay_info.m"
    {
#line 247 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, &check_hlds__delay_info__DelayedGoals_10);
    }
#line 248 "delay_info.m"
    {
#line 248 "delay_info.m"
      mercury__stack__push_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], ((MR_Box) (check_hlds__delay_info__DelayedGoals_10)), check_hlds__delay_info__DelayedGoalStack0_6, &check_hlds__delay_info__DelayedGoalStack_11);
    }
#line 249 "delay_info.m"
    {
#line 249 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, ((MR_Box) ((MR_Integer) 0)), check_hlds__delay_info__NextSeqNums0_9, &check_hlds__delay_info__NextSeqNums_12);
    }
#line 250 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_13 = (check_hlds__delay_info__CurrentDepth0_5 + (MR_Integer) 1);
#line 251 "delay_info.m"
    {
#line 251 "delay_info.m"
      MR_Word base;
#line 251 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 251 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_4 = base;
#line 251 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 251 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_11));
#line 251 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_7));
#line 251 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_8));
#line 251 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_12));
#line 251 "delay_info.m"
    }
#line 243 "delay_info.m"
  }
#line 46 "delay_info.m"
}

#line 42 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_init_1_p_0(
#line 42 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_2)
#line 42 "delay_info.m"
{
#line 231 "delay_info.m"
  {
#line 231 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 231 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_11_11;
#line 231 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_4;
#line 231 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_5;
#line 231 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_6;
#line 231 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_7;

#line 233 "delay_info.m"
    {
#line 233 "delay_info.m"
      mercury__stack__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__DelayedGoalStack_4);
    }
#line 234 "delay_info.m"
    {
#line 234 "delay_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], &check_hlds__delay_info__WaitingGoalsTable_5);
    }
#line 3285 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 235 "delay_info.m"
    {
#line 235 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, (MR_Word) &check_hlds__delay_info_scalar_common_2[2], &check_hlds__delay_info__PendingGoals_6);
    }
#line 236 "delay_info.m"
    {
#line 236 "delay_info.m"
      mercury__stack__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, &check_hlds__delay_info__NextSeqNums_7);
    }
#line 237 "delay_info.m"
    {
#line 237 "delay_info.m"
      MR_Word base;
#line 237 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_2 = base;
#line 237 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 237 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_4));
#line 237 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_5));
#line 237 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_6));
#line 237 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_7));
#line 237 "delay_info.m"
    }
#line 231 "delay_info.m"
  }
#line 42 "delay_info.m"
}

#line 38 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_check_invariant_1_p_0(
#line 38 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_2)
#line 38 "delay_info.m"
{
#line 161 "delay_info.m"
  {
#line 161 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;

#line 161 "delay_info.m"
    {
#line 161 "delay_info.m"
      check_hlds__delay_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_p_0();
#line 161 "delay_info.m"
      return;
    }
#line 161 "delay_info.m"
  }
#line 38 "delay_info.m"
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
