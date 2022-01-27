/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 137 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2];

#line 140 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0;

#line 143 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1];

#line 146 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1];

#line 149 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1];

#line 152 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1];

#line 155 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 158 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

#line 161 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 176 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0;

#line 179 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0;

#line 182 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5];

#line 185 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5];

#line 188 "check_hlds.delay_info.c"
static const MR_DuFunctorDesc check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0;

#line 191 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1];

#line 194 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1];

#line 197 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1];

#line 200 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1];

#line 203 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 206 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 208 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 211 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 214 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 216 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 218 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 221 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 224 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 226 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 229 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 232 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 234 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 236 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 239 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 242 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 244 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 247 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 250 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 252 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 254 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 257 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 260 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 262 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 265 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 268 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 270 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 272 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 275 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 278 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 280 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 283 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 286 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 288 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 290 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 293 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 296 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 298 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 301 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 304 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 306 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 308 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 311 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 314 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 316 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 319 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 322 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 324 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 326 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 329 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 332 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 334 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2);

#line 337 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 340 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 342 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 344 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3);

#line 126 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 126 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 126 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 131 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 131 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 131 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 111 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
#line 111 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 111 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0(
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 111 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 139 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 139 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 139 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 110 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 110 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3);

#line 110 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2);

#line 123 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
#line 123 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 123 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 113 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 113 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3);

#line 113 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2);

#line 472 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
#line 472 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 472 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
#line 472 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
#line 472 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);

#line 414 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__GoalNum_2,
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3,
#line 414 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__4_4);

#line 383 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 383 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 383 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6);

#line 337 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 337 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5);

#line 288 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 288 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 288 "delay_info.m"
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



#line 613 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_goal_num_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 619 "check_hlds.delay_info.c"
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

#line 634 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 639 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0
  }
};

#line 648 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_goal_num_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

#line 653 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_goal_num_0[1] = {
  (MR_Integer) 0
};

#line 658 "check_hlds.delay_info.c"
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

#line 675 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 684 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
  }
};

#line 692 "check_hlds.delay_info.c"
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

#line 709 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 717 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 725 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
    (MR_TypeInfo) &check_hlds__delay_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 734 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__delay_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 743 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 751 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__delay_info__cord__ti_cord_1builtin__type_ctor_info_int_0
  }
};

#line 760 "check_hlds.delay_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 768 "check_hlds.delay_info.c"
static const MR_PseudoTypeInfo check_hlds__delay_info__check_hlds__delay_info__field_types_delay_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0cord__ti_cord_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__stack__ti_stack_1builtin__type_ctor_info_int_0
};

#line 777 "check_hlds.delay_info.c"
static const MR_ConstString check_hlds__delay_info__check_hlds__delay_info__field_names_delay_info_0_0[5] = {
  (MR_String) "delay_depth",
  (MR_String) "delay_goal_stack",
  (MR_String) "delay_waiting",
  (MR_String) "delay_pending",
  (MR_String) "delay_seq_stack"
};

#line 786 "check_hlds.delay_info.c"
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

#line 801 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 806 "check_hlds.delay_info.c"
static const MR_DuPtagLayout check_hlds__delay_info__check_hlds__delay_info__du_ptag_ordered_delay_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__delay_info__check_hlds__delay_info__du_stag_ordered_delay_info_0_0
  }
};

#line 815 "check_hlds.delay_info.c"
static const MR_DuFunctorDescPtr check_hlds__delay_info__check_hlds__delay_info__du_name_ordered_delay_info_0[1] = {
  &check_hlds__delay_info__check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

#line 820 "check_hlds.delay_info.c"
static const MR_Integer check_hlds__delay_info__check_hlds__delay_info__functor_number_map_delay_info_0[1] = {
  (MR_Integer) 0
};

#line 825 "check_hlds.delay_info.c"
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

#line 842 "check_hlds.delay_info.c"
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

#line 859 "check_hlds.delay_info.c"
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

#line 876 "check_hlds.delay_info.c"
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

#line 893 "check_hlds.delay_info.c"
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

#line 910 "check_hlds.delay_info.c"
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

#line 927 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0_10001(
#line 930 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 932 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 934 "check_hlds.delay_info.c"
{
#line 936 "check_hlds.delay_info.c"
  {
#line 938 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 941 "check_hlds.delay_info.c"
    {
#line 943 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_num_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 946 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 948 "check_hlds.delay_info.c"
  }
#line 950 "check_hlds.delay_info.c"
}

#line 953 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0_10001(
#line 956 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 958 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 960 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 962 "check_hlds.delay_info.c"
{
#line 964 "check_hlds.delay_info.c"
  {
#line 966 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 969 "check_hlds.delay_info.c"
    {
#line 971 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 974 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 976 "check_hlds.delay_info.c"
  }
#line 978 "check_hlds.delay_info.c"
}

#line 981 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0_10001(
#line 984 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 986 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 988 "check_hlds.delay_info.c"
{
#line 990 "check_hlds.delay_info.c"
  {
#line 992 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 995 "check_hlds.delay_info.c"
    {
#line 997 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_goal_stack_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1000 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1002 "check_hlds.delay_info.c"
  }
#line 1004 "check_hlds.delay_info.c"
}

#line 1007 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0_10001(
#line 1010 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1012 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1014 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1016 "check_hlds.delay_info.c"
{
#line 1018 "check_hlds.delay_info.c"
  {
#line 1020 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1023 "check_hlds.delay_info.c"
    {
#line 1025 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_goal_stack_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1028 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1030 "check_hlds.delay_info.c"
  }
#line 1032 "check_hlds.delay_info.c"
}

#line 1035 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0_10001(
#line 1038 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1040 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1042 "check_hlds.delay_info.c"
{
#line 1044 "check_hlds.delay_info.c"
  {
#line 1046 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1049 "check_hlds.delay_info.c"
    {
#line 1051 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1054 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1056 "check_hlds.delay_info.c"
  }
#line 1058 "check_hlds.delay_info.c"
}

#line 1061 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0_10001(
#line 1064 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1066 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1068 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1070 "check_hlds.delay_info.c"
{
#line 1072 "check_hlds.delay_info.c"
  {
#line 1074 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1077 "check_hlds.delay_info.c"
    {
#line 1079 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1082 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1084 "check_hlds.delay_info.c"
  }
#line 1086 "check_hlds.delay_info.c"
}

#line 1089 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0_10001(
#line 1092 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1094 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1096 "check_hlds.delay_info.c"
{
#line 1098 "check_hlds.delay_info.c"
  {
#line 1100 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1103 "check_hlds.delay_info.c"
    {
#line 1105 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____depth_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1108 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1110 "check_hlds.delay_info.c"
  }
#line 1112 "check_hlds.delay_info.c"
}

#line 1115 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0_10001(
#line 1118 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1120 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1122 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1124 "check_hlds.delay_info.c"
{
#line 1126 "check_hlds.delay_info.c"
  {
#line 1128 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1131 "check_hlds.delay_info.c"
    {
#line 1133 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____depth_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1136 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1138 "check_hlds.delay_info.c"
  }
#line 1140 "check_hlds.delay_info.c"
}

#line 1143 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0_10001(
#line 1146 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1148 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1150 "check_hlds.delay_info.c"
{
#line 1152 "check_hlds.delay_info.c"
  {
#line 1154 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1157 "check_hlds.delay_info.c"
    {
#line 1159 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____pending_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1162 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1164 "check_hlds.delay_info.c"
  }
#line 1166 "check_hlds.delay_info.c"
}

#line 1169 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0_10001(
#line 1172 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1174 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1176 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1178 "check_hlds.delay_info.c"
{
#line 1180 "check_hlds.delay_info.c"
  {
#line 1182 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1185 "check_hlds.delay_info.c"
    {
#line 1187 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____pending_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1190 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1192 "check_hlds.delay_info.c"
  }
#line 1194 "check_hlds.delay_info.c"
}

#line 1197 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____seq_num_0_0_10001(
#line 1200 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1202 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1204 "check_hlds.delay_info.c"
{
#line 1206 "check_hlds.delay_info.c"
  {
#line 1208 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1211 "check_hlds.delay_info.c"
    {
#line 1213 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____seq_num_0_0(((MR_Integer) check_hlds__delay_info__wrapper_arg_1), ((MR_Integer) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1216 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1218 "check_hlds.delay_info.c"
  }
#line 1220 "check_hlds.delay_info.c"
}

#line 1223 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0_10001(
#line 1226 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1228 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1230 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1232 "check_hlds.delay_info.c"
{
#line 1234 "check_hlds.delay_info.c"
  {
#line 1236 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1239 "check_hlds.delay_info.c"
    {
#line 1241 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____seq_num_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Integer) check_hlds__delay_info__wrapper_arg_2), ((MR_Integer) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1244 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1246 "check_hlds.delay_info.c"
  }
#line 1248 "check_hlds.delay_info.c"
}

#line 1251 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0_10001(
#line 1254 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1256 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1258 "check_hlds.delay_info.c"
{
#line 1260 "check_hlds.delay_info.c"
  {
#line 1262 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1265 "check_hlds.delay_info.c"
    {
#line 1267 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1270 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1272 "check_hlds.delay_info.c"
  }
#line 1274 "check_hlds.delay_info.c"
}

#line 1277 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0_10001(
#line 1280 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1282 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1284 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1286 "check_hlds.delay_info.c"
{
#line 1288 "check_hlds.delay_info.c"
  {
#line 1290 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1293 "check_hlds.delay_info.c"
    {
#line 1295 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1298 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1300 "check_hlds.delay_info.c"
  }
#line 1302 "check_hlds.delay_info.c"
}

#line 1305 "check_hlds.delay_info.c"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0_10001(
#line 1308 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_1,
#line 1310 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2)
#line 1312 "check_hlds.delay_info.c"
{
#line 1314 "check_hlds.delay_info.c"
  {
#line 1316 "check_hlds.delay_info.c"
    MR_bool check_hlds__delay_info__succeeded;

#line 1319 "check_hlds.delay_info.c"
    {
#line 1321 "check_hlds.delay_info.c"
      check_hlds__delay_info__succeeded = check_hlds__delay_info____Unify____waiting_goals_table_0_0(((MR_Word) check_hlds__delay_info__wrapper_arg_1), ((MR_Word) check_hlds__delay_info__wrapper_arg_2));
    }
#line 1324 "check_hlds.delay_info.c"
    return check_hlds__delay_info__succeeded;
#line 1326 "check_hlds.delay_info.c"
  }
#line 1328 "check_hlds.delay_info.c"
}

#line 1331 "check_hlds.delay_info.c"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0_10001(
#line 1334 "check_hlds.delay_info.c"
  MR_Box * check_hlds__delay_info__wrapper_arg_1,
#line 1336 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_2,
#line 1338 "check_hlds.delay_info.c"
  MR_Box check_hlds__delay_info__wrapper_arg_3)
#line 1340 "check_hlds.delay_info.c"
{
#line 1342 "check_hlds.delay_info.c"
  {
#line 1344 "check_hlds.delay_info.c"
    MR_Word check_hlds__delay_info__conv0_HeadVar__1_1;

#line 1347 "check_hlds.delay_info.c"
    {
#line 1349 "check_hlds.delay_info.c"
      check_hlds__delay_info____Compare____waiting_goals_table_0_0(&check_hlds__delay_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__delay_info__wrapper_arg_2), ((MR_Word) check_hlds__delay_info__wrapper_arg_3));
    }
#line 1352 "check_hlds.delay_info.c"
    *check_hlds__delay_info__wrapper_arg_1 = ((MR_Box) (check_hlds__delay_info__conv0_HeadVar__1_1));
#line 1354 "check_hlds.delay_info.c"
  }
#line 1356 "check_hlds.delay_info.c"
}

#line 126 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_table_0_0(
#line 126 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 126 "delay_info.m"
{
#line 126 "delay_info.m"
  {
#line 126 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 126 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 126 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 126 "delay_info.m"
    {
#line 126 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 126 "delay_info.m"
      return;
    }
#line 126 "delay_info.m"
  }
#line 126 "delay_info.m"
}

#line 126 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_table_0_0(
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 126 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 126 "delay_info.m"
{
#line 126 "delay_info.m"
  {
#line 126 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 126 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 126 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 126 "delay_info.m"
    {
#line 126 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 126 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 126 "delay_info.m"
  }
#line 126 "delay_info.m"
}

#line 131 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____waiting_goals_0_0(
#line 131 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 131 "delay_info.m"
{
#line 131 "delay_info.m"
  {
#line 131 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 131 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 131 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 131 "delay_info.m"
    {
#line 131 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 131 "delay_info.m"
      return;
    }
#line 131 "delay_info.m"
  }
#line 131 "delay_info.m"
}

#line 131 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____waiting_goals_0_0(
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 131 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 131 "delay_info.m"
{
#line 131 "delay_info.m"
  {
#line 131 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 131 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 131 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 131 "delay_info.m"
    {
#line 131 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 131 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 131 "delay_info.m"
  }
#line 131 "delay_info.m"
}

#line 111 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____seq_num_0_0(
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
check_hlds__delay_info____Unify____seq_num_0_0(
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

#line 139 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____pending_goals_table_0_0(
#line 139 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 139 "delay_info.m"
{
#line 139 "delay_info.m"
  {
#line 139 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 139 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 139 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 139 "delay_info.m"
    {
#line 139 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 139 "delay_info.m"
      return;
    }
#line 139 "delay_info.m"
  }
#line 139 "delay_info.m"
}

#line 139 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____pending_goals_table_0_0(
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 139 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 139 "delay_info.m"
{
#line 139 "delay_info.m"
  {
#line 139 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 139 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 139 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 139 "delay_info.m"
    {
#line 139 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 139 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 139 "delay_info.m"
  }
#line 139 "delay_info.m"
}

#line 110 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____depth_num_0_0(
#line 110 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__3_3)
#line 110 "delay_info.m"
{
#line 110 "delay_info.m"
  {
#line 110 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 110 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 110 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 110 "delay_info.m"
    {
#line 110 "delay_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__Cast_HeadVar1_4, check_hlds__delay_info__Cast_HeadVar2_5);
#line 110 "delay_info.m"
      return;
    }
#line 110 "delay_info.m"
  }
#line 110 "delay_info.m"
}

#line 110 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____depth_num_0_0(
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__1_1,
#line 110 "delay_info.m"
  MR_Integer check_hlds__delay_info__HeadVar__2_2)
#line 110 "delay_info.m"
{
#line 110 "delay_info.m"
  {
#line 110 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 110 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 110 "delay_info.m"
    MR_Integer check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 110 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__Cast_HeadVar1_3 == check_hlds__delay_info__Cast_HeadVar2_4);
#line 110 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 110 "delay_info.m"
  }
#line 110 "delay_info.m"
}

#line 147 "delay_info.m"
void MR_CALL 
check_hlds__delay_info____Compare____delay_info_0_0(
#line 147 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 147 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 147 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 147 "delay_info.m"
{
#line 147 "delay_info.m"
  {
#line 147 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 147 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_18 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 147 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_19 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 147 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_18 == check_hlds__delay_info__CastY_19);
#line 147 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 1687 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "delay_info.m"
    else
#line 147 "delay_info.m"
      {
#line 147 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));
#line 147 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 2)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 3)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 4)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_14_14;

#line 147 "delay_info.m"
        {
#line 147 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_14_14, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_9_9);
        }
#line 1721 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_14_14 == (MR_Integer) 0);
#line 147 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 147 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_14_14;
#line 147 "delay_info.m"
        else
#line 147 "delay_info.m"
          {
#line 147 "delay_info.m"
            MR_Word check_hlds__delay_info__V_15_15;

#line 147 "delay_info.m"
            {
#line 147 "delay_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], &check_hlds__delay_info__V_15_15, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
            }
#line 1741 "check_hlds.delay_info.c"
            check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_15_15 == (MR_Integer) 0);
#line 147 "delay_info.m"
            check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 147 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
              *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_15_15;
#line 147 "delay_info.m"
            else
#line 147 "delay_info.m"
              {
#line 147 "delay_info.m"
                MR_Word check_hlds__delay_info__V_16_16;

#line 147 "delay_info.m"
                {
#line 147 "delay_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[2], &check_hlds__delay_info__V_16_16, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                }
#line 1761 "check_hlds.delay_info.c"
                check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_16_16 == (MR_Integer) 0);
#line 147 "delay_info.m"
                check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 147 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
                  *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_16_16;
#line 147 "delay_info.m"
                else
#line 147 "delay_info.m"
                  {
#line 147 "delay_info.m"
                    MR_Word check_hlds__delay_info__V_17_17;

#line 147 "delay_info.m"
                    {
#line 147 "delay_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[3], &check_hlds__delay_info__V_17_17, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                    }
#line 1781 "check_hlds.delay_info.c"
                    check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_17_17 == (MR_Integer) 0);
#line 147 "delay_info.m"
                    check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 147 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
                      *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_17_17;
#line 147 "delay_info.m"
                    else
#line 147 "delay_info.m"
                      {
#line 147 "delay_info.m"
                        {
#line 147 "delay_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[4], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__V_8_8)), ((MR_Box) (check_hlds__delay_info__V_13_13)));
#line 147 "delay_info.m"
                          return;
                        }
#line 147 "delay_info.m"
                      }
#line 147 "delay_info.m"
                  }
#line 147 "delay_info.m"
              }
#line 147 "delay_info.m"
          }
#line 147 "delay_info.m"
      }
#line 147 "delay_info.m"
  }
#line 147 "delay_info.m"
}

#line 147 "delay_info.m"
MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_info_0_0(
#line 147 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 147 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 147 "delay_info.m"
{
#line 147 "delay_info.m"
  {
#line 147 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 147 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_13 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 147 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_14 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 147 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_13 == check_hlds__delay_info__CastY_14);
#line 147 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 147 "delay_info.m"
    else
#line 147 "delay_info.m"
      {
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_15_15;
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_16_16;
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_17_17;
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeInfo_18_18;
#line 147 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 2)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 3)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 4)));
#line 147 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 3)));
#line 147 "delay_info.m"
        MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 4)));

#line 1872 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_8_8);
#line 147 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
          {
#line 1878 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_15_15 = (MR_Word) &check_hlds__delay_info_scalar_common_2[3];
#line 1880 "check_hlds.delay_info.c"
            {
#line 1882 "check_hlds.delay_info.c"
              check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_15_15, ((MR_Box) (check_hlds__delay_info__V_4_4)), ((MR_Box) (check_hlds__delay_info__V_9_9)));
            }
#line 147 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
              {
#line 1889 "check_hlds.delay_info.c"
                check_hlds__delay_info__TypeInfo_16_16 = (MR_Word) &check_hlds__delay_info_scalar_common_1[2];
#line 1891 "check_hlds.delay_info.c"
                {
#line 1893 "check_hlds.delay_info.c"
                  check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_16_16, ((MR_Box) (check_hlds__delay_info__V_5_5)), ((MR_Box) (check_hlds__delay_info__V_10_10)));
                }
#line 147 "delay_info.m"
                if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
                  {
#line 1900 "check_hlds.delay_info.c"
                    check_hlds__delay_info__TypeInfo_17_17 = (MR_Word) &check_hlds__delay_info_scalar_common_1[3];
#line 1902 "check_hlds.delay_info.c"
                    {
#line 1904 "check_hlds.delay_info.c"
                      check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_17_17, ((MR_Box) (check_hlds__delay_info__V_6_6)), ((MR_Box) (check_hlds__delay_info__V_11_11)));
                    }
#line 147 "delay_info.m"
                    if (check_hlds__delay_info__succeeded)
#line 147 "delay_info.m"
                      {
#line 1911 "check_hlds.delay_info.c"
                        check_hlds__delay_info__TypeInfo_18_18 = (MR_Word) &check_hlds__delay_info_scalar_common_2[4];
#line 1913 "check_hlds.delay_info.c"
                        {
#line 1915 "check_hlds.delay_info.c"
                          return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__delay_info__TypeInfo_18_18, ((MR_Box) (check_hlds__delay_info__V_7_7)), ((MR_Box) (check_hlds__delay_info__V_12_12)));
                        }
#line 147 "delay_info.m"
                      }
#line 147 "delay_info.m"
                  }
#line 147 "delay_info.m"
              }
#line 147 "delay_info.m"
          }
#line 147 "delay_info.m"
      }
#line 147 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 147 "delay_info.m"
  }
#line 147 "delay_info.m"
}

#line 123 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_stack_0_0(
#line 123 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 123 "delay_info.m"
{
#line 123 "delay_info.m"
  {
#line 123 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 123 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_4 = check_hlds__delay_info__HeadVar__2_2;
#line 123 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_5 = check_hlds__delay_info__HeadVar__3_3;

#line 123 "delay_info.m"
    {
#line 123 "delay_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], check_hlds__delay_info__HeadVar__1_1, ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_5)));
#line 123 "delay_info.m"
      return;
    }
#line 123 "delay_info.m"
  }
#line 123 "delay_info.m"
}

#line 123 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_stack_0_0(
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 123 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 123 "delay_info.m"
{
#line 123 "delay_info.m"
  {
#line 123 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 123 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar1_3 = check_hlds__delay_info__HeadVar__1_1;
#line 123 "delay_info.m"
    MR_Word check_hlds__delay_info__Cast_HeadVar2_4 = check_hlds__delay_info__HeadVar__2_2;

#line 123 "delay_info.m"
    {
#line 123 "delay_info.m"
      return check_hlds__delay_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[3], ((MR_Box) (check_hlds__delay_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__delay_info__Cast_HeadVar2_4)));
    }
#line 123 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 123 "delay_info.m"
  }
#line 123 "delay_info.m"
}

#line 113 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info____Compare____delay_goal_num_0_0(
#line 113 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__1_1,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3)
#line 113 "delay_info.m"
{
#line 113 "delay_info.m"
  {
#line 113 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 113 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_9 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;
#line 113 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_10 = (MR_Integer) check_hlds__delay_info__HeadVar__3_3;

#line 113 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_9 == check_hlds__delay_info__CastY_10);
#line 113 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 2021 "check_hlds.delay_info.c"
      *check_hlds__delay_info__HeadVar__1_1 = (MR_Integer) 0;
#line 113 "delay_info.m"
    else
#line 113 "delay_info.m"
      {
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 0)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__3_3, (MR_Integer) 1)));
#line 113 "delay_info.m"
        MR_Word check_hlds__delay_info__V_8_8;

#line 113 "delay_info.m"
        {
#line 113 "delay_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__delay_info__V_8_8, check_hlds__delay_info__V_4_4, check_hlds__delay_info__V_6_6);
        }
#line 2043 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_8_8 == (MR_Integer) 0);
#line 113 "delay_info.m"
        check_hlds__delay_info__succeeded = !(check_hlds__delay_info__succeeded);
#line 113 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 113 "delay_info.m"
          *check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__V_8_8;
#line 113 "delay_info.m"
        else
#line 113 "delay_info.m"
          {
#line 113 "delay_info.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__delay_info__HeadVar__1_1, check_hlds__delay_info__V_5_5, check_hlds__delay_info__V_7_7);
#line 113 "delay_info.m"
            return;
          }
#line 113 "delay_info.m"
      }
#line 113 "delay_info.m"
  }
#line 113 "delay_info.m"
}

#line 113 "delay_info.m"
static MR_bool MR_CALL 
check_hlds__delay_info____Unify____delay_goal_num_0_0(
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 113 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2)
#line 113 "delay_info.m"
{
#line 113 "delay_info.m"
  {
#line 113 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 113 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastX_7 = (MR_Integer) check_hlds__delay_info__HeadVar__1_1;
#line 113 "delay_info.m"
    MR_Integer check_hlds__delay_info__CastY_8 = (MR_Integer) check_hlds__delay_info__HeadVar__2_2;

#line 113 "delay_info.m"
    check_hlds__delay_info__succeeded = (check_hlds__delay_info__CastX_7 == check_hlds__delay_info__CastY_8);
#line 113 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 113 "delay_info.m"
      check_hlds__delay_info__succeeded = MR_TRUE;
#line 113 "delay_info.m"
    else
#line 113 "delay_info.m"
      {
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "delay_info.m"
        MR_Integer check_hlds__delay_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__HeadVar__2_2, (MR_Integer) 1)));

#line 2104 "check_hlds.delay_info.c"
        check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_3_3 == check_hlds__delay_info__V_5_5);
#line 113 "delay_info.m"
        if (check_hlds__delay_info__succeeded)
#line 2108 "check_hlds.delay_info.c"
          check_hlds__delay_info__succeeded = (check_hlds__delay_info__V_4_4 == check_hlds__delay_info__V_6_6);
#line 113 "delay_info.m"
      }
#line 113 "delay_info.m"
    return check_hlds__delay_info__succeeded;
#line 113 "delay_info.m"
  }
#line 113 "delay_info.m"
}

#line 472 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__lookup_delayed_goals_4_p_0(
#line 472 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 472 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__2_2,
#line 472 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3,
#line 472 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4)
#line 472 "delay_info.m"
{
#line 475 "delay_info.m"
  {
#line 475 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;

#line 475 "delay_info.m"
    if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 475 "delay_info.m"
      {
#line 475 "delay_info.m"
        *check_hlds__delay_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "delay_info.m"
        *check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4 = check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3;
#line 475 "delay_info.m"
      }
#line 475 "delay_info.m"
    else
#line 476 "delay_info.m"
      {
#line 476 "delay_info.m"
        MR_Integer check_hlds__delay_info__SeqNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "delay_info.m"
        MR_Word check_hlds__delay_info__SeqNums_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "delay_info.m"
        MR_Word check_hlds__delay_info__Goal_10;
#line 476 "delay_info.m"
        MR_Word check_hlds__delay_info__Goals_11;
#line 476 "delay_info.m"
        MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15;
#line 476 "delay_info.m"
        MR_Word check_hlds__delay_info__DelayedGoal_22;
#line 484 "delay_info.m"
        MR_Box check_hlds__delay_info__conv0_DelayedGoal_22;
#line 485 "delay_info.m"
        MR_Word check_hlds__delay_info___Vars_23;
#line 485 "delay_info.m"
        MR_Word check_hlds__delay_info___ErrorReason_24;

#line 484 "delay_info.m"
        {
#line 484 "delay_info.m"
          mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__SeqNum_8)), &check_hlds__delay_info__conv0_DelayedGoal_22, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_0_3, &check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15);
        }
#line 484 "delay_info.m"
        check_hlds__delay_info__DelayedGoal_22 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_22);
#line 485 "delay_info.m"
        check_hlds__delay_info___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 0)));
#line 485 "delay_info.m"
        check_hlds__delay_info___ErrorReason_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 1)));
#line 485 "delay_info.m"
        check_hlds__delay_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_22, (MR_Integer) 2)));
#line 478 "delay_info.m"
        {
#line 478 "delay_info.m"
          check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__SeqNums_9, &check_hlds__delay_info__Goals_11, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_15_15, check_hlds__delay_info__STATE_VARIABLE_DelayedGoalMap_4);
        }
#line 476 "delay_info.m"
        {
#line 476 "delay_info.m"
          MR_Word base;
#line 476 "delay_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "delay_info.m"
          *check_hlds__delay_info__HeadVar__2_2 = base;
#line 476 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__Goal_10));
#line 476 "delay_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__Goals_11));
#line 476 "delay_info.m"
        }
#line 476 "delay_info.m"
      }
#line 475 "delay_info.m"
  }
#line 472 "delay_info.m"
}

#line 414 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__delete_waiting_vars_4_p_0(
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__GoalNum_2,
#line 414 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__3_3,
#line 414 "delay_info.m"
  MR_Word * check_hlds__delay_info__HeadVar__4_4)
#line 414 "delay_info.m"
{
#line 417 "delay_info.m"
  while (MR_TRUE)
#line 417 "delay_info.m"
    {
#line 417 "delay_info.m"
      /* tailcall optimized into a loop */
#line 417 "delay_info.m"
      {
#line 417 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 417 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "delay_info.m"
          *check_hlds__delay_info__HeadVar__4_4 = check_hlds__delay_info__HeadVar__3_3;
#line 417 "delay_info.m"
        else
#line 418 "delay_info.m"
          {
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_20_20 = (MR_Word) &check_hlds__delay_info_scalar_common_2[0];
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_21_21 = (MR_Word) &check_hlds__delay_info_scalar_common_1[1];
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_23_23;
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals0_13;
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals_14;
#line 418 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;
#line 419 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_13;

#line 419 "delay_info.m"
            {
#line 419 "delay_info.m"
              mercury__map__lookup_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, check_hlds__delay_info__HeadVar__3_3, ((MR_Box) (check_hlds__delay_info__Var_9)), &check_hlds__delay_info__conv0_WaitingGoals0_13);
            }
#line 419 "delay_info.m"
            check_hlds__delay_info__WaitingGoals0_13 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_13);
#line 2269 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
#line 2271 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_23_23 = (MR_Word) &check_hlds__delay_info_scalar_common_2[1];
#line 420 "delay_info.m"
            {
#line 420 "delay_info.m"
              mercury__map__delete_3_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, ((MR_Box) (check_hlds__delay_info__GoalNum_2)), check_hlds__delay_info__WaitingGoals0_13, &check_hlds__delay_info__WaitingGoals_14);
            }
#line 421 "delay_info.m"
            {
#line 421 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__TypeInfo_23_23, check_hlds__delay_info__WaitingGoals_14);
            }
#line 423 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 422 "delay_info.m"
              {
#line 422 "delay_info.m"
                mercury__map__delete_3_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
#line 423 "delay_info.m"
            else
#line 424 "delay_info.m"
              {
#line 424 "delay_info.m"
                mercury__map__det_update_4_p_0(check_hlds__delay_info__TypeInfo_20_20, check_hlds__delay_info__TypeInfo_21_21, ((MR_Box) (check_hlds__delay_info__Var_9)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_14)), check_hlds__delay_info__HeadVar__3_3, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17);
              }
#line 426 "delay_info.m"
            /* direct tailcall eliminated */
#line 426 "delay_info.m"
            {
#line 426 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_10;
#line 426 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__3__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_17_17;

#line 426 "delay_info.m"
              check_hlds__delay_info__HeadVar__3_3 = check_hlds__delay_info__HeadVar__3__tmp_copy_3;
#line 426 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 426 "delay_info.m"
            }
#line 426 "delay_info.m"
            continue;
#line 418 "delay_info.m"
          }
#line 417 "delay_info.m"
      }
#line 417 "delay_info.m"
      break;
#line 417 "delay_info.m"
    }
#line 414 "delay_info.m"
}

#line 383 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_pending_goals_6_p_0(
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__2_2,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3,
#line 383 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4,
#line 383 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5,
#line 383 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6)
#line 383 "delay_info.m"
{
#line 388 "delay_info.m"
  while (MR_TRUE)
#line 388 "delay_info.m"
    {
#line 388 "delay_info.m"
      /* tailcall optimized into a loop */
#line 388 "delay_info.m"
      {
#line 388 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 388 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "delay_info.m"
          {
#line 388 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_6 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5;
#line 388 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_PendingGoals_4 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3;
#line 388 "delay_info.m"
          }
#line 388 "delay_info.m"
        else
#line 390 "delay_info.m"
          {
#line 390 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayGoalNums_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "delay_info.m"
            MR_Integer check_hlds__delay_info__Depth_19;
#line 390 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_20;
#line 390 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingVars_22;
#line 390 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;
#line 390 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
#line 394 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingVars_22;
#line 401 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingSeqNums0_23;
#line 398 "delay_info.m"
            MR_Box check_hlds__delay_info__conv1_PendingSeqNums0_23;

#line 391 "delay_info.m"
            check_hlds__delay_info__Depth_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 0)));
#line 391 "delay_info.m"
            check_hlds__delay_info__SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_21, (MR_Integer) 1)));
#line 394 "delay_info.m"
            {
#line 394 "delay_info.m"
              mercury__map__lookup_3_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__HeadVar__2_2, ((MR_Box) (check_hlds__delay_info__GoalNum_21)), &check_hlds__delay_info__conv0_WaitingVars_22);
            }
#line 394 "delay_info.m"
            check_hlds__delay_info__WaitingVars_22 = ((MR_Word) check_hlds__delay_info__conv0_WaitingVars_22);
#line 395 "delay_info.m"
            {
#line 395 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__WaitingVars_22, check_hlds__delay_info__GoalNum_21, check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29);
            }
#line 398 "delay_info.m"
            {
#line 398 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, check_hlds__delay_info__Depth_19, &check_hlds__delay_info__conv1_PendingSeqNums0_23);
            }
#line 398 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 398 "delay_info.m"
              {
#line 398 "delay_info.m"
                check_hlds__delay_info__PendingSeqNums0_23 = ((MR_Word) check_hlds__delay_info__conv1_PendingSeqNums0_23);
#line 398 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 398 "delay_info.m"
              }
#line 401 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 399 "delay_info.m"
              {
#line 399 "delay_info.m"
                MR_Word check_hlds__delay_info__PendingSeqNums_24;

#line 399 "delay_info.m"
                {
#line 399 "delay_info.m"
                  check_hlds__delay_info__PendingSeqNums_24 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, check_hlds__delay_info__PendingSeqNums0_23, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
#line 400 "delay_info.m"
                {
#line 400 "delay_info.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_24)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
#line 399 "delay_info.m"
              }
#line 401 "delay_info.m"
            else
#line 402 "delay_info.m"
              {
#line 402 "delay_info.m"
                MR_Word check_hlds__delay_info__PendingSeqNums_34;

#line 402 "delay_info.m"
                {
#line 402 "delay_info.m"
                  check_hlds__delay_info__PendingSeqNums_34 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__delay_info__SeqNum_20)));
                }
#line 403 "delay_info.m"
                {
#line 403 "delay_info.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__Depth_19, ((MR_Box) (check_hlds__delay_info__PendingSeqNums_34)), check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3, &check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30);
                }
#line 402 "delay_info.m"
              }
#line 407 "delay_info.m"
            /* direct tailcall eliminated */
#line 407 "delay_info.m"
            {
#line 407 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__DelayGoalNums_15;
#line 407 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_30_30;
#line 407 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_29_29;

#line 407 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoals_0__tmp_copy_5;
#line 407 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0_3 = check_hlds__delay_info__STATE_VARIABLE_PendingGoals_0__tmp_copy_3;
#line 407 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 407 "delay_info.m"
            }
#line 407 "delay_info.m"
            continue;
#line 390 "delay_info.m"
          }
#line 388 "delay_info.m"
      }
#line 388 "delay_info.m"
      break;
#line 388 "delay_info.m"
    }
#line 383 "delay_info.m"
}

#line 337 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__add_waiting_vars_5_p_0(
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__Goal_2,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__AllVars_3,
#line 337 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 337 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 337 "delay_info.m"
{
#line 341 "delay_info.m"
  while (MR_TRUE)
#line 341 "delay_info.m"
    {
#line 341 "delay_info.m"
      /* tailcall optimized into a loop */
#line 341 "delay_info.m"
      {
#line 341 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 341 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 341 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 341 "delay_info.m"
        else
#line 342 "delay_info.m"
          {
#line 342 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 342 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 342 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals1_17;
#line 342 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals_18;
#line 342 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;
#line 345 "delay_info.m"
            MR_Word check_hlds__delay_info__WaitingGoals0_16;
#line 343 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_WaitingGoals0_16;

#line 343 "delay_info.m"
            {
#line 343 "delay_info.m"
              check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, ((MR_Box) (check_hlds__delay_info__Var_11)), &check_hlds__delay_info__conv0_WaitingGoals0_16);
            }
#line 343 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 343 "delay_info.m"
              {
#line 343 "delay_info.m"
                check_hlds__delay_info__WaitingGoals0_16 = ((MR_Word) check_hlds__delay_info__conv0_WaitingGoals0_16);
#line 343 "delay_info.m"
                check_hlds__delay_info__succeeded = MR_TRUE;
#line 343 "delay_info.m"
              }
#line 345 "delay_info.m"
            if (check_hlds__delay_info__succeeded)
#line 344 "delay_info.m"
              check_hlds__delay_info__WaitingGoals1_17 = check_hlds__delay_info__WaitingGoals0_16;
#line 345 "delay_info.m"
            else
#line 346 "delay_info.m"
              {
#line 346 "delay_info.m"
                {
#line 346 "delay_info.m"
                  mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], &check_hlds__delay_info__WaitingGoals1_17);
                }
#line 346 "delay_info.m"
              }
#line 348 "delay_info.m"
            {
#line 348 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], ((MR_Box) (check_hlds__delay_info__Goal_2)), ((MR_Box) (check_hlds__delay_info__AllVars_3)), check_hlds__delay_info__WaitingGoals1_17, &check_hlds__delay_info__WaitingGoals_18);
            }
#line 349 "delay_info.m"
            {
#line 349 "delay_info.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], ((MR_Box) (check_hlds__delay_info__Var_11)), ((MR_Box) (check_hlds__delay_info__WaitingGoals_18)), check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21);
            }
#line 350 "delay_info.m"
            /* direct tailcall eliminated */
#line 350 "delay_info.m"
            {
#line 350 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_12;
#line 350 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_21_21;

#line 350 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 350 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 350 "delay_info.m"
            }
#line 350 "delay_info.m"
            continue;
#line 342 "delay_info.m"
          }
#line 341 "delay_info.m"
      }
#line 341 "delay_info.m"
      break;
#line 341 "delay_info.m"
    }
#line 337 "delay_info.m"
}

#line 288 "delay_info.m"
static void MR_CALL 
check_hlds__delay_info__remove_delayed_goals_5_p_0(
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__HeadVar__1_1,
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__DelayedGoalsTable_2,
#line 288 "delay_info.m"
  MR_Integer check_hlds__delay_info__Depth_3,
#line 288 "delay_info.m"
  MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4,
#line 288 "delay_info.m"
  MR_Word * check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5)
#line 288 "delay_info.m"
{
#line 291 "delay_info.m"
  while (MR_TRUE)
#line 291 "delay_info.m"
    {
#line 291 "delay_info.m"
      /* tailcall optimized into a loop */
#line 291 "delay_info.m"
      {
#line 291 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 291 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_5 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4;
#line 291 "delay_info.m"
        else
#line 293 "delay_info.m"
          {
#line 293 "delay_info.m"
            MR_Integer check_hlds__delay_info__SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__SeqNums_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoal_16;
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_17;
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__GoalNum_20;
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__VarList_21;
#line 293 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;
#line 294 "delay_info.m"
            MR_Box check_hlds__delay_info__conv0_DelayedGoal_16;
#line 295 "delay_info.m"
            MR_Word check_hlds__delay_info___Error_18;
#line 295 "delay_info.m"
            MR_Word check_hlds__delay_info___Goal_19;

#line 294 "delay_info.m"
            {
#line 294 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__DelayedGoalsTable_2, check_hlds__delay_info__SeqNum_11, &check_hlds__delay_info__conv0_DelayedGoal_16);
            }
#line 294 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_16 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoal_16);
#line 295 "delay_info.m"
            check_hlds__delay_info__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 0)));
#line 295 "delay_info.m"
            check_hlds__delay_info___Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 1)));
#line 295 "delay_info.m"
            check_hlds__delay_info___Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_16, (MR_Integer) 2)));
#line 296 "delay_info.m"
            {
#line 296 "delay_info.m"
              check_hlds__delay_info__GoalNum_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 0) = ((MR_Box) (check_hlds__delay_info__Depth_3));
#line 296 "delay_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_20, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_11));
#line 296 "delay_info.m"
            }
#line 297 "delay_info.m"
            {
#line 297 "delay_info.m"
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_17, &check_hlds__delay_info__VarList_21);
            }
#line 298 "delay_info.m"
            {
#line 298 "delay_info.m"
              check_hlds__delay_info__delete_waiting_vars_4_p_0(check_hlds__delay_info__VarList_21, check_hlds__delay_info__GoalNum_20, check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4, &check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24);
            }
#line 299 "delay_info.m"
            /* direct tailcall eliminated */
#line 299 "delay_info.m"
            {
#line 299 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__SeqNums_12;
#line 299 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_24_24;

#line 299 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0_4 = check_hlds__delay_info__STATE_VARIABLE_WaitingGoalsTable_0__tmp_copy_4;
#line 299 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 299 "delay_info.m"
            }
#line 299 "delay_info.m"
            continue;
#line 293 "delay_info.m"
          }
#line 291 "delay_info.m"
      }
#line 291 "delay_info.m"
      break;
#line 291 "delay_info.m"
    }
#line 288 "delay_info.m"
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
#line 430 "delay_info.m"
  {
#line 430 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 430 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 0)));
#line 430 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 1)));
#line 430 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 2)));
#line 430 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 3)));
#line 430 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23, (MR_Integer) 4)));
#line 468 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_11;
#line 444 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_PendingGoals0_11;

#line 444 "delay_info.m"
    {
#line 444 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__PendingGoalsTable0_9, check_hlds__delay_info__CurrentDepth_6, &check_hlds__delay_info__conv0_PendingGoals0_11);
    }
#line 444 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 444 "delay_info.m"
      {
#line 444 "delay_info.m"
        check_hlds__delay_info__PendingGoals0_11 = ((MR_Word) check_hlds__delay_info__conv0_PendingGoals0_11);
#line 444 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 444 "delay_info.m"
      }
#line 468 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 447 "delay_info.m"
      {
#line 447 "delay_info.m"
        MR_Word check_hlds__delay_info__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 447 "delay_info.m"
        MR_Word check_hlds__delay_info__SeqNums_12;

#line 447 "delay_info.m"
        {
#line 447 "delay_info.m"
          check_hlds__delay_info__SeqNums_12 = mercury__cord__list_1_f_0(check_hlds__delay_info__TypeCtorInfo_29_29, check_hlds__delay_info__PendingGoals0_11);
        }
#line 464 "delay_info.m"
        if ((check_hlds__delay_info__SeqNums_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "delay_info.m"
          {
#line 466 "delay_info.m"
            *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 465 "delay_info.m"
            *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
#line 465 "delay_info.m"
          }
#line 464 "delay_info.m"
        else
#line 449 "delay_info.m"
          {
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__TypeInfo_31_31;
#line 449 "delay_info.m"
            MR_Integer check_hlds__delay_info__HeadSeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 0)));
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__TailSeqNums_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__SeqNums_12, (MR_Integer) 1)));
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__PendingGoalsTable_15;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals0_16;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoalStack1_17;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__HeadGoal_18;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals1_19;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__TailGoals_20;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoals_21;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoalStack_22;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__V_25_25;
#line 449 "delay_info.m"
            MR_Word check_hlds__delay_info__DelayedGoal_53;
#line 453 "delay_info.m"
            MR_Box check_hlds__delay_info__conv1_DelayedGoals0_16;
#line 484 "delay_info.m"
            MR_Box check_hlds__delay_info__conv2_DelayedGoal_53;
#line 485 "delay_info.m"
            MR_Word check_hlds__delay_info___Vars_54;
#line 485 "delay_info.m"
            MR_Word check_hlds__delay_info___ErrorReason_55;

#line 450 "delay_info.m"
            {
#line 450 "delay_info.m"
              check_hlds__delay_info__V_25_25 = mercury__cord__init_0_f_0(check_hlds__delay_info__TypeCtorInfo_29_29);
            }
#line 450 "delay_info.m"
            {
#line 450 "delay_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[2], check_hlds__delay_info__CurrentDepth_6, ((MR_Box) (check_hlds__delay_info__V_25_25)), check_hlds__delay_info__PendingGoalsTable0_9, &check_hlds__delay_info__PendingGoalsTable_15);
            }
#line 2840 "check_hlds.delay_info.c"
            check_hlds__delay_info__TypeInfo_31_31 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 453 "delay_info.m"
            {
#line 453 "delay_info.m"
              mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_31_31, &check_hlds__delay_info__conv1_DelayedGoals0_16, check_hlds__delay_info__DelayedGoalStack0_7, &check_hlds__delay_info__DelayedGoalStack1_17);
            }
#line 453 "delay_info.m"
            check_hlds__delay_info__DelayedGoals0_16 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_16);
#line 484 "delay_info.m"
            {
#line 484 "delay_info.m"
              mercury__map__det_remove_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, ((MR_Box) (check_hlds__delay_info__HeadSeqNum_13)), &check_hlds__delay_info__conv2_DelayedGoal_53, check_hlds__delay_info__DelayedGoals0_16, &check_hlds__delay_info__DelayedGoals1_19);
            }
#line 484 "delay_info.m"
            check_hlds__delay_info__DelayedGoal_53 = ((MR_Word) check_hlds__delay_info__conv2_DelayedGoal_53);
#line 485 "delay_info.m"
            check_hlds__delay_info___Vars_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 0)));
#line 485 "delay_info.m"
            check_hlds__delay_info___ErrorReason_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 1)));
#line 485 "delay_info.m"
            check_hlds__delay_info__HeadGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayedGoal_53, (MR_Integer) 2)));
#line 456 "delay_info.m"
            {
#line 456 "delay_info.m"
              check_hlds__delay_info__lookup_delayed_goals_4_p_0(check_hlds__delay_info__TailSeqNums_14, &check_hlds__delay_info__TailGoals_20, check_hlds__delay_info__DelayedGoals1_19, &check_hlds__delay_info__DelayedGoals_21);
            }
#line 458 "delay_info.m"
            {
#line 458 "delay_info.m"
              mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_31_31, ((MR_Box) (check_hlds__delay_info__DelayedGoals_21)), check_hlds__delay_info__DelayedGoalStack1_17, &check_hlds__delay_info__DelayedGoalStack_22);
            }
#line 459 "delay_info.m"
            {
#line 459 "delay_info.m"
              MR_Word base;
#line 459 "delay_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "delay_info.m"
              *check_hlds__delay_info__Goals_4 = base;
#line 459 "delay_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__delay_info__HeadGoal_18));
#line 459 "delay_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__delay_info__TailGoals_20));
#line 459 "delay_info.m"
            }
#line 461 "delay_info.m"
            {
#line 461 "delay_info.m"
              MR_Word base;
#line 461 "delay_info.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 461 "delay_info.m"
              *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = base;
#line 461 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
#line 461 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_22));
#line 461 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoals_8));
#line 461 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoalsTable_15));
#line 461 "delay_info.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
#line 461 "delay_info.m"
            }
#line 449 "delay_info.m"
          }
#line 447 "delay_info.m"
      }
#line 468 "delay_info.m"
    else
#line 469 "delay_info.m"
      {
#line 469 "delay_info.m"
        *check_hlds__delay_info__Goals_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "delay_info.m"
        *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_24 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_23;
#line 469 "delay_info.m"
      }
#line 430 "delay_info.m"
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
#line 354 "delay_info.m"
  {
#line 354 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 354 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingVars_4;
#line 354 "delay_info.m"
    MR_Word check_hlds__delay_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 2)));
#line 355 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 0)));
#line 355 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 1)));
#line 355 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 3)));
#line 355 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, (MR_Integer) 4)));

#line 355 "delay_info.m"
    {
#line 355 "delay_info.m"
      mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__V_7_7, &check_hlds__delay_info__WaitingVars_4);
    }
#line 356 "delay_info.m"
    {
#line 356 "delay_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__delay_info__WaitingVars_4, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_5, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_6);
#line 356 "delay_info.m"
      return;
    }
#line 354 "delay_info.m"
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
#line 363 "delay_info.m"
  {
#line 363 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 363 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 0)));
#line 363 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 1)));
#line 363 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 2)));
#line 363 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 3)));
#line 363 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15, (MR_Integer) 4)));
#line 375 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalsWaitingOnVar_11;
#line 367 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_GoalsWaitingOnVar_11;

#line 367 "delay_info.m"
    {
#line 367 "delay_info.m"
      check_hlds__delay_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], check_hlds__delay_info__WaitingGoalsTable0_8, ((MR_Box) (check_hlds__delay_info__Var_4)), &check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
    }
#line 367 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 367 "delay_info.m"
      {
#line 367 "delay_info.m"
        check_hlds__delay_info__GoalsWaitingOnVar_11 = ((MR_Word) check_hlds__delay_info__conv0_GoalsWaitingOnVar_11);
#line 367 "delay_info.m"
        check_hlds__delay_info__succeeded = MR_TRUE;
#line 367 "delay_info.m"
      }
#line 375 "delay_info.m"
    if (check_hlds__delay_info__succeeded)
#line 368 "delay_info.m"
      {
#line 368 "delay_info.m"
        MR_Word check_hlds__delay_info__NewlyPendingGoals_12;
#line 368 "delay_info.m"
        MR_Word check_hlds__delay_info__PendingGoals_13;
#line 368 "delay_info.m"
        MR_Word check_hlds__delay_info__WaitingGoalsTable_14;

#line 368 "delay_info.m"
        {
#line 368 "delay_info.m"
          mercury__map__keys_2_p_0((MR_Word) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_goal_num_0, (MR_Word) &check_hlds__delay_info_scalar_common_2[1], check_hlds__delay_info__GoalsWaitingOnVar_11, &check_hlds__delay_info__NewlyPendingGoals_12);
        }
#line 369 "delay_info.m"
        {
#line 369 "delay_info.m"
          check_hlds__delay_info__add_pending_goals_6_p_0(check_hlds__delay_info__NewlyPendingGoals_12, check_hlds__delay_info__GoalsWaitingOnVar_11, check_hlds__delay_info__PendingGoals0_9, &check_hlds__delay_info__PendingGoals_13, check_hlds__delay_info__WaitingGoalsTable0_8, &check_hlds__delay_info__WaitingGoalsTable_14);
        }
#line 372 "delay_info.m"
        {
#line 372 "delay_info.m"
          MR_Word base;
#line 372 "delay_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 372 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = base;
#line 372 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_6));
#line 372 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_7));
#line 372 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_14));
#line 372 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_13));
#line 372 "delay_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_10));
#line 372 "delay_info.m"
        }
#line 368 "delay_info.m"
      }
#line 375 "delay_info.m"
    else
#line 375 "delay_info.m"
      *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_16 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_15;
#line 363 "delay_info.m"
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
#line 358 "delay_info.m"
  while (MR_TRUE)
#line 358 "delay_info.m"
    {
#line 358 "delay_info.m"
      /* tailcall optimized into a loop */
#line 358 "delay_info.m"
      {
#line 358 "delay_info.m"
        MR_bool check_hlds__delay_info__succeeded;

#line 358 "delay_info.m"
        if ((check_hlds__delay_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "delay_info.m"
          *check_hlds__delay_info__STATE_VARIABLE_DelayInfo_3 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2;
#line 358 "delay_info.m"
        else
#line 359 "delay_info.m"
          {
#line 359 "delay_info.m"
            MR_Word check_hlds__delay_info__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 0)));
#line 359 "delay_info.m"
            MR_Word check_hlds__delay_info__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__delay_info__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "delay_info.m"
            MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 360 "delay_info.m"
            {
#line 360 "delay_info.m"
              check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__delay_info__Var_7, check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2, &check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12);
            }
#line 361 "delay_info.m"
            /* direct tailcall eliminated */
#line 361 "delay_info.m"
            {
#line 361 "delay_info.m"
              MR_Word check_hlds__delay_info__HeadVar__1__tmp_copy_1 = check_hlds__delay_info__Vars_8;
#line 361 "delay_info.m"
              MR_Word check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_12_12;

#line 361 "delay_info.m"
              check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0_2 = check_hlds__delay_info__STATE_VARIABLE_DelayInfo_0__tmp_copy_2;
#line 361 "delay_info.m"
              check_hlds__delay_info__HeadVar__1_1 = check_hlds__delay_info__HeadVar__1__tmp_copy_1;
#line 361 "delay_info.m"
            }
#line 361 "delay_info.m"
            continue;
#line 359 "delay_info.m"
          }
#line 358 "delay_info.m"
      }
#line 358 "delay_info.m"
      break;
#line 358 "delay_info.m"
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
#line 304 "delay_info.m"
  {
#line 304 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeInfo_33_33;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 0)));
#line 304 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 0)));
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 1)));
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 2)));
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 3)));
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_7, (MR_Integer) 4)));
#line 304 "delay_info.m"
    MR_Integer check_hlds__delay_info__SeqNum_18;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums1_19;
#line 304 "delay_info.m"
    MR_Integer check_hlds__delay_info__NextSeq_20;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_21;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals0_22;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack1_23;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_24;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_25;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__GoalNum_26;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__VarList_27;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_28;
#line 304 "delay_info.m"
    MR_Word check_hlds__delay_info__V_30_30;
#line 306 "delay_info.m"
    MR_Word check_hlds__delay_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 1)));
#line 306 "delay_info.m"
    MR_Word check_hlds__delay_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 2)));
#line 306 "delay_info.m"
    MR_Word check_hlds__delay_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__Error_5, (MR_Integer) 3)));
#line 311 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_SeqNum_18;
#line 316 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_DelayedGoals0_22;

#line 311 "delay_info.m"
    {
#line 311 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, &check_hlds__delay_info__conv0_SeqNum_18, check_hlds__delay_info__NextSeqNums0_17, &check_hlds__delay_info__NextSeqNums1_19);
    }
#line 311 "delay_info.m"
    check_hlds__delay_info__SeqNum_18 = ((MR_Integer) check_hlds__delay_info__conv0_SeqNum_18);
#line 312 "delay_info.m"
    check_hlds__delay_info__NextSeq_20 = (check_hlds__delay_info__SeqNum_18 + (MR_Integer) 1);
#line 313 "delay_info.m"
    {
#line 313 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_32_32, ((MR_Box) (check_hlds__delay_info__NextSeq_20)), check_hlds__delay_info__NextSeqNums1_19, &check_hlds__delay_info__NextSeqNums_21);
    }
#line 3217 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeInfo_33_33 = (MR_Word) &check_hlds__delay_info_scalar_common_1[0];
#line 316 "delay_info.m"
    {
#line 316 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeInfo_33_33, &check_hlds__delay_info__conv1_DelayedGoals0_22, check_hlds__delay_info__DelayedGoalStack0_14, &check_hlds__delay_info__DelayedGoalStack1_23);
    }
#line 316 "delay_info.m"
    check_hlds__delay_info__DelayedGoals0_22 = ((MR_Word) check_hlds__delay_info__conv1_DelayedGoals0_22);
#line 317 "delay_info.m"
    {
#line 317 "delay_info.m"
      check_hlds__delay_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 0) = ((MR_Box) (check_hlds__delay_info__Vars_9));
#line 317 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 1) = ((MR_Box) (check_hlds__delay_info__Error_5));
#line 317 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__V_30_30, 2) = ((MR_Box) (check_hlds__delay_info__Goal_6));
#line 317 "delay_info.m"
    }
#line 317 "delay_info.m"
    {
#line 317 "delay_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, check_hlds__delay_info__SeqNum_18, ((MR_Box) (check_hlds__delay_info__V_30_30)), check_hlds__delay_info__DelayedGoals0_22, &check_hlds__delay_info__DelayedGoals_24);
    }
#line 319 "delay_info.m"
    {
#line 319 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeInfo_33_33, ((MR_Box) (check_hlds__delay_info__DelayedGoals_24)), check_hlds__delay_info__DelayedGoalStack1_23, &check_hlds__delay_info__DelayedGoalStack_25);
    }
#line 322 "delay_info.m"
    {
#line 322 "delay_info.m"
      check_hlds__delay_info__GoalNum_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 322 "delay_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__delay_info__GoalNum_26, 1) = ((MR_Box) (check_hlds__delay_info__SeqNum_18));
#line 322 "delay_info.m"
    }
#line 323 "delay_info.m"
    {
#line 323 "delay_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__delay_info__Vars_9, &check_hlds__delay_info__VarList_27);
    }
#line 324 "delay_info.m"
    {
#line 324 "delay_info.m"
      check_hlds__delay_info__add_waiting_vars_5_p_0(check_hlds__delay_info__VarList_27, check_hlds__delay_info__GoalNum_26, check_hlds__delay_info__VarList_27, check_hlds__delay_info__WaitingGoalsTable0_15, &check_hlds__delay_info__WaitingGoalsTable_28);
    }
#line 327 "delay_info.m"
    {
#line 327 "delay_info.m"
      MR_Word base;
#line 327 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 327 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_8 = base;
#line 327 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 327 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_25));
#line 327 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_28));
#line 327 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_16));
#line 327 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_21));
#line 327 "delay_info.m"
    }
#line 304 "delay_info.m"
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
#line 268 "delay_info.m"
  {
#line 268 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_21_21;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_22_22;
#line 268 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 0)));
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 1)));
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 2)));
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 3)));
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_4, (MR_Integer) 4)));
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_12;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_13;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__SeqNums_14;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_15;
#line 268 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_17;
#line 268 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_18;
#line 272 "delay_info.m"
    MR_Box check_hlds__delay_info__conv0_DelayedGoals_12;
#line 276 "delay_info.m"
    MR_Integer check_hlds__delay_info__V_16_16;
#line 276 "delay_info.m"
    MR_Box check_hlds__delay_info__conv1_V_16_16;

#line 272 "delay_info.m"
    {
#line 272 "delay_info.m"
      mercury__stack__det_pop_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__conv0_DelayedGoals_12, check_hlds__delay_info__DelayedGoalStack0_8, &check_hlds__delay_info__DelayedGoalStack_13);
    }
#line 272 "delay_info.m"
    check_hlds__delay_info__DelayedGoals_12 = ((MR_Word) check_hlds__delay_info__conv0_DelayedGoals_12);
#line 3348 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 3350 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
#line 273 "delay_info.m"
    {
#line 273 "delay_info.m"
      mercury__map__keys_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, &check_hlds__delay_info__SeqNums_14);
    }
#line 274 "delay_info.m"
    {
#line 274 "delay_info.m"
      check_hlds__delay_info__remove_delayed_goals_5_p_0(check_hlds__delay_info__SeqNums_14, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__CurrentDepth0_7, check_hlds__delay_info__WaitingGoalsTable0_9, &check_hlds__delay_info__WaitingGoalsTable_15);
    }
#line 276 "delay_info.m"
    {
#line 276 "delay_info.m"
      mercury__stack__det_pop_3_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, &check_hlds__delay_info__conv1_V_16_16, check_hlds__delay_info__NextSeqNums0_11, &check_hlds__delay_info__NextSeqNums_17);
    }
#line 276 "delay_info.m"
    check_hlds__delay_info__V_16_16 = ((MR_Integer) check_hlds__delay_info__conv1_V_16_16);
#line 277 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_18 = (check_hlds__delay_info__CurrentDepth0_7 - (MR_Integer) 1);
#line 278 "delay_info.m"
    {
#line 278 "delay_info.m"
      mercury__map__values_2_p_0(check_hlds__delay_info__TypeCtorInfo_21_21, check_hlds__delay_info__TypeCtorInfo_22_22, check_hlds__delay_info__DelayedGoals_12, check_hlds__delay_info__DelayedGoalsList_5);
    }
#line 279 "delay_info.m"
    {
#line 279 "delay_info.m"
      MR_Word base;
#line 279 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 279 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_6 = base;
#line 279 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_18));
#line 279 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_13));
#line 279 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_15));
#line 279 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_10));
#line 279 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_17));
#line 279 "delay_info.m"
    }
#line 268 "delay_info.m"
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
#line 254 "delay_info.m"
  {
#line 254 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 254 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth0_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 0)));
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 1)));
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 2)));
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 3)));
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__delay_info__DelayInfo0_3, (MR_Integer) 4)));
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoals_10;
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_11;
#line 254 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_12;
#line 254 "delay_info.m"
    MR_Integer check_hlds__delay_info__CurrentDepth_13;

#line 258 "delay_info.m"
    {
#line 258 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, (MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_delayed_goal_0, &check_hlds__delay_info__DelayedGoals_10);
    }
#line 259 "delay_info.m"
    {
#line 259 "delay_info.m"
      mercury__stack__push_3_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], ((MR_Box) (check_hlds__delay_info__DelayedGoals_10)), check_hlds__delay_info__DelayedGoalStack0_6, &check_hlds__delay_info__DelayedGoalStack_11);
    }
#line 260 "delay_info.m"
    {
#line 260 "delay_info.m"
      mercury__stack__push_3_p_0(check_hlds__delay_info__TypeCtorInfo_16_16, ((MR_Box) ((MR_Integer) 0)), check_hlds__delay_info__NextSeqNums0_9, &check_hlds__delay_info__NextSeqNums_12);
    }
#line 261 "delay_info.m"
    check_hlds__delay_info__CurrentDepth_13 = (check_hlds__delay_info__CurrentDepth0_5 + (MR_Integer) 1);
#line 262 "delay_info.m"
    {
#line 262 "delay_info.m"
      MR_Word base;
#line 262 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 262 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_4 = base;
#line 262 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__delay_info__CurrentDepth_13));
#line 262 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_11));
#line 262 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_7));
#line 262 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_8));
#line 262 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_12));
#line 262 "delay_info.m"
    }
#line 254 "delay_info.m"
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
#line 242 "delay_info.m"
  {
#line 242 "delay_info.m"
    MR_bool check_hlds__delay_info__succeeded;
#line 242 "delay_info.m"
    MR_Word check_hlds__delay_info__TypeCtorInfo_11_11;
#line 242 "delay_info.m"
    MR_Word check_hlds__delay_info__DelayedGoalStack_4;
#line 242 "delay_info.m"
    MR_Word check_hlds__delay_info__WaitingGoalsTable_5;
#line 242 "delay_info.m"
    MR_Word check_hlds__delay_info__PendingGoals_6;
#line 242 "delay_info.m"
    MR_Word check_hlds__delay_info__NextSeqNums_7;

#line 244 "delay_info.m"
    {
#line 244 "delay_info.m"
      mercury__stack__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_1[0], &check_hlds__delay_info__DelayedGoalStack_4);
    }
#line 245 "delay_info.m"
    {
#line 245 "delay_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__delay_info_scalar_common_2[0], (MR_Word) &check_hlds__delay_info_scalar_common_1[1], &check_hlds__delay_info__WaitingGoalsTable_5);
    }
#line 3509 "check_hlds.delay_info.c"
    check_hlds__delay_info__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 246 "delay_info.m"
    {
#line 246 "delay_info.m"
      mercury__map__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, (MR_Word) &check_hlds__delay_info_scalar_common_2[2], &check_hlds__delay_info__PendingGoals_6);
    }
#line 247 "delay_info.m"
    {
#line 247 "delay_info.m"
      mercury__stack__init_1_p_0(check_hlds__delay_info__TypeCtorInfo_11_11, &check_hlds__delay_info__NextSeqNums_7);
    }
#line 248 "delay_info.m"
    {
#line 248 "delay_info.m"
      MR_Word base;
#line 248 "delay_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 248 "delay_info.m"
      *check_hlds__delay_info__DelayInfo_2 = base;
#line 248 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 248 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__delay_info__DelayedGoalStack_4));
#line 248 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__delay_info__WaitingGoalsTable_5));
#line 248 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__delay_info__PendingGoals_6));
#line 248 "delay_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__delay_info__NextSeqNums_7));
#line 248 "delay_info.m"
    }
#line 242 "delay_info.m"
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
