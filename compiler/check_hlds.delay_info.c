/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "mdbcomp.sym_name.mih"
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




#line 131 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

#line 134 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

#line 137 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

#line 140 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

#line 143 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

#line 146 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

#line 149 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 152 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 155 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0;

#line 170 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0;

#line 173 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

#line 176 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

#line 179 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

#line 182 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

#line 185 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

#line 188 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

#line 191 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

#line 194 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

#line 197 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 200 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 202 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 205 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 208 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 210 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 212 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 215 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 218 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 220 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 223 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 226 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 228 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 230 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 233 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 236 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 238 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 241 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 244 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 246 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 248 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 251 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 254 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 256 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 259 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 262 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 264 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 266 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 269 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 272 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 274 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 277 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 280 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 282 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 284 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 287 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 290 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 292 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 295 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 298 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 300 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 302 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 305 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 308 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 310 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 313 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 316 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 318 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 320 "check_hlds.delay_info.c"
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



#line 567 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 573 "check_hlds.delay_info.c"
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

#line 588 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 593 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

#line 602 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 607 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

#line 612 "check_hlds.delay_info.c"
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

#line 633 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 642 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 650 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 658 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 666 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 675 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 684 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 692 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 701 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 709 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
};

#line 718 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goals",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seqs"
};

#line 727 "check_hlds.delay_info.c"
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

#line 742 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 747 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

#line 756 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 761 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

#line 766 "check_hlds.delay_info.c"
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

#line 787 "check_hlds.delay_info.c"
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

#line 808 "check_hlds.delay_info.c"
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

#line 829 "check_hlds.delay_info.c"
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

#line 850 "check_hlds.delay_info.c"
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

#line 871 "check_hlds.delay_info.c"
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

#line 892 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 895 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 897 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 899 "check_hlds.delay_info.c"
{
#line 901 "check_hlds.delay_info.c"
  {
#line 903 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 906 "check_hlds.delay_info.c"
    {
#line 908 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 911 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 913 "check_hlds.delay_info.c"
  }
#line 915 "check_hlds.delay_info.c"
}

#line 918 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 921 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 923 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 925 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 927 "check_hlds.delay_info.c"
{
#line 929 "check_hlds.delay_info.c"
  {
#line 931 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 934 "check_hlds.delay_info.c"
    {
#line 936 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 939 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 941 "check_hlds.delay_info.c"
  }
#line 943 "check_hlds.delay_info.c"
}

#line 946 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 949 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 951 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 953 "check_hlds.delay_info.c"
{
#line 955 "check_hlds.delay_info.c"
  {
#line 957 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 960 "check_hlds.delay_info.c"
    {
#line 962 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 965 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 967 "check_hlds.delay_info.c"
  }
#line 969 "check_hlds.delay_info.c"
}

#line 972 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 975 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 977 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 979 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 981 "check_hlds.delay_info.c"
{
#line 983 "check_hlds.delay_info.c"
  {
#line 985 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 988 "check_hlds.delay_info.c"
    {
#line 990 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 993 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 995 "check_hlds.delay_info.c"
  }
#line 997 "check_hlds.delay_info.c"
}

#line 1000 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 1003 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1005 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1007 "check_hlds.delay_info.c"
{
#line 1009 "check_hlds.delay_info.c"
  {
#line 1011 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1014 "check_hlds.delay_info.c"
    {
#line 1016 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1019 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1021 "check_hlds.delay_info.c"
  }
#line 1023 "check_hlds.delay_info.c"
}

#line 1026 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 1029 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1031 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1033 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1035 "check_hlds.delay_info.c"
{
#line 1037 "check_hlds.delay_info.c"
  {
#line 1039 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1042 "check_hlds.delay_info.c"
    {
#line 1044 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1047 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1049 "check_hlds.delay_info.c"
  }
#line 1051 "check_hlds.delay_info.c"
}

#line 1054 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 1057 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1059 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1061 "check_hlds.delay_info.c"
{
#line 1063 "check_hlds.delay_info.c"
  {
#line 1065 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1068 "check_hlds.delay_info.c"
    {
#line 1070 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1073 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1075 "check_hlds.delay_info.c"
  }
#line 1077 "check_hlds.delay_info.c"
}

#line 1080 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 1083 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1085 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1087 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1089 "check_hlds.delay_info.c"
{
#line 1091 "check_hlds.delay_info.c"
  {
#line 1093 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1096 "check_hlds.delay_info.c"
    {
#line 1098 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1101 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1103 "check_hlds.delay_info.c"
  }
#line 1105 "check_hlds.delay_info.c"
}

#line 1108 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 1111 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1113 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1115 "check_hlds.delay_info.c"
{
#line 1117 "check_hlds.delay_info.c"
  {
#line 1119 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1122 "check_hlds.delay_info.c"
    {
#line 1124 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1127 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1129 "check_hlds.delay_info.c"
  }
#line 1131 "check_hlds.delay_info.c"
}

#line 1134 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 1137 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1139 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1141 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1143 "check_hlds.delay_info.c"
{
#line 1145 "check_hlds.delay_info.c"
  {
#line 1147 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1150 "check_hlds.delay_info.c"
    {
#line 1152 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1155 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1157 "check_hlds.delay_info.c"
  }
#line 1159 "check_hlds.delay_info.c"
}

#line 1162 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 1165 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1167 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1169 "check_hlds.delay_info.c"
{
#line 1171 "check_hlds.delay_info.c"
  {
#line 1173 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1176 "check_hlds.delay_info.c"
    {
#line 1178 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1181 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1183 "check_hlds.delay_info.c"
  }
#line 1185 "check_hlds.delay_info.c"
}

#line 1188 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 1191 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1193 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1195 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1197 "check_hlds.delay_info.c"
{
#line 1199 "check_hlds.delay_info.c"
  {
#line 1201 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1204 "check_hlds.delay_info.c"
    {
#line 1206 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1209 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1211 "check_hlds.delay_info.c"
  }
#line 1213 "check_hlds.delay_info.c"
}

#line 1216 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 1219 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1221 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1223 "check_hlds.delay_info.c"
{
#line 1225 "check_hlds.delay_info.c"
  {
#line 1227 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1230 "check_hlds.delay_info.c"
    {
#line 1232 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1235 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1237 "check_hlds.delay_info.c"
  }
#line 1239 "check_hlds.delay_info.c"
}

#line 1242 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 1245 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1247 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1249 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1251 "check_hlds.delay_info.c"
{
#line 1253 "check_hlds.delay_info.c"
  {
#line 1255 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1258 "check_hlds.delay_info.c"
    {
#line 1260 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1263 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1265 "check_hlds.delay_info.c"
  }
#line 1267 "check_hlds.delay_info.c"
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
#line 1613 "check_hlds.delay_info.c"
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
#line 1647 "check_hlds.delay_info.c"
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
#line 1667 "check_hlds.delay_info.c"
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
#line 1687 "check_hlds.delay_info.c"
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
#line 1707 "check_hlds.delay_info.c"
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

#line 1798 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
#line 116 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
          {
#line 1804 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
#line 1806 "check_hlds.delay_info.c"
            {
#line 1808 "check_hlds.delay_info.c"
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
#line 116 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
              {
#line 1815 "check_hlds.delay_info.c"
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
#line 1817 "check_hlds.delay_info.c"
                {
#line 1819 "check_hlds.delay_info.c"
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
#line 116 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                  {
#line 1826 "check_hlds.delay_info.c"
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
#line 1828 "check_hlds.delay_info.c"
                    {
#line 1830 "check_hlds.delay_info.c"
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
#line 116 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 116 "delay_info.m"
                      {
#line 1837 "check_hlds.delay_info.c"
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
#line 1839 "check_hlds.delay_info.c"
                        {
#line 1841 "check_hlds.delay_info.c"
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
#line 1885 "check_hlds.delay_info.c"
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
#line 1907 "check_hlds.delay_info.c"
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

#line 1968 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
#line 150 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 1972 "check_hlds.delay_info.c"
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
#line 2043 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
#line 2045 "check_hlds.delay_info.c"
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
#line 2603 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_27_35 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 465 "delay_info.m"
            {
#line 465 "delay_info.m"
              mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_27_35, &check_hlds__delay_info__conv1_DelayedGoals0_25, check_hlds__delay_info__DelayedGoalStack0_17, &check_hlds__delay_info__DelayedGoalStack1_26);
            }
#line 465 "delay_info.m"
            check_hlds__delay_info__DelayedGoals0_25 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_25);
#line 2612 "check_hlds.delay_info.c"
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
#line 2994 "check_hlds.delay_info.c"
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
#line 3125 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3127 "check_hlds.delay_info.c"
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
#line 3286 "check_hlds.delay_info.c"
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
