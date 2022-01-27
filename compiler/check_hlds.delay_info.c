/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "integer.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

#line 137 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

#line 140 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

#line 143 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

#line 146 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

#line 149 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

#line 152 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 155 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 158 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 173 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 176 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

#line 179 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

#line 182 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

#line 185 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

#line 188 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

#line 191 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

#line 194 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

#line 197 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

#line 200 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 203 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 205 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 208 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 211 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 213 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 215 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 218 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 221 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 223 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 226 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 229 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 231 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 233 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 236 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 239 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 241 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 244 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 247 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 249 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 251 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 254 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 257 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 259 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 262 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 265 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 267 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 269 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 272 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 275 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 277 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 280 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 283 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 285 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 287 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 290 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 293 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 295 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 298 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 301 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 303 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 305 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 308 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 311 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 313 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 316 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 319 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 321 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 323 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 326 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 329 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 331 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 334 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 337 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 339 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 341 "check_hlds.delay_info.c"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 612 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 618 "check_hlds.delay_info.c"
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

#line 633 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 638 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

#line 647 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 652 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

#line 657 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 674 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 683 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 691 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 708 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 716 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 724 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 733 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 742 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 750 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0
  }
};

#line 759 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 767 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
};

#line 776 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goal_stack",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seq_stack"
};

#line 785 "check_hlds.delay_info.c"
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

#line 800 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 805 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

#line 814 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 819 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

#line 824 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 841 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_depth_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 858 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_pending_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 875 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_seq_num_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 892 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 909 "check_hlds.delay_info.c"
const MR_TypeCtorInfo_Struct check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_waiting_goals_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 926 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 929 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 931 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 933 "check_hlds.delay_info.c"
{
#line 935 "check_hlds.delay_info.c"
  {
#line 937 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 940 "check_hlds.delay_info.c"
    {
#line 942 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 945 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 947 "check_hlds.delay_info.c"
  }
#line 949 "check_hlds.delay_info.c"
}

#line 952 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 955 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 957 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 959 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 961 "check_hlds.delay_info.c"
{
#line 963 "check_hlds.delay_info.c"
  {
#line 965 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 968 "check_hlds.delay_info.c"
    {
#line 970 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 973 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 975 "check_hlds.delay_info.c"
  }
#line 977 "check_hlds.delay_info.c"
}

#line 980 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 983 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 985 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 987 "check_hlds.delay_info.c"
{
#line 989 "check_hlds.delay_info.c"
  {
#line 991 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 994 "check_hlds.delay_info.c"
    {
#line 996 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_stack_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 999 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1001 "check_hlds.delay_info.c"
  }
#line 1003 "check_hlds.delay_info.c"
}

#line 1006 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 1009 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1011 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1013 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1015 "check_hlds.delay_info.c"
{
#line 1017 "check_hlds.delay_info.c"
  {
#line 1019 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1022 "check_hlds.delay_info.c"
    {
#line 1024 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_stack_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1027 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1029 "check_hlds.delay_info.c"
  }
#line 1031 "check_hlds.delay_info.c"
}

#line 1034 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 1037 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1039 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1041 "check_hlds.delay_info.c"
{
#line 1043 "check_hlds.delay_info.c"
  {
#line 1045 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1048 "check_hlds.delay_info.c"
    {
#line 1050 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1053 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1055 "check_hlds.delay_info.c"
  }
#line 1057 "check_hlds.delay_info.c"
}

#line 1060 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 1063 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1065 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1067 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1069 "check_hlds.delay_info.c"
{
#line 1071 "check_hlds.delay_info.c"
  {
#line 1073 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1076 "check_hlds.delay_info.c"
    {
#line 1078 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1081 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1083 "check_hlds.delay_info.c"
  }
#line 1085 "check_hlds.delay_info.c"
}

#line 1088 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 1091 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1093 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1095 "check_hlds.delay_info.c"
{
#line 1097 "check_hlds.delay_info.c"
  {
#line 1099 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1102 "check_hlds.delay_info.c"
    {
#line 1104 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1107 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1109 "check_hlds.delay_info.c"
  }
#line 1111 "check_hlds.delay_info.c"
}

#line 1114 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 1117 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1119 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1121 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1123 "check_hlds.delay_info.c"
{
#line 1125 "check_hlds.delay_info.c"
  {
#line 1127 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1130 "check_hlds.delay_info.c"
    {
#line 1132 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1135 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1137 "check_hlds.delay_info.c"
  }
#line 1139 "check_hlds.delay_info.c"
}

#line 1142 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 1145 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1147 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1149 "check_hlds.delay_info.c"
{
#line 1151 "check_hlds.delay_info.c"
  {
#line 1153 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1156 "check_hlds.delay_info.c"
    {
#line 1158 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1161 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1163 "check_hlds.delay_info.c"
  }
#line 1165 "check_hlds.delay_info.c"
}

#line 1168 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 1171 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1173 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1175 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1177 "check_hlds.delay_info.c"
{
#line 1179 "check_hlds.delay_info.c"
  {
#line 1181 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1184 "check_hlds.delay_info.c"
    {
#line 1186 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1189 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1191 "check_hlds.delay_info.c"
  }
#line 1193 "check_hlds.delay_info.c"
}

#line 1196 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 1199 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1201 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1203 "check_hlds.delay_info.c"
{
#line 1205 "check_hlds.delay_info.c"
  {
#line 1207 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1210 "check_hlds.delay_info.c"
    {
#line 1212 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1215 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1217 "check_hlds.delay_info.c"
  }
#line 1219 "check_hlds.delay_info.c"
}

#line 1222 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 1225 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1227 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1229 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1231 "check_hlds.delay_info.c"
{
#line 1233 "check_hlds.delay_info.c"
  {
#line 1235 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1238 "check_hlds.delay_info.c"
    {
#line 1240 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1243 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1245 "check_hlds.delay_info.c"
  }
#line 1247 "check_hlds.delay_info.c"
}

#line 1250 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 1253 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1255 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1257 "check_hlds.delay_info.c"
{
#line 1259 "check_hlds.delay_info.c"
  {
#line 1261 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1264 "check_hlds.delay_info.c"
    {
#line 1266 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1269 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1271 "check_hlds.delay_info.c"
  }
#line 1273 "check_hlds.delay_info.c"
}

#line 1276 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 1279 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1281 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1283 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1285 "check_hlds.delay_info.c"
{
#line 1287 "check_hlds.delay_info.c"
  {
#line 1289 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1292 "check_hlds.delay_info.c"
    {
#line 1294 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1297 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1299 "check_hlds.delay_info.c"
  }
#line 1301 "check_hlds.delay_info.c"
}

#line 1304 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 1307 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1309 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1311 "check_hlds.delay_info.c"
{
#line 1313 "check_hlds.delay_info.c"
  {
#line 1315 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1318 "check_hlds.delay_info.c"
    {
#line 1320 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1323 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1325 "check_hlds.delay_info.c"
  }
#line 1327 "check_hlds.delay_info.c"
}

#line 1330 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 1333 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1335 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1337 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1339 "check_hlds.delay_info.c"
{
#line 1341 "check_hlds.delay_info.c"
  {
#line 1343 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1346 "check_hlds.delay_info.c"
    {
#line 1348 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1351 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1353 "check_hlds.delay_info.c"
  }
#line 1355 "check_hlds.delay_info.c"
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
#line 1686 "check_hlds.delay_info.c"
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
#line 1720 "check_hlds.delay_info.c"
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
#line 1740 "check_hlds.delay_info.c"
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
#line 1760 "check_hlds.delay_info.c"
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
#line 1780 "check_hlds.delay_info.c"
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

#line 1871 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
#line 148 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
          {
#line 1877 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
#line 1879 "check_hlds.delay_info.c"
            {
#line 1881 "check_hlds.delay_info.c"
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
#line 148 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
              {
#line 1888 "check_hlds.delay_info.c"
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
#line 1890 "check_hlds.delay_info.c"
                {
#line 1892 "check_hlds.delay_info.c"
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
#line 148 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                  {
#line 1899 "check_hlds.delay_info.c"
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
#line 1901 "check_hlds.delay_info.c"
                    {
#line 1903 "check_hlds.delay_info.c"
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
#line 148 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 148 "delay_info.m"
                      {
#line 1910 "check_hlds.delay_info.c"
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
#line 1912 "check_hlds.delay_info.c"
                        {
#line 1914 "check_hlds.delay_info.c"
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
#line 2020 "check_hlds.delay_info.c"
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
#line 2042 "check_hlds.delay_info.c"
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

#line 2103 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
#line 114 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 2107 "check_hlds.delay_info.c"
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
#line 2268 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
#line 2270 "check_hlds.delay_info.c"
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
#line 2839 "check_hlds.delay_info.c"
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
#line 3216 "check_hlds.delay_info.c"
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
#line 3347 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3349 "check_hlds.delay_info.c"
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
#line 3508 "check_hlds.delay_info.c"
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
