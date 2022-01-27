/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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




#line 133 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_path__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 136 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 142 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2];

#line 145 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2];

#line 148 "hlds.goal_path.c"
static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0;

#line 151 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1];

#line 154 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1];

#line 157 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1];

#line 160 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1];

#line 163 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 166 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 168 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2);

#line 171 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 174 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 176 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 178 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3);

#line 79 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 79 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3);

#line 79 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2);

#line 449 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 449 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 449 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 434 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 434 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 434 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6);

#line 423 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 423 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 423 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 412 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 412 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 412 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 309 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_5,
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 309 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8);

#line 293 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 293 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 275 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 275 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 275 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_5,
#line 275 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_6,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_7,
#line 275 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_8,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 275 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10);

#line 261 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 261 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 261 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 261 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 261 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 261 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 247 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 247 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 247 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 247 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 247 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 247 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 133 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 133 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_100,
#line 133 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_101,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_102,
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14);

#line 110 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 110 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 110 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_19,
#line 110 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_20,
#line 110 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21,
#line 110 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_ClauseNum_22,
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_23,
#line 110 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_24);

#line 104 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8);


static /* final */ const MR_Box hlds__goal_path_scalar_common_1[1][3];

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[1][12];




static /* final */ const MR_Box hlds__goal_path_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[1][12] = {
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
    ((MR_Box) (&hlds__goal_path__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&hlds__goal_path__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0))
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



#line 475 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__goal_path__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 484 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 492 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 501 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 507 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2] = {
  (MR_String) "slot_info_module_info",
  (MR_String) "slot_info_vartypes"
};

#line 513 "hlds.goal_path.c"
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

#line 528 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 533 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0
  }
};

#line 542 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 547 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 552 "hlds.goal_path.c"
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

#line 573 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 576 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 578 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2)
#line 580 "hlds.goal_path.c"
{
#line 582 "hlds.goal_path.c"
  {
#line 584 "hlds.goal_path.c"
    MR_bool hlds__goal_path__succeeded;

#line 587 "hlds.goal_path.c"
    {
#line 589 "hlds.goal_path.c"
      hlds__goal_path__succeeded = hlds__goal_path____Unify____slot_info_0_0(((MR_Word) hlds__goal_path__wrapper_arg_1), ((MR_Word) hlds__goal_path__wrapper_arg_2));
    }
#line 592 "hlds.goal_path.c"
    return hlds__goal_path__succeeded;
#line 594 "hlds.goal_path.c"
  }
#line 596 "hlds.goal_path.c"
}

#line 599 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 602 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 604 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 606 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3)
#line 608 "hlds.goal_path.c"
{
#line 610 "hlds.goal_path.c"
  {
#line 612 "hlds.goal_path.c"
    MR_Word hlds__goal_path__conv0_HeadVar__1_1;

#line 615 "hlds.goal_path.c"
    {
#line 617 "hlds.goal_path.c"
      hlds__goal_path____Compare____slot_info_0_0(&hlds__goal_path__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_path__wrapper_arg_2), ((MR_Word) hlds__goal_path__wrapper_arg_3));
    }
#line 620 "hlds.goal_path.c"
    *hlds__goal_path__wrapper_arg_1 = ((MR_Box) (hlds__goal_path__conv0_HeadVar__1_1));
#line 622 "hlds.goal_path.c"
  }
#line 624 "hlds.goal_path.c"
}

#line 79 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 79 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3)
#line 79 "goal_path.m"
{
#line 79 "goal_path.m"
  {
#line 79 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 79 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_9 = (MR_Integer) hlds__goal_path__HeadVar__2_2;
#line 79 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_10 = (MR_Integer) hlds__goal_path__HeadVar__3_3;

#line 79 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_9 == hlds__goal_path__CastY_10);
#line 79 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 651 "hlds.goal_path.c"
      *hlds__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "goal_path.m"
    else
#line 79 "goal_path.m"
      {
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_8_8;

#line 79 "goal_path.m"
        {
#line 79 "goal_path.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__goal_path__V_8_8, hlds__goal_path__V_4_4, hlds__goal_path__V_6_6);
        }
#line 673 "hlds.goal_path.c"
        hlds__goal_path__succeeded = (hlds__goal_path__V_8_8 == (MR_Integer) 0);
#line 79 "goal_path.m"
        hlds__goal_path__succeeded = !(hlds__goal_path__succeeded);
#line 79 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 79 "goal_path.m"
          *hlds__goal_path__HeadVar__1_1 = hlds__goal_path__V_8_8;
#line 79 "goal_path.m"
        else
#line 79 "goal_path.m"
          {
#line 79 "goal_path.m"
            {
#line 79 "goal_path.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, hlds__goal_path__HeadVar__1_1, ((MR_Box) (hlds__goal_path__V_5_5)), ((MR_Box) (hlds__goal_path__V_7_7)));
#line 79 "goal_path.m"
              return;
            }
#line 79 "goal_path.m"
          }
#line 79 "goal_path.m"
      }
#line 79 "goal_path.m"
  }
#line 79 "goal_path.m"
}

#line 79 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 79 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2)
#line 79 "goal_path.m"
{
#line 79 "goal_path.m"
  {
#line 79 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 79 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_7 = (MR_Integer) hlds__goal_path__HeadVar__1_1;
#line 79 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_8 = (MR_Integer) hlds__goal_path__HeadVar__2_2;

#line 79 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_7 == hlds__goal_path__CastY_8);
#line 79 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 79 "goal_path.m"
      hlds__goal_path__succeeded = MR_TRUE;
#line 79 "goal_path.m"
    else
#line 79 "goal_path.m"
      {
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__TypeCtorInfo_10_10;
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 740 "hlds.goal_path.c"
        {
#line 742 "hlds.goal_path.c"
          hlds__goal_path__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__goal_path__V_3_3, hlds__goal_path__V_5_5);
        }
#line 79 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 79 "goal_path.m"
          {
#line 749 "hlds.goal_path.c"
            hlds__goal_path__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 751 "hlds.goal_path.c"
            {
#line 753 "hlds.goal_path.c"
              return hlds__goal_path__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_path__TypeCtorInfo_10_10, ((MR_Box) (hlds__goal_path__V_4_4)), ((MR_Box) (hlds__goal_path__V_6_6)));
            }
#line 79 "goal_path.m"
          }
#line 79 "goal_path.m"
      }
#line 79 "goal_path.m"
    return hlds__goal_path__succeeded;
#line 79 "goal_path.m"
  }
#line 79 "goal_path.m"
}

#line 449 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 449 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 449 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 449 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 449 "goal_path.m"
{
#line 452 "goal_path.m"
  {
#line 452 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 452 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 452 "goal_path.m"
    else
#line 454 "goal_path.m"
      {
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 454 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 454 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 456 "goal_path.m"
        {
#line 456 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 1) = ((MR_Box) (hlds__goal_path__N1_16));
#line 456 "goal_path.m"
        }
#line 456 "goal_path.m"
        {
#line 456 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 456 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 456 "goal_path.m"
        }
#line 456 "goal_path.m"
        {
#line 456 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 458 "goal_path.m"
        {
#line 458 "goal_path.m"
          hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 454 "goal_path.m"
        {
#line 454 "goal_path.m"
          MR_Word base;
#line 454 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 454 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 454 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 454 "goal_path.m"
        }
#line 454 "goal_path.m"
      }
#line 452 "goal_path.m"
  }
#line 449 "goal_path.m"
}

#line 434 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 434 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 434 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 434 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6)
#line 434 "goal_path.m"
{
#line 438 "goal_path.m"
  {
#line 438 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 438 "goal_path.m"
    if ((hlds__goal_path__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "goal_path.m"
      *hlds__goal_path__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 438 "goal_path.m"
    else
#line 440 "goal_path.m"
      {
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 0)));
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 1)));
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Case_17;
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Cases_18;
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 0)));
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 1)));
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 2)));
#line 440 "goal_path.m"
        MR_Integer hlds__goal_path__N1_22 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__Goal_23;
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__V_25_25;
#line 440 "goal_path.m"
        MR_Word hlds__goal_path__V_26_26;

#line 443 "goal_path.m"
        {
#line 443 "goal_path.m"
          hlds__goal_path__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 443 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 443 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 1) = ((MR_Box) (hlds__goal_path__N1_22));
#line 443 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_3));
#line 443 "goal_path.m"
        }
#line 443 "goal_path.m"
        {
#line 443 "goal_path.m"
          hlds__goal_path__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_25_25, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 443 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_25_25, 1) = ((MR_Box) (hlds__goal_path__V_26_26));
#line 443 "goal_path.m"
        }
#line 443 "goal_path.m"
        {
#line 443 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_25_25, hlds__goal_path__SlotInfo_4, hlds__goal_path__Goal0_21, &hlds__goal_path__Goal_23);
        }
#line 445 "goal_path.m"
        {
#line 445 "goal_path.m"
          hlds__goal_path__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 445 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 0) = ((MR_Box) (hlds__goal_path__MainConsId_19));
#line 445 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_20));
#line 445 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 2) = ((MR_Box) (hlds__goal_path__Goal_23));
#line 445 "goal_path.m"
        }
#line 446 "goal_path.m"
        {
#line 446 "goal_path.m"
          hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_22, hlds__goal_path__MaybeNumFunctors_3, hlds__goal_path__SlotInfo_4, hlds__goal_path__Cases0_16, &hlds__goal_path__Cases_18);
        }
#line 440 "goal_path.m"
        {
#line 440 "goal_path.m"
          MR_Word base;
#line 440 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "goal_path.m"
          *hlds__goal_path__HeadVar__6_6 = base;
#line 440 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_17));
#line 440 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_18));
#line 440 "goal_path.m"
        }
#line 440 "goal_path.m"
      }
#line 438 "goal_path.m"
  }
#line 434 "goal_path.m"
}

#line 423 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 423 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 423 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 423 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 423 "goal_path.m"
{
#line 426 "goal_path.m"
  {
#line 426 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 426 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "goal_path.m"
    else
#line 428 "goal_path.m"
      {
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 428 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 428 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 430 "goal_path.m"
        {
#line 430 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__N1_16));
#line 430 "goal_path.m"
        }
#line 430 "goal_path.m"
        {
#line 430 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 430 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 430 "goal_path.m"
        }
#line 430 "goal_path.m"
        {
#line 430 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 432 "goal_path.m"
        {
#line 432 "goal_path.m"
          hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 428 "goal_path.m"
        {
#line 428 "goal_path.m"
          MR_Word base;
#line 428 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 428 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 428 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 428 "goal_path.m"
        }
#line 428 "goal_path.m"
      }
#line 426 "goal_path.m"
  }
#line 423 "goal_path.m"
}

#line 412 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_1,
#line 412 "goal_path.m"
  MR_Integer hlds__goal_path__N0_2,
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 412 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 412 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 412 "goal_path.m"
{
#line 415 "goal_path.m"
  {
#line 415 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 415 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "goal_path.m"
    else
#line 417 "goal_path.m"
      {
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 417 "goal_path.m"
        MR_Integer hlds__goal_path__N1_16 = (hlds__goal_path__N0_2 + (MR_Integer) 1);
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__V_18_18;
#line 417 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 419 "goal_path.m"
        {
#line 419 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__N1_16));
#line 419 "goal_path.m"
        }
#line 419 "goal_path.m"
        {
#line 419 "goal_path.m"
          hlds__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 0) = ((MR_Box) (hlds__goal_path__RevPath0_1));
#line 419 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 419 "goal_path.m"
        }
#line 419 "goal_path.m"
        {
#line 419 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__V_18_18, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 421 "goal_path.m"
        {
#line 421 "goal_path.m"
          hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__RevPath0_1, hlds__goal_path__N1_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 417 "goal_path.m"
        {
#line 417 "goal_path.m"
          MR_Word base;
#line 417 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 417 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 417 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 417 "goal_path.m"
        }
#line 417 "goal_path.m"
      }
#line 415 "goal_path.m"
  }
#line 412 "goal_path.m"
}

#line 309 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__RevPath0_5,
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 309 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 309 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8)
#line 309 "goal_path.m"
{
#line 312 "goal_path.m"
  {
#line 312 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 312 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 0)));
#line 312 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 1)));
#line 312 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_11;
#line 312 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_15;

#line 314 "goal_path.m"
    {
#line 314 "goal_path.m"
      hlds__hlds_goal__goal_info_set_reverse_goal_path_3_p_0(hlds__goal_path__RevPath0_5, hlds__goal_path__GoalInfo0_10, &hlds__goal_path__GoalInfo_11);
    }
#line 319 "goal_path.m"
    if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 0))))
#line 337 "goal_path.m"
      {
#line 337 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal0_25 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_9), (MR_Integer) 0);
#line 337 "goal_path.m"
        MR_Word hlds__goal_path__RevPath_26;
#line 337 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal_27;

#line 338 "goal_path.m"
        {
#line 338 "goal_path.m"
          hlds__goal_path__RevPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_26, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 338 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 338 "goal_path.m"
        }
#line 339 "goal_path.m"
        {
#line 339 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_26, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_25, &hlds__goal_path__SubGoal_27);
        }
#line 340 "goal_path.m"
        hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_27);
#line 337 "goal_path.m"
      }
#line 319 "goal_path.m"
    else
#line 319 "goal_path.m"
      if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 1))))
#line 367 "goal_path.m"
        {
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__LHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)));
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 367 "goal_path.m"
          MR_Word hlds__goal_path__RHS_59;

#line 374 "goal_path.m"
          if (((MR_tag((MR_Word) hlds__goal_path__RHS0_45)) == (MR_mktag((MR_Integer) 2))))
#line 370 "goal_path.m"
            {
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__Purity_49 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__Groundness_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__PredOrFunc_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__NonLocals_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 2)));
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__QuantVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 3)));
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__LambdaModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 4)));
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__Detism_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 5)));
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 6)));
#line 370 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal_58;

#line 371 "goal_path.m"
              {
#line 371 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath0_5, hlds__goal_path__SlotInfo_6, hlds__goal_path__LambdaGoal0_57, &hlds__goal_path__LambdaGoal_58);
              }
#line 372 "goal_path.m"
              {
#line 372 "goal_path.m"
                hlds__goal_path__RHS_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 0) = ((MR_Box) ((hlds__goal_path__Purity_49 | ((((hlds__goal_path__Groundness_50 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_51 << (MR_Integer) 3)))))));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 1) = (MR_Integer) 0;
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 2) = ((MR_Box) (hlds__goal_path__NonLocals_53));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 3) = ((MR_Box) (hlds__goal_path__QuantVars_54));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_55));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 5) = ((MR_Box) (hlds__goal_path__Detism_56));
#line 372 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_58));
#line 372 "goal_path.m"
              }
#line 370 "goal_path.m"
            }
#line 374 "goal_path.m"
          else
#line 378 "goal_path.m"
            hlds__goal_path__RHS_59 = hlds__goal_path__RHS0_45;
#line 380 "goal_path.m"
          {
#line 380 "goal_path.m"
            hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 380 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (hlds__goal_path__LHS_44));
#line 380 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__RHS_59));
#line 380 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Mode_46));
#line 380 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Kind_47));
#line 380 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Context_48));
#line 380 "goal_path.m"
          }
#line 367 "goal_path.m"
        }
#line 319 "goal_path.m"
      else
#line 319 "goal_path.m"
        if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 316 "goal_path.m"
          {
#line 316 "goal_path.m"
            MR_Word hlds__goal_path__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 316 "goal_path.m"
            MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 316 "goal_path.m"
            MR_Word hlds__goal_path__Goals_14;

#line 317 "goal_path.m"
            {
#line 317 "goal_path.m"
              hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_14);
            }
#line 318 "goal_path.m"
            {
#line 318 "goal_path.m"
              hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 318 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 318 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ConjType_12));
#line 318 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Goals_14));
#line 318 "goal_path.m"
            }
#line 316 "goal_path.m"
          }
#line 319 "goal_path.m"
        else
#line 319 "goal_path.m"
          if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 320 "goal_path.m"
            {
#line 320 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 320 "goal_path.m"
              MR_Word hlds__goal_path__Goals_113;

#line 321 "goal_path.m"
              {
#line 321 "goal_path.m"
                hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_112, &hlds__goal_path__Goals_113);
              }
#line 322 "goal_path.m"
              {
#line 322 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 322 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Goals_113));
#line 322 "goal_path.m"
              }
#line 320 "goal_path.m"
            }
#line 319 "goal_path.m"
          else
#line 319 "goal_path.m"
            if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 358 "goal_path.m"
              {
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__RevPathCond_38;
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__RevPathThen_39;
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__RevPathElse_40;
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Cond_41;
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Then_42;
#line 358 "goal_path.m"
                MR_Word hlds__goal_path__Else_43;

#line 359 "goal_path.m"
                {
#line 359 "goal_path.m"
                  hlds__goal_path__RevPathCond_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 359 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "goal_path.m"
                }
#line 360 "goal_path.m"
                {
#line 360 "goal_path.m"
                  hlds__goal_path__RevPathThen_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 360 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 360 "goal_path.m"
                }
#line 361 "goal_path.m"
                {
#line 361 "goal_path.m"
                  hlds__goal_path__RevPathElse_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 361 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 361 "goal_path.m"
                }
#line 362 "goal_path.m"
                {
#line 362 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathCond_38, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cond0_35, &hlds__goal_path__Cond_41);
                }
#line 363 "goal_path.m"
                {
#line 363 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathThen_39, hlds__goal_path__SlotInfo_6, hlds__goal_path__Then0_36, &hlds__goal_path__Then_42);
                }
#line 364 "goal_path.m"
                {
#line 364 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathElse_40, hlds__goal_path__SlotInfo_6, hlds__goal_path__Else0_37, &hlds__goal_path__Else_43);
                }
#line 365 "goal_path.m"
                {
#line 365 "goal_path.m"
                  hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 365 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 365 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Vars_34));
#line 365 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Cond_41));
#line 365 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Then_42));
#line 365 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Else_43));
#line 365 "goal_path.m"
                }
#line 358 "goal_path.m"
              }
#line 319 "goal_path.m"
            else
#line 319 "goal_path.m"
              if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 342 "goal_path.m"
                {
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__InnerInfo_30;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__OuterDetism_31;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__InnerDetism_32;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__MaybeCut_33;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__V_107_107;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__RevPath_115;
#line 342 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal_116;
#line 346 "goal_path.m"
                  MR_Word hlds__goal_path__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 0)));

#line 346 "goal_path.m"
                  hlds__goal_path__InnerInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 1)));
#line 347 "goal_path.m"
                  {
#line 347 "goal_path.m"
                    hlds__goal_path__OuterDetism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_11);
                  }
#line 348 "goal_path.m"
                  {
#line 348 "goal_path.m"
                    hlds__goal_path__InnerDetism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_30);
                  }
#line 349 "goal_path.m"
                  hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_32 == hlds__goal_path__OuterDetism_31);
#line 351 "goal_path.m"
                  if (hlds__goal_path__succeeded)
#line 350 "goal_path.m"
                    hlds__goal_path__MaybeCut_33 = (MR_Integer) 1;
#line 351 "goal_path.m"
                  else
#line 352 "goal_path.m"
                    hlds__goal_path__MaybeCut_33 = (MR_Integer) 0;
#line 354 "goal_path.m"
                  {
#line 354 "goal_path.m"
                    hlds__goal_path__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 354 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_33));
#line 354 "goal_path.m"
                  }
#line 354 "goal_path.m"
                  {
#line 354 "goal_path.m"
                    hlds__goal_path__RevPath_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_115, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 354 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_115, 1) = ((MR_Box) (hlds__goal_path__V_107_107));
#line 354 "goal_path.m"
                  }
#line 355 "goal_path.m"
                  {
#line 355 "goal_path.m"
                    hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_115, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_114, &hlds__goal_path__SubGoal_116);
                  }
#line 356 "goal_path.m"
                  {
#line 356 "goal_path.m"
                    hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 356 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 356 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Reason_28));
#line 356 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__SubGoal_116));
#line 356 "goal_path.m"
                  }
#line 342 "goal_path.m"
                }
#line 319 "goal_path.m"
              else
#line 319 "goal_path.m"
                if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 388 "goal_path.m"
                  {
#line 388 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 388 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand_93;

#line 398 "goal_path.m"
                    if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_82)) == (MR_mktag((MR_Integer) 1))))
#line 391 "goal_path.m"
                      {
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__GoalType_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__Outer_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__Inner_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__MaybeOutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 3)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 4)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 5)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseInners_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 6)));
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__RevPathMain_90;
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal_91;
#line 391 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals_92;

#line 392 "goal_path.m"
                        {
#line 392 "goal_path.m"
                          hlds__goal_path__RevPathMain_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 392 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 392 "goal_path.m"
                        }
#line 393 "goal_path.m"
                        {
#line 393 "goal_path.m"
                          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathMain_90, hlds__goal_path__SlotInfo_6, hlds__goal_path__MainGoal0_87, &hlds__goal_path__MainGoal_91);
                        }
#line 394 "goal_path.m"
                        {
#line 394 "goal_path.m"
                          hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__OrElseGoals0_88, &hlds__goal_path__OrElseGoals_92);
                        }
#line 396 "goal_path.m"
                        {
#line 396 "goal_path.m"
                          hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__GoalType_83));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__Outer_84));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__Inner_85));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_86));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 4) = ((MR_Box) (hlds__goal_path__MainGoal_91));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_92));
#line 396 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_89));
#line 396 "goal_path.m"
                        }
#line 391 "goal_path.m"
                      }
#line 398 "goal_path.m"
                    else
#line 398 "goal_path.m"
                      if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_82)) == (MR_mktag((MR_Integer) 0))))
#line 404 "goal_path.m"
                        {
#line 406 "goal_path.m"
                          {
#line 406 "goal_path.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_path_slots\'/4", (MR_String) "bi_implication");
#line 406 "goal_path.m"
                            return;
                          }
#line 404 "goal_path.m"
                        }
#line 398 "goal_path.m"
                      else
#line 399 "goal_path.m"
                        {
#line 399 "goal_path.m"
                          MR_Word hlds__goal_path__MaybeIO_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 399 "goal_path.m"
                          MR_Word hlds__goal_path__ResultVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 399 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal0_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 399 "goal_path.m"
                          MR_Word hlds__goal_path__RevPath_118;
#line 399 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal_119;

#line 400 "goal_path.m"
                          {
#line 400 "goal_path.m"
                            hlds__goal_path__RevPath_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_118, 0) = ((MR_Box) (hlds__goal_path__RevPath0_5));
#line 400 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__RevPath_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 400 "goal_path.m"
                          }
#line 401 "goal_path.m"
                          {
#line 401 "goal_path.m"
                            hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPath_118, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_117, &hlds__goal_path__SubGoal_119);
                          }
#line 402 "goal_path.m"
                          {
#line 402 "goal_path.m"
                            hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 402 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_94));
#line 402 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__ResultVar_95));
#line 402 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__SubGoal_119));
#line 402 "goal_path.m"
                          }
#line 399 "goal_path.m"
                        }
#line 408 "goal_path.m"
                    {
#line 408 "goal_path.m"
                      hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 408 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ShortHand_93));
#line 408 "goal_path.m"
                    }
#line 388 "goal_path.m"
                  }
#line 319 "goal_path.m"
                else
#line 319 "goal_path.m"
                  if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 324 "goal_path.m"
                    {
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 1)));
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 0)));
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__Type_21;
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__MaybeNumFunctors_23;
#line 324 "goal_path.m"
                      MR_Word hlds__goal_path__Cases_24;
#line 330 "goal_path.m"
                      MR_Integer hlds__goal_path__NumFunctors_22;

#line 327 "goal_path.m"
                      {
#line 327 "goal_path.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_19, hlds__goal_path__Var_16, &hlds__goal_path__Type_21);
                      }
#line 328 "goal_path.m"
                      {
#line 328 "goal_path.m"
                        hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_20, hlds__goal_path__Type_21, &hlds__goal_path__NumFunctors_22);
                      }
#line 330 "goal_path.m"
                      if (hlds__goal_path__succeeded)
#line 329 "goal_path.m"
                        {
#line 329 "goal_path.m"
                          hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 329 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_23, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_22));
#line 329 "goal_path.m"
                        }
#line 330 "goal_path.m"
                      else
#line 331 "goal_path.m"
                        hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 333 "goal_path.m"
                      {
#line 333 "goal_path.m"
                        hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__RevPath0_5, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_23, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cases0_18, &hlds__goal_path__Cases_24);
                      }
#line 335 "goal_path.m"
                      {
#line 335 "goal_path.m"
                        hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 335 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 335 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Var_16));
#line 335 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__CanFail_17));
#line 335 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Cases_24));
#line 335 "goal_path.m"
                      }
#line 324 "goal_path.m"
                    }
#line 319 "goal_path.m"
                  else
#line 386 "goal_path.m"
                    hlds__goal_path__GoalExpr_15 = hlds__goal_path__GoalExpr0_9;
#line 410 "goal_path.m"
    {
#line 410 "goal_path.m"
      MR_Word base;
#line 410 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "goal_path.m"
      *hlds__goal_path__Goal_8 = base;
#line 410 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_15));
#line 410 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_11));
#line 410 "goal_path.m"
    }
#line 312 "goal_path.m"
  }
#line 309 "goal_path.m"
}

#line 293 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 293 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 293 "goal_path.m"
{
#line 297 "goal_path.m"
  {
#line 297 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 297 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "goal_path.m"
      {
#line 297 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6;
#line 297 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 297 "goal_path.m"
      }
#line 297 "goal_path.m"
    else
#line 299 "goal_path.m"
      {
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 299 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 299 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 299 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37;

#line 301 "goal_path.m"
        {
#line 301 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 301 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 1) = ((MR_Box) (hlds__goal_path__N1_28));
#line 301 "goal_path.m"
        }
#line 301 "goal_path.m"
        {
#line 301 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 301 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 301 "goal_path.m"
        }
#line 302 "goal_path.m"
        {
#line 302 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 304 "goal_path.m"
        {
#line 304 "goal_path.m"
          hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 299 "goal_path.m"
        {
#line 299 "goal_path.m"
          MR_Word base;
#line 299 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 299 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 299 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 299 "goal_path.m"
        }
#line 299 "goal_path.m"
      }
#line 297 "goal_path.m"
  }
#line 293 "goal_path.m"
}

#line 275 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 275 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 275 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_5,
#line 275 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_6,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_7,
#line 275 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_8,
#line 275 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 275 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10)
#line 275 "goal_path.m"
{
#line 280 "goal_path.m"
  {
#line 280 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 280 "goal_path.m"
    if ((hlds__goal_path__HeadVar__9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "goal_path.m"
      {
#line 280 "goal_path.m"
        *hlds__goal_path__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_8 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_7;
#line 280 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_6 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_5;
#line 280 "goal_path.m"
      }
#line 280 "goal_path.m"
    else
#line 282 "goal_path.m"
      {
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 0)));
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 1)));
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Case_29;
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Cases_30;
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 0)));
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 1)));
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 2)));
#line 282 "goal_path.m"
        MR_Integer hlds__goal_path__N1_34 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_35;
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__Goal_36;
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__V_42_42;
#line 282 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_43_43;
#line 282 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_44_44;

#line 286 "goal_path.m"
        {
#line 286 "goal_path.m"
          hlds__goal_path__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 286 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 286 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 1) = ((MR_Box) (hlds__goal_path__N1_34));
#line 286 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_4));
#line 286 "goal_path.m"
        }
#line 285 "goal_path.m"
        {
#line 285 "goal_path.m"
          hlds__goal_path__ContainingGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 285 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 1) = ((MR_Box) (hlds__goal_path__V_42_42));
#line 285 "goal_path.m"
        }
#line 287 "goal_path.m"
        {
#line 287 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_35, hlds__goal_path__STATE_VARIABLE_GoalNum_0_5, &hlds__goal_path__STATE_VARIABLE_GoalNum_43_43, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_7, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_44_44, hlds__goal_path__Goal0_33, &hlds__goal_path__Goal_36);
        }
#line 289 "goal_path.m"
        {
#line 289 "goal_path.m"
          hlds__goal_path__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 0) = ((MR_Box) (hlds__goal_path__MainConsId_31));
#line 289 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_32));
#line 289 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 2) = ((MR_Box) (hlds__goal_path__Goal_36));
#line 289 "goal_path.m"
        }
#line 290 "goal_path.m"
        {
#line 290 "goal_path.m"
          hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_34, hlds__goal_path__MaybeNumFunctors_4, hlds__goal_path__STATE_VARIABLE_GoalNum_43_43, hlds__goal_path__STATE_VARIABLE_GoalNum_6, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_44_44, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_8, hlds__goal_path__Cases0_28, &hlds__goal_path__Cases_30);
        }
#line 282 "goal_path.m"
        {
#line 282 "goal_path.m"
          MR_Word base;
#line 282 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "goal_path.m"
          *hlds__goal_path__HeadVar__10_10 = base;
#line 282 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_29));
#line 282 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_30));
#line 282 "goal_path.m"
        }
#line 282 "goal_path.m"
      }
#line 280 "goal_path.m"
  }
#line 275 "goal_path.m"
}

#line 261 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 261 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 261 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 261 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 261 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 261 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 261 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 261 "goal_path.m"
{
#line 265 "goal_path.m"
  {
#line 265 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 265 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 265 "goal_path.m"
      {
#line 265 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6;
#line 265 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 265 "goal_path.m"
      }
#line 265 "goal_path.m"
    else
#line 267 "goal_path.m"
      {
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 267 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 267 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 267 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37;

#line 269 "goal_path.m"
        {
#line 269 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 269 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__N1_28));
#line 269 "goal_path.m"
        }
#line 269 "goal_path.m"
        {
#line 269 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 269 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 269 "goal_path.m"
        }
#line 270 "goal_path.m"
        {
#line 270 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 272 "goal_path.m"
        {
#line 272 "goal_path.m"
          hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 267 "goal_path.m"
        {
#line 267 "goal_path.m"
          MR_Word base;
#line 267 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 267 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 267 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 267 "goal_path.m"
        }
#line 267 "goal_path.m"
      }
#line 265 "goal_path.m"
  }
#line 261 "goal_path.m"
}

#line 247 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 247 "goal_path.m"
  MR_Integer hlds__goal_path__N0_3,
#line 247 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_4,
#line 247 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_5,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6,
#line 247 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7,
#line 247 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 247 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 247 "goal_path.m"
{
#line 251 "goal_path.m"
  {
#line 251 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 251 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 251 "goal_path.m"
      {
#line 251 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 251 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6;
#line 251 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNum_5 = hlds__goal_path__STATE_VARIABLE_GoalNum_0_4;
#line 251 "goal_path.m"
      }
#line 251 "goal_path.m"
    else
#line 253 "goal_path.m"
      {
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 253 "goal_path.m"
        MR_Integer hlds__goal_path__N1_28 = (hlds__goal_path__N0_3 + (MR_Integer) 1);
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 253 "goal_path.m"
        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_36_36;
#line 253 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37;

#line 255 "goal_path.m"
        {
#line 255 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 255 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__N1_28));
#line 255 "goal_path.m"
        }
#line 255 "goal_path.m"
        {
#line 255 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 255 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 255 "goal_path.m"
        }
#line 256 "goal_path.m"
        {
#line 256 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNum_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 258 "goal_path.m"
        {
#line 258 "goal_path.m"
          hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__N1_28, hlds__goal_path__STATE_VARIABLE_GoalNum_36_36, hlds__goal_path__STATE_VARIABLE_GoalNum_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 253 "goal_path.m"
        {
#line 253 "goal_path.m"
          MR_Word base;
#line 253 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 253 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 253 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 253 "goal_path.m"
        }
#line 253 "goal_path.m"
      }
#line 251 "goal_path.m"
  }
#line 247 "goal_path.m"
}

#line 133 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 133 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_100,
#line 133 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_101,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_102,
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14)
#line 133 "goal_path.m"
{
#line 138 "goal_path.m"
  {
#line 138 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 0)));
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 1)));
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__GoalId_17 = (MR_Word) hlds__goal_path__STATE_VARIABLE_GoalNum_0_100;
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_18;
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_37;
#line 138 "goal_path.m"
    MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_104_104 = (hlds__goal_path__STATE_VARIABLE_GoalNum_0_100 + (MR_Integer) 1);
#line 138 "goal_path.m"
    MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106;

#line 142 "goal_path.m"
    {
#line 142 "goal_path.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__goal_path__GoalId_17, hlds__goal_path__GoalInfo0_16, &hlds__goal_path__GoalInfo_18);
    }
#line 143 "goal_path.m"
    {
#line 143 "goal_path.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, ((MR_Box) (hlds__goal_path__GoalId_17)), ((MR_Box) (hlds__goal_path__ContainingGoal_10)), hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_102, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106);
    }
#line 150 "goal_path.m"
    if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 191 "goal_path.m"
      {
#line 191 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal0_70 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_15), (MR_Integer) 0);
#line 191 "goal_path.m"
        MR_Word hlds__goal_path__SubGoal_71;
#line 191 "goal_path.m"
        MR_Word hlds__goal_path__V_137_137;

#line 192 "goal_path.m"
        {
#line 192 "goal_path.m"
          hlds__goal_path__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_137_137, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 192 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 192 "goal_path.m"
        }
#line 192 "goal_path.m"
        {
#line 192 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_137_137, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__SubGoal0_70, &hlds__goal_path__SubGoal_71);
        }
#line 194 "goal_path.m"
        hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_71);
#line 191 "goal_path.m"
      }
#line 150 "goal_path.m"
    else
#line 150 "goal_path.m"
      if (((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 151 "goal_path.m"
        {
#line 151 "goal_path.m"
          MR_Word hlds__goal_path__LHS_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)));
#line 151 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 151 "goal_path.m"
          MR_Word hlds__goal_path__Mode_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 151 "goal_path.m"
          MR_Word hlds__goal_path__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 151 "goal_path.m"
          MR_Word hlds__goal_path__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));

#line 161 "goal_path.m"
          if (((MR_tag((MR_Word) hlds__goal_path__RHS0_39)) == (MR_mktag((MR_Integer) 2))))
#line 154 "goal_path.m"
            {
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__Purity_43 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__Groundness_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__PredOrFunc_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__NonLocals_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 2)));
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__QuantVars_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 3)));
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__LambdaModes_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 4)));
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__Detism_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 5)));
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal0_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_39, (MR_Integer) 6)));
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__LambdaGoal_52;
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__RHS_53;
#line 154 "goal_path.m"
              MR_Word hlds__goal_path__V_150_150;

#line 155 "goal_path.m"
              {
#line 155 "goal_path.m"
                hlds__goal_path__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 155 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_150_150, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 155 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 155 "goal_path.m"
              }
#line 155 "goal_path.m"
              {
#line 155 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_150_150, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__LambdaGoal0_51, &hlds__goal_path__LambdaGoal_52);
              }
#line 158 "goal_path.m"
              {
#line 158 "goal_path.m"
                hlds__goal_path__RHS_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 0) = ((MR_Box) ((hlds__goal_path__Purity_43 | ((((hlds__goal_path__Groundness_44 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_45 << (MR_Integer) 3)))))));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 1) = (MR_Integer) 0;
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 2) = ((MR_Box) (hlds__goal_path__NonLocals_47));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 3) = ((MR_Box) (hlds__goal_path__QuantVars_48));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_49));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 5) = ((MR_Box) (hlds__goal_path__Detism_50));
#line 158 "goal_path.m"
                MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_53, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_52));
#line 158 "goal_path.m"
              }
#line 160 "goal_path.m"
              {
#line 160 "goal_path.m"
                hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 160 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (hlds__goal_path__LHS_38));
#line 160 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__RHS_53));
#line 160 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Mode_40));
#line 160 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Kind_41));
#line 160 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_37, 4) = ((MR_Box) (hlds__goal_path__Context_42));
#line 160 "goal_path.m"
              }
#line 154 "goal_path.m"
            }
#line 161 "goal_path.m"
          else
#line 164 "goal_path.m"
            {
#line 165 "goal_path.m"
              hlds__goal_path__GoalExpr_37 = hlds__goal_path__GoalExpr0_15;
#line 165 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_GoalNum_101 = hlds__goal_path__STATE_VARIABLE_GoalNum_104_104;
#line 165 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106;
#line 164 "goal_path.m"
            }
#line 151 "goal_path.m"
        }
#line 150 "goal_path.m"
      else
#line 150 "goal_path.m"
        if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 168 "goal_path.m"
          {
#line 168 "goal_path.m"
            MR_Word hlds__goal_path__ConjType_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 168 "goal_path.m"
            MR_Word hlds__goal_path__Goals0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 168 "goal_path.m"
            MR_Word hlds__goal_path__Goals_60;

#line 169 "goal_path.m"
            {
#line 169 "goal_path.m"
              hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__Goals0_59, &hlds__goal_path__Goals_60);
            }
#line 171 "goal_path.m"
            {
#line 171 "goal_path.m"
              hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 171 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 171 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__ConjType_58));
#line 171 "goal_path.m"
              MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Goals_60));
#line 171 "goal_path.m"
            }
#line 168 "goal_path.m"
          }
#line 150 "goal_path.m"
        else
#line 150 "goal_path.m"
          if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 173 "goal_path.m"
            {
#line 173 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 173 "goal_path.m"
              MR_Word hlds__goal_path__Goals_155;

#line 174 "goal_path.m"
              {
#line 174 "goal_path.m"
                hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__Goals0_154, &hlds__goal_path__Goals_155);
              }
#line 176 "goal_path.m"
              {
#line 176 "goal_path.m"
                hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 176 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Goals_155));
#line 176 "goal_path.m"
              }
#line 173 "goal_path.m"
            }
#line 150 "goal_path.m"
          else
#line 150 "goal_path.m"
            if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 213 "goal_path.m"
              {
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__A_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Cond0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Then0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Else0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Cond_82;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Then_83;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__Else_84;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__V_121_121;
#line 213 "goal_path.m"
                MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_122_122;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_123_123;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__V_125_125;
#line 213 "goal_path.m"
                MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_126_126;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_127_127;
#line 213 "goal_path.m"
                MR_Word hlds__goal_path__V_129_129;

#line 214 "goal_path.m"
                {
#line 214 "goal_path.m"
                  hlds__goal_path__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 214 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_121_121, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 214 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 214 "goal_path.m"
                }
#line 214 "goal_path.m"
                {
#line 214 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_121_121, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, &hlds__goal_path__STATE_VARIABLE_GoalNum_122_122, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_123_123, hlds__goal_path__Cond0_79, &hlds__goal_path__Cond_82);
                }
#line 216 "goal_path.m"
                {
#line 216 "goal_path.m"
                  hlds__goal_path__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_125_125, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 216 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 216 "goal_path.m"
                }
#line 216 "goal_path.m"
                {
#line 216 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_125_125, hlds__goal_path__STATE_VARIABLE_GoalNum_122_122, &hlds__goal_path__STATE_VARIABLE_GoalNum_126_126, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_123_123, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_127_127, hlds__goal_path__Then0_80, &hlds__goal_path__Then_83);
                }
#line 218 "goal_path.m"
                {
#line 218 "goal_path.m"
                  hlds__goal_path__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_129_129, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 218 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 218 "goal_path.m"
                }
#line 218 "goal_path.m"
                {
#line 218 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_129_129, hlds__goal_path__STATE_VARIABLE_GoalNum_126_126, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_127_127, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__Else0_81, &hlds__goal_path__Else_84);
                }
#line 220 "goal_path.m"
                {
#line 220 "goal_path.m"
                  hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 220 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 220 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__A_78));
#line 220 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__Cond_82));
#line 220 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Then_83));
#line 220 "goal_path.m"
                  MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 4) = ((MR_Box) (hlds__goal_path__Else_84));
#line 220 "goal_path.m"
                }
#line 213 "goal_path.m"
              }
#line 150 "goal_path.m"
            else
#line 150 "goal_path.m"
              if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 196 "goal_path.m"
                {
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__Reason_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__InnerInfo_74;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__OuterDetism_75;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__InnerDetism_76;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__MaybeCut_77;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__V_133_133;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__V_136_136;
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 196 "goal_path.m"
                  MR_Word hlds__goal_path__SubGoal_157;
#line 200 "goal_path.m"
                  MR_Word hlds__goal_path__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_156, (MR_Integer) 0)));

#line 200 "goal_path.m"
                  hlds__goal_path__InnerInfo_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_156, (MR_Integer) 1)));
#line 201 "goal_path.m"
                  {
#line 201 "goal_path.m"
                    hlds__goal_path__OuterDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_18);
                  }
#line 202 "goal_path.m"
                  {
#line 202 "goal_path.m"
                    hlds__goal_path__InnerDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_74);
                  }
#line 203 "goal_path.m"
                  hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_76 == hlds__goal_path__OuterDetism_75);
#line 205 "goal_path.m"
                  if (hlds__goal_path__succeeded)
#line 204 "goal_path.m"
                    hlds__goal_path__MaybeCut_77 = (MR_Integer) 1;
#line 205 "goal_path.m"
                  else
#line 206 "goal_path.m"
                    hlds__goal_path__MaybeCut_77 = (MR_Integer) 0;
#line 209 "goal_path.m"
                  {
#line 209 "goal_path.m"
                    hlds__goal_path__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__V_136_136, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_77));
#line 209 "goal_path.m"
                  }
#line 208 "goal_path.m"
                  {
#line 208 "goal_path.m"
                    hlds__goal_path__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__V_133_133, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 208 "goal_path.m"
                    MR_hl_field(MR_mktag(1), hlds__goal_path__V_133_133, 1) = ((MR_Box) (hlds__goal_path__V_136_136));
#line 208 "goal_path.m"
                  }
#line 208 "goal_path.m"
                  {
#line 208 "goal_path.m"
                    hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_133_133, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__SubGoal0_156, &hlds__goal_path__SubGoal_157);
                  }
#line 211 "goal_path.m"
                  {
#line 211 "goal_path.m"
                    hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 211 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 211 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Reason_72));
#line 211 "goal_path.m"
                    MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__SubGoal_157));
#line 211 "goal_path.m"
                  }
#line 196 "goal_path.m"
                }
#line 150 "goal_path.m"
              else
#line 150 "goal_path.m"
                if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 222 "goal_path.m"
                  {
#line 222 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 222 "goal_path.m"
                    MR_Word hlds__goal_path__ShortHand_95;

#line 233 "goal_path.m"
                    if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_85)) == (MR_mktag((MR_Integer) 1))))
#line 225 "goal_path.m"
                      {
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__GoalType_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 0)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__Outer_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 1)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__Inner_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 2)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__MaybeOutputVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 3)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 4)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 5)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseInners_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_85, (MR_Integer) 6)));
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__MainGoal_93;
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__OrElseGoals_94;
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__V_114_114;
#line 225 "goal_path.m"
                        MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_115_115;
#line 225 "goal_path.m"
                        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_116_116;

#line 226 "goal_path.m"
                        {
#line 226 "goal_path.m"
                          hlds__goal_path__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__V_114_114, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 226 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 226 "goal_path.m"
                        }
#line 226 "goal_path.m"
                        {
#line 226 "goal_path.m"
                          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_114_114, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, &hlds__goal_path__STATE_VARIABLE_GoalNum_115_115, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_116_116, hlds__goal_path__MainGoal0_90, &hlds__goal_path__MainGoal_93);
                        }
#line 229 "goal_path.m"
                        {
#line 229 "goal_path.m"
                          hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNum_115_115, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_116_116, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__OrElseGoals0_91, &hlds__goal_path__OrElseGoals_94);
                        }
#line 231 "goal_path.m"
                        {
#line 231 "goal_path.m"
                          hlds__goal_path__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 0) = ((MR_Box) (hlds__goal_path__GoalType_86));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 1) = ((MR_Box) (hlds__goal_path__Outer_87));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 2) = ((MR_Box) (hlds__goal_path__Inner_88));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_89));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 4) = ((MR_Box) (hlds__goal_path__MainGoal_93));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_94));
#line 231 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_95, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_92));
#line 231 "goal_path.m"
                        }
#line 225 "goal_path.m"
                      }
#line 233 "goal_path.m"
                    else
#line 233 "goal_path.m"
                      if (((MR_tag((MR_Word) hlds__goal_path__ShortHand0_85)) == (MR_mktag((MR_Integer) 0))))
#line 239 "goal_path.m"
                        {
#line 241 "goal_path.m"
                          {
#line 241 "goal_path.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_id_slots\'/8", (MR_String) "bi_implication");
#line 241 "goal_path.m"
                            return;
                          }
#line 239 "goal_path.m"
                        }
#line 233 "goal_path.m"
                      else
#line 234 "goal_path.m"
                        {
#line 234 "goal_path.m"
                          MR_Word hlds__goal_path__MaybeIO_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 0)));
#line 234 "goal_path.m"
                          MR_Word hlds__goal_path__ResultVar_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 1)));
#line 234 "goal_path.m"
                          MR_Word hlds__goal_path__V_110_110;
#line 234 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal0_158 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_85, (MR_Integer) 2)));
#line 234 "goal_path.m"
                          MR_Word hlds__goal_path__SubGoal_159;

#line 235 "goal_path.m"
                          {
#line 235 "goal_path.m"
                            hlds__goal_path__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__V_110_110, 0) = ((MR_Box) (hlds__goal_path__GoalId_17));
#line 235 "goal_path.m"
                            MR_hl_field(MR_mktag(1), hlds__goal_path__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 235 "goal_path.m"
                          }
#line 235 "goal_path.m"
                          {
#line 235 "goal_path.m"
                            hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_110_110, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__SubGoal0_158, &hlds__goal_path__SubGoal_159);
                          }
#line 237 "goal_path.m"
                          {
#line 237 "goal_path.m"
                            hlds__goal_path__ShortHand_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 237 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_96));
#line 237 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 1) = ((MR_Box) (hlds__goal_path__ResultVar_97));
#line 237 "goal_path.m"
                            MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_95, 2) = ((MR_Box) (hlds__goal_path__SubGoal_159));
#line 237 "goal_path.m"
                          }
#line 234 "goal_path.m"
                        }
#line 243 "goal_path.m"
                    {
#line 243 "goal_path.m"
                      hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 243 "goal_path.m"
                      MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__ShortHand_95));
#line 243 "goal_path.m"
                    }
#line 222 "goal_path.m"
                  }
#line 150 "goal_path.m"
                else
#line 150 "goal_path.m"
                  if (((((MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 178 "goal_path.m"
                    {
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__VarTypes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 1)));
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__ModuleInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 0)));
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__Type_66;
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__MaybeNumFunctors_68;
#line 178 "goal_path.m"
                      MR_Word hlds__goal_path__Cases_69;
#line 184 "goal_path.m"
                      MR_Integer hlds__goal_path__NumFunctors_67;

#line 181 "goal_path.m"
                      {
#line 181 "goal_path.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_64, hlds__goal_path__Var_61, &hlds__goal_path__Type_66);
                      }
#line 182 "goal_path.m"
                      {
#line 182 "goal_path.m"
                        hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_65, hlds__goal_path__Type_66, &hlds__goal_path__NumFunctors_67);
                      }
#line 184 "goal_path.m"
                      if (hlds__goal_path__succeeded)
#line 183 "goal_path.m"
                        {
#line 183 "goal_path.m"
                          hlds__goal_path__MaybeNumFunctors_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "goal_path.m"
                          MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_68, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_67));
#line 183 "goal_path.m"
                        }
#line 184 "goal_path.m"
                      else
#line 185 "goal_path.m"
                        hlds__goal_path__MaybeNumFunctors_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 187 "goal_path.m"
                      {
#line 187 "goal_path.m"
                        hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_17, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_68, hlds__goal_path__STATE_VARIABLE_GoalNum_104_104, hlds__goal_path__STATE_VARIABLE_GoalNum_101, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103, hlds__goal_path__Cases0_63, &hlds__goal_path__Cases_69);
                      }
#line 189 "goal_path.m"
                      {
#line 189 "goal_path.m"
                        hlds__goal_path__GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 189 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 189 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 1) = ((MR_Box) (hlds__goal_path__Var_61));
#line 189 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 2) = ((MR_Box) (hlds__goal_path__CanFail_62));
#line 189 "goal_path.m"
                        MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_37, 3) = ((MR_Box) (hlds__goal_path__Cases_69));
#line 189 "goal_path.m"
                      }
#line 178 "goal_path.m"
                    }
#line 150 "goal_path.m"
                  else
#line 148 "goal_path.m"
                    {
#line 149 "goal_path.m"
                      hlds__goal_path__GoalExpr_37 = hlds__goal_path__GoalExpr0_15;
#line 149 "goal_path.m"
                      *hlds__goal_path__STATE_VARIABLE_GoalNum_101 = hlds__goal_path__STATE_VARIABLE_GoalNum_104_104;
#line 149 "goal_path.m"
                      *hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_103 = hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_106_106;
#line 148 "goal_path.m"
                    }
#line 245 "goal_path.m"
    {
#line 245 "goal_path.m"
      MR_Word base;
#line 245 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "goal_path.m"
      *hlds__goal_path__Goal_14 = base;
#line 245 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_37));
#line 245 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_18));
#line 245 "goal_path.m"
    }
#line 138 "goal_path.m"
  }
#line 133 "goal_path.m"
}

#line 110 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 110 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 110 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_GoalNum_0_19,
#line 110 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_GoalNum_20,
#line 110 "goal_path.m"
  MR_Integer hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21,
#line 110 "goal_path.m"
  MR_Integer * hlds__goal_path__STATE_VARIABLE_ClauseNum_22,
#line 110 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_23,
#line 110 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_24)
#line 110 "goal_path.m"
{
#line 115 "goal_path.m"
  {
#line 115 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 115 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_16;
#line 115 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoal_17;
#line 115 "goal_path.m"
    MR_Word hlds__goal_path__Goal_18;
#line 115 "goal_path.m"
    MR_Word hlds__goal_path__V_25_25;
#line 115 "goal_path.m"
    MR_Word hlds__goal_path__V_26_26;
#line 122 "goal_path.m"
    MR_Word hlds__goal_path__V_31_31;
#line 122 "goal_path.m"
    MR_Word hlds__goal_path__V_33_33;
#line 122 "goal_path.m"
    MR_Word hlds__goal_path__V_34_34;
#line 122 "goal_path.m"
    MR_Word hlds__goal_path__V_35_35;
#line 122 "goal_path.m"
    MR_Word hlds__goal_path__V_32_32;

#line 116 "goal_path.m"
    {
#line 116 "goal_path.m"
      hlds__goal_path__Goal0_16 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_path__Clause0_11);
    }
#line 117 "goal_path.m"
    {
#line 117 "goal_path.m"
      hlds__goal_path__V_25_25 = mdbcomp__goal_path__whole_body_goal_id_0_f_0();
    }
#line 117 "goal_path.m"
    {
#line 117 "goal_path.m"
      hlds__goal_path__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 117 "goal_path.m"
      MR_hl_field(MR_mktag(2), hlds__goal_path__V_26_26, 0) = ((MR_Box) (hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21));
#line 117 "goal_path.m"
    }
#line 117 "goal_path.m"
    {
#line 117 "goal_path.m"
      hlds__goal_path__ContainingGoal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_17, 0) = ((MR_Box) (hlds__goal_path__V_25_25));
#line 117 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_17, 1) = ((MR_Box) (hlds__goal_path__V_26_26));
#line 117 "goal_path.m"
    }
#line 119 "goal_path.m"
    *hlds__goal_path__STATE_VARIABLE_ClauseNum_22 = (hlds__goal_path__STATE_VARIABLE_ClauseNum_0_21 + (MR_Integer) 1);
#line 120 "goal_path.m"
    {
#line 120 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_10, hlds__goal_path__ContainingGoal_17, hlds__goal_path__STATE_VARIABLE_GoalNum_0_19, hlds__goal_path__STATE_VARIABLE_GoalNum_20, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_0_23, hlds__goal_path__STATE_VARIABLE_ContainingGoalMap_24, hlds__goal_path__Goal0_16, &hlds__goal_path__Goal_18);
    }
#line 122 "goal_path.m"
    hlds__goal_path__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 0)));
#line 122 "goal_path.m"
    hlds__goal_path__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 1)));
#line 122 "goal_path.m"
    hlds__goal_path__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 2)));
#line 122 "goal_path.m"
    hlds__goal_path__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 3)));
#line 122 "goal_path.m"
    hlds__goal_path__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 4)));
#line 122 "goal_path.m"
    {
#line 122 "goal_path.m"
      MR_Word base;
#line 122 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 122 "goal_path.m"
      *hlds__goal_path__Clause_12 = base;
#line 122 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__V_31_31));
#line 122 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__Goal_18));
#line 122 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_path__V_33_33));
#line 122 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__goal_path__V_34_34));
#line 122 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 122 "goal_path.m"
    }
#line 115 "goal_path.m"
  }
#line 110 "goal_path.m"
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
#line 124 "goal_path.m"
  {
#line 124 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 124 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_6;
#line 124 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_7;
#line 124 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_8;
#line 124 "goal_path.m"
    MR_Word hlds__goal_path__Goal_9;

#line 125 "goal_path.m"
    {
#line 125 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__Goal0_6);
    }
#line 126 "goal_path.m"
    {
#line 126 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__VarTypes_7);
    }
#line 127 "goal_path.m"
    {
#line 127 "goal_path.m"
      hlds__goal_path__SlotInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_4));
#line 127 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 127 "goal_path.m"
    }
#line 128 "goal_path.m"
    {
#line 128 "goal_path.m"
      hlds__goal_path__fill_goal_path_slots_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_path__SlotInfo_8, hlds__goal_path__Goal0_6, &hlds__goal_path__Goal_9);
    }
#line 129 "goal_path.m"
    {
#line 129 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_9, hlds__goal_path__STATE_VARIABLE_Proc_0_10, hlds__goal_path__STATE_VARIABLE_Proc_11);
#line 129 "goal_path.m"
      return;
    }
#line 124 "goal_path.m"
  }
#line 58 "goal_path.m"
}

#line 104 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 104 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 104 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8)
#line 104 "goal_path.m"
{
#line 104 "goal_path.m"
  {
#line 104 "goal_path.m"
    MR_Box hlds__goal_path__closure = hlds__goal_path__closure_arg;
#line 104 "goal_path.m"
    MR_Word hlds__goal_path__conv3_Clause_12;
#line 104 "goal_path.m"
    MR_Integer hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20;
#line 104 "goal_path.m"
    MR_Integer hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22;
#line 104 "goal_path.m"
    MR_Word hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalMap_24;

#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      hlds__goal_path__fill_slots_in_clause_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_path__wrapper_arg_1), &hlds__goal_path__conv3_Clause_12, ((MR_Integer) hlds__goal_path__wrapper_arg_3), &hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20, ((MR_Integer) hlds__goal_path__wrapper_arg_5), &hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22, ((MR_Word) hlds__goal_path__wrapper_arg_7), &hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalMap_24);
    }
#line 104 "goal_path.m"
    *hlds__goal_path__wrapper_arg_2 = ((MR_Box) (hlds__goal_path__conv3_Clause_12));
#line 104 "goal_path.m"
    *hlds__goal_path__wrapper_arg_4 = ((MR_Box) (hlds__goal_path__conv2_STATE_VARIABLE_GoalNum_20));
#line 104 "goal_path.m"
    *hlds__goal_path__wrapper_arg_6 = ((MR_Box) (hlds__goal_path__conv1_STATE_VARIABLE_ClauseNum_22));
#line 104 "goal_path.m"
    *hlds__goal_path__wrapper_arg_8 = ((MR_Box) (hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalMap_24));
#line 104 "goal_path.m"
  }
#line 104 "goal_path.m"
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
#line 99 "goal_path.m"
  {
#line 99 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__TypeCtorInfo_32_32;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__TypeCtorInfo_33_33;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep0_9;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__ItemNumbers_10;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__Clauses0_11;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_12;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_13;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__Clauses_14;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep_17;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__V_18_18;
#line 99 "goal_path.m"
    MR_Word hlds__goal_path__V_21_21;
#line 104 "goal_path.m"
    MR_Integer hlds__goal_path__V_15_15;
#line 104 "goal_path.m"
    MR_Integer hlds__goal_path__V_16_16;
#line 104 "goal_path.m"
    MR_Box hlds__goal_path__conv6_V_15_15;
#line 104 "goal_path.m"
    MR_Box hlds__goal_path__conv5_V_16_16;
#line 104 "goal_path.m"
    MR_Box hlds__goal_path__conv4_ContainingGoalMap_6;

#line 100 "goal_path.m"
    {
#line 100 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__ClausesRep0_9, &hlds__goal_path__ItemNumbers_10);
    }
#line 101 "goal_path.m"
    {
#line 101 "goal_path.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(hlds__goal_path__ClausesRep0_9, &hlds__goal_path__Clauses0_11);
    }
#line 102 "goal_path.m"
    {
#line 102 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__VarTypes_12);
    }
#line 103 "goal_path.m"
    {
#line 103 "goal_path.m"
      hlds__goal_path__SlotInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 103 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_5));
#line 103 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 1) = ((MR_Box) (hlds__goal_path__VarTypes_12));
#line 103 "goal_path.m"
    }
#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      hlds__goal_path__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 104 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_18_18, 0) = ((MR_Box) (&hlds__goal_path_scalar_common_2[0]));
#line 104 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_18_18, 1) = ((MR_Box) (hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1));
#line 104 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 104 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_18_18, 3) = ((MR_Box) (hlds__goal_path__SlotInfo_13));
#line 104 "goal_path.m"
    }
#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      hlds__goal_path__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
#line 3289 "hlds.goal_path.c"
    hlds__goal_path__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 3291 "hlds.goal_path.c"
    hlds__goal_path__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      mercury__list__map_foldl3_9_p_1(hlds__goal_path__TypeCtorInfo_32_32, hlds__goal_path__TypeCtorInfo_32_32, hlds__goal_path__TypeCtorInfo_33_33, hlds__goal_path__TypeCtorInfo_33_33, (MR_Word) &hlds__goal_path_scalar_common_1[0], hlds__goal_path__V_18_18, hlds__goal_path__Clauses0_11, &hlds__goal_path__Clauses_14, ((MR_Box) ((MR_Integer) 1)), &hlds__goal_path__conv6_V_15_15, ((MR_Box) ((MR_Integer) 1)), &hlds__goal_path__conv5_V_16_16, ((MR_Box) (hlds__goal_path__V_21_21)), &hlds__goal_path__conv4_ContainingGoalMap_6);
    }
#line 104 "goal_path.m"
    hlds__goal_path__V_15_15 = ((MR_Integer) hlds__goal_path__conv6_V_15_15);
#line 104 "goal_path.m"
    hlds__goal_path__V_16_16 = ((MR_Integer) hlds__goal_path__conv5_V_16_16);
#line 104 "goal_path.m"
    *hlds__goal_path__ContainingGoalMap_6 = ((MR_Word) hlds__goal_path__conv4_ContainingGoalMap_6);
#line 106 "goal_path.m"
    {
#line 106 "goal_path.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(hlds__goal_path__Clauses_14, &hlds__goal_path__ClausesRep_17);
    }
#line 107 "goal_path.m"
    {
#line 107 "goal_path.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__goal_path__ClausesRep_17, hlds__goal_path__ItemNumbers_10, hlds__goal_path__ClausesInfo0_7, hlds__goal_path__ClausesInfo_8);
#line 107 "goal_path.m"
      return;
    }
#line 99 "goal_path.m"
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
#line 93 "goal_path.m"
  {
#line 93 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 93 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_11;
#line 93 "goal_path.m"
    MR_Word hlds__goal_path__V_15_15;
#line 95 "goal_path.m"
    MR_Integer hlds__goal_path__V_12_12;

#line 94 "goal_path.m"
    {
#line 94 "goal_path.m"
      hlds__goal_path__SlotInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 94 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_6));
#line 94 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 94 "goal_path.m"
    }
#line 95 "goal_path.m"
    {
#line 95 "goal_path.m"
      hlds__goal_path__V_15_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
#line 95 "goal_path.m"
    {
#line 95 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, &hlds__goal_path__V_12_12, hlds__goal_path__V_15_15, hlds__goal_path__ContainingGoalMap_8, hlds__goal_path__Goal0_9, hlds__goal_path__Goal_10);
    }
#line 93 "goal_path.m"
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
#line 85 "goal_path.m"
  {
#line 85 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 85 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_8;
#line 85 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_9;
#line 85 "goal_path.m"
    MR_Word hlds__goal_path__Goal_10;
#line 85 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_19;
#line 85 "goal_path.m"
    MR_Word hlds__goal_path__V_23_23;
#line 95 "goal_path.m"
    MR_Integer hlds__goal_path__V_20_20;

#line 86 "goal_path.m"
    {
#line 86 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__VarTypes_8);
    }
#line 87 "goal_path.m"
    {
#line 87 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__Goal0_9);
    }
#line 94 "goal_path.m"
    {
#line 94 "goal_path.m"
      hlds__goal_path__SlotInfo_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 94 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_19, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_5));
#line 94 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_19, 1) = ((MR_Box) (hlds__goal_path__VarTypes_8));
#line 94 "goal_path.m"
    }
#line 95 "goal_path.m"
    {
#line 95 "goal_path.m"
      hlds__goal_path__V_23_23 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
    }
#line 95 "goal_path.m"
    {
#line 95 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, &hlds__goal_path__V_20_20, hlds__goal_path__V_23_23, hlds__goal_path__ContainingGoalMap_6, hlds__goal_path__Goal0_9, &hlds__goal_path__Goal_10);
    }
#line 90 "goal_path.m"
    {
#line 90 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_10, hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, hlds__goal_path__STATE_VARIABLE_ProcInfo_12);
#line 90 "goal_path.m"
      return;
    }
#line 85 "goal_path.m"
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

	MR_register_type_ctor_info(&hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0);
}

void mercury__hlds__goal_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.goal_path. */
