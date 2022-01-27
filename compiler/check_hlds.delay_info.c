/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
#include "cord.mih"
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
#include "set_tree234.mih"
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




#line 133 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

#line 136 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

#line 139 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

#line 142 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

#line 145 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

#line 148 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

#line 151 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 154 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 157 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 172 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 175 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

#line 178 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

#line 181 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

#line 184 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

#line 187 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

#line 190 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

#line 193 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

#line 196 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

#line 199 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 202 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 204 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 207 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 210 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 212 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 214 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 217 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 220 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 222 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 225 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 228 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 230 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 232 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 235 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 238 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 240 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 243 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 246 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 248 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 250 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 253 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 256 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 258 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 261 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 264 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 266 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 268 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 271 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 274 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 276 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 279 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 282 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 284 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 286 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 289 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 292 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 294 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 297 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 300 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 302 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 304 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 307 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 310 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 312 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 315 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 318 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 320 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 322 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 325 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 328 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 330 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 333 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 336 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 338 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 340 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 127 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 127 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 127 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 132 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 132 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 132 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 112 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
#line 112 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 112 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 140 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 140 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 140 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 111 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 111 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 111 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 124 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
#line 124 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 124 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 114 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 114 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 114 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 473 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
#line 473 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 473 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
#line 473 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
#line 473 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);

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

#line 384 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 384 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 384 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6);

#line 338 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 338 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5);

#line 289 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 289 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 289 "delay_info.m"
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



#line 617 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 623 "check_hlds.delay_info.c"
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

#line 638 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 643 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

#line 652 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 657 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

#line 662 "check_hlds.delay_info.c"
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

#line 683 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 692 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 700 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001)),
  ((MR_Box) (check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001)),
  (MR_String) "check_hlds.delay_info",
  (MR_String) "delay_goal_stack",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 721 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 729 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 737 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 746 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 755 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 763 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0
  }
};

#line 772 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 780 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
};

#line 789 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goal_stack",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seq_stack"
};

#line 798 "check_hlds.delay_info.c"
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

#line 813 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 818 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

#line 827 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 832 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

#line 837 "check_hlds.delay_info.c"
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

#line 858 "check_hlds.delay_info.c"
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

#line 879 "check_hlds.delay_info.c"
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
    (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 900 "check_hlds.delay_info.c"
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

#line 921 "check_hlds.delay_info.c"
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

#line 942 "check_hlds.delay_info.c"
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

#line 963 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 966 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 968 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 970 "check_hlds.delay_info.c"
{
#line 972 "check_hlds.delay_info.c"
  {
#line 974 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 977 "check_hlds.delay_info.c"
    {
#line 979 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 982 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 984 "check_hlds.delay_info.c"
  }
#line 986 "check_hlds.delay_info.c"
}

#line 989 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 992 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 994 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 996 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 998 "check_hlds.delay_info.c"
{
#line 1000 "check_hlds.delay_info.c"
  {
#line 1002 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1005 "check_hlds.delay_info.c"
    {
#line 1007 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1010 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1012 "check_hlds.delay_info.c"
  }
#line 1014 "check_hlds.delay_info.c"
}

#line 1017 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 1020 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1022 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1024 "check_hlds.delay_info.c"
{
#line 1026 "check_hlds.delay_info.c"
  {
#line 1028 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1031 "check_hlds.delay_info.c"
    {
#line 1033 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_stack_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1036 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1038 "check_hlds.delay_info.c"
  }
#line 1040 "check_hlds.delay_info.c"
}

#line 1043 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 1046 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1048 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1050 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1052 "check_hlds.delay_info.c"
{
#line 1054 "check_hlds.delay_info.c"
  {
#line 1056 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1059 "check_hlds.delay_info.c"
    {
#line 1061 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_stack_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1064 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1066 "check_hlds.delay_info.c"
  }
#line 1068 "check_hlds.delay_info.c"
}

#line 1071 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 1074 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1076 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1078 "check_hlds.delay_info.c"
{
#line 1080 "check_hlds.delay_info.c"
  {
#line 1082 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1085 "check_hlds.delay_info.c"
    {
#line 1087 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1090 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1092 "check_hlds.delay_info.c"
  }
#line 1094 "check_hlds.delay_info.c"
}

#line 1097 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 1100 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1102 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1104 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1106 "check_hlds.delay_info.c"
{
#line 1108 "check_hlds.delay_info.c"
  {
#line 1110 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1113 "check_hlds.delay_info.c"
    {
#line 1115 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1118 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1120 "check_hlds.delay_info.c"
  }
#line 1122 "check_hlds.delay_info.c"
}

#line 1125 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 1128 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1130 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1132 "check_hlds.delay_info.c"
{
#line 1134 "check_hlds.delay_info.c"
  {
#line 1136 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1139 "check_hlds.delay_info.c"
    {
#line 1141 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1144 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1146 "check_hlds.delay_info.c"
  }
#line 1148 "check_hlds.delay_info.c"
}

#line 1151 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 1154 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1156 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1158 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1160 "check_hlds.delay_info.c"
{
#line 1162 "check_hlds.delay_info.c"
  {
#line 1164 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1167 "check_hlds.delay_info.c"
    {
#line 1169 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1172 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1174 "check_hlds.delay_info.c"
  }
#line 1176 "check_hlds.delay_info.c"
}

#line 1179 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 1182 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1184 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1186 "check_hlds.delay_info.c"
{
#line 1188 "check_hlds.delay_info.c"
  {
#line 1190 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1193 "check_hlds.delay_info.c"
    {
#line 1195 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1198 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1200 "check_hlds.delay_info.c"
  }
#line 1202 "check_hlds.delay_info.c"
}

#line 1205 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 1208 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1210 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1212 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1214 "check_hlds.delay_info.c"
{
#line 1216 "check_hlds.delay_info.c"
  {
#line 1218 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1221 "check_hlds.delay_info.c"
    {
#line 1223 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1226 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1228 "check_hlds.delay_info.c"
  }
#line 1230 "check_hlds.delay_info.c"
}

#line 1233 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 1236 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1238 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1240 "check_hlds.delay_info.c"
{
#line 1242 "check_hlds.delay_info.c"
  {
#line 1244 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1247 "check_hlds.delay_info.c"
    {
#line 1249 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1252 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1254 "check_hlds.delay_info.c"
  }
#line 1256 "check_hlds.delay_info.c"
}

#line 1259 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 1262 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1264 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1266 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1268 "check_hlds.delay_info.c"
{
#line 1270 "check_hlds.delay_info.c"
  {
#line 1272 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1275 "check_hlds.delay_info.c"
    {
#line 1277 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1280 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1282 "check_hlds.delay_info.c"
  }
#line 1284 "check_hlds.delay_info.c"
}

#line 1287 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 1290 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1292 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1294 "check_hlds.delay_info.c"
{
#line 1296 "check_hlds.delay_info.c"
  {
#line 1298 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1301 "check_hlds.delay_info.c"
    {
#line 1303 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1306 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1308 "check_hlds.delay_info.c"
  }
#line 1310 "check_hlds.delay_info.c"
}

#line 1313 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 1316 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1318 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1320 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1322 "check_hlds.delay_info.c"
{
#line 1324 "check_hlds.delay_info.c"
  {
#line 1326 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1329 "check_hlds.delay_info.c"
    {
#line 1331 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1334 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1336 "check_hlds.delay_info.c"
  }
#line 1338 "check_hlds.delay_info.c"
}

#line 1341 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 1344 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1346 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1348 "check_hlds.delay_info.c"
{
#line 1350 "check_hlds.delay_info.c"
  {
#line 1352 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1355 "check_hlds.delay_info.c"
    {
#line 1357 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1360 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1362 "check_hlds.delay_info.c"
  }
#line 1364 "check_hlds.delay_info.c"
}

#line 1367 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 1370 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1372 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1374 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1376 "check_hlds.delay_info.c"
{
#line 1378 "check_hlds.delay_info.c"
  {
#line 1380 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1383 "check_hlds.delay_info.c"
    {
#line 1385 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1388 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1390 "check_hlds.delay_info.c"
  }
#line 1392 "check_hlds.delay_info.c"
}

#line 127 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 127 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 127 "delay_info.m"
{
#line 127 "delay_info.m"
  {
#line 127 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 127 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 127 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 127 "delay_info.m"
    {
#line 127 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 127 "delay_info.m"
      return;
    }
#line 127 "delay_info.m"
  }
#line 127 "delay_info.m"
}

#line 127 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 127 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 127 "delay_info.m"
{
#line 127 "delay_info.m"
  {
#line 127 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 127 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 127 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 127 "delay_info.m"
    {
#line 127 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 127 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 127 "delay_info.m"
  }
#line 127 "delay_info.m"
}

#line 132 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 132 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 132 "delay_info.m"
{
#line 132 "delay_info.m"
  {
#line 132 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 132 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 132 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 132 "delay_info.m"
    {
#line 132 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 132 "delay_info.m"
      return;
    }
#line 132 "delay_info.m"
  }
#line 132 "delay_info.m"
}

#line 132 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 132 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 132 "delay_info.m"
{
#line 132 "delay_info.m"
  {
#line 132 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 132 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 132 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 132 "delay_info.m"
    {
#line 132 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 132 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 132 "delay_info.m"
  }
#line 132 "delay_info.m"
}

#line 112 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
#line 112 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
#line 112 "delay_info.m"
{
#line 112 "delay_info.m"
  {
#line 112 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 112 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 112 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 112 "delay_info.m"
    {
#line 112 "delay_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
#line 112 "delay_info.m"
      return;
    }
#line 112 "delay_info.m"
  }
#line 112 "delay_info.m"
}

#line 112 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 112 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
#line 112 "delay_info.m"
{
#line 112 "delay_info.m"
  {
#line 112 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 112 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 112 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 112 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
#line 112 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 112 "delay_info.m"
  }
#line 112 "delay_info.m"
}

#line 140 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 140 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 140 "delay_info.m"
{
#line 140 "delay_info.m"
  {
#line 140 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 140 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 140 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 140 "delay_info.m"
    {
#line 140 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 140 "delay_info.m"
      return;
    }
#line 140 "delay_info.m"
  }
#line 140 "delay_info.m"
}

#line 140 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 140 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 140 "delay_info.m"
{
#line 140 "delay_info.m"
  {
#line 140 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 140 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 140 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 140 "delay_info.m"
    {
#line 140 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 140 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 140 "delay_info.m"
  }
#line 140 "delay_info.m"
}

#line 111 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 111 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
#line 111 "delay_info.m"
{
#line 111 "delay_info.m"
  {
#line 111 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 111 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 111 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 111 "delay_info.m"
    {
#line 111 "delay_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
#line 111 "delay_info.m"
      return;
    }
#line 111 "delay_info.m"
  }
#line 111 "delay_info.m"
}

#line 111 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
#line 111 "delay_info.m"
{
#line 111 "delay_info.m"
  {
#line 111 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 111 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 111 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 111 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
#line 111 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 111 "delay_info.m"
  }
#line 111 "delay_info.m"
}

#line 148 "delay_info.m"
void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0(
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
    MR_Integer check_hlds__delay_info__CastX_18 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 148 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_19 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 148 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_18 == check_hlds__delay_info__CastY_19);
#line 148 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 1723 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "delay_info.m"
    else
#line 148 "delay_info.m"
      {
#line 148 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));
#line 148 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 3)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 4)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_14_14;

#line 148 "delay_info.m"
        {
#line 148 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_14_14, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_9_9);
        }
#line 1757 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_14_14 == (MR_Integer) 0);
#line 148 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 148 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_14_14;
#line 148 "delay_info.m"
        else
#line 148 "delay_info.m"
          {
#line 148 "delay_info.m"
            MR_Word check_hlds__delay_info__V_15_15;

#line 148 "delay_info.m"
            {
#line 148 "delay_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], &check_hlds__delay_info__V_15_15, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
            }
#line 1777 "check_hlds.delay_info.c"
            check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_15_15 == (MR_Integer) 0);
#line 148 "delay_info.m"
            check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 148 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
              *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_15_15;
#line 148 "delay_info.m"
            else
#line 148 "delay_info.m"
              {
#line 148 "delay_info.m"
                MR_Word check_hlds__delay_info__V_16_16;

#line 148 "delay_info.m"
                {
#line 148 "delay_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], &check_hlds__delay_info__V_16_16, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                }
#line 1797 "check_hlds.delay_info.c"
                check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_16_16 == (MR_Integer) 0);
#line 148 "delay_info.m"
                check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 148 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                  *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_16_16;
#line 148 "delay_info.m"
                else
#line 148 "delay_info.m"
                  {
#line 148 "delay_info.m"
                    MR_Word check_hlds__delay_info__V_17_17;

#line 148 "delay_info.m"
                    {
#line 148 "delay_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], &check_hlds__delay_info__V_17_17, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                    }
#line 1817 "check_hlds.delay_info.c"
                    check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_17_17 == (MR_Integer) 0);
#line 148 "delay_info.m"
                    check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 148 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                      *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_17_17;
#line 148 "delay_info.m"
                    else
#line 148 "delay_info.m"
                      {
#line 148 "delay_info.m"
                        {
#line 148 "delay_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[4], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__V_8_8)), ((MR_Box) (check_hlds__delay_info__V_13_13)));
#line 148 "delay_info.m"
                          return;
                        }
#line 148 "delay_info.m"
                      }
#line 148 "delay_info.m"
                  }
#line 148 "delay_info.m"
              }
#line 148 "delay_info.m"
          }
#line 148 "delay_info.m"
      }
#line 148 "delay_info.m"
  }
#line 148 "delay_info.m"
}

#line 148 "delay_info.m"
MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0(
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
    MR_Integer check_hlds__delay_info__CastX_13 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 148 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_14 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 148 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_13 == check_hlds__delay_info__CastY_14);
#line 148 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 148 "delay_info.m"
    else
#line 148 "delay_info.m"
      {
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_15_15;
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_16_16;
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_17_17;
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_18_18;
#line 148 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 3)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 4)));
#line 148 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 148 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1908 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
#line 148 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
          {
#line 1914 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
#line 1916 "check_hlds.delay_info.c"
            {
#line 1918 "check_hlds.delay_info.c"
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
#line 148 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
              {
#line 1925 "check_hlds.delay_info.c"
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
#line 1927 "check_hlds.delay_info.c"
                {
#line 1929 "check_hlds.delay_info.c"
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
#line 148 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                  {
#line 1936 "check_hlds.delay_info.c"
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
#line 1938 "check_hlds.delay_info.c"
                    {
#line 1940 "check_hlds.delay_info.c"
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
#line 148 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                      {
#line 1947 "check_hlds.delay_info.c"
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
#line 1949 "check_hlds.delay_info.c"
                        {
#line 1951 "check_hlds.delay_info.c"
                          return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_18_18, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                        }
#line 148 "delay_info.m"
                      }
#line 148 "delay_info.m"
                  }
#line 148 "delay_info.m"
              }
#line 148 "delay_info.m"
          }
#line 148 "delay_info.m"
      }
#line 148 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 148 "delay_info.m"
  }
#line 148 "delay_info.m"
}

#line 124 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
#line 124 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 124 "delay_info.m"
{
#line 124 "delay_info.m"
  {
#line 124 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 124 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 124 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 124 "delay_info.m"
    {
#line 124 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 124 "delay_info.m"
      return;
    }
#line 124 "delay_info.m"
  }
#line 124 "delay_info.m"
}

#line 124 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 124 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 124 "delay_info.m"
{
#line 124 "delay_info.m"
  {
#line 124 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 124 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 124 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 124 "delay_info.m"
    {
#line 124 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 124 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 124 "delay_info.m"
  }
#line 124 "delay_info.m"
}

#line 114 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 114 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 114 "delay_info.m"
{
#line 114 "delay_info.m"
  {
#line 114 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 114 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_9 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 114 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_10 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 114 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_9 == check_hlds__delay_info__CastY_10);
#line 114 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 2057 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "delay_info.m"
    else
#line 114 "delay_info.m"
      {
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 114 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8;

#line 114 "delay_info.m"
        {
#line 114 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_8_8, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_6_6);
        }
#line 2079 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_8_8 == (MR_Integer) 0);
#line 114 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 114 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 114 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_8_8;
#line 114 "delay_info.m"
        else
#line 114 "delay_info.m"
          {
#line 114 "delay_info.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__V_5_5, check_hlds__delay_info__V_7_7);
#line 114 "delay_info.m"
            return;
          }
#line 114 "delay_info.m"
      }
#line 114 "delay_info.m"
  }
#line 114 "delay_info.m"
}

#line 114 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 114 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 114 "delay_info.m"
{
#line 114 "delay_info.m"
  {
#line 114 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 114 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_7 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 114 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_8 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 114 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_7 == check_hlds__delay_info__CastY_8);
#line 114 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 114 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 114 "delay_info.m"
    else
#line 114 "delay_info.m"
      {
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));

#line 2140 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
#line 114 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 2144 "check_hlds.delay_info.c"
          check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_4_4 == check_hlds__delay_info__V_6_6);
#line 114 "delay_info.m"
      }
#line 114 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 114 "delay_info.m"
  }
#line 114 "delay_info.m"
}

#line 473 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
#line 473 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 473 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
#line 473 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
#line 473 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4)
#line 473 "delay_info.m"
{
#line 476 "delay_info.m"
  {
#line 476 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;

#line 476 "delay_info.m"
    if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "delay_info.m"
      {
#line 476 "delay_info.m"
        *check_hlds__delay_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "delay_info.m"
        *check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4 = check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3;
#line 476 "delay_info.m"
      }
#line 476 "delay_info.m"
    else
#line 477 "delay_info.m"
      {
#line 477 "delay_info.m"
        MR_Integer check_hlds__delay_info__SeqNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "delay_info.m"
        MR_Word check_hlds__delay_info__SeqNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "delay_info.m"
        MR_Word check_hlds__delay_info__Goal_10;
#line 477 "delay_info.m"
        MR_Word check_hlds__delay_info__Goals_11;
#line 477 "delay_info.m"
        MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15;
#line 477 "delay_info.m"
        MR_Word check_hlds__delay_info__DelayedGoal_22;
#line 485 "delay_info.m"
        MR_Box check_hlds__delay_info__conv0_DelayedGoal_22;
#line 486 "delay_info.m"
        MR_Word check_hlds__delay_info___Vars_23;
#line 486 "delay_info.m"
        MR_Word check_hlds__delay_info___ErrorReason_24;

#line 485 "delay_info.m"
        {
#line 485 "delay_info.m"
          mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__SeqNum_8)), &check_hlds__delay_info__conv0_DelayedGoal_22, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3, &check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15);
        }
#line 485 "delay_info.m"
        check_hlds__delay_info__DelayedGoal_22 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_22);
#line 486 "delay_info.m"
        check_hlds__delay_info___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 0)));
#line 486 "delay_info.m"
        check_hlds__delay_info___ErrorReason_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 1)));
#line 486 "delay_info.m"
        check_hlds__delay_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 2)));
#line 479 "delay_info.m"
        {
#line 479 "delay_info.m"
          check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__SeqNums_9, &check_hlds__delay_info__Goals_11, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);
        }
#line 477 "delay_info.m"
        {
#line 477 "delay_info.m"
          MR_Word base;
#line 477 "delay_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "delay_info.m"
          *check_hlds__delay_info__HeadVar__2_2 = base;
#line 477 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__Goal_10));
#line 477 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__Goals_11));
#line 477 "delay_info.m"
        }
#line 477 "delay_info.m"
      }
#line 476 "delay_info.m"
  }
#line 473 "delay_info.m"
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
#line 2305 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
#line 2307 "check_hlds.delay_info.c"
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
                mercury__map__det_update_4_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_14)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
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

#line 384 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 384 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 384 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 384 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6)
#line 384 "delay_info.m"
{
#line 389 "delay_info.m"
  while (MR_TRUE)
#line 389 "delay_info.m"
    {
#line 389 "delay_info.m"
      /* tailcall optimized into a loop */
#line 389 "delay_info.m"
      {
#line 389 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 389 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "delay_info.m"
          {
#line 389 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5;
#line 389 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3;
#line 389 "delay_info.m"
          }
#line 389 "delay_info.m"
        else
#line 391 "delay_info.m"
          {
#line 391 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayGoalNums_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "delay_info.m"
            MR_Integer check_hlds__delay_info__Depth_19;
#line 391 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_20;
#line 391 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingVars_22;
#line 391 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;
#line 391 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
#line 395 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingVars_22;
#line 402 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingSeqNums0_23;
#line 399 "delay_info.m"
            MR_Box check_hlds__delay_info__conv1_PendingSeqNums0_23;

#line 392 "delay_info.m"
            check_hlds__delay_info__Depth_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 0)));
#line 392 "delay_info.m"
            check_hlds__delay_info__SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 1)));
#line 395 "delay_info.m"
            {
#line 395 "delay_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__HeadVar__2_2, ((MR_Box) (check_hlds__delay_info__GoalNum_21)), &check_hlds__delay_info__conv0_WaitingVars_22);
            }
#line 395 "delay_info.m"
            check_hlds__delay_info__WaitingVars_22 = ((MR_Word) check_hlds__delay_info__conv0_WaitingVars_22);
#line 396 "delay_info.m"
            {
#line 396 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__WaitingVars_22, check_hlds__delay_info__GoalNum_21, check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29);
            }
#line 399 "delay_info.m"
            {
#line 399 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, check_hlds__delay_info__Depth_19, &check_hlds__delay_info__conv1_PendingSeqNums0_23);
            }
#line 399 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 399 "delay_info.m"
              {
#line 399 "delay_info.m"
                check_hlds__delay_info__PendingSeqNums0_23 = ((MR_Word) check_hlds__delay_info__conv1_PendingSeqNums0_23);
#line 399 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 399 "delay_info.m"
              }
#line 402 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 400 "delay_info.m"
              {
#line 400 "delay_info.m"
                MR_Word check_hlds__delay_info__PendingSeqNums_24;

#line 400 "delay_info.m"
                {
#line 400 "delay_info.m"
                  check_hlds__delay_info__PendingSeqNums_24 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__delay_info__PendingSeqNums0_23, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
#line 401 "delay_info.m"
                {
#line 401 "delay_info.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_24)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
#line 400 "delay_info.m"
              }
#line 402 "delay_info.m"
            else
#line 403 "delay_info.m"
              {
#line 403 "delay_info.m"
                MR_Word check_hlds__delay_info__PendingSeqNums_34;

#line 403 "delay_info.m"
                {
#line 403 "delay_info.m"
                  check_hlds__delay_info__PendingSeqNums_34 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
#line 404 "delay_info.m"
                {
#line 404 "delay_info.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_34)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
#line 403 "delay_info.m"
              }
#line 408 "delay_info.m"
            /* direct tailcall eliminated */
#line 408 "delay_info.m"
            {
#line 408 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__DelayGoalNums_15;
#line 408 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
#line 408 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;

#line 408 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5;
#line 408 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3;
#line 408 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 408 "delay_info.m"
            }
#line 408 "delay_info.m"
            continue;
#line 391 "delay_info.m"
          }
#line 389 "delay_info.m"
      }
#line 389 "delay_info.m"
      break;
#line 389 "delay_info.m"
    }
#line 384 "delay_info.m"
}

#line 338 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 338 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 338 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 338 "delay_info.m"
{
#line 342 "delay_info.m"
  while (MR_TRUE)
#line 342 "delay_info.m"
    {
#line 342 "delay_info.m"
      /* tailcall optimized into a loop */
#line 342 "delay_info.m"
      {
#line 342 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 342 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 342 "delay_info.m"
        else
#line 343 "delay_info.m"
          {
#line 343 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 343 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 343 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals1_17;
#line 343 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals_18;
#line 343 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;
#line 346 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals0_16;
#line 344 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_16;

#line 344 "delay_info.m"
            {
#line 344 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, ((MR_Box) (check_hlds__delay_info__Var_11)), &check_hlds__delay_info__conv0_WaitingGoals0_16);
            }
#line 344 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 344 "delay_info.m"
              {
#line 344 "delay_info.m"
                check_hlds__delay_info__WaitingGoals0_16 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_16);
#line 344 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 344 "delay_info.m"
              }
#line 346 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 345 "delay_info.m"
              check_hlds__delay_info__WaitingGoals1_17 = check_hlds__delay_info__WaitingGoals0_16;
#line 346 "delay_info.m"
            else
#line 347 "delay_info.m"
              {
#line 347 "delay_info.m"
                {
#line 347 "delay_info.m"
                  mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], &check_hlds__delay_info__WaitingGoals1_17);
                }
#line 347 "delay_info.m"
              }
#line 349 "delay_info.m"
            {
#line 349 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], ((MR_Box) (check_hlds__delay_info__Goal_2)), ((MR_Box) (check_hlds__delay_info__AllVars_3)), check_hlds__delay_info__WaitingGoals1_17, &check_hlds__delay_info__WaitingGoals_18);
            }
#line 350 "delay_info.m"
            {
#line 350 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Var_11)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_18)), check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21);
            }
#line 351 "delay_info.m"
            /* direct tailcall eliminated */
#line 351 "delay_info.m"
            {
#line 351 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_12;
#line 351 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;

#line 351 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 351 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 351 "delay_info.m"
            }
#line 351 "delay_info.m"
            continue;
#line 343 "delay_info.m"
          }
#line 342 "delay_info.m"
      }
#line 342 "delay_info.m"
      break;
#line 342 "delay_info.m"
    }
#line 338 "delay_info.m"
}

#line 289 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 289 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 289 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 289 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 289 "delay_info.m"
{
#line 292 "delay_info.m"
  while (MR_TRUE)
#line 292 "delay_info.m"
    {
#line 292 "delay_info.m"
      /* tailcall optimized into a loop */
#line 292 "delay_info.m"
      {
#line 292 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 292 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 292 "delay_info.m"
        else
#line 294 "delay_info.m"
          {
#line 294 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__SeqNums_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoal_16;
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_17;
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_20;
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__VarList_21;
#line 294 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;
#line 295 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_DelayedGoal_16;
#line 296 "delay_info.m"
            MR_Word check_hlds__delay_info___Error_18;
#line 296 "delay_info.m"
            MR_Word check_hlds__delay_info___Goal_19;

#line 295 "delay_info.m"
            {
#line 295 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__DelayedGoalsTable_2, check_hlds__delay_info__SeqNum_11, &check_hlds__delay_info__conv0_DelayedGoal_16);
            }
#line 295 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_16 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_16);
#line 296 "delay_info.m"
            check_hlds__delay_info__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 0)));
#line 296 "delay_info.m"
            check_hlds__delay_info___Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 1)));
#line 296 "delay_info.m"
            check_hlds__delay_info___Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 2)));
#line 297 "delay_info.m"
            {
#line 297 "delay_info.m"
              check_hlds__delay_info__GoalNum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 0) = ((MR_Box) (check_hlds__delay_info__Depth_3));
#line 297 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_11));
#line 297 "delay_info.m"
            }
#line 298 "delay_info.m"
            {
#line 298 "delay_info.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_17, &check_hlds__delay_info__VarList_21);
            }
#line 299 "delay_info.m"
            {
#line 299 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__VarList_21, check_hlds__delay_info__GoalNum_20, check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24);
            }
#line 300 "delay_info.m"
            /* direct tailcall eliminated */
#line 300 "delay_info.m"
            {
#line 300 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__SeqNums_12;
#line 300 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;

#line 300 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 300 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 300 "delay_info.m"
            }
#line 300 "delay_info.m"
            continue;
#line 294 "delay_info.m"
          }
#line 292 "delay_info.m"
      }
#line 292 "delay_info.m"
      break;
#line 292 "delay_info.m"
    }
#line 289 "delay_info.m"
}

#line 91 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_wakeup_goals_3_p_0(
#line 91 "delay_info.m"
  MR_Word * check_hlds__delay_info__Goals_4,
#line 91 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23,
#line 91 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24)
#line 91 "delay_info.m"
{
#line 431 "delay_info.m"
  {
#line 431 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 431 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 0)));
#line 431 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 1)));
#line 431 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 2)));
#line 431 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 3)));
#line 431 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 4)));
#line 469 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_11;
#line 445 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_PendingGoals0_11;

#line 445 "delay_info.m"
    {
#line 445 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__PendingGoalsTable0_9, check_hlds__delay_info__CurrentDepth_6, &check_hlds__delay_info__conv0_PendingGoals0_11);
    }
#line 445 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 445 "delay_info.m"
      {
#line 445 "delay_info.m"
        check_hlds__delay_info__PendingGoals0_11 = ((MR_Word) check_hlds__delay_info__conv0_PendingGoals0_11);
#line 445 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 445 "delay_info.m"
      }
#line 469 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 448 "delay_info.m"
      {
#line 448 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 448 "delay_info.m"
        MR_Word check_hlds__delay_info__SeqNums_12;

#line 448 "delay_info.m"
        {
#line 448 "delay_info.m"
          check_hlds__delay_info__SeqNums_12 = mercury__cord__list_1_f_0(check_hlds__delay_info__TypeCtorInfo_29_29, check_hlds__delay_info__PendingGoals0_11);
        }
#line 465 "delay_info.m"
        if ((check_hlds__delay_info__SeqNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "delay_info.m"
          {
#line 467 "delay_info.m"
            *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
#line 466 "delay_info.m"
          }
#line 465 "delay_info.m"
        else
#line 450 "delay_info.m"
          {
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_31_31;
#line 450 "delay_info.m"
            MR_Integer check_hlds__delay_info__HeadSeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 0)));
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__TailSeqNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 1)));
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingGoalsTable_15;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals0_16;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoalStack1_17;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__HeadGoal_18;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals1_19;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__TailGoals_20;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals_21;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoalStack_22;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__V_25_25;
#line 450 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoal_53;
#line 454 "delay_info.m"
            MR_Box check_hlds__delay_info__conv1_DelayedGoals0_16;
#line 485 "delay_info.m"
            MR_Box check_hlds__delay_info__conv2_DelayedGoal_53;
#line 486 "delay_info.m"
            MR_Word check_hlds__delay_info___Vars_54;
#line 486 "delay_info.m"
            MR_Word check_hlds__delay_info___ErrorReason_55;

#line 451 "delay_info.m"
            {
#line 451 "delay_info.m"
              check_hlds__delay_info__V_25_25 = mercury__cord__init_0_f_0(check_hlds__delay_info__TypeCtorInfo_29_29);
            }
#line 451 "delay_info.m"
            {
#line 451 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__CurrentDepth_6, ((MR_Box) (check_hlds__delay_info__V_25_25)), check_hlds__delay_info__PendingGoalsTable0_9, &check_hlds__delay_info__PendingGoalsTable_15);
            }
#line 2876 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_31_31 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 454 "delay_info.m"
            {
#line 454 "delay_info.m"
              mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_31_31, &check_hlds__delay_info__conv1_DelayedGoals0_16, check_hlds__delay_info__DelayedGoalStack0_7, &check_hlds__delay_info__DelayedGoalStack1_17);
            }
#line 454 "delay_info.m"
            check_hlds__delay_info__DelayedGoals0_16 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_16);
#line 485 "delay_info.m"
            {
#line 485 "delay_info.m"
              mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__HeadSeqNum_13)), &check_hlds__delay_info__conv2_DelayedGoal_53, check_hlds__delay_info__DelayedGoals0_16, &check_hlds__delay_info__DelayedGoals1_19);
            }
#line 485 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_53 = ((MR_Word) check_hlds__delay_info__conv2_DelayedGoal_53);
#line 486 "delay_info.m"
            check_hlds__delay_info___Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 0)));
#line 486 "delay_info.m"
            check_hlds__delay_info___ErrorReason_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 1)));
#line 486 "delay_info.m"
            check_hlds__delay_info__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 2)));
#line 457 "delay_info.m"
            {
#line 457 "delay_info.m"
              check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__TailSeqNums_14, &check_hlds__delay_info__TailGoals_20, check_hlds__delay_info__DelayedGoals1_19, &check_hlds__delay_info__DelayedGoals_21);
            }
#line 459 "delay_info.m"
            {
#line 459 "delay_info.m"
              mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_31_31, ((MR_Box) (check_hlds__delay_info__DelayedGoals_21)), check_hlds__delay_info__DelayedGoalStack1_17, &check_hlds__delay_info__DelayedGoalStack_22);
            }
#line 460 "delay_info.m"
            {
#line 460 "delay_info.m"
              MR_Word base;
#line 460 "delay_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "delay_info.m"
              *check_hlds__delay_info__Goals_4 = base;
#line 460 "delay_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__HeadGoal_18));
#line 460 "delay_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__TailGoals_20));
#line 460 "delay_info.m"
            }
#line 462 "delay_info.m"
            {
#line 462 "delay_info.m"
              MR_Word base;
#line 462 "delay_info.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 462 "delay_info.m"
              *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = base;
#line 462 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
#line 462 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_22));
#line 462 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoals_8));
#line 462 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoalsTable_15));
#line 462 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
#line 462 "delay_info.m"
            }
#line 450 "delay_info.m"
          }
#line 448 "delay_info.m"
      }
#line 469 "delay_info.m"
    else
#line 470 "delay_info.m"
      {
#line 470 "delay_info.m"
        *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "delay_info.m"
        *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
#line 470 "delay_info.m"
      }
#line 431 "delay_info.m"
  }
#line 91 "delay_info.m"
}

#line 80 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(
#line 80 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5,
#line 80 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6)
#line 80 "delay_info.m"
{
#line 355 "delay_info.m"
  {
#line 355 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 355 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingVars_4;
#line 355 "delay_info.m"
    MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 2)));
#line 356 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 0)));
#line 356 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 1)));
#line 356 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 3)));
#line 356 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 4)));

#line 356 "delay_info.m"
    {
#line 356 "delay_info.m"
      mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__V_7_7, &check_hlds__delay_info__WaitingVars_4);
    }
#line 357 "delay_info.m"
    {
#line 357 "delay_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__delay_info__WaitingVars_4, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6);
#line 357 "delay_info.m"
      return;
    }
#line 355 "delay_info.m"
  }
#line 80 "delay_info.m"
}

#line 68 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_3_p_0(
#line 68 "delay_info.m"
  MR_Word check_hlds__delay_info__Var_4,
#line 68 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15,
#line 68 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16)
#line 68 "delay_info.m"
{
#line 364 "delay_info.m"
  {
#line 364 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 364 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 0)));
#line 364 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 1)));
#line 364 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 2)));
#line 364 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 3)));
#line 364 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 4)));
#line 376 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalsWaitingOnVar_11;
#line 368 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_GoalsWaitingOnVar_11;

#line 368 "delay_info.m"
    {
#line 368 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__WaitingGoalsTable0_8, ((MR_Box) (check_hlds__delay_info__Var_4)), &check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
    }
#line 368 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 368 "delay_info.m"
      {
#line 368 "delay_info.m"
        check_hlds__delay_info__GoalsWaitingOnVar_11 = ((MR_Word) check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
#line 368 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 368 "delay_info.m"
      }
#line 376 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 369 "delay_info.m"
      {
#line 369 "delay_info.m"
        MR_Word check_hlds__delay_info__NewlyPendingGoals_12;
#line 369 "delay_info.m"
        MR_Word check_hlds__delay_info__PendingGoals_13;
#line 369 "delay_info.m"
        MR_Word check_hlds__delay_info__WaitingGoalsTable_14;

#line 369 "delay_info.m"
        {
#line 369 "delay_info.m"
          mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__GoalsWaitingOnVar_11, &check_hlds__delay_info__NewlyPendingGoals_12);
        }
#line 370 "delay_info.m"
        {
#line 370 "delay_info.m"
          check_hlds__delay_info__add_pending_goals_6_p_0(check_hlds__delay_info__NewlyPendingGoals_12, check_hlds__delay_info__GoalsWaitingOnVar_11, check_hlds__delay_info__PendingGoals0_9, &check_hlds__delay_info__PendingGoals_13, check_hlds__delay_info__WaitingGoalsTable0_8, &check_hlds__delay_info__WaitingGoalsTable_14);
        }
#line 373 "delay_info.m"
        {
#line 373 "delay_info.m"
          MR_Word base;
#line 373 "delay_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 373 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = base;
#line 373 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
#line 373 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_7));
#line 373 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_14));
#line 373 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_13));
#line 373 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
#line 373 "delay_info.m"
        }
#line 369 "delay_info.m"
      }
#line 376 "delay_info.m"
    else
#line 376 "delay_info.m"
      *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15;
#line 364 "delay_info.m"
  }
#line 68 "delay_info.m"
}

#line 61 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_bind_var_list_3_p_0(
#line 61 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 61 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2,
#line 61 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3)
#line 61 "delay_info.m"
{
#line 359 "delay_info.m"
  while (MR_TRUE)
#line 359 "delay_info.m"
    {
#line 359 "delay_info.m"
      /* tailcall optimized into a loop */
#line 359 "delay_info.m"
      {
#line 359 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 359 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 359 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2;
#line 359 "delay_info.m"
        else
#line 360 "delay_info.m"
          {
#line 360 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 361 "delay_info.m"
            {
#line 361 "delay_info.m"
              check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__delay_info__Var_7, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12);
            }
#line 362 "delay_info.m"
            /* direct tailcall eliminated */
#line 362 "delay_info.m"
            {
#line 362 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_8;
#line 362 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 362 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 362 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 362 "delay_info.m"
            }
#line 362 "delay_info.m"
            continue;
#line 360 "delay_info.m"
          }
#line 359 "delay_info.m"
      }
#line 359 "delay_info.m"
      break;
#line 359 "delay_info.m"
    }
#line 61 "delay_info.m"
}

#line 53 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_delay_goal_4_p_0(
#line 53 "delay_info.m"
  MR_Word check_hlds__delay_info__Error_5,
#line 53 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_6,
#line 53 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_7,
#line 53 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_8)
#line 53 "delay_info.m"
{
#line 305 "delay_info.m"
  {
#line 305 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeInfo_33_33;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 0)));
#line 305 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 0)));
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 1)));
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 2)));
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 3)));
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 4)));
#line 305 "delay_info.m"
    MR_Integer check_hlds__delay_info__SeqNum_18;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums1_19;
#line 305 "delay_info.m"
    MR_Integer check_hlds__delay_info__NextSeq_20;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_21;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals0_22;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack1_23;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_24;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_25;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalNum_26;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__VarList_27;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_28;
#line 305 "delay_info.m"
    MR_Word check_hlds__delay_info__V_30_30;
#line 307 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 1)));
#line 307 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 2)));
#line 307 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 3)));
#line 312 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_SeqNum_18;
#line 317 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_DelayedGoals0_22;

#line 312 "delay_info.m"
    {
#line 312 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, &check_hlds__delay_info__conv0_SeqNum_18, check_hlds__delay_info__NextSeqNums0_17, &check_hlds__delay_info__NextSeqNums1_19);
    }
#line 312 "delay_info.m"
    check_hlds__delay_info__SeqNum_18 = ((MR_Integer) check_hlds__delay_info__conv0_SeqNum_18);
#line 313 "delay_info.m"
    check_hlds__delay_info__NextSeq_20 = (check_hlds__delay_info__SeqNum_18 + (MR_Integer) 1);
#line 314 "delay_info.m"
    {
#line 314 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, ((MR_Box) (check_hlds__delay_info__NextSeq_20)), check_hlds__delay_info__NextSeqNums1_19, &check_hlds__delay_info__NextSeqNums_21);
    }
#line 3253 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeInfo_33_33 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 317 "delay_info.m"
    {
#line 317 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_33_33, &check_hlds__delay_info__conv1_DelayedGoals0_22, check_hlds__delay_info__DelayedGoalStack0_14, &check_hlds__delay_info__DelayedGoalStack1_23);
    }
#line 317 "delay_info.m"
    check_hlds__delay_info__DelayedGoals0_22 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_22);
#line 318 "delay_info.m"
    {
#line 318 "delay_info.m"
      check_hlds__delay_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 0) = ((MR_Box) (check_hlds__delay_info__Vars_9));
#line 318 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 1) = ((MR_Box) (check_hlds__delay_info__Error_5));
#line 318 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 2) = ((MR_Box) (check_hlds__delay_info__Goal_6));
#line 318 "delay_info.m"
    }
#line 318 "delay_info.m"
    {
#line 318 "delay_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__SeqNum_18, ((MR_Box) (check_hlds__delay_info__V_30_30)), check_hlds__delay_info__DelayedGoals0_22, &check_hlds__delay_info__DelayedGoals_24);
    }
#line 320 "delay_info.m"
    {
#line 320 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_33_33, ((MR_Box) (check_hlds__delay_info__DelayedGoals_24)), check_hlds__delay_info__DelayedGoalStack1_23, &check_hlds__delay_info__DelayedGoalStack_25);
    }
#line 323 "delay_info.m"
    {
#line 323 "delay_info.m"
      check_hlds__delay_info__GoalNum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 323 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_18));
#line 323 "delay_info.m"
    }
#line 324 "delay_info.m"
    {
#line 324 "delay_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_9, &check_hlds__delay_info__VarList_27);
    }
#line 325 "delay_info.m"
    {
#line 325 "delay_info.m"
      check_hlds__delay_info__add_waiting_vars_5_p_0(check_hlds__delay_info__VarList_27, check_hlds__delay_info__GoalNum_26, check_hlds__delay_info__VarList_27, check_hlds__delay_info__WaitingGoalsTable0_15, &check_hlds__delay_info__WaitingGoalsTable_28);
    }
#line 328 "delay_info.m"
    {
#line 328 "delay_info.m"
      MR_Word base;
#line 328 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 328 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_8 = base;
#line 328 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 328 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_25));
#line 328 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_28));
#line 328 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_16));
#line 328 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_21));
#line 328 "delay_info.m"
    }
#line 305 "delay_info.m"
  }
#line 53 "delay_info.m"
}

#line 48 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_leave_conj_3_p_0(
#line 48 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_4,
#line 48 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayedGoalsList_5,
#line 48 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_6)
#line 48 "delay_info.m"
{
#line 269 "delay_info.m"
  {
#line 269 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_21_21;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
#line 269 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 0)));
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 1)));
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 2)));
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 3)));
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 4)));
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_12;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_13;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__SeqNums_14;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_15;
#line 269 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_17;
#line 269 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_18;
#line 273 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_DelayedGoals_12;
#line 277 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_16_16;
#line 277 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_V_16_16;

#line 273 "delay_info.m"
    {
#line 273 "delay_info.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__conv0_DelayedGoals_12, check_hlds__delay_info__DelayedGoalStack0_8, &check_hlds__delay_info__DelayedGoalStack_13);
    }
#line 273 "delay_info.m"
    check_hlds__delay_info__DelayedGoals_12 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoals_12);
#line 3384 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3386 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 274 "delay_info.m"
    {
#line 274 "delay_info.m"
      mercury__map__keys_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, &check_hlds__delay_info__SeqNums_14);
    }
#line 275 "delay_info.m"
    {
#line 275 "delay_info.m"
      check_hlds__delay_info__remove_delayed_goals_5_p_0(check_hlds__delay_info__SeqNums_14, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__CurrentDepth0_7, check_hlds__delay_info__WaitingGoalsTable0_9, &check_hlds__delay_info__WaitingGoalsTable_15);
    }
#line 277 "delay_info.m"
    {
#line 277 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, &check_hlds__delay_info__conv1_V_16_16, check_hlds__delay_info__NextSeqNums0_11, &check_hlds__delay_info__NextSeqNums_17);
    }
#line 277 "delay_info.m"
    check_hlds__delay_info__V_16_16 = ((MR_Integer) check_hlds__delay_info__conv1_V_16_16);
#line 278 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_18 = (check_hlds__delay_info__CurrentDepth0_7 - (MR_Integer) 1);
#line 279 "delay_info.m"
    {
#line 279 "delay_info.m"
      mercury__map__values_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__DelayedGoalsList_5);
    }
#line 280 "delay_info.m"
    {
#line 280 "delay_info.m"
      MR_Word base;
#line 280 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 280 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_6 = base;
#line 280 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_18));
#line 280 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_13));
#line 280 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_15));
#line 280 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_10));
#line 280 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_17));
#line 280 "delay_info.m"
    }
#line 269 "delay_info.m"
  }
#line 48 "delay_info.m"
}

#line 42 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_enter_conj_2_p_0(
#line 42 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayInfo0_3,
#line 42 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_4)
#line 42 "delay_info.m"
{
#line 255 "delay_info.m"
  {
#line 255 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 255 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 0)));
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 1)));
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 2)));
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 3)));
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 4)));
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_10;
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_11;
#line 255 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_12;
#line 255 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13;

#line 259 "delay_info.m"
    {
#line 259 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, &check_hlds__delay_info__DelayedGoals_10);
    }
#line 260 "delay_info.m"
    {
#line 260 "delay_info.m"
      mercury__stack__push_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], ((MR_Box) (check_hlds__delay_info__DelayedGoals_10)), check_hlds__delay_info__DelayedGoalStack0_6, &check_hlds__delay_info__DelayedGoalStack_11);
    }
#line 261 "delay_info.m"
    {
#line 261 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, ((MR_Box) ((MR_Integer) 0)), check_hlds__delay_info__NextSeqNums0_9, &check_hlds__delay_info__NextSeqNums_12);
    }
#line 262 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_13 = (check_hlds__delay_info__CurrentDepth0_5 + (MR_Integer) 1);
#line 263 "delay_info.m"
    {
#line 263 "delay_info.m"
      MR_Word base;
#line 263 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 263 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_4 = base;
#line 263 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 263 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_11));
#line 263 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_7));
#line 263 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_8));
#line 263 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_12));
#line 263 "delay_info.m"
    }
#line 255 "delay_info.m"
  }
#line 42 "delay_info.m"
}

#line 38 "delay_info.m"
void MR_CALL 
check_hlds__delay_info__delay_info_init_1_p_0(
#line 38 "delay_info.m"
  MR_Word * check_hlds__delay_info__DelayInfo_2)
#line 38 "delay_info.m"
{
#line 243 "delay_info.m"
  {
#line 243 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_11_11;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_4;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_5;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_6;
#line 243 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_7;

#line 245 "delay_info.m"
    {
#line 245 "delay_info.m"
      mercury__stack__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__DelayedGoalStack_4);
    }
#line 246 "delay_info.m"
    {
#line 246 "delay_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], &check_hlds__delay_info__WaitingGoalsTable_5);
    }
#line 3545 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 247 "delay_info.m"
    {
#line 247 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, (MR_Word) &check_hlds__delay_info_scalar_common_2[2], &check_hlds__delay_info__PendingGoals_6);
    }
#line 248 "delay_info.m"
    {
#line 248 "delay_info.m"
      mercury__stack__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, &check_hlds__delay_info__NextSeqNums_7);
    }
#line 249 "delay_info.m"
    {
#line 249 "delay_info.m"
      MR_Word base;
#line 249 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 249 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_2 = base;
#line 249 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 249 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_4));
#line 249 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_5));
#line 249 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_6));
#line 249 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_7));
#line 249 "delay_info.m"
    }
#line 243 "delay_info.m"
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
