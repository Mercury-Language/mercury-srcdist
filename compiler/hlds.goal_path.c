/*
** Automatically generated from `goal_path.m'
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


/* :- module hlds.goal_path. */
/* :- implementation. */

/*
INIT mercury__hlds__goal_path__init
ENDINIT
*/

#include "hlds.goal_path.mih"


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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 137 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 140 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 143 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 149 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2];

#line 152 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2];

#line 155 "hlds.goal_path.c"
static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0;

#line 158 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1];

#line 161 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1];

#line 164 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1];

#line 167 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1];

#line 170 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
#line 173 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 175 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2);

#line 178 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
#line 181 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 183 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 185 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3);

#line 188 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 191 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 193 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2);

#line 196 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 199 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 201 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 203 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3);

#line 81 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 81 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3);

#line 81 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2);

#line 126 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
#line 126 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3);

#line 126 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2);

#line 465 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 465 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 465 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 450 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 450 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 450 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6);

#line 439 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 439 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 439 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 428 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 428 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 428 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 325 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_5,
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 325 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8);

#line 302 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 302 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 302 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 302 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 302 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 302 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 284 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 284 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 284 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_5,
#line 284 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_6,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7,
#line 284 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 284 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10);

#line 270 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 270 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 270 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 270 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 270 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 270 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 256 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 256 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 256 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 256 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 256 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 256 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 142 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 142 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_100,
#line 142 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_101,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_102,
#line 142 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 142 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14);

#line 128 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 128 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 128 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_19,
#line 128 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_20,
#line 128 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21,
#line 128 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_ClauseNum_22,
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_23,
#line 128 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_24);

#line 107 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8);


static /* final */ const MR_Box hlds__goal_path_scalar_common_1[1][3];

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[1][2];

static /* final */ const MR_Box hlds__goal_path_scalar_common_3[1][12];




static /* final */ const MR_Box hlds__goal_path_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_path_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 528 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 537 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 545 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 553 "hlds.goal_path.c"
const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_containing_goal_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__goal_path____Unify____containing_goal_list_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____containing_goal_list_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "containing_goal_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 574 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 582 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 591 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 597 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2] = {
  (MR_String) "slot_info_module_info",
  (MR_String) "slot_info_vartypes"
};

#line 603 "hlds.goal_path.c"
static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0 = {
  (MR_String) "slot_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0,
  hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0,
  NULL,
  NULL
};

#line 618 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 623 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0
  }
};

#line 632 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 637 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 642 "hlds.goal_path.c"
const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_path____Unify____slot_info_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____slot_info_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "slot_info",
  {
    hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0
  },
  {
    hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0
};

#line 663 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
#line 666 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 668 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2)
#line 670 "hlds.goal_path.c"
{
#line 672 "hlds.goal_path.c"
  {
#line 674 "hlds.goal_path.c"
    MR_bool hlds__goal_path__succeeded;

#line 677 "hlds.goal_path.c"
    {
#line 679 "hlds.goal_path.c"
      hlds__goal_path__succeeded = hlds__goal_path____Unify____containing_goal_list_0_0(((MR_Word) hlds__goal_path__wrapper_arg_1), ((MR_Word) hlds__goal_path__wrapper_arg_2));
    }
#line 682 "hlds.goal_path.c"
    return hlds__goal_path__succeeded;
#line 684 "hlds.goal_path.c"
  }
#line 686 "hlds.goal_path.c"
}

#line 689 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
#line 692 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 694 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 696 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3)
#line 698 "hlds.goal_path.c"
{
#line 700 "hlds.goal_path.c"
  {
#line 702 "hlds.goal_path.c"
    MR_Word hlds__goal_path__conv0_HeadVar__1_1;

#line 705 "hlds.goal_path.c"
    {
#line 707 "hlds.goal_path.c"
      hlds__goal_path____Compare____containing_goal_list_0_0(&hlds__goal_path__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_path__wrapper_arg_2), ((MR_Word) hlds__goal_path__wrapper_arg_3));
    }
#line 710 "hlds.goal_path.c"
    *hlds__goal_path__wrapper_arg_1 = ((MR_Box) (hlds__goal_path__conv0_HeadVar__1_1));
#line 712 "hlds.goal_path.c"
  }
#line 714 "hlds.goal_path.c"
}

#line 717 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 720 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 722 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2)
#line 724 "hlds.goal_path.c"
{
#line 726 "hlds.goal_path.c"
  {
#line 728 "hlds.goal_path.c"
    MR_bool hlds__goal_path__succeeded;

#line 731 "hlds.goal_path.c"
    {
#line 733 "hlds.goal_path.c"
      hlds__goal_path__succeeded = hlds__goal_path____Unify____slot_info_0_0(((MR_Word) hlds__goal_path__wrapper_arg_1), ((MR_Word) hlds__goal_path__wrapper_arg_2));
    }
#line 736 "hlds.goal_path.c"
    return hlds__goal_path__succeeded;
#line 738 "hlds.goal_path.c"
  }
#line 740 "hlds.goal_path.c"
}

#line 743 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 746 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 748 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 750 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3)
#line 752 "hlds.goal_path.c"
{
#line 754 "hlds.goal_path.c"
  {
#line 756 "hlds.goal_path.c"
    MR_Word hlds__goal_path__conv0_HeadVar__1_1;

#line 759 "hlds.goal_path.c"
    {
#line 761 "hlds.goal_path.c"
      hlds__goal_path____Compare____slot_info_0_0(&hlds__goal_path__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_path__wrapper_arg_2), ((MR_Word) hlds__goal_path__wrapper_arg_3));
    }
#line 764 "hlds.goal_path.c"
    *hlds__goal_path__wrapper_arg_1 = ((MR_Box) (hlds__goal_path__conv0_HeadVar__1_1));
#line 766 "hlds.goal_path.c"
  }
#line 768 "hlds.goal_path.c"
}

#line 81 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 81 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3)
#line 81 "goal_path.m"
{
#line 81 "goal_path.m"
  {
#line 81 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 81 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_9 = (MR_Integer) hlds__goal_path__HeadVar__2_2;
#line 81 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_10 = (MR_Integer) hlds__goal_path__HeadVar__3_3;

#line 81 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_9 == hlds__goal_path__CastY_10);
#line 81 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 795 "hlds.goal_path.c"
      *hlds__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "goal_path.m"
    else
#line 81 "goal_path.m"
      {
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_8_8;

#line 81 "goal_path.m"
        {
#line 81 "goal_path.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__goal_path__V_8_8, hlds__goal_path__V_4_4, hlds__goal_path__V_6_6);
        }
#line 817 "hlds.goal_path.c"
        hlds__goal_path__succeeded = (hlds__goal_path__V_8_8 == (MR_Integer) 0);
#line 81 "goal_path.m"
        hlds__goal_path__succeeded = !(hlds__goal_path__succeeded);
#line 81 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 81 "goal_path.m"
          *hlds__goal_path__HeadVar__1_1 = hlds__goal_path__V_8_8;
#line 81 "goal_path.m"
        else
#line 81 "goal_path.m"
          {
#line 81 "goal_path.m"
            {
#line 81 "goal_path.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, hlds__goal_path__HeadVar__1_1, ((MR_Box) (hlds__goal_path__V_5_5)), ((MR_Box) (hlds__goal_path__V_7_7)));
#line 81 "goal_path.m"
              return;
            }
#line 81 "goal_path.m"
          }
#line 81 "goal_path.m"
      }
#line 81 "goal_path.m"
  }
#line 81 "goal_path.m"
}

#line 81 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 81 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2)
#line 81 "goal_path.m"
{
#line 81 "goal_path.m"
  {
#line 81 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 81 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_7 = (MR_Integer) hlds__goal_path__HeadVar__1_1;
#line 81 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_8 = (MR_Integer) hlds__goal_path__HeadVar__2_2;

#line 81 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_7 == hlds__goal_path__CastY_8);
#line 81 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 81 "goal_path.m"
      hlds__goal_path__succeeded = MR_TRUE;
#line 81 "goal_path.m"
    else
#line 81 "goal_path.m"
      {
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__TypeCtorInfo_10_10;
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 81 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 884 "hlds.goal_path.c"
        {
#line 886 "hlds.goal_path.c"
          hlds__goal_path__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__goal_path__V_3_3, hlds__goal_path__V_5_5);
        }
#line 81 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 81 "goal_path.m"
          {
#line 893 "hlds.goal_path.c"
            hlds__goal_path__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 895 "hlds.goal_path.c"
            {
#line 897 "hlds.goal_path.c"
              return hlds__goal_path__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_path__TypeCtorInfo_10_10, ((MR_Box) (hlds__goal_path__V_4_4)), ((MR_Box) (hlds__goal_path__V_6_6)));
            }
#line 81 "goal_path.m"
          }
#line 81 "goal_path.m"
      }
#line 81 "goal_path.m"
    return hlds__goal_path__succeeded;
#line 81 "goal_path.m"
  }
#line 81 "goal_path.m"
}

#line 126 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
#line 126 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3)
#line 126 "goal_path.m"
{
#line 126 "goal_path.m"
  {
#line 126 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 126 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar1_4 = hlds__goal_path__HeadVar__2_2;
#line 126 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar2_5 = hlds__goal_path__HeadVar__3_3;

#line 126 "goal_path.m"
    {
#line 126 "goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__goal_path_scalar_common_2[0], hlds__goal_path__HeadVar__1_1, ((MR_Box) (hlds__goal_path__Cast_HeadVar1_4)), ((MR_Box) (hlds__goal_path__Cast_HeadVar2_5)));
#line 126 "goal_path.m"
      return;
    }
#line 126 "goal_path.m"
  }
#line 126 "goal_path.m"
}

#line 126 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 126 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2)
#line 126 "goal_path.m"
{
#line 126 "goal_path.m"
  {
#line 126 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 126 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar1_3 = hlds__goal_path__HeadVar__1_1;
#line 126 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar2_4 = hlds__goal_path__HeadVar__2_2;

#line 126 "goal_path.m"
    {
#line 126 "goal_path.m"
      return hlds__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__goal_path_scalar_common_2[0], ((MR_Box) (hlds__goal_path__Cast_HeadVar1_3)), ((MR_Box) (hlds__goal_path__Cast_HeadVar2_4)));
    }
#line 126 "goal_path.m"
    return hlds__goal_path__succeeded;
#line 126 "goal_path.m"
  }
#line 126 "goal_path.m"
}

#line 465 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 465 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 465 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 465 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 465 "goal_path.m"
{
#line 468 "goal_path.m"
  {
#line 468 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 468 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 468 "goal_path.m"
    else
#line 470 "goal_path.m"
      {
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 470 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 470 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 472 "goal_path.m"
        {
#line 472 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 472 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 1) = ((MR_Box) (hlds__goal_path__N1_16));
#line 472 "goal_path.m"
        }
#line 472 "goal_path.m"
        {
#line 472 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 472 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 472 "goal_path.m"
        }
#line 472 "goal_path.m"
        {
#line 472 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 474 "goal_path.m"
        {
#line 474 "goal_path.m"
          hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 470 "goal_path.m"
        {
#line 470 "goal_path.m"
          MR_Word base;
#line 470 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 470 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 470 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 470 "goal_path.m"
        }
#line 470 "goal_path.m"
      }
#line 468 "goal_path.m"
  }
#line 465 "goal_path.m"
}

#line 450 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 450 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 450 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 450 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6)
#line 450 "goal_path.m"
{
#line 454 "goal_path.m"
  {
#line 454 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 454 "goal_path.m"
    if ((hlds__goal_path__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "goal_path.m"
      *hlds__goal_path__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 454 "goal_path.m"
    else
#line 456 "goal_path.m"
      {
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 0)));
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 1)));
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Case_17;
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Cases_18;
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 0)));
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 1)));
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 2)));
#line 456 "goal_path.m"
        MR_Integer hlds__goal_path__N1_22 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__Goal_23;
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__V_25_25;
#line 456 "goal_path.m"
        MR_Word hlds__goal_path__V_26_26;

#line 459 "goal_path.m"
        {
#line 459 "goal_path.m"
          hlds__goal_path__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 459 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 459 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 1) = ((MR_Box) (hlds__goal_path__N1_22));
#line 459 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_3));
#line 459 "goal_path.m"
        }
#line 459 "goal_path.m"
        {
#line 459 "goal_path.m"
          hlds__goal_path__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_25_25, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 459 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_25_25, 1) = ((MR_Box) (hlds__goal_path__V_26_26));
#line 459 "goal_path.m"
        }
#line 459 "goal_path.m"
        {
#line 459 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_25_25, hlds__goal_path__SlotInfo_4, hlds__goal_path__Goal0_21, &hlds__goal_path__Goal_23);
        }
#line 461 "goal_path.m"
        {
#line 461 "goal_path.m"
          hlds__goal_path__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 461 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 0) = ((MR_Box) (hlds__goal_path__MainConsId_19));
#line 461 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_20));
#line 461 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 2) = ((MR_Box) (hlds__goal_path__Goal_23));
#line 461 "goal_path.m"
        }
#line 462 "goal_path.m"
        {
#line 462 "goal_path.m"
          hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_22, hlds__goal_path__MaybeNumFunctors_3, hlds__goal_path__SlotInfo_4, hlds__goal_path__Cases0_16, &hlds__goal_path__Cases_18);
        }
#line 456 "goal_path.m"
        {
#line 456 "goal_path.m"
          MR_Word base;
#line 456 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "goal_path.m"
          *hlds__goal_path__HeadVar__6_6 = base;
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_17));
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_18));
#line 456 "goal_path.m"
        }
#line 456 "goal_path.m"
      }
#line 454 "goal_path.m"
  }
#line 450 "goal_path.m"
}

#line 439 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 439 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 439 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 439 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 439 "goal_path.m"
{
#line 442 "goal_path.m"
  {
#line 442 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 442 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "goal_path.m"
    else
#line 444 "goal_path.m"
      {
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 444 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 444 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 446 "goal_path.m"
        {
#line 446 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__N1_16));
#line 446 "goal_path.m"
        }
#line 446 "goal_path.m"
        {
#line 446 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 446 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 446 "goal_path.m"
        }
#line 446 "goal_path.m"
        {
#line 446 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 448 "goal_path.m"
        {
#line 448 "goal_path.m"
          hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 444 "goal_path.m"
        {
#line 444 "goal_path.m"
          MR_Word base;
#line 444 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 444 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 444 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 444 "goal_path.m"
        }
#line 444 "goal_path.m"
      }
#line 442 "goal_path.m"
  }
#line 439 "goal_path.m"
}

#line 428 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 428 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 428 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 428 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 428 "goal_path.m"
{
#line 431 "goal_path.m"
  {
#line 431 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 431 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "goal_path.m"
    else
#line 433 "goal_path.m"
      {
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 433 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 433 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 435 "goal_path.m"
        {
#line 435 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__N1_16));
#line 435 "goal_path.m"
        }
#line 435 "goal_path.m"
        {
#line 435 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 435 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 435 "goal_path.m"
        }
#line 435 "goal_path.m"
        {
#line 435 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 437 "goal_path.m"
        {
#line 437 "goal_path.m"
          hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 433 "goal_path.m"
        {
#line 433 "goal_path.m"
          MR_Word base;
#line 433 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 433 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 433 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 433 "goal_path.m"
        }
#line 433 "goal_path.m"
      }
#line 431 "goal_path.m"
  }
#line 428 "goal_path.m"
}

#line 325 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_5,
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 325 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 325 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8)
#line 325 "goal_path.m"
{
#line 328 "goal_path.m"
  {
#line 328 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 0)));
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 1)));
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_11;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_15;

#line 330 "goal_path.m"
    {
#line 330 "goal_path.m"
      hlds__hlds_goal__goal_info_set_reverse_goal_path_3_p_0(hlds__goal_path__RevPath0_5, hlds__goal_path__GoalInfo0_10, &hlds__goal_path__GoalInfo_11);
    }
#line 335 "goal_path.m"
    if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 0))))
#line 353 "goal_path.m"
      {
#line 353 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal0_25 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_9), (MR_Integer) 0);
#line 353 "goal_path.m"
        MR_Word hlds__goal_path__RevPath_26;
#line 353 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal_27;

#line 354 "goal_path.m"
        {
#line 354 "goal_path.m"
          hlds__goal_path__RevPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_26, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 354 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 354 "goal_path.m"
        }
#line 355 "goal_path.m"
        {
#line 355 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_26, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_25, &hlds__goal_path__SubGoal_27);
        }
#line 356 "goal_path.m"
        hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_27);
#line 353 "goal_path.m"
      }
#line 335 "goal_path.m"
    else
#line 335 "goal_path.m"
      if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 1))))
#line 383 "goal_path.m"
        {
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__LHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)));
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 383 "goal_path.m"
          MR_Word hlds__goal_path__RHS_59;

#line 390 "goal_path.m"
          if (((MR_tag((MR_Word) hlds__goal_path__RHS0_45)) == (MR_mktag((MR_Integer) 2))))
#line 386 "goal_path.m"
            {
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__Purity_49 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__Groundness_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__PredOrFunc_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__NonLocals_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 2)));
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__QuantVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 3)));
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__LambdaModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 4)));
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__Detism_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 5)));
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 6)));
#line 386 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal_58;

#line 387 "goal_path.m"
              {
#line 387 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath0_5, hlds__goal_path__SlotInfo_6, hlds__goal_path__LambdaGoal0_57, &hlds__goal_path__LambdaGoal_58);
              }
#line 388 "goal_path.m"
              {
#line 388 "goal_path.m"
                hlds__goal_path__RHS_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 0) = ((MR_Box) ((hlds__goal_path__Purity_49 | ((((hlds__goal_path__Groundness_50 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_51 << (MR_Integer) 3)))))));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 1) = (MR_Integer) 0;
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 2) = ((MR_Box) (hlds__goal_path__NonLocals_53));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 3) = ((MR_Box) (hlds__goal_path__QuantVars_54));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_55));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 5) = ((MR_Box) (hlds__goal_path__Detism_56));
#line 388 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_58));
#line 388 "goal_path.m"
              }
#line 386 "goal_path.m"
            }
#line 390 "goal_path.m"
          else
#line 394 "goal_path.m"
            hlds__goal_path__RHS_59 = hlds__goal_path__RHS0_45;
#line 396 "goal_path.m"
          {
#line 396 "goal_path.m"
            hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 396 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (hlds__goal_path__LHS_44));
#line 396 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__RHS_59));
#line 396 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Mode_46));
#line 396 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Kind_47));
#line 396 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Context_48));
#line 396 "goal_path.m"
          }
#line 383 "goal_path.m"
        }
#line 335 "goal_path.m"
      else
#line 335 "goal_path.m"
        if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 332 "goal_path.m"
          {
#line 332 "goal_path.m"
            MR_Word hlds__goal_path__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 332 "goal_path.m"
            MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 332 "goal_path.m"
            MR_Word hlds__goal_path__Goals_14;

#line 333 "goal_path.m"
            {
#line 333 "goal_path.m"
              hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_14);
            }
#line 334 "goal_path.m"
            {
#line 334 "goal_path.m"
              hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 334 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ConjType_12));
#line 334 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Goals_14));
#line 334 "goal_path.m"
            }
#line 332 "goal_path.m"
          }
#line 335 "goal_path.m"
        else
#line 335 "goal_path.m"
          if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 336 "goal_path.m"
            {
#line 336 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 336 "goal_path.m"
              MR_Word hlds__goal_path__Goals_113;

#line 337 "goal_path.m"
              {
#line 337 "goal_path.m"
                hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_112, &hlds__goal_path__Goals_113);
              }
#line 338 "goal_path.m"
              {
#line 338 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 338 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Goals_113));
#line 338 "goal_path.m"
              }
#line 336 "goal_path.m"
            }
#line 335 "goal_path.m"
          else
#line 335 "goal_path.m"
            if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 374 "goal_path.m"
              {
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__RevPathCond_38;
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__RevPathThen_39;
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__RevPathElse_40;
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Cond_41;
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Then_42;
#line 374 "goal_path.m"
                MR_Word hlds__goal_path__Else_43;

#line 375 "goal_path.m"
                {
#line 375 "goal_path.m"
                  hlds__goal_path__RevPathCond_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 375 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "goal_path.m"
                }
#line 376 "goal_path.m"
                {
#line 376 "goal_path.m"
                  hlds__goal_path__RevPathThen_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 376 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 376 "goal_path.m"
                }
#line 377 "goal_path.m"
                {
#line 377 "goal_path.m"
                  hlds__goal_path__RevPathElse_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 377 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 377 "goal_path.m"
                }
#line 378 "goal_path.m"
                {
#line 378 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathCond_38, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cond0_35, &hlds__goal_path__Cond_41);
                }
#line 379 "goal_path.m"
                {
#line 379 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathThen_39, hlds__goal_path__SlotInfo_6, hlds__goal_path__Then0_36, &hlds__goal_path__Then_42);
                }
#line 380 "goal_path.m"
                {
#line 380 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathElse_40, hlds__goal_path__SlotInfo_6, hlds__goal_path__Else0_37, &hlds__goal_path__Else_43);
                }
#line 381 "goal_path.m"
                {
#line 381 "goal_path.m"
                  hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 381 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 381 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Vars_34));
#line 381 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Cond_41));
#line 381 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Then_42));
#line 381 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Else_43));
#line 381 "goal_path.m"
                }
#line 374 "goal_path.m"
              }
#line 335 "goal_path.m"
            else
#line 335 "goal_path.m"
              if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 358 "goal_path.m"
                {
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__InnerInfo_30;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__OuterDetism_31;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__InnerDetism_32;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__MaybeCut_33;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__V_107_107;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__RevPath_115;
#line 358 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal_116;
#line 362 "goal_path.m"
                  MR_Word hlds__goal_path__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 0)));

#line 362 "goal_path.m"
                  hlds__goal_path__InnerInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 1)));
#line 363 "goal_path.m"
                  {
#line 363 "goal_path.m"
                    hlds__goal_path__OuterDetism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_11);
                  }
#line 364 "goal_path.m"
                  {
#line 364 "goal_path.m"
                    hlds__goal_path__InnerDetism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_30);
                  }
#line 365 "goal_path.m"
                  hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_32 == hlds__goal_path__OuterDetism_31);
#line 367 "goal_path.m"
                  if (hlds__goal_path__succeeded)
#line 366 "goal_path.m"
                    hlds__goal_path__MaybeCut_33 = (MR_Integer) 1;
#line 367 "goal_path.m"
                  else
#line 368 "goal_path.m"
                    hlds__goal_path__MaybeCut_33 = (MR_Integer) 0;
#line 370 "goal_path.m"
                  {
#line 370 "goal_path.m"
                    hlds__goal_path__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 370 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_33));
#line 370 "goal_path.m"
                  }
#line 370 "goal_path.m"
                  {
#line 370 "goal_path.m"
                    hlds__goal_path__RevPath_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_115, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 370 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_115, 1) = ((MR_Box) (hlds__goal_path__V_107_107));
#line 370 "goal_path.m"
                  }
#line 371 "goal_path.m"
                  {
#line 371 "goal_path.m"
                    hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_115, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_114, &hlds__goal_path__SubGoal_116);
                  }
#line 372 "goal_path.m"
                  {
#line 372 "goal_path.m"
                    hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 372 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Reason_28));
#line 372 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__SubGoal_116));
#line 372 "goal_path.m"
                  }
#line 358 "goal_path.m"
                }
#line 335 "goal_path.m"
              else
#line 335 "goal_path.m"
                if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 404 "goal_path.m"
                  {
#line 404 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 404 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand_93;

#line 414 "goal_path.m"
                    if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_82)) == (MR_mktag((MR_Integer) 1))))
#line 407 "goal_path.m"
                      {
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__GoalType_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__Outer_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__Inner_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__MaybeOutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 3)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 4)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 5)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseInners_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 6)));
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__RevPathMain_90;
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal_91;
#line 407 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals_92;

#line 408 "goal_path.m"
                        {
#line 408 "goal_path.m"
                          hlds__goal_path__RevPathMain_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 408 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 408 "goal_path.m"
                        }
#line 409 "goal_path.m"
                        {
#line 409 "goal_path.m"
                          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathMain_90, hlds__goal_path__SlotInfo_6, hlds__goal_path__MainGoal0_87, &hlds__goal_path__MainGoal_91);
                        }
#line 410 "goal_path.m"
                        {
#line 410 "goal_path.m"
                          hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__OrElseGoals0_88, &hlds__goal_path__OrElseGoals_92);
                        }
#line 412 "goal_path.m"
                        {
#line 412 "goal_path.m"
                          hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__GoalType_83));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__Outer_84));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__Inner_85));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_86));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 4) = ((MR_Box) (hlds__goal_path__MainGoal_91));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_92));
#line 412 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_89));
#line 412 "goal_path.m"
                        }
#line 407 "goal_path.m"
                      }
#line 414 "goal_path.m"
                    else
#line 414 "goal_path.m"
                      if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_82)) == (MR_mktag((MR_Integer) 0))))
#line 420 "goal_path.m"
                        {
#line 422 "goal_path.m"
                          {
#line 422 "goal_path.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_path_slots\'/4", (MR_String) "bi_implication");
#line 422 "goal_path.m"
                            return;
                          }
#line 420 "goal_path.m"
                        }
#line 414 "goal_path.m"
                      else
#line 415 "goal_path.m"
                        {
#line 415 "goal_path.m"
                          MR_Word hlds__goal_path__MaybeIO_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 415 "goal_path.m"
                          MR_Word hlds__goal_path__ResultVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 415 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal0_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 415 "goal_path.m"
                          MR_Word hlds__goal_path__RevPath_118;
#line 415 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal_119;

#line 416 "goal_path.m"
                          {
#line 416 "goal_path.m"
                            hlds__goal_path__RevPath_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_118, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 416 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 416 "goal_path.m"
                          }
#line 417 "goal_path.m"
                          {
#line 417 "goal_path.m"
                            hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_118, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_117, &hlds__goal_path__SubGoal_119);
                          }
#line 418 "goal_path.m"
                          {
#line 418 "goal_path.m"
                            hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 418 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_94));
#line 418 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__ResultVar_95));
#line 418 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__SubGoal_119));
#line 418 "goal_path.m"
                          }
#line 415 "goal_path.m"
                        }
#line 424 "goal_path.m"
                    {
#line 424 "goal_path.m"
                      hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 424 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ShortHand_93));
#line 424 "goal_path.m"
                    }
#line 404 "goal_path.m"
                  }
#line 335 "goal_path.m"
                else
#line 335 "goal_path.m"
                  if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 340 "goal_path.m"
                    {
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 1)));
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 0)));
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__Type_21;
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__MaybeNumFunctors_23;
#line 340 "goal_path.m"
                      MR_Word hlds__goal_path__Cases_24;
#line 346 "goal_path.m"
                      MR_Integer hlds__goal_path__NumFunctors_22;

#line 343 "goal_path.m"
                      {
#line 343 "goal_path.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_19, hlds__goal_path__Var_16, &hlds__goal_path__Type_21);
                      }
#line 344 "goal_path.m"
                      {
#line 344 "goal_path.m"
                        hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_20, hlds__goal_path__Type_21, &hlds__goal_path__NumFunctors_22);
                      }
#line 346 "goal_path.m"
                      if (hlds__goal_path__succeeded)
#line 345 "goal_path.m"
                        {
#line 345 "goal_path.m"
                          hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 345 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_23, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_22));
#line 345 "goal_path.m"
                        }
#line 346 "goal_path.m"
                      else
#line 347 "goal_path.m"
                        hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "goal_path.m"
                      {
#line 349 "goal_path.m"
                        hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_23, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cases0_18, &hlds__goal_path__Cases_24);
                      }
#line 351 "goal_path.m"
                      {
#line 351 "goal_path.m"
                        hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 351 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 351 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Var_16));
#line 351 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__CanFail_17));
#line 351 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Cases_24));
#line 351 "goal_path.m"
                      }
#line 340 "goal_path.m"
                    }
#line 335 "goal_path.m"
                  else
#line 402 "goal_path.m"
                    hlds__goal_path__GoalExpr_15 = hlds__goal_path__GoalExpr0_9;
#line 426 "goal_path.m"
    {
#line 426 "goal_path.m"
      MR_Word base;
#line 426 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "goal_path.m"
      *hlds__goal_path__Goal_8 = base;
#line 426 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_15));
#line 426 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_11));
#line 426 "goal_path.m"
    }
#line 328 "goal_path.m"
  }
#line 325 "goal_path.m"
}

#line 302 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 302 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 302 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 302 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 302 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 302 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 302 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 302 "goal_path.m"
{
#line 306 "goal_path.m"
  {
#line 306 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 306 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "goal_path.m"
      {
#line 306 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 306 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 306 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 306 "goal_path.m"
      }
#line 306 "goal_path.m"
    else
#line 308 "goal_path.m"
      {
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 308 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 308 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 308 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 310 "goal_path.m"
        {
#line 310 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 310 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 1) = ((MR_Box) (hlds__goal_path__N1_28));
#line 310 "goal_path.m"
        }
#line 310 "goal_path.m"
        {
#line 310 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 310 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 310 "goal_path.m"
        }
#line 311 "goal_path.m"
        {
#line 311 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 313 "goal_path.m"
        {
#line 313 "goal_path.m"
          hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 308 "goal_path.m"
        {
#line 308 "goal_path.m"
          MR_Word base;
#line 308 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 308 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 308 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 308 "goal_path.m"
        }
#line 308 "goal_path.m"
      }
#line 306 "goal_path.m"
  }
#line 302 "goal_path.m"
}

#line 284 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 284 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 284 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_5,
#line 284 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_6,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7,
#line 284 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8,
#line 284 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 284 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10)
#line 284 "goal_path.m"
{
#line 289 "goal_path.m"
  {
#line 289 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 289 "goal_path.m"
    if ((hlds__goal_path__HeadVar__9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "goal_path.m"
      {
#line 289 "goal_path.m"
        *hlds__goal_path__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7;
#line 289 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_6 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_5;
#line 289 "goal_path.m"
      }
#line 289 "goal_path.m"
    else
#line 291 "goal_path.m"
      {
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 0)));
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 1)));
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Case_29;
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Cases_30;
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 0)));
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 1)));
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 2)));
#line 291 "goal_path.m"
        MR_Integer hlds__goal_path__N1_34 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_35;
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__Goal_36;
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__V_42_42;
#line 291 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_43_43;
#line 291 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44;

#line 295 "goal_path.m"
        {
#line 295 "goal_path.m"
          hlds__goal_path__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 295 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 295 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 1) = ((MR_Box) (hlds__goal_path__N1_34));
#line 295 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_4));
#line 295 "goal_path.m"
        }
#line 295 "goal_path.m"
        {
#line 295 "goal_path.m"
          hlds__goal_path__ContainingGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 295 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 1) = ((MR_Box) (hlds__goal_path__V_42_42));
#line 295 "goal_path.m"
        }
#line 296 "goal_path.m"
        {
#line 296 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_35, hlds__goal_path__STATE_VARIABLE_GoalNum_0_5, &hlds__goal_path__STATE_VARIABLE_GoalNum_43_43, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44, hlds__goal_path__Goal0_33, &hlds__goal_path__Goal_36);
        }
#line 298 "goal_path.m"
        {
#line 298 "goal_path.m"
          hlds__goal_path__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 298 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 0) = ((MR_Box) (hlds__goal_path__MainConsId_31));
#line 298 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_32));
#line 298 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 2) = ((MR_Box) (hlds__goal_path__Goal_36));
#line 298 "goal_path.m"
        }
#line 299 "goal_path.m"
        {
#line 299 "goal_path.m"
          hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_34, hlds__goal_path__MaybeNumFunctors_4, hlds__goal_path__STATE_VARIABLE_GoalNum_43_43, hlds__goal_path__STATE_VARIABLE_GoalNum_6, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8, hlds__goal_path__Cases0_28, &hlds__goal_path__Cases_30);
        }
#line 291 "goal_path.m"
        {
#line 291 "goal_path.m"
          MR_Word base;
#line 291 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "goal_path.m"
          *hlds__goal_path__HeadVar__10_10 = base;
#line 291 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_29));
#line 291 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_30));
#line 291 "goal_path.m"
        }
#line 291 "goal_path.m"
      }
#line 289 "goal_path.m"
  }
#line 284 "goal_path.m"
}

#line 270 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 270 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 270 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 270 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 270 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 270 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 270 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 270 "goal_path.m"
{
#line 274 "goal_path.m"
  {
#line 274 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 274 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "goal_path.m"
      {
#line 274 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 274 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 274 "goal_path.m"
      }
#line 274 "goal_path.m"
    else
#line 276 "goal_path.m"
      {
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 276 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 276 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 276 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 278 "goal_path.m"
        {
#line 278 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__N1_28));
#line 278 "goal_path.m"
        }
#line 278 "goal_path.m"
        {
#line 278 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 278 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 278 "goal_path.m"
        }
#line 279 "goal_path.m"
        {
#line 279 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 281 "goal_path.m"
        {
#line 281 "goal_path.m"
          hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 276 "goal_path.m"
        {
#line 276 "goal_path.m"
          MR_Word base;
#line 276 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 276 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 276 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 276 "goal_path.m"
        }
#line 276 "goal_path.m"
      }
#line 274 "goal_path.m"
  }
#line 270 "goal_path.m"
}

#line 256 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 256 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 256 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 256 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 256 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 256 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 256 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 256 "goal_path.m"
{
#line 260 "goal_path.m"
  {
#line 260 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 260 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "goal_path.m"
      {
#line 260 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 260 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 260 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 260 "goal_path.m"
      }
#line 260 "goal_path.m"
    else
#line 262 "goal_path.m"
      {
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 262 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 262 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 262 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 264 "goal_path.m"
        {
#line 264 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__N1_28));
#line 264 "goal_path.m"
        }
#line 264 "goal_path.m"
        {
#line 264 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 264 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 264 "goal_path.m"
        }
#line 265 "goal_path.m"
        {
#line 265 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 267 "goal_path.m"
        {
#line 267 "goal_path.m"
          hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 262 "goal_path.m"
        {
#line 262 "goal_path.m"
          MR_Word base;
#line 262 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 262 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 262 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 262 "goal_path.m"
        }
#line 262 "goal_path.m"
      }
#line 260 "goal_path.m"
  }
#line 256 "goal_path.m"
}

#line 142 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 142 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_100,
#line 142 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_101,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_102,
#line 142 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103,
#line 142 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 142 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14)
#line 142 "goal_path.m"
{
#line 147 "goal_path.m"
  {
#line 147 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 0)));
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 1)));
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__GoalId_17 = (MR_Word) hlds__goal_path__STATE_VARIABLE_GoalNum_0_100;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_18;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_37;
#line 147 "goal_path.m"
    MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_104_104 = (hlds__goal_path__STATE_VARIABLE_GoalNum_0_100 + (MR_Integer) 1);
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_107_107;

#line 151 "goal_path.m"
    {
#line 151 "goal_path.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__goal_path__GoalId_17, hlds__goal_path__GoalInfo0_16, &hlds__goal_path__GoalInfo_18);
    }
#line 152 "goal_path.m"
    {
#line 152 "goal_path.m"
      hlds__goal_path__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 152 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_107_107, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 152 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_107_107, 1) = ((MR_Box) (hlds__goal_path__ContainingGoal_10));
#line 152 "goal_path.m"
    }
#line 152 "goal_path.m"
    {
#line 152 "goal_path.m"
      hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, 0) = ((MR_Box) (hlds__goal_path__V_107_107));
#line 152 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, 1) = ((MR_Box) (hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_102));
#line 152 "goal_path.m"
    }
#line 159 "goal_path.m"
    if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 200 "goal_path.m"
      {
#line 200 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal0_70 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_15), (MR_Integer) 0);
#line 200 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal_71;
#line 200 "goal_path.m"
        MR_Word hlds__goal_path__V_138_138;

#line 201 "goal_path.m"
        {
#line 201 "goal_path.m"
          hlds__goal_path__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_138_138, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 201 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 201 "goal_path.m"
        }
#line 201 "goal_path.m"
        {
#line 201 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_138_138, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__SubGoal0_70, &hlds__goal_path__SubGoal_71);
        }
#line 203 "goal_path.m"
        hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_71);
#line 200 "goal_path.m"
      }
#line 159 "goal_path.m"
    else
#line 159 "goal_path.m"
      if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 160 "goal_path.m"
        {
#line 160 "goal_path.m"
          MR_Word hlds__goal_path__LHS_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)));
#line 160 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 160 "goal_path.m"
          MR_Word hlds__goal_path__Mode_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 160 "goal_path.m"
          MR_Word hlds__goal_path__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 160 "goal_path.m"
          MR_Word hlds__goal_path__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));

#line 170 "goal_path.m"
          if (((MR_tag((MR_Word) hlds__goal_path__RHS0_39)) == (MR_mktag((MR_Integer) 2))))
#line 163 "goal_path.m"
            {
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__Purity_43 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__Groundness_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__PredOrFunc_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__NonLocals_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 2)));
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__QuantVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 3)));
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__LambdaModes_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 4)));
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 5)));
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal0_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 6)));
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal_52;
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__RHS_53;
#line 163 "goal_path.m"
              MR_Word hlds__goal_path__V_151_151;

#line 165 "goal_path.m"
              {
#line 165 "goal_path.m"
                hlds__goal_path__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_151_151, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 165 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 165 "goal_path.m"
              }
#line 164 "goal_path.m"
              {
#line 164 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_151_151, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__LambdaGoal0_51, &hlds__goal_path__LambdaGoal_52);
              }
#line 167 "goal_path.m"
              {
#line 167 "goal_path.m"
                hlds__goal_path__RHS_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 0) = ((MR_Box) ((hlds__goal_path__Purity_43 | ((((hlds__goal_path__Groundness_44 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_45 << (MR_Integer) 3)))))));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 1) = (MR_Integer) 0;
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 2) = ((MR_Box) (hlds__goal_path__NonLocals_47));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 3) = ((MR_Box) (hlds__goal_path__QuantVars_48));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_49));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 5) = ((MR_Box) (hlds__goal_path__Detism_50));
#line 167 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_52));
#line 167 "goal_path.m"
              }
#line 169 "goal_path.m"
              {
#line 169 "goal_path.m"
                hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 169 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (hlds__goal_path__LHS_38));
#line 169 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__RHS_53));
#line 169 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Mode_40));
#line 169 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Kind_41));
#line 169 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 4) = ((MR_Box) (hlds__goal_path__Context_42));
#line 169 "goal_path.m"
              }
#line 163 "goal_path.m"
            }
#line 170 "goal_path.m"
          else
#line 173 "goal_path.m"
            {
#line 174 "goal_path.m"
              hlds__goal_path__GoalExpr_37 = hlds__goal_path__GoalExpr0_15;
#line 174 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_GoalNum_101 = hlds__goal_path__STATE_VARIABLE_GoalNum_104_104;
#line 174 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 173 "goal_path.m"
            }
#line 160 "goal_path.m"
        }
#line 159 "goal_path.m"
      else
#line 159 "goal_path.m"
        if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 177 "goal_path.m"
          {
#line 177 "goal_path.m"
            MR_Word hlds__goal_path__ConjType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 177 "goal_path.m"
            MR_Word hlds__goal_path__Goals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 177 "goal_path.m"
            MR_Word hlds__goal_path__Goals_60;

#line 178 "goal_path.m"
            {
#line 178 "goal_path.m"
              hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__Goals0_59, &hlds__goal_path__Goals_60);
            }
#line 180 "goal_path.m"
            {
#line 180 "goal_path.m"
              hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 180 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 180 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__ConjType_58));
#line 180 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Goals_60));
#line 180 "goal_path.m"
            }
#line 177 "goal_path.m"
          }
#line 159 "goal_path.m"
        else
#line 159 "goal_path.m"
          if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 182 "goal_path.m"
            {
#line 182 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 182 "goal_path.m"
              MR_Word hlds__goal_path__Goals_156;

#line 183 "goal_path.m"
              {
#line 183 "goal_path.m"
                hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__Goals0_155, &hlds__goal_path__Goals_156);
              }
#line 185 "goal_path.m"
              {
#line 185 "goal_path.m"
                hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 185 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Goals_156));
#line 185 "goal_path.m"
              }
#line 182 "goal_path.m"
            }
#line 159 "goal_path.m"
          else
#line 159 "goal_path.m"
            if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 222 "goal_path.m"
              {
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__A_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Cond0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Then0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Else0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Cond_82;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Then_83;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__Else_84;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__V_122_122;
#line 222 "goal_path.m"
                MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_123_123;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__V_126_126;
#line 222 "goal_path.m"
                MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_127_127;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128;
#line 222 "goal_path.m"
                MR_Word hlds__goal_path__V_130_130;

#line 223 "goal_path.m"
                {
#line 223 "goal_path.m"
                  hlds__goal_path__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_122_122, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 223 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 223 "goal_path.m"
                }
#line 223 "goal_path.m"
                {
#line 223 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_122_122, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, &hlds__goal_path__STATE_VARIABLE_GoalNum_123_123, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124, hlds__goal_path__Cond0_79, &hlds__goal_path__Cond_82);
                }
#line 225 "goal_path.m"
                {
#line 225 "goal_path.m"
                  hlds__goal_path__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_126_126, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 225 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 225 "goal_path.m"
                }
#line 225 "goal_path.m"
                {
#line 225 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_126_126, hlds__goal_path__STATE_VARIABLE_GoalNum_123_123, &hlds__goal_path__STATE_VARIABLE_GoalNum_127_127, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128, hlds__goal_path__Then0_80, &hlds__goal_path__Then_83);
                }
#line 227 "goal_path.m"
                {
#line 227 "goal_path.m"
                  hlds__goal_path__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_130_130, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 227 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 227 "goal_path.m"
                }
#line 227 "goal_path.m"
                {
#line 227 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_130_130, hlds__goal_path__STATE_VARIABLE_GoalNum_127_127, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__Else0_81, &hlds__goal_path__Else_84);
                }
#line 229 "goal_path.m"
                {
#line 229 "goal_path.m"
                  hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 229 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 229 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__A_78));
#line 229 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Cond_82));
#line 229 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Then_83));
#line 229 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 4) = ((MR_Box) (hlds__goal_path__Else_84));
#line 229 "goal_path.m"
                }
#line 222 "goal_path.m"
              }
#line 159 "goal_path.m"
            else
#line 159 "goal_path.m"
              if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 205 "goal_path.m"
                {
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__Reason_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__InnerInfo_74;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__OuterDetism_75;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__InnerDetism_76;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__MaybeCut_77;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__V_134_134;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__V_137_137;
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal0_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 205 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal_158;
#line 209 "goal_path.m"
                  MR_Word hlds__goal_path__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_157, (MR_Integer) 0)));

#line 209 "goal_path.m"
                  hlds__goal_path__InnerInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_157, (MR_Integer) 1)));
#line 210 "goal_path.m"
                  {
#line 210 "goal_path.m"
                    hlds__goal_path__OuterDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_18);
                  }
#line 211 "goal_path.m"
                  {
#line 211 "goal_path.m"
                    hlds__goal_path__InnerDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_74);
                  }
#line 212 "goal_path.m"
                  hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_76 == hlds__goal_path__OuterDetism_75);
#line 214 "goal_path.m"
                  if (hlds__goal_path__succeeded)
#line 213 "goal_path.m"
                    hlds__goal_path__MaybeCut_77 = (MR_Integer) 1;
#line 214 "goal_path.m"
                  else
#line 215 "goal_path.m"
                    hlds__goal_path__MaybeCut_77 = (MR_Integer) 0;
#line 218 "goal_path.m"
                  {
#line 218 "goal_path.m"
                    hlds__goal_path__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 218 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_137_137, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_77));
#line 218 "goal_path.m"
                  }
#line 218 "goal_path.m"
                  {
#line 218 "goal_path.m"
                    hlds__goal_path__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__V_134_134, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 218 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__V_134_134, 1) = ((MR_Box) (hlds__goal_path__V_137_137));
#line 218 "goal_path.m"
                  }
#line 217 "goal_path.m"
                  {
#line 217 "goal_path.m"
                    hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_134_134, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__SubGoal0_157, &hlds__goal_path__SubGoal_158);
                  }
#line 220 "goal_path.m"
                  {
#line 220 "goal_path.m"
                    hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 220 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 220 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Reason_72));
#line 220 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__SubGoal_158));
#line 220 "goal_path.m"
                  }
#line 205 "goal_path.m"
                }
#line 159 "goal_path.m"
              else
#line 159 "goal_path.m"
                if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 231 "goal_path.m"
                  {
#line 231 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 231 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand_95;

#line 242 "goal_path.m"
                    if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_85)) == (MR_mktag((MR_Integer) 1))))
#line 234 "goal_path.m"
                      {
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__GoalType_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 0)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__Outer_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 1)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__Inner_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 2)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__MaybeOutputVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 3)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 4)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 5)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseInners_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 6)));
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal_93;
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals_94;
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__V_115_115;
#line 234 "goal_path.m"
                        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_116_116;
#line 234 "goal_path.m"
                        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117;

#line 236 "goal_path.m"
                        {
#line 236 "goal_path.m"
                          hlds__goal_path__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__V_115_115, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 236 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 236 "goal_path.m"
                        }
#line 235 "goal_path.m"
                        {
#line 235 "goal_path.m"
                          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_115_115, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, &hlds__goal_path__STATE_VARIABLE_GoalNum_116_116, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117, hlds__goal_path__MainGoal0_90, &hlds__goal_path__MainGoal_93);
                        }
#line 238 "goal_path.m"
                        {
#line 238 "goal_path.m"
                          hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_116_116, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__OrElseGoals0_91, &hlds__goal_path__OrElseGoals_94);
                        }
#line 240 "goal_path.m"
                        {
#line 240 "goal_path.m"
                          hlds__goal_path__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 0) = ((MR_Box) (hlds__goal_path__GoalType_86));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 1) = ((MR_Box) (hlds__goal_path__Outer_87));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 2) = ((MR_Box) (hlds__goal_path__Inner_88));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_89));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 4) = ((MR_Box) (hlds__goal_path__MainGoal_93));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_94));
#line 240 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_92));
#line 240 "goal_path.m"
                        }
#line 234 "goal_path.m"
                      }
#line 242 "goal_path.m"
                    else
#line 242 "goal_path.m"
                      if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_85)) == (MR_mktag((MR_Integer) 0))))
#line 248 "goal_path.m"
                        {
#line 250 "goal_path.m"
                          {
#line 250 "goal_path.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_id_slots\'/8", (MR_String) "bi_implication");
#line 250 "goal_path.m"
                            return;
                          }
#line 248 "goal_path.m"
                        }
#line 242 "goal_path.m"
                      else
#line 243 "goal_path.m"
                        {
#line 243 "goal_path.m"
                          MR_Word hlds__goal_path__MaybeIO_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 0)));
#line 243 "goal_path.m"
                          MR_Word hlds__goal_path__ResultVar_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 1)));
#line 243 "goal_path.m"
                          MR_Word hlds__goal_path__V_111_111;
#line 243 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal0_159 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 2)));
#line 243 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal_160;

#line 244 "goal_path.m"
                          {
#line 244 "goal_path.m"
                            hlds__goal_path__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__V_111_111, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 244 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 244 "goal_path.m"
                          }
#line 244 "goal_path.m"
                          {
#line 244 "goal_path.m"
                            hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_111_111, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__SubGoal0_159, &hlds__goal_path__SubGoal_160);
                          }
#line 246 "goal_path.m"
                          {
#line 246 "goal_path.m"
                            hlds__goal_path__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 246 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_96));
#line 246 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 1) = ((MR_Box) (hlds__goal_path__ResultVar_97));
#line 246 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 2) = ((MR_Box) (hlds__goal_path__SubGoal_160));
#line 246 "goal_path.m"
                          }
#line 243 "goal_path.m"
                        }
#line 252 "goal_path.m"
                    {
#line 252 "goal_path.m"
                      hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 252 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__ShortHand_95));
#line 252 "goal_path.m"
                    }
#line 231 "goal_path.m"
                  }
#line 159 "goal_path.m"
                else
#line 159 "goal_path.m"
                  if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 187 "goal_path.m"
                    {
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__VarTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 1)));
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__ModuleInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 0)));
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__Type_66;
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__MaybeNumFunctors_68;
#line 187 "goal_path.m"
                      MR_Word hlds__goal_path__Cases_69;
#line 193 "goal_path.m"
                      MR_Integer hlds__goal_path__NumFunctors_67;

#line 190 "goal_path.m"
                      {
#line 190 "goal_path.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_64, hlds__goal_path__Var_61, &hlds__goal_path__Type_66);
                      }
#line 191 "goal_path.m"
                      {
#line 191 "goal_path.m"
                        hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_65, hlds__goal_path__Type_66, &hlds__goal_path__NumFunctors_67);
                      }
#line 193 "goal_path.m"
                      if (hlds__goal_path__succeeded)
#line 192 "goal_path.m"
                        {
#line 192 "goal_path.m"
                          hlds__goal_path__MaybeNumFunctors_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 192 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_68, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_67));
#line 192 "goal_path.m"
                        }
#line 193 "goal_path.m"
                      else
#line 194 "goal_path.m"
                        hlds__goal_path__MaybeNumFunctors_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "goal_path.m"
                      {
#line 196 "goal_path.m"
                        hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_68, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103, hlds__goal_path__Cases0_63, &hlds__goal_path__Cases_69);
                      }
#line 198 "goal_path.m"
                      {
#line 198 "goal_path.m"
                        hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 198 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 198 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Var_61));
#line 198 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__CanFail_62));
#line 198 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Cases_69));
#line 198 "goal_path.m"
                      }
#line 187 "goal_path.m"
                    }
#line 159 "goal_path.m"
                  else
#line 157 "goal_path.m"
                    {
#line 158 "goal_path.m"
                      hlds__goal_path__GoalExpr_37 = hlds__goal_path__GoalExpr0_15;
#line 158 "goal_path.m"
                      *hlds__goal_path__STATE_VARIABLE_GoalNum_101 = hlds__goal_path__STATE_VARIABLE_GoalNum_104_104;
#line 158 "goal_path.m"
                      *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_103 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 157 "goal_path.m"
                    }
#line 254 "goal_path.m"
    {
#line 254 "goal_path.m"
      MR_Word base;
#line 254 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "goal_path.m"
      *hlds__goal_path__Goal_14 = base;
#line 254 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_37));
#line 254 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_18));
#line 254 "goal_path.m"
    }
#line 147 "goal_path.m"
  }
#line 142 "goal_path.m"
}

#line 128 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 128 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 128 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_19,
#line 128 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_20,
#line 128 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21,
#line 128 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_ClauseNum_22,
#line 128 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_23,
#line 128 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_24)
#line 128 "goal_path.m"
{
#line 133 "goal_path.m"
  {
#line 133 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_16;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoal_17;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Goal_18;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__V_25_25;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__V_26_26;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_31_31;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_33_33;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_34_34;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_35_35;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_32_32;

#line 134 "goal_path.m"
    {
#line 134 "goal_path.m"
      hlds__goal_path__Goal0_16 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_path__Clause0_11);
    }
#line 135 "goal_path.m"
    {
#line 135 "goal_path.m"
      hlds__goal_path__V_25_25 = mdbcomp__goal_path__whole_body_goal_id_0_f_0();
    }
#line 136 "goal_path.m"
    {
#line 136 "goal_path.m"
      hlds__goal_path__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 136 "goal_path.m"
      MR_hl_field(MR_mktag(2), hlds__goal_path__V_26_26, 0) = ((MR_Box) (hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21));
#line 136 "goal_path.m"
    }
#line 135 "goal_path.m"
    {
#line 135 "goal_path.m"
      hlds__goal_path__ContainingGoal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_17, 0) = ((MR_Box) (hlds__goal_path__V_25_25));
#line 135 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_17, 1) = ((MR_Box) (hlds__goal_path__V_26_26));
#line 135 "goal_path.m"
    }
#line 137 "goal_path.m"
    *hlds__goal_path__STATE_VARIABLE_ClauseNum_22 = (hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21 + (MR_Integer) 1);
#line 138 "goal_path.m"
    {
#line 138 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_10, hlds__goal_path__ContainingGoal_17, hlds__goal_path__STATE_VARIABLE_GoalNum_0_19, hlds__goal_path__STATE_VARIABLE_GoalNum_20, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_23, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_24, hlds__goal_path__Goal0_16, &hlds__goal_path__Goal_18);
    }
#line 140 "goal_path.m"
    hlds__goal_path__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 0)));
#line 140 "goal_path.m"
    hlds__goal_path__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 1)));
#line 140 "goal_path.m"
    hlds__goal_path__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 2)));
#line 140 "goal_path.m"
    hlds__goal_path__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 3)));
#line 140 "goal_path.m"
    hlds__goal_path__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 4)));
#line 140 "goal_path.m"
    {
#line 140 "goal_path.m"
      MR_Word base;
#line 140 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 140 "goal_path.m"
      *hlds__goal_path__Clause_12 = base;
#line 140 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__V_31_31));
#line 140 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__Goal_18));
#line 140 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_path__V_33_33));
#line 140 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__goal_path__V_34_34));
#line 140 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 140 "goal_path.m"
    }
#line 133 "goal_path.m"
  }
#line 128 "goal_path.m"
}

#line 58 "goal_path.m"
void MR_CALL 
hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(
#line 58 "goal_path.m"
  MR_Word hlds__goal_path__ModuleInfo_4,
#line 58 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_Proc_0_10,
#line 58 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_Proc_11)
#line 58 "goal_path.m"
{
#line 318 "goal_path.m"
  {
#line 318 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 318 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_6;
#line 318 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_7;
#line 318 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_8;
#line 318 "goal_path.m"
    MR_Word hlds__goal_path__Goal_9;

#line 319 "goal_path.m"
    {
#line 319 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__Goal0_6);
    }
#line 320 "goal_path.m"
    {
#line 320 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__VarTypes_7);
    }
#line 321 "goal_path.m"
    {
#line 321 "goal_path.m"
      hlds__goal_path__SlotInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_4));
#line 321 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 321 "goal_path.m"
    }
#line 322 "goal_path.m"
    {
#line 322 "goal_path.m"
      hlds__goal_path__fill_goal_path_slots_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_path__SlotInfo_8, hlds__goal_path__Goal0_6, &hlds__goal_path__Goal_9);
    }
#line 323 "goal_path.m"
    {
#line 323 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_9, hlds__goal_path__STATE_VARIABLE_Proc_0_10, hlds__goal_path__STATE_VARIABLE_Proc_11);
#line 323 "goal_path.m"
      return;
    }
#line 318 "goal_path.m"
  }
#line 58 "goal_path.m"
}

#line 107 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 107 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 107 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8)
#line 107 "goal_path.m"
{
#line 107 "goal_path.m"
  {
#line 107 "goal_path.m"
    MR_Box hlds__goal_path__closure = hlds__goal_path__closure_arg;
#line 107 "goal_path.m"
    MR_Word hlds__goal_path__conv3_Clause_12;
#line 107 "goal_path.m"
    MR_Integer hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20;
#line 107 "goal_path.m"
    MR_Integer hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22;
#line 107 "goal_path.m"
    MR_Word hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_24;

#line 107 "goal_path.m"
    {
#line 107 "goal_path.m"
      hlds__goal_path__fill_slots_in_clause_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_path__wrapper_arg_1), &hlds__goal_path__conv3_Clause_12, ((MR_Integer) hlds__goal_path__wrapper_arg_3), &hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20, ((MR_Integer) hlds__goal_path__wrapper_arg_5), &hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22, ((MR_Word) hlds__goal_path__wrapper_arg_7), &hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_24);
    }
#line 107 "goal_path.m"
    *hlds__goal_path__wrapper_arg_2 = ((MR_Box) (hlds__goal_path__conv3_Clause_12));
#line 107 "goal_path.m"
    *hlds__goal_path__wrapper_arg_4 = ((MR_Box) (hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20));
#line 107 "goal_path.m"
    *hlds__goal_path__wrapper_arg_6 = ((MR_Box) (hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22));
#line 107 "goal_path.m"
    *hlds__goal_path__wrapper_arg_8 = ((MR_Box) (hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_24));
#line 107 "goal_path.m"
  }
#line 107 "goal_path.m"
}

#line 47 "goal_path.m"
void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(
#line 47 "goal_path.m"
  MR_Word hlds__goal_path__ModuleInfo_5,
#line 47 "goal_path.m"
  MR_Word * hlds__goal_path__ContainingGoalMap_6,
#line 47 "goal_path.m"
  MR_Word hlds__goal_path__ClausesInfo0_7,
#line 47 "goal_path.m"
  MR_Word * hlds__goal_path__ClausesInfo_8)
#line 47 "goal_path.m"
{
#line 102 "goal_path.m"
  {
#line 102 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__TypeCtorInfo_31_31;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__TypeCtorInfo_32_32;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep0_9;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__ItemNumbers_10;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__Clauses0_11;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_12;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_13;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__Clauses_14;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoalList_17;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep_18;
#line 102 "goal_path.m"
    MR_Word hlds__goal_path__V_19_19;
#line 107 "goal_path.m"
    MR_Integer hlds__goal_path__V_15_15;
#line 107 "goal_path.m"
    MR_Integer hlds__goal_path__V_16_16;
#line 107 "goal_path.m"
    MR_Box hlds__goal_path__conv6_V_15_15;
#line 107 "goal_path.m"
    MR_Box hlds__goal_path__conv5_V_16_16;
#line 107 "goal_path.m"
    MR_Box hlds__goal_path__conv4_ContainingGoalList_17;

#line 103 "goal_path.m"
    {
#line 103 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__ClausesRep0_9, &hlds__goal_path__ItemNumbers_10);
    }
#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(hlds__goal_path__ClausesRep0_9, &hlds__goal_path__Clauses0_11);
    }
#line 105 "goal_path.m"
    {
#line 105 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__VarTypes_12);
    }
#line 106 "goal_path.m"
    {
#line 106 "goal_path.m"
      hlds__goal_path__SlotInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 106 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_5));
#line 106 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 1) = ((MR_Box) (hlds__goal_path__VarTypes_12));
#line 106 "goal_path.m"
    }
#line 107 "goal_path.m"
    {
#line 107 "goal_path.m"
      hlds__goal_path__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 0) = ((MR_Box) (&hlds__goal_path_scalar_common_3[0]));
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 1) = ((MR_Box) (hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1));
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 3) = ((MR_Box) (hlds__goal_path__SlotInfo_13));
#line 107 "goal_path.m"
    }
#line 3507 "hlds.goal_path.c"
    hlds__goal_path__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 3509 "hlds.goal_path.c"
    hlds__goal_path__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 107 "goal_path.m"
    {
#line 107 "goal_path.m"
      mercury__list__map_foldl3_9_p_1(hlds__goal_path__TypeCtorInfo_31_31, hlds__goal_path__TypeCtorInfo_31_31, hlds__goal_path__TypeCtorInfo_32_32, hlds__goal_path__TypeCtorInfo_32_32, (MR_Word) &hlds__goal_path_scalar_common_2[0], hlds__goal_path__V_19_19, hlds__goal_path__Clauses0_11, &hlds__goal_path__Clauses_14, ((MR_Box) ((MR_Integer) 1)), &hlds__goal_path__conv6_V_15_15, ((MR_Box) ((MR_Integer) 1)), &hlds__goal_path__conv5_V_16_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__goal_path__conv4_ContainingGoalList_17);
    }
#line 107 "goal_path.m"
    hlds__goal_path__V_15_15 = ((MR_Integer) hlds__goal_path__conv6_V_15_15);
#line 107 "goal_path.m"
    hlds__goal_path__V_16_16 = ((MR_Integer) hlds__goal_path__conv5_V_16_16);
#line 107 "goal_path.m"
    hlds__goal_path__ContainingGoalList_17 = ((MR_Word) hlds__goal_path__conv4_ContainingGoalList_17);
#line 109 "goal_path.m"
    {
#line 109 "goal_path.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, hlds__goal_path__ContainingGoalList_17, hlds__goal_path__ContainingGoalMap_6);
    }
#line 110 "goal_path.m"
    {
#line 110 "goal_path.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(hlds__goal_path__Clauses_14, &hlds__goal_path__ClausesRep_18);
    }
#line 111 "goal_path.m"
    {
#line 111 "goal_path.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__goal_path__ClausesRep_18, hlds__goal_path__ItemNumbers_10, hlds__goal_path__ClausesInfo0_7, hlds__goal_path__ClausesInfo_8);
#line 111 "goal_path.m"
      return;
    }
#line 102 "goal_path.m"
  }
#line 47 "goal_path.m"
}

#line 41 "goal_path.m"
void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(
#line 41 "goal_path.m"
  MR_Word hlds__goal_path__ModuleInfo_6,
#line 41 "goal_path.m"
  MR_Word hlds__goal_path__VarTypes_7,
#line 41 "goal_path.m"
  MR_Word * hlds__goal_path__ContainingGoalMap_8,
#line 41 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_9,
#line 41 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_10)
#line 41 "goal_path.m"
{
#line 95 "goal_path.m"
  {
#line 95 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 95 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_11;
#line 95 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoalList_13;
#line 97 "goal_path.m"
    MR_Integer hlds__goal_path__V_12_12;

#line 96 "goal_path.m"
    {
#line 96 "goal_path.m"
      hlds__goal_path__SlotInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 96 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_6));
#line 96 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 96 "goal_path.m"
    }
#line 97 "goal_path.m"
    {
#line 97 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, &hlds__goal_path__V_12_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_path__ContainingGoalList_13, hlds__goal_path__Goal0_9, hlds__goal_path__Goal_10);
    }
#line 99 "goal_path.m"
    {
#line 99 "goal_path.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, hlds__goal_path__ContainingGoalList_13, hlds__goal_path__ContainingGoalMap_8);
#line 99 "goal_path.m"
      return;
    }
#line 95 "goal_path.m"
  }
#line 41 "goal_path.m"
}

#line 38 "goal_path.m"
void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(
#line 38 "goal_path.m"
  MR_Word hlds__goal_path__ModuleInfo_5,
#line 38 "goal_path.m"
  MR_Word * hlds__goal_path__ContainingGoalMap_6,
#line 38 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11,
#line 38 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ProcInfo_12)
#line 38 "goal_path.m"
{
#line 87 "goal_path.m"
  {
#line 87 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 87 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_8;
#line 87 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_9;
#line 87 "goal_path.m"
    MR_Word hlds__goal_path__Goal_10;

#line 88 "goal_path.m"
    {
#line 88 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__VarTypes_8);
    }
#line 89 "goal_path.m"
    {
#line 89 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__Goal0_9);
    }
#line 90 "goal_path.m"
    {
#line 90 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(hlds__goal_path__ModuleInfo_5, hlds__goal_path__VarTypes_8, hlds__goal_path__ContainingGoalMap_6, hlds__goal_path__Goal0_9, &hlds__goal_path__Goal_10);
    }
#line 92 "goal_path.m"
    {
#line 92 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_10, hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, hlds__goal_path__STATE_VARIABLE_ProcInfo_12);
#line 92 "goal_path.m"
      return;
    }
#line 87 "goal_path.m"
  }
#line 38 "goal_path.m"
}

void mercury__hlds__goal_path__init(void)
{
}

void mercury__hlds__goal_path__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__goal_path__hlds__goal_path__type_ctor_info_containing_goal_list_0);
	MR_register_type_ctor_info(&hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0);
}

void mercury__hlds__goal_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.goal_path. */
