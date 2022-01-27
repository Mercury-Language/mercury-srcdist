/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version DEV
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
#include "cord.mih"
#include "counter.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 145 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 148 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 151 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2];

#line 160 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2];

#line 163 "hlds.goal_path.c"
static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0;

#line 166 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1];

#line 169 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1];

#line 172 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1];

#line 175 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1];

#line 178 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
#line 181 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 183 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2);

#line 186 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
#line 189 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 191 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 193 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3);

#line 196 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 199 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 201 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2);

#line 204 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 207 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 209 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 211 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3);

#line 82 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 82 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3);

#line 82 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2);

#line 133 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3);

#line 133 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2);

#line 483 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 483 "goal_path.m"
  MR_Integer hlds__goal_path__LastOrElseNum_2,
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 483 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 467 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 467 "goal_path.m"
  MR_Integer hlds__goal_path__LastArmNum_2,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 467 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6);

#line 455 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 455 "goal_path.m"
  MR_Integer hlds__goal_path__LastDisjunctNum_2,
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 455 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 443 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 443 "goal_path.m"
  MR_Integer hlds__goal_path__LastConjunctNum_2,
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 443 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5);

#line 335 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__RevGoalPath_5,
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 335 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8);

#line 311 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 311 "goal_path.m"
  MR_Integer hlds__goal_path__LastOrElseNum_3,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 293 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__LastArmNum_3,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_5,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_6,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10);

#line 278 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 278 "goal_path.m"
  MR_Integer hlds__goal_path__LastDisjunctNum_3,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 263 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 263 "goal_path.m"
  MR_Integer hlds__goal_path__LastConjunctNum_3,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9);

#line 149 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_101,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_103,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14);

#line 135 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 135 "goal_path.m"
  MR_Integer hlds__goal_path__CurClauseNum_13,
#line 135 "goal_path.m"
  MR_Integer * hlds__goal_path__NextClauseNum_14,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_20,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_21,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_22,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_23);

#line 113 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8);


static /* final */ const MR_Box hlds__goal_path_scalar_common_1[2][3];

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[2][2];

static /* final */ const MR_Box hlds__goal_path_scalar_common_3[1][12];




static /* final */ const MR_Box hlds__goal_path_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__goal_path_scalar_common_2[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_path_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)),
    ((MR_Box) (&hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 539 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 548 "hlds.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 556 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 564 "hlds.goal_path.c"
const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_containing_goal_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__goal_path____Unify____containing_goal_list_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____containing_goal_list_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "containing_goal_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 581 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 589 "hlds.goal_path.c"
static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 598 "hlds.goal_path.c"
static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 604 "hlds.goal_path.c"
static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2] = {
  (MR_String) "slot_info_module_info",
  (MR_String) "slot_info_vartypes"
};

#line 610 "hlds.goal_path.c"
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

#line 625 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 630 "hlds.goal_path.c"
static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0
  }
};

#line 639 "hlds.goal_path.c"
static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

#line 644 "hlds.goal_path.c"
static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

#line 649 "hlds.goal_path.c"
const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_path____Unify____slot_info_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____slot_info_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "slot_info",
  {     hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0 },
  {     hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0
};

#line 666 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
#line 669 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 671 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2)
#line 673 "hlds.goal_path.c"
{
#line 675 "hlds.goal_path.c"
  {
#line 677 "hlds.goal_path.c"
    MR_bool hlds__goal_path__succeeded;

#line 680 "hlds.goal_path.c"
    {
#line 682 "hlds.goal_path.c"
      hlds__goal_path__succeeded = hlds__goal_path____Unify____containing_goal_list_0_0(((MR_Word) hlds__goal_path__wrapper_arg_1), ((MR_Word) hlds__goal_path__wrapper_arg_2));
    }
#line 685 "hlds.goal_path.c"
    return hlds__goal_path__succeeded;
#line 687 "hlds.goal_path.c"
  }
#line 689 "hlds.goal_path.c"
}

#line 692 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
#line 695 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 697 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 699 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3)
#line 701 "hlds.goal_path.c"
{
#line 703 "hlds.goal_path.c"
  {
#line 705 "hlds.goal_path.c"
    MR_Word hlds__goal_path__conv0_HeadVar__1_1;

#line 708 "hlds.goal_path.c"
    {
#line 710 "hlds.goal_path.c"
      hlds__goal_path____Compare____containing_goal_list_0_0(&hlds__goal_path__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_path__wrapper_arg_2), ((MR_Word) hlds__goal_path__wrapper_arg_3));
    }
#line 713 "hlds.goal_path.c"
    *hlds__goal_path__wrapper_arg_1 = ((MR_Box) (hlds__goal_path__conv0_HeadVar__1_1));
#line 715 "hlds.goal_path.c"
  }
#line 717 "hlds.goal_path.c"
}

#line 720 "hlds.goal_path.c"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
#line 723 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 725 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2)
#line 727 "hlds.goal_path.c"
{
#line 729 "hlds.goal_path.c"
  {
#line 731 "hlds.goal_path.c"
    MR_bool hlds__goal_path__succeeded;

#line 734 "hlds.goal_path.c"
    {
#line 736 "hlds.goal_path.c"
      hlds__goal_path__succeeded = hlds__goal_path____Unify____slot_info_0_0(((MR_Word) hlds__goal_path__wrapper_arg_1), ((MR_Word) hlds__goal_path__wrapper_arg_2));
    }
#line 739 "hlds.goal_path.c"
    return hlds__goal_path__succeeded;
#line 741 "hlds.goal_path.c"
  }
#line 743 "hlds.goal_path.c"
}

#line 746 "hlds.goal_path.c"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
#line 749 "hlds.goal_path.c"
  MR_Box * hlds__goal_path__wrapper_arg_1,
#line 751 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_2,
#line 753 "hlds.goal_path.c"
  MR_Box hlds__goal_path__wrapper_arg_3)
#line 755 "hlds.goal_path.c"
{
#line 757 "hlds.goal_path.c"
  {
#line 759 "hlds.goal_path.c"
    MR_Word hlds__goal_path__conv0_HeadVar__1_1;

#line 762 "hlds.goal_path.c"
    {
#line 764 "hlds.goal_path.c"
      hlds__goal_path____Compare____slot_info_0_0(&hlds__goal_path__conv0_HeadVar__1_1, ((MR_Word) hlds__goal_path__wrapper_arg_2), ((MR_Word) hlds__goal_path__wrapper_arg_3));
    }
#line 767 "hlds.goal_path.c"
    *hlds__goal_path__wrapper_arg_1 = ((MR_Box) (hlds__goal_path__conv0_HeadVar__1_1));
#line 769 "hlds.goal_path.c"
  }
#line 771 "hlds.goal_path.c"
}

#line 82 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
#line 82 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3)
#line 82 "goal_path.m"
{
#line 82 "goal_path.m"
  {
#line 82 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 82 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_9 = (MR_Integer) hlds__goal_path__HeadVar__2_2;
#line 82 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_10 = (MR_Integer) hlds__goal_path__HeadVar__3_3;

#line 82 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_9 == hlds__goal_path__CastY_10);
#line 82 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 798 "hlds.goal_path.c"
      *hlds__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "goal_path.m"
    else
#line 82 "goal_path.m"
      {
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_8_8;

#line 82 "goal_path.m"
        {
#line 82 "goal_path.m"
          hlds__hlds_module____Compare____module_info_0_0(&hlds__goal_path__V_8_8, hlds__goal_path__V_4_4, hlds__goal_path__V_6_6);
        }
#line 820 "hlds.goal_path.c"
        hlds__goal_path__succeeded = (hlds__goal_path__V_8_8 == (MR_Integer) 0);
#line 82 "goal_path.m"
        hlds__goal_path__succeeded = !(hlds__goal_path__succeeded);
#line 82 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 82 "goal_path.m"
          *hlds__goal_path__HeadVar__1_1 = hlds__goal_path__V_8_8;
#line 82 "goal_path.m"
        else
#line 82 "goal_path.m"
          {
#line 82 "goal_path.m"
            {
#line 82 "goal_path.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__goal_path_scalar_common_1[1], hlds__goal_path__HeadVar__1_1, ((MR_Box) (hlds__goal_path__V_5_5)), ((MR_Box) (hlds__goal_path__V_7_7)));
#line 82 "goal_path.m"
              return;
            }
#line 82 "goal_path.m"
          }
#line 82 "goal_path.m"
      }
#line 82 "goal_path.m"
  }
#line 82 "goal_path.m"
}

#line 82 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 82 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2)
#line 82 "goal_path.m"
{
#line 82 "goal_path.m"
  {
#line 82 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 82 "goal_path.m"
    MR_Integer hlds__goal_path__CastX_7 = (MR_Integer) hlds__goal_path__HeadVar__1_1;
#line 82 "goal_path.m"
    MR_Integer hlds__goal_path__CastY_8 = (MR_Integer) hlds__goal_path__HeadVar__2_2;

#line 82 "goal_path.m"
    hlds__goal_path__succeeded = (hlds__goal_path__CastX_7 == hlds__goal_path__CastY_8);
#line 82 "goal_path.m"
    if (hlds__goal_path__succeeded)
#line 82 "goal_path.m"
      hlds__goal_path__succeeded = MR_TRUE;
#line 82 "goal_path.m"
    else
#line 82 "goal_path.m"
      {
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__TypeInfo_10_10;
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "goal_path.m"
        MR_Word hlds__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 887 "hlds.goal_path.c"
        {
#line 889 "hlds.goal_path.c"
          hlds__goal_path__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__goal_path__V_3_3, hlds__goal_path__V_5_5);
        }
#line 82 "goal_path.m"
        if (hlds__goal_path__succeeded)
#line 82 "goal_path.m"
          {
#line 896 "hlds.goal_path.c"
            hlds__goal_path__TypeInfo_10_10 = (MR_Word) &hlds__goal_path_scalar_common_1[1];
#line 898 "hlds.goal_path.c"
            {
#line 900 "hlds.goal_path.c"
              return hlds__goal_path__succeeded = mercury__builtin__unify_2_p_0(hlds__goal_path__TypeInfo_10_10, ((MR_Box) (hlds__goal_path__V_4_4)), ((MR_Box) (hlds__goal_path__V_6_6)));
            }
#line 82 "goal_path.m"
          }
#line 82 "goal_path.m"
      }
#line 82 "goal_path.m"
    return hlds__goal_path__succeeded;
#line 82 "goal_path.m"
  }
#line 82 "goal_path.m"
}

#line 133 "goal_path.m"
static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
#line 133 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__1_1,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__3_3)
#line 133 "goal_path.m"
{
#line 133 "goal_path.m"
  {
#line 133 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar1_4 = hlds__goal_path__HeadVar__2_2;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar2_5 = hlds__goal_path__HeadVar__3_3;

#line 133 "goal_path.m"
    {
#line 133 "goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__goal_path_scalar_common_2[0], hlds__goal_path__HeadVar__1_1, ((MR_Box) (hlds__goal_path__Cast_HeadVar1_4)), ((MR_Box) (hlds__goal_path__Cast_HeadVar2_5)));
#line 133 "goal_path.m"
      return;
    }
#line 133 "goal_path.m"
  }
#line 133 "goal_path.m"
}

#line 133 "goal_path.m"
static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__1_1,
#line 133 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__2_2)
#line 133 "goal_path.m"
{
#line 133 "goal_path.m"
  {
#line 133 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar1_3 = hlds__goal_path__HeadVar__1_1;
#line 133 "goal_path.m"
    MR_Word hlds__goal_path__Cast_HeadVar2_4 = hlds__goal_path__HeadVar__2_2;

#line 133 "goal_path.m"
    {
#line 133 "goal_path.m"
      return hlds__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__goal_path_scalar_common_2[0], ((MR_Box) (hlds__goal_path__Cast_HeadVar1_3)), ((MR_Box) (hlds__goal_path__Cast_HeadVar2_4)));
    }
#line 133 "goal_path.m"
    return hlds__goal_path__succeeded;
#line 133 "goal_path.m"
  }
#line 133 "goal_path.m"
}

#line 483 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 483 "goal_path.m"
  MR_Integer hlds__goal_path__LastOrElseNum_2,
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 483 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 483 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 483 "goal_path.m"
{
#line 486 "goal_path.m"
  {
#line 486 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 486 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "goal_path.m"
    else
#line 488 "goal_path.m"
      {
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 488 "goal_path.m"
        MR_Integer hlds__goal_path__CurOrElseNum_16 = (hlds__goal_path__LastOrElseNum_2 + (MR_Integer) 1);
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__RevGoalPath_17;
#line 488 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 491 "goal_path.m"
        {
#line 491 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 491 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_19_19, 1) = ((MR_Box) (hlds__goal_path__CurOrElseNum_16));
#line 491 "goal_path.m"
        }
#line 490 "goal_path.m"
        {
#line 490 "goal_path.m"
          hlds__goal_path__RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 0) = ((MR_Box) (hlds__goal_path__ParentRevGoalPath_1));
#line 490 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 490 "goal_path.m"
        }
#line 492 "goal_path.m"
        {
#line 492 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevGoalPath_17, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 493 "goal_path.m"
        {
#line 493 "goal_path.m"
          hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__ParentRevGoalPath_1, hlds__goal_path__CurOrElseNum_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 488 "goal_path.m"
        {
#line 488 "goal_path.m"
          MR_Word base;
#line 488 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 488 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 488 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 488 "goal_path.m"
        }
#line 488 "goal_path.m"
      }
#line 486 "goal_path.m"
  }
#line 483 "goal_path.m"
}

#line 467 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 467 "goal_path.m"
  MR_Integer hlds__goal_path__LastArmNum_2,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_3,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_4,
#line 467 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__5_5,
#line 467 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__6_6)
#line 467 "goal_path.m"
{
#line 471 "goal_path.m"
  {
#line 471 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 471 "goal_path.m"
    if ((hlds__goal_path__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "goal_path.m"
      *hlds__goal_path__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "goal_path.m"
    else
#line 473 "goal_path.m"
      {
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Case0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 0)));
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__5_5, (MR_Integer) 1)));
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Case_17;
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Cases_18;
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 0)));
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 1)));
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_15, (MR_Integer) 2)));
#line 473 "goal_path.m"
        MR_Integer hlds__goal_path__CurArmNum_22 = (hlds__goal_path__LastArmNum_2 + (MR_Integer) 1);
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__RevGoalPath_23;
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__Goal_24;
#line 473 "goal_path.m"
        MR_Word hlds__goal_path__V_26_26;

#line 477 "goal_path.m"
        {
#line 477 "goal_path.m"
          hlds__goal_path__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 477 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 477 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 1) = ((MR_Box) (hlds__goal_path__CurArmNum_22));
#line 477 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_26_26, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_3));
#line 477 "goal_path.m"
        }
#line 476 "goal_path.m"
        {
#line 476 "goal_path.m"
          hlds__goal_path__RevGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_23, 0) = ((MR_Box) (hlds__goal_path__ParentRevGoalPath_1));
#line 476 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_23, 1) = ((MR_Box) (hlds__goal_path__V_26_26));
#line 476 "goal_path.m"
        }
#line 478 "goal_path.m"
        {
#line 478 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevGoalPath_23, hlds__goal_path__SlotInfo_4, hlds__goal_path__Goal0_21, &hlds__goal_path__Goal_24);
        }
#line 479 "goal_path.m"
        {
#line 479 "goal_path.m"
          hlds__goal_path__Case_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 479 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 0) = ((MR_Box) (hlds__goal_path__MainConsId_19));
#line 479 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_20));
#line 479 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_17, 2) = ((MR_Box) (hlds__goal_path__Goal_24));
#line 479 "goal_path.m"
        }
#line 480 "goal_path.m"
        {
#line 480 "goal_path.m"
          hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__ParentRevGoalPath_1, hlds__goal_path__CurArmNum_22, hlds__goal_path__MaybeNumFunctors_3, hlds__goal_path__SlotInfo_4, hlds__goal_path__Cases0_16, &hlds__goal_path__Cases_18);
        }
#line 473 "goal_path.m"
        {
#line 473 "goal_path.m"
          MR_Word base;
#line 473 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "goal_path.m"
          *hlds__goal_path__HeadVar__6_6 = base;
#line 473 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_17));
#line 473 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_18));
#line 473 "goal_path.m"
        }
#line 473 "goal_path.m"
      }
#line 471 "goal_path.m"
  }
#line 467 "goal_path.m"
}

#line 455 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 455 "goal_path.m"
  MR_Integer hlds__goal_path__LastDisjunctNum_2,
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 455 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 455 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 455 "goal_path.m"
{
#line 458 "goal_path.m"
  {
#line 458 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 458 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 458 "goal_path.m"
    else
#line 460 "goal_path.m"
      {
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 460 "goal_path.m"
        MR_Integer hlds__goal_path__CurDisjunctNum_16 = (hlds__goal_path__LastDisjunctNum_2 + (MR_Integer) 1);
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__RevGoalPath_17;
#line 460 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 462 "goal_path.m"
        {
#line 462 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__CurDisjunctNum_16));
#line 462 "goal_path.m"
        }
#line 462 "goal_path.m"
        {
#line 462 "goal_path.m"
          hlds__goal_path__RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 0) = ((MR_Box) (hlds__goal_path__ParentRevGoalPath_1));
#line 462 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 462 "goal_path.m"
        }
#line 463 "goal_path.m"
        {
#line 463 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevGoalPath_17, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 464 "goal_path.m"
        {
#line 464 "goal_path.m"
          hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__ParentRevGoalPath_1, hlds__goal_path__CurDisjunctNum_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 460 "goal_path.m"
        {
#line 460 "goal_path.m"
          MR_Word base;
#line 460 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 460 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 460 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 460 "goal_path.m"
        }
#line 460 "goal_path.m"
      }
#line 458 "goal_path.m"
  }
#line 455 "goal_path.m"
}

#line 443 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__ParentRevGoalPath_1,
#line 443 "goal_path.m"
  MR_Integer hlds__goal_path__LastConjunctNum_2,
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_3,
#line 443 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__4_4,
#line 443 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__5_5)
#line 443 "goal_path.m"
{
#line 446 "goal_path.m"
  {
#line 446 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 446 "goal_path.m"
    if ((hlds__goal_path__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "goal_path.m"
      *hlds__goal_path__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "goal_path.m"
    else
#line 448 "goal_path.m"
      {
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 0)));
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__4_4, (MR_Integer) 1)));
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__Goal_14;
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__Goals_15;
#line 448 "goal_path.m"
        MR_Integer hlds__goal_path__CurConjunctNum_16 = (hlds__goal_path__LastConjunctNum_2 + (MR_Integer) 1);
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__RevGoalPath_17;
#line 448 "goal_path.m"
        MR_Word hlds__goal_path__V_19_19;

#line 450 "goal_path.m"
        {
#line 450 "goal_path.m"
          hlds__goal_path__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_19_19, 0) = ((MR_Box) (hlds__goal_path__CurConjunctNum_16));
#line 450 "goal_path.m"
        }
#line 450 "goal_path.m"
        {
#line 450 "goal_path.m"
          hlds__goal_path__RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 0) = ((MR_Box) (hlds__goal_path__ParentRevGoalPath_1));
#line 450 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__RevGoalPath_17, 1) = ((MR_Box) (hlds__goal_path__V_19_19));
#line 450 "goal_path.m"
        }
#line 451 "goal_path.m"
        {
#line 451 "goal_path.m"
          hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevGoalPath_17, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goal0_12, &hlds__goal_path__Goal_14);
        }
#line 452 "goal_path.m"
        {
#line 452 "goal_path.m"
          hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__ParentRevGoalPath_1, hlds__goal_path__CurConjunctNum_16, hlds__goal_path__SlotInfo_3, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_15);
        }
#line 448 "goal_path.m"
        {
#line 448 "goal_path.m"
          MR_Word base;
#line 448 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "goal_path.m"
          *hlds__goal_path__HeadVar__5_5 = base;
#line 448 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_14));
#line 448 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_15));
#line 448 "goal_path.m"
        }
#line 448 "goal_path.m"
      }
#line 446 "goal_path.m"
  }
#line 443 "goal_path.m"
}

#line 335 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__RevGoalPath_5,
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_6,
#line 335 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_7,
#line 335 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_8)
#line 335 "goal_path.m"
{
#line 338 "goal_path.m"
  {
#line 338 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 338 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 0)));
#line 338 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_7, (MR_Integer) 1)));
#line 338 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_11;
#line 338 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_15;

#line 340 "goal_path.m"
    {
#line 340 "goal_path.m"
      hlds__hlds_goal__goal_info_set_reverse_goal_path_3_p_0(hlds__goal_path__RevGoalPath_5, hlds__goal_path__GoalInfo0_10, &hlds__goal_path__GoalInfo_11);
    }
#line 345 "goal_path.m"
#line 345 "goal_path.m"
    switch (MR_tag((MR_Word) hlds__goal_path__GoalExpr0_9)) {
#line 345 "goal_path.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 345 "goal_path.m"
      case (MR_Integer) 0:
#line 363 "goal_path.m"
        {
#line 363 "goal_path.m"
          MR_Word hlds__goal_path__SubGoal0_25 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_9), (MR_Integer) 0);
#line 363 "goal_path.m"
          MR_Word hlds__goal_path__SubRevGoalPath_26;
#line 363 "goal_path.m"
          MR_Word hlds__goal_path__SubGoal_27;

#line 364 "goal_path.m"
          {
#line 364 "goal_path.m"
            hlds__goal_path__SubRevGoalPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_26, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 364 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 364 "goal_path.m"
          }
#line 365 "goal_path.m"
          {
#line 365 "goal_path.m"
            hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__SubRevGoalPath_26, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_25, &hlds__goal_path__SubGoal_27);
          }
#line 366 "goal_path.m"
          hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_27);
#line 363 "goal_path.m"
        }
#line 345 "goal_path.m"
        break;
#line 345 "goal_path.m"
      case (MR_Integer) 1:
#line 393 "goal_path.m"
        {
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__LHS_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)));
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 393 "goal_path.m"
          MR_Word hlds__goal_path__RHS_59;

#line 405 "goal_path.m"
#line 405 "goal_path.m"
          switch (MR_tag((MR_Word) hlds__goal_path__RHS0_45)) {
#line 405 "goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 405 "goal_path.m"
            case (MR_Integer) 0:
#line 405 "goal_path.m"
            case (MR_Integer) 1:
#line 409 "goal_path.m"
              hlds__goal_path__RHS_59 = hlds__goal_path__RHS0_45;
#line 405 "goal_path.m"
              break;
#line 405 "goal_path.m"
            case (MR_Integer) 2:
#line 396 "goal_path.m"
              {
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__Purity_49 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__Groundness_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__PredOrFunc_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__NonLocals_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 2)));
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__QuantVars_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 3)));
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__LambdaModes_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 4)));
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__Detism_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 5)));
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__LambdaGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_45, (MR_Integer) 6)));
#line 396 "goal_path.m"
                MR_Word hlds__goal_path__LambdaGoal_58;

#line 401 "goal_path.m"
                {
#line 401 "goal_path.m"
                  hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevGoalPath_5, hlds__goal_path__SlotInfo_6, hlds__goal_path__LambdaGoal0_57, &hlds__goal_path__LambdaGoal_58);
                }
#line 403 "goal_path.m"
                {
#line 403 "goal_path.m"
                  hlds__goal_path__RHS_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 0) = ((MR_Box) ((hlds__goal_path__Purity_49 | ((((hlds__goal_path__Groundness_50 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_51 << (MR_Integer) 3)))))));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 1) = (MR_Integer) 0;
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 2) = ((MR_Box) (hlds__goal_path__NonLocals_53));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 3) = ((MR_Box) (hlds__goal_path__QuantVars_54));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_55));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 5) = ((MR_Box) (hlds__goal_path__Detism_56));
#line 403 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_59, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_58));
#line 403 "goal_path.m"
                }
#line 396 "goal_path.m"
              }
#line 405 "goal_path.m"
              break;
#line 405 "goal_path.m"
          }
#line 411 "goal_path.m"
          {
#line 411 "goal_path.m"
            hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 411 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (hlds__goal_path__LHS_44));
#line 411 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__RHS_59));
#line 411 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Mode_46));
#line 411 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Kind_47));
#line 411 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Context_48));
#line 411 "goal_path.m"
          }
#line 393 "goal_path.m"
        }
#line 345 "goal_path.m"
        break;
#line 345 "goal_path.m"
      case (MR_Integer) 2:
#line 417 "goal_path.m"
        hlds__goal_path__GoalExpr_15 = hlds__goal_path__GoalExpr0_9;
#line 345 "goal_path.m"
        break;
#line 345 "goal_path.m"
      case (MR_Integer) 3:
#line 345 "goal_path.m"
#line 345 "goal_path.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 0)))) {
#line 345 "goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 345 "goal_path.m"
          case (MR_Integer) 0:
#line 345 "goal_path.m"
          case (MR_Integer) 1:
#line 417 "goal_path.m"
            hlds__goal_path__GoalExpr_15 = hlds__goal_path__GoalExpr0_9;
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 2:
#line 342 "goal_path.m"
            {
#line 342 "goal_path.m"
              MR_Word hlds__goal_path__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 342 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 342 "goal_path.m"
              MR_Word hlds__goal_path__Goals_14;

#line 343 "goal_path.m"
              {
#line 343 "goal_path.m"
                hlds__goal_path__fill_conj_path_slots_5_p_0(hlds__goal_path__RevGoalPath_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_13, &hlds__goal_path__Goals_14);
              }
#line 344 "goal_path.m"
              {
#line 344 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 344 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 344 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ConjType_12));
#line 344 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Goals_14));
#line 344 "goal_path.m"
              }
#line 342 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 3:
#line 346 "goal_path.m"
            {
#line 346 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 346 "goal_path.m"
              MR_Word hlds__goal_path__Goals_113;

#line 347 "goal_path.m"
              {
#line 347 "goal_path.m"
                hlds__goal_path__fill_disj_path_slots_5_p_0(hlds__goal_path__RevGoalPath_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__Goals0_112, &hlds__goal_path__Goals_113);
              }
#line 348 "goal_path.m"
              {
#line 348 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 348 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Goals_113));
#line 348 "goal_path.m"
              }
#line 346 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 4:
#line 350 "goal_path.m"
            {
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__Cases0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 1)));
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_6, (MR_Integer) 0)));
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__Type_21;
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__MaybeNumFunctors_23;
#line 350 "goal_path.m"
              MR_Word hlds__goal_path__Cases_24;
#line 356 "goal_path.m"
              MR_Integer hlds__goal_path__NumFunctors_22;

#line 353 "goal_path.m"
              {
#line 353 "goal_path.m"
                hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_19, hlds__goal_path__Var_16, &hlds__goal_path__Type_21);
              }
#line 354 "goal_path.m"
              {
#line 354 "goal_path.m"
                hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_20, hlds__goal_path__Type_21, &hlds__goal_path__NumFunctors_22);
              }
#line 356 "goal_path.m"
              if (hlds__goal_path__succeeded)
#line 355 "goal_path.m"
                {
#line 355 "goal_path.m"
                  hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_23, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_22));
#line 355 "goal_path.m"
                }
#line 356 "goal_path.m"
              else
#line 357 "goal_path.m"
                hlds__goal_path__MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "goal_path.m"
              {
#line 359 "goal_path.m"
                hlds__goal_path__fill_switch_path_slots_6_p_0(hlds__goal_path__RevGoalPath_5, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_23, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cases0_18, &hlds__goal_path__Cases_24);
              }
#line 361 "goal_path.m"
              {
#line 361 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 361 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 361 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Var_16));
#line 361 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__CanFail_17));
#line 361 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Cases_24));
#line 361 "goal_path.m"
              }
#line 350 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 5:
#line 368 "goal_path.m"
            {
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__InnerInfo_30;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__OuterDetism_31;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__InnerDetism_32;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__MaybeCut_33;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__V_107_107;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__SubGoal0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__SubRevGoalPath_115;
#line 368 "goal_path.m"
              MR_Word hlds__goal_path__SubGoal_116;
#line 372 "goal_path.m"
              MR_Word hlds__goal_path__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 0)));

#line 372 "goal_path.m"
              hlds__goal_path__InnerInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_114, (MR_Integer) 1)));
#line 373 "goal_path.m"
              {
#line 373 "goal_path.m"
                hlds__goal_path__OuterDetism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_11);
              }
#line 374 "goal_path.m"
              {
#line 374 "goal_path.m"
                hlds__goal_path__InnerDetism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_30);
              }
#line 375 "goal_path.m"
              hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_32 == hlds__goal_path__OuterDetism_31);
#line 377 "goal_path.m"
              if (hlds__goal_path__succeeded)
#line 376 "goal_path.m"
                hlds__goal_path__MaybeCut_33 = (MR_Integer) 1;
#line 377 "goal_path.m"
              else
#line 378 "goal_path.m"
                hlds__goal_path__MaybeCut_33 = (MR_Integer) 0;
#line 380 "goal_path.m"
              {
#line 380 "goal_path.m"
                hlds__goal_path__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__V_107_107, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_33));
#line 380 "goal_path.m"
              }
#line 380 "goal_path.m"
              {
#line 380 "goal_path.m"
                hlds__goal_path__SubRevGoalPath_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_115, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 380 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_115, 1) = ((MR_Box) (hlds__goal_path__V_107_107));
#line 380 "goal_path.m"
              }
#line 381 "goal_path.m"
              {
#line 381 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__SubRevGoalPath_115, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_114, &hlds__goal_path__SubGoal_116);
              }
#line 382 "goal_path.m"
              {
#line 382 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 382 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 382 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Reason_28));
#line 382 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__SubGoal_116));
#line 382 "goal_path.m"
              }
#line 368 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 6:
#line 384 "goal_path.m"
            {
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Vars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Cond0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 2)));
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Then0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 3)));
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Else0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 4)));
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__RevPathCond_38;
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__RevPathThen_39;
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__RevPathElse_40;
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Cond_41;
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Then_42;
#line 384 "goal_path.m"
              MR_Word hlds__goal_path__Else_43;

#line 385 "goal_path.m"
              {
#line 385 "goal_path.m"
                hlds__goal_path__RevPathCond_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 385 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathCond_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "goal_path.m"
              }
#line 386 "goal_path.m"
              {
#line 386 "goal_path.m"
                hlds__goal_path__RevPathThen_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 386 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathThen_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 386 "goal_path.m"
              }
#line 387 "goal_path.m"
              {
#line 387 "goal_path.m"
                hlds__goal_path__RevPathElse_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 387 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathElse_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 387 "goal_path.m"
              }
#line 388 "goal_path.m"
              {
#line 388 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathCond_38, hlds__goal_path__SlotInfo_6, hlds__goal_path__Cond0_35, &hlds__goal_path__Cond_41);
              }
#line 389 "goal_path.m"
              {
#line 389 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathThen_39, hlds__goal_path__SlotInfo_6, hlds__goal_path__Then0_36, &hlds__goal_path__Then_42);
              }
#line 390 "goal_path.m"
              {
#line 390 "goal_path.m"
                hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathElse_40, hlds__goal_path__SlotInfo_6, hlds__goal_path__Else0_37, &hlds__goal_path__Else_43);
              }
#line 391 "goal_path.m"
              {
#line 391 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 391 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 391 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__Vars_34));
#line 391 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 2) = ((MR_Box) (hlds__goal_path__Cond_41));
#line 391 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 3) = ((MR_Box) (hlds__goal_path__Then_42));
#line 391 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 4) = ((MR_Box) (hlds__goal_path__Else_43));
#line 391 "goal_path.m"
              }
#line 384 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
          case (MR_Integer) 7:
#line 419 "goal_path.m"
            {
#line 419 "goal_path.m"
              MR_Word hlds__goal_path__ShortHand0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_9, (MR_Integer) 1)));
#line 419 "goal_path.m"
              MR_Word hlds__goal_path__ShortHand_93;

#line 429 "goal_path.m"
#line 429 "goal_path.m"
              switch (MR_tag((MR_Word) hlds__goal_path__ShortHand0_82)) {
#line 429 "goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 429 "goal_path.m"
                case (MR_Integer) 0:
#line 435 "goal_path.m"
                  {
#line 437 "goal_path.m"
                    {
#line 437 "goal_path.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_path_slots\'/4", (MR_String) "bi_implication");
#line 437 "goal_path.m"
                      return;
                    }
#line 435 "goal_path.m"
                  }
#line 429 "goal_path.m"
                  break;
#line 429 "goal_path.m"
                case (MR_Integer) 1:
#line 422 "goal_path.m"
                  {
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__GoalType_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__Outer_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__Inner_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__MaybeOutputVars_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 3)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__MainGoal0_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 4)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseGoals0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 5)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseInners_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_82, (MR_Integer) 6)));
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__RevPathMain_90;
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__MainGoal_91;
#line 422 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseGoals_92;

#line 423 "goal_path.m"
                    {
#line 423 "goal_path.m"
                      hlds__goal_path__RevPathMain_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 423 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__RevPathMain_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 423 "goal_path.m"
                    }
#line 424 "goal_path.m"
                    {
#line 424 "goal_path.m"
                      hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__RevPathMain_90, hlds__goal_path__SlotInfo_6, hlds__goal_path__MainGoal0_87, &hlds__goal_path__MainGoal_91);
                    }
#line 425 "goal_path.m"
                    {
#line 425 "goal_path.m"
                      hlds__goal_path__fill_orelse_path_slots_5_p_0(hlds__goal_path__RevGoalPath_5, (MR_Integer) 0, hlds__goal_path__SlotInfo_6, hlds__goal_path__OrElseGoals0_88, &hlds__goal_path__OrElseGoals_92);
                    }
#line 427 "goal_path.m"
                    {
#line 427 "goal_path.m"
                      hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__GoalType_83));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__Outer_84));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__Inner_85));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_86));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 4) = ((MR_Box) (hlds__goal_path__MainGoal_91));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_92));
#line 427 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_93, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_89));
#line 427 "goal_path.m"
                    }
#line 422 "goal_path.m"
                  }
#line 429 "goal_path.m"
                  break;
#line 429 "goal_path.m"
                case (MR_Integer) 2:
#line 430 "goal_path.m"
                  {
#line 430 "goal_path.m"
                    MR_Word hlds__goal_path__MaybeIO_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 0)));
#line 430 "goal_path.m"
                    MR_Word hlds__goal_path__ResultVar_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 1)));
#line 430 "goal_path.m"
                    MR_Word hlds__goal_path__SubGoal0_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_82, (MR_Integer) 2)));
#line 430 "goal_path.m"
                    MR_Word hlds__goal_path__SubRevGoalPath_118;
#line 430 "goal_path.m"
                    MR_Word hlds__goal_path__SubGoal_119;

#line 431 "goal_path.m"
                    {
#line 431 "goal_path.m"
                      hlds__goal_path__SubRevGoalPath_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_118, 0) = ((MR_Box) (hlds__goal_path__RevGoalPath_5));
#line 431 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__SubRevGoalPath_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 431 "goal_path.m"
                    }
#line 432 "goal_path.m"
                    {
#line 432 "goal_path.m"
                      hlds__goal_path__fill_goal_path_slots_4_p_0(hlds__goal_path__SubRevGoalPath_118, hlds__goal_path__SlotInfo_6, hlds__goal_path__SubGoal0_117, &hlds__goal_path__SubGoal_119);
                    }
#line 433 "goal_path.m"
                    {
#line 433 "goal_path.m"
                      hlds__goal_path__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 433 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_94));
#line 433 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 1) = ((MR_Box) (hlds__goal_path__ResultVar_95));
#line 433 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_93, 2) = ((MR_Box) (hlds__goal_path__SubGoal_119));
#line 433 "goal_path.m"
                    }
#line 430 "goal_path.m"
                  }
#line 429 "goal_path.m"
                  break;
#line 429 "goal_path.m"
              }
#line 439 "goal_path.m"
              {
#line 439 "goal_path.m"
                hlds__goal_path__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 439 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_15, 1) = ((MR_Box) (hlds__goal_path__ShortHand_93));
#line 439 "goal_path.m"
              }
#line 419 "goal_path.m"
            }
#line 345 "goal_path.m"
            break;
#line 345 "goal_path.m"
        }
#line 345 "goal_path.m"
        break;
#line 345 "goal_path.m"
    }
#line 441 "goal_path.m"
    {
#line 441 "goal_path.m"
      MR_Word base;
#line 441 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "goal_path.m"
      *hlds__goal_path__Goal_8 = base;
#line 441 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_15));
#line 441 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_11));
#line 441 "goal_path.m"
    }
#line 338 "goal_path.m"
  }
#line 335 "goal_path.m"
}

#line 311 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 311 "goal_path.m"
  MR_Integer hlds__goal_path__LastOrElseNum_3,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 311 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 311 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 311 "goal_path.m"
{
#line 316 "goal_path.m"
  {
#line 316 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 316 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "goal_path.m"
      {
#line 316 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 316 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4;
#line 316 "goal_path.m"
      }
#line 316 "goal_path.m"
    else
#line 318 "goal_path.m"
      {
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 318 "goal_path.m"
        MR_Integer hlds__goal_path__CurOrElseNum_28 = (hlds__goal_path__LastOrElseNum_3 + (MR_Integer) 1);
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36;
#line 318 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 320 "goal_path.m"
        {
#line 320 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 320 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_35_35, 1) = ((MR_Box) (hlds__goal_path__CurOrElseNum_28));
#line 320 "goal_path.m"
        }
#line 320 "goal_path.m"
        {
#line 320 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 320 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 320 "goal_path.m"
        }
#line 321 "goal_path.m"
        {
#line 321 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 323 "goal_path.m"
        {
#line 323 "goal_path.m"
          hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__CurOrElseNum_28, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 318 "goal_path.m"
        {
#line 318 "goal_path.m"
          MR_Word base;
#line 318 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 318 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 318 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 318 "goal_path.m"
        }
#line 318 "goal_path.m"
      }
#line 316 "goal_path.m"
  }
#line 311 "goal_path.m"
}

#line 293 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 293 "goal_path.m"
  MR_Integer hlds__goal_path__LastArmNum_3,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__MaybeNumFunctors_4,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_5,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_6,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8,
#line 293 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__9_9,
#line 293 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__10_10)
#line 293 "goal_path.m"
{
#line 298 "goal_path.m"
  {
#line 298 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 298 "goal_path.m"
    if ((hlds__goal_path__HeadVar__9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "goal_path.m"
      {
#line 298 "goal_path.m"
        *hlds__goal_path__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 298 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7;
#line 298 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_6 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_5;
#line 298 "goal_path.m"
      }
#line 298 "goal_path.m"
    else
#line 300 "goal_path.m"
      {
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Case0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 0)));
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Cases0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__9_9, (MR_Integer) 1)));
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Case_29;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Cases_30;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 0)));
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 1)));
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Case0_27, (MR_Integer) 2)));
#line 300 "goal_path.m"
        MR_Integer hlds__goal_path__CurArmNum_34 = (hlds__goal_path__LastArmNum_3 + (MR_Integer) 1);
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_35;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__Goal_36;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__V_42_42;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_43_43;
#line 300 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44;

#line 304 "goal_path.m"
        {
#line 304 "goal_path.m"
          hlds__goal_path__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 304 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 304 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 1) = ((MR_Box) (hlds__goal_path__CurArmNum_34));
#line 304 "goal_path.m"
          MR_hl_field(MR_mktag(3), hlds__goal_path__V_42_42, 2) = ((MR_Box) (hlds__goal_path__MaybeNumFunctors_4));
#line 304 "goal_path.m"
        }
#line 304 "goal_path.m"
        {
#line 304 "goal_path.m"
          hlds__goal_path__ContainingGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 304 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_35, 1) = ((MR_Box) (hlds__goal_path__V_42_42));
#line 304 "goal_path.m"
        }
#line 305 "goal_path.m"
        {
#line 305 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_35, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_5, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_43_43, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_7, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44, hlds__goal_path__Goal0_33, &hlds__goal_path__Goal_36);
        }
#line 307 "goal_path.m"
        {
#line 307 "goal_path.m"
          hlds__goal_path__Case_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 0) = ((MR_Box) (hlds__goal_path__MainConsId_31));
#line 307 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 1) = ((MR_Box) (hlds__goal_path__OtherConsIds_32));
#line 307 "goal_path.m"
          MR_hl_field(MR_mktag(0), hlds__goal_path__Case_29, 2) = ((MR_Box) (hlds__goal_path__Goal_36));
#line 307 "goal_path.m"
        }
#line 308 "goal_path.m"
        {
#line 308 "goal_path.m"
          hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__CurArmNum_34, hlds__goal_path__MaybeNumFunctors_4, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_43_43, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_6, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_44_44, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_8, hlds__goal_path__Cases0_28, &hlds__goal_path__Cases_30);
        }
#line 300 "goal_path.m"
        {
#line 300 "goal_path.m"
          MR_Word base;
#line 300 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 300 "goal_path.m"
          *hlds__goal_path__HeadVar__10_10 = base;
#line 300 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Case_29));
#line 300 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Cases_30));
#line 300 "goal_path.m"
        }
#line 300 "goal_path.m"
      }
#line 298 "goal_path.m"
  }
#line 293 "goal_path.m"
}

#line 278 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 278 "goal_path.m"
  MR_Integer hlds__goal_path__LastDisjunctNum_3,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 278 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 278 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 278 "goal_path.m"
{
#line 283 "goal_path.m"
  {
#line 283 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 283 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "goal_path.m"
      {
#line 283 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 283 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4;
#line 283 "goal_path.m"
      }
#line 283 "goal_path.m"
    else
#line 285 "goal_path.m"
      {
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 285 "goal_path.m"
        MR_Integer hlds__goal_path__CurDisjunctNum_28 = (hlds__goal_path__LastDisjunctNum_3 + (MR_Integer) 1);
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36;
#line 285 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 287 "goal_path.m"
        {
#line 287 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "goal_path.m"
          MR_hl_field(MR_mktag(2), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__CurDisjunctNum_28));
#line 287 "goal_path.m"
        }
#line 287 "goal_path.m"
        {
#line 287 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 287 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 287 "goal_path.m"
        }
#line 288 "goal_path.m"
        {
#line 288 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 290 "goal_path.m"
        {
#line 290 "goal_path.m"
          hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__CurDisjunctNum_28, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 285 "goal_path.m"
        {
#line 285 "goal_path.m"
          MR_Word base;
#line 285 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 285 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 285 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 285 "goal_path.m"
        }
#line 285 "goal_path.m"
      }
#line 283 "goal_path.m"
  }
#line 278 "goal_path.m"
}

#line 263 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_1,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__GoalId_2,
#line 263 "goal_path.m"
  MR_Integer hlds__goal_path__LastConjunctNum_3,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7,
#line 263 "goal_path.m"
  MR_Word hlds__goal_path__HeadVar__8_8,
#line 263 "goal_path.m"
  MR_Word * hlds__goal_path__HeadVar__9_9)
#line 263 "goal_path.m"
{
#line 268 "goal_path.m"
  {
#line 268 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;

#line 268 "goal_path.m"
    if ((hlds__goal_path__HeadVar__8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "goal_path.m"
      {
#line 268 "goal_path.m"
        *hlds__goal_path__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6;
#line 268 "goal_path.m"
        *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4;
#line 268 "goal_path.m"
      }
#line 268 "goal_path.m"
    else
#line 270 "goal_path.m"
      {
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 0)));
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__Goals0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__HeadVar__8_8, (MR_Integer) 1)));
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__Goal_26;
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__Goals_27;
#line 270 "goal_path.m"
        MR_Integer hlds__goal_path__CurConjunctNum_28 = (hlds__goal_path__LastConjunctNum_3 + (MR_Integer) 1);
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__ContainingGoal_29;
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__V_35_35;
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36;
#line 270 "goal_path.m"
        MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37;

#line 272 "goal_path.m"
        {
#line 272 "goal_path.m"
          hlds__goal_path__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__V_35_35, 0) = ((MR_Box) (hlds__goal_path__CurConjunctNum_28));
#line 272 "goal_path.m"
        }
#line 272 "goal_path.m"
        {
#line 272 "goal_path.m"
          hlds__goal_path__ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 0) = ((MR_Box) (hlds__goal_path__GoalId_2));
#line 272 "goal_path.m"
          MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_29, 1) = ((MR_Box) (hlds__goal_path__V_35_35));
#line 272 "goal_path.m"
        }
#line 273 "goal_path.m"
        {
#line 273 "goal_path.m"
          hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__ContainingGoal_29, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_4, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_6, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__Goal0_24, &hlds__goal_path__Goal_26);
        }
#line 275 "goal_path.m"
        {
#line 275 "goal_path.m"
          hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_1, hlds__goal_path__GoalId_2, hlds__goal_path__CurConjunctNum_28, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_36_36, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_5, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_37_37, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_7, hlds__goal_path__Goals0_25, &hlds__goal_path__Goals_27);
        }
#line 270 "goal_path.m"
        {
#line 270 "goal_path.m"
          MR_Word base;
#line 270 "goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "goal_path.m"
          *hlds__goal_path__HeadVar__9_9 = base;
#line 270 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__goal_path__Goal_26));
#line 270 "goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__goal_path__Goals_27));
#line 270 "goal_path.m"
        }
#line 270 "goal_path.m"
      }
#line 268 "goal_path.m"
  }
#line 263 "goal_path.m"
}

#line 149 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_9,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__ContainingGoal_10,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_101,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_103,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104,
#line 149 "goal_path.m"
  MR_Word hlds__goal_path__Goal0_13,
#line 149 "goal_path.m"
  MR_Word * hlds__goal_path__Goal_14)
#line 149 "goal_path.m"
{
#line 155 "goal_path.m"
  {
#line 155 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 0)));
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Goal0_13, (MR_Integer) 1)));
#line 155 "goal_path.m"
    MR_Integer hlds__goal_path__GoalNum_17;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__GoalId_18;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__GoalInfo_19;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__GoalExpr_38;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 155 "goal_path.m"
    MR_Word hlds__goal_path__V_107_107;

#line 157 "goal_path.m"
    {
#line 157 "goal_path.m"
      mercury__counter__allocate_3_p_0(&hlds__goal_path__GoalNum_17, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_101, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105);
    }
#line 158 "goal_path.m"
    hlds__goal_path__GoalId_18 = (MR_Word) hlds__goal_path__GoalNum_17;
#line 159 "goal_path.m"
    {
#line 159 "goal_path.m"
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(hlds__goal_path__GoalId_18, hlds__goal_path__GoalInfo0_16, &hlds__goal_path__GoalInfo_19);
    }
#line 160 "goal_path.m"
    {
#line 160 "goal_path.m"
      hlds__goal_path__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_107_107, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 160 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_107_107, 1) = ((MR_Box) (hlds__goal_path__ContainingGoal_10));
#line 160 "goal_path.m"
    }
#line 160 "goal_path.m"
    {
#line 160 "goal_path.m"
      hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, 0) = ((MR_Box) (hlds__goal_path__V_107_107));
#line 160 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, 1) = ((MR_Box) (hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_103));
#line 160 "goal_path.m"
    }
#line 167 "goal_path.m"
#line 167 "goal_path.m"
    switch (MR_tag((MR_Word) hlds__goal_path__GoalExpr0_15)) {
#line 167 "goal_path.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 167 "goal_path.m"
      case (MR_Integer) 0:
#line 207 "goal_path.m"
        {
#line 207 "goal_path.m"
          MR_Word hlds__goal_path__SubGoal0_71 = (MR_Word) MR_body(((MR_Word) hlds__goal_path__GoalExpr0_15), (MR_Integer) 0);
#line 207 "goal_path.m"
          MR_Word hlds__goal_path__SubGoal_72;
#line 207 "goal_path.m"
          MR_Word hlds__goal_path__V_138_138;

#line 208 "goal_path.m"
          {
#line 208 "goal_path.m"
            hlds__goal_path__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__V_138_138, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 208 "goal_path.m"
            MR_hl_field(MR_mktag(1), hlds__goal_path__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 208 "goal_path.m"
          }
#line 208 "goal_path.m"
          {
#line 208 "goal_path.m"
            hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_138_138, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__SubGoal0_71, &hlds__goal_path__SubGoal_72);
          }
#line 210 "goal_path.m"
          hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__goal_path__SubGoal_72);
#line 207 "goal_path.m"
        }
#line 167 "goal_path.m"
        break;
#line 167 "goal_path.m"
      case (MR_Integer) 1:
#line 168 "goal_path.m"
        {
#line 168 "goal_path.m"
          MR_Word hlds__goal_path__LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)));
#line 168 "goal_path.m"
          MR_Word hlds__goal_path__RHS0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 168 "goal_path.m"
          MR_Word hlds__goal_path__Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 168 "goal_path.m"
          MR_Word hlds__goal_path__Kind_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 168 "goal_path.m"
          MR_Word hlds__goal_path__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));

#line 177 "goal_path.m"
#line 177 "goal_path.m"
          switch (MR_tag((MR_Word) hlds__goal_path__RHS0_40)) {
#line 177 "goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "goal_path.m"
            case (MR_Integer) 0:
#line 177 "goal_path.m"
            case (MR_Integer) 1:
#line 180 "goal_path.m"
              {
#line 181 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = hlds__goal_path__GoalExpr0_15;
#line 180 "goal_path.m"
                *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105;
#line 180 "goal_path.m"
                *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 180 "goal_path.m"
              }
#line 177 "goal_path.m"
              break;
#line 177 "goal_path.m"
            case (MR_Integer) 2:
#line 171 "goal_path.m"
              {
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__Purity_44 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__Groundness_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__PredOrFunc_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__NonLocals_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 2)));
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__QuantVars_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 3)));
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__LambdaModes_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 4)));
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__Detism_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 5)));
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__LambdaGoal0_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__RHS0_40, (MR_Integer) 6)));
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__LambdaGoal_53;
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__RHS_54;
#line 171 "goal_path.m"
                MR_Word hlds__goal_path__V_151_151;

#line 172 "goal_path.m"
                {
#line 172 "goal_path.m"
                  hlds__goal_path__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_151_151, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 172 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 172 "goal_path.m"
                }
#line 172 "goal_path.m"
                {
#line 172 "goal_path.m"
                  hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_151_151, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__LambdaGoal0_52, &hlds__goal_path__LambdaGoal_53);
                }
#line 174 "goal_path.m"
                {
#line 174 "goal_path.m"
                  hlds__goal_path__RHS_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 0) = ((MR_Box) ((hlds__goal_path__Purity_44 | ((((hlds__goal_path__Groundness_45 << (MR_Integer) 2)) | ((hlds__goal_path__PredOrFunc_46 << (MR_Integer) 3)))))));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 1) = (MR_Integer) 0;
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 2) = ((MR_Box) (hlds__goal_path__NonLocals_48));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 3) = ((MR_Box) (hlds__goal_path__QuantVars_49));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 4) = ((MR_Box) (hlds__goal_path__LambdaModes_50));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 5) = ((MR_Box) (hlds__goal_path__Detism_51));
#line 174 "goal_path.m"
                  MR_hl_field(MR_mktag(2), hlds__goal_path__RHS_54, 6) = ((MR_Box) (hlds__goal_path__LambdaGoal_53));
#line 174 "goal_path.m"
                }
#line 176 "goal_path.m"
                {
#line 176 "goal_path.m"
                  hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 176 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (hlds__goal_path__LHS_39));
#line 176 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__RHS_54));
#line 176 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_38, 2) = ((MR_Box) (hlds__goal_path__Mode_41));
#line 176 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_38, 3) = ((MR_Box) (hlds__goal_path__Kind_42));
#line 176 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__GoalExpr_38, 4) = ((MR_Box) (hlds__goal_path__Context_43));
#line 176 "goal_path.m"
                }
#line 171 "goal_path.m"
              }
#line 177 "goal_path.m"
              break;
#line 177 "goal_path.m"
          }
#line 168 "goal_path.m"
        }
#line 167 "goal_path.m"
        break;
#line 167 "goal_path.m"
      case (MR_Integer) 2:
#line 165 "goal_path.m"
        {
#line 166 "goal_path.m"
          hlds__goal_path__GoalExpr_38 = hlds__goal_path__GoalExpr0_15;
#line 165 "goal_path.m"
          *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105;
#line 165 "goal_path.m"
          *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 165 "goal_path.m"
        }
#line 167 "goal_path.m"
        break;
#line 167 "goal_path.m"
      case (MR_Integer) 3:
#line 167 "goal_path.m"
#line 167 "goal_path.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 0)))) {
#line 167 "goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 167 "goal_path.m"
          case (MR_Integer) 0:
#line 167 "goal_path.m"
          case (MR_Integer) 1:
#line 165 "goal_path.m"
            {
#line 166 "goal_path.m"
              hlds__goal_path__GoalExpr_38 = hlds__goal_path__GoalExpr0_15;
#line 165 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102 = hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105;
#line 165 "goal_path.m"
              *hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104 = hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106;
#line 165 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 2:
#line 184 "goal_path.m"
            {
#line 184 "goal_path.m"
              MR_Word hlds__goal_path__ConjType_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 184 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 184 "goal_path.m"
              MR_Word hlds__goal_path__Goals_61;

#line 185 "goal_path.m"
              {
#line 185 "goal_path.m"
                hlds__goal_path__fill_conj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_18, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__Goals0_60, &hlds__goal_path__Goals_61);
              }
#line 187 "goal_path.m"
              {
#line 187 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 187 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__ConjType_59));
#line 187 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 2) = ((MR_Box) (hlds__goal_path__Goals_61));
#line 187 "goal_path.m"
              }
#line 184 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 3:
#line 189 "goal_path.m"
            {
#line 189 "goal_path.m"
              MR_Word hlds__goal_path__Goals0_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 189 "goal_path.m"
              MR_Word hlds__goal_path__Goals_156;

#line 190 "goal_path.m"
              {
#line 190 "goal_path.m"
                hlds__goal_path__fill_disj_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_18, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__Goals0_155, &hlds__goal_path__Goals_156);
              }
#line 192 "goal_path.m"
              {
#line 192 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 192 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__Goals_156));
#line 192 "goal_path.m"
              }
#line 189 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 4:
#line 194 "goal_path.m"
            {
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__CanFail_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__Cases0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__VarTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 1)));
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__ModuleInfo_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_9, (MR_Integer) 0)));
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__Type_67;
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__MaybeNumFunctors_69;
#line 194 "goal_path.m"
              MR_Word hlds__goal_path__Cases_70;
#line 200 "goal_path.m"
              MR_Integer hlds__goal_path__NumFunctors_68;

#line 197 "goal_path.m"
              {
#line 197 "goal_path.m"
                hlds__vartypes__lookup_var_type_3_p_0(hlds__goal_path__VarTypes_65, hlds__goal_path__Var_62, &hlds__goal_path__Type_67);
              }
#line 198 "goal_path.m"
              {
#line 198 "goal_path.m"
                hlds__goal_path__succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(hlds__goal_path__ModuleInfo_66, hlds__goal_path__Type_67, &hlds__goal_path__NumFunctors_68);
              }
#line 200 "goal_path.m"
              if (hlds__goal_path__succeeded)
#line 199 "goal_path.m"
                {
#line 199 "goal_path.m"
                  hlds__goal_path__MaybeNumFunctors_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 199 "goal_path.m"
                  MR_hl_field(MR_mktag(1), hlds__goal_path__MaybeNumFunctors_69, 0) = ((MR_Box) (hlds__goal_path__NumFunctors_68));
#line 199 "goal_path.m"
                }
#line 200 "goal_path.m"
              else
#line 201 "goal_path.m"
                hlds__goal_path__MaybeNumFunctors_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 203 "goal_path.m"
              {
#line 203 "goal_path.m"
                hlds__goal_path__fill_switch_id_slots_10_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_18, (MR_Integer) 0, hlds__goal_path__MaybeNumFunctors_69, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__Cases0_64, &hlds__goal_path__Cases_70);
              }
#line 205 "goal_path.m"
              {
#line 205 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 205 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 205 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__Var_62));
#line 205 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 2) = ((MR_Box) (hlds__goal_path__CanFail_63));
#line 205 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 3) = ((MR_Box) (hlds__goal_path__Cases_70));
#line 205 "goal_path.m"
              }
#line 194 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 5:
#line 212 "goal_path.m"
            {
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__InnerInfo_75;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__OuterDetism_76;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__InnerDetism_77;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__MaybeCut_78;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__V_134_134;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__V_137_137;
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__SubGoal0_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 212 "goal_path.m"
              MR_Word hlds__goal_path__SubGoal_158;
#line 216 "goal_path.m"
              MR_Word hlds__goal_path__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_157, (MR_Integer) 0)));

#line 216 "goal_path.m"
              hlds__goal_path__InnerInfo_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__SubGoal0_157, (MR_Integer) 1)));
#line 217 "goal_path.m"
              {
#line 217 "goal_path.m"
                hlds__goal_path__OuterDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__GoalInfo_19);
              }
#line 218 "goal_path.m"
              {
#line 218 "goal_path.m"
                hlds__goal_path__InnerDetism_77 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(hlds__goal_path__InnerInfo_75);
              }
#line 219 "goal_path.m"
              hlds__goal_path__succeeded = (hlds__goal_path__InnerDetism_77 == hlds__goal_path__OuterDetism_76);
#line 221 "goal_path.m"
              if (hlds__goal_path__succeeded)
#line 220 "goal_path.m"
                hlds__goal_path__MaybeCut_78 = (MR_Integer) 1;
#line 221 "goal_path.m"
              else
#line 222 "goal_path.m"
                hlds__goal_path__MaybeCut_78 = (MR_Integer) 0;
#line 225 "goal_path.m"
              {
#line 225 "goal_path.m"
                hlds__goal_path__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__V_137_137, 1) = ((MR_Box) (hlds__goal_path__MaybeCut_78));
#line 225 "goal_path.m"
              }
#line 225 "goal_path.m"
              {
#line 225 "goal_path.m"
                hlds__goal_path__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_134_134, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 225 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_134_134, 1) = ((MR_Box) (hlds__goal_path__V_137_137));
#line 225 "goal_path.m"
              }
#line 224 "goal_path.m"
              {
#line 224 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_134_134, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__SubGoal0_157, &hlds__goal_path__SubGoal_158);
              }
#line 227 "goal_path.m"
              {
#line 227 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 227 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 227 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__Reason_73));
#line 227 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 2) = ((MR_Box) (hlds__goal_path__SubGoal_158));
#line 227 "goal_path.m"
              }
#line 212 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 6:
#line 229 "goal_path.m"
            {
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__A_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Cond0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 2)));
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Then0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 3)));
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Else0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 4)));
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Cond_83;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Then_84;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__Else_85;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__V_122_122;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_123_123;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__V_126_126;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_127_127;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128;
#line 229 "goal_path.m"
              MR_Word hlds__goal_path__V_130_130;

#line 230 "goal_path.m"
              {
#line 230 "goal_path.m"
                hlds__goal_path__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_122_122, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 230 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "goal_path.m"
              }
#line 230 "goal_path.m"
              {
#line 230 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_122_122, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_123_123, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124, hlds__goal_path__Cond0_80, &hlds__goal_path__Cond_83);
              }
#line 232 "goal_path.m"
              {
#line 232 "goal_path.m"
                hlds__goal_path__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_126_126, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 232 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 232 "goal_path.m"
              }
#line 232 "goal_path.m"
              {
#line 232 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_126_126, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_123_123, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_127_127, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_124_124, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128, hlds__goal_path__Then0_81, &hlds__goal_path__Then_84);
              }
#line 234 "goal_path.m"
              {
#line 234 "goal_path.m"
                hlds__goal_path__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_130_130, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 234 "goal_path.m"
                MR_hl_field(MR_mktag(1), hlds__goal_path__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 234 "goal_path.m"
              }
#line 234 "goal_path.m"
              {
#line 234 "goal_path.m"
                hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_130_130, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_127_127, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_128_128, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__Else0_82, &hlds__goal_path__Else_85);
              }
#line 236 "goal_path.m"
              {
#line 236 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 236 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 236 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__A_79));
#line 236 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 2) = ((MR_Box) (hlds__goal_path__Cond_83));
#line 236 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 3) = ((MR_Box) (hlds__goal_path__Then_84));
#line 236 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 4) = ((MR_Box) (hlds__goal_path__Else_85));
#line 236 "goal_path.m"
              }
#line 229 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
          case (MR_Integer) 7:
#line 238 "goal_path.m"
            {
#line 238 "goal_path.m"
              MR_Word hlds__goal_path__ShortHand0_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr0_15, (MR_Integer) 1)));
#line 238 "goal_path.m"
              MR_Word hlds__goal_path__ShortHand_96;

#line 249 "goal_path.m"
#line 249 "goal_path.m"
              switch (MR_tag((MR_Word) hlds__goal_path__ShortHand0_86)) {
#line 249 "goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 249 "goal_path.m"
                case (MR_Integer) 0:
#line 255 "goal_path.m"
                  {
#line 257 "goal_path.m"
                    {
#line 257 "goal_path.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.goal_path", (MR_String) "predicate \140hlds.goal_path.fill_goal_id_slots\'/8", (MR_String) "bi_implication");
#line 257 "goal_path.m"
                      return;
                    }
#line 255 "goal_path.m"
                  }
#line 249 "goal_path.m"
                  break;
#line 249 "goal_path.m"
                case (MR_Integer) 1:
#line 241 "goal_path.m"
                  {
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__GoalType_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 0)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__Outer_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 1)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__Inner_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 2)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__MaybeOutputVars_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 3)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__MainGoal0_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 4)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseGoals0_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 5)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseInners_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand0_86, (MR_Integer) 6)));
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__MainGoal_94;
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__OrElseGoals_95;
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__V_115_115;
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_116_116;
#line 241 "goal_path.m"
                    MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117;

#line 243 "goal_path.m"
                    {
#line 243 "goal_path.m"
                      hlds__goal_path__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__V_115_115, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 243 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 243 "goal_path.m"
                    }
#line 242 "goal_path.m"
                    {
#line 242 "goal_path.m"
                      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_115_115, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, &hlds__goal_path__STATE_VARIABLE_GoalNumCounter_116_116, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, &hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117, hlds__goal_path__MainGoal0_91, &hlds__goal_path__MainGoal_94);
                    }
#line 245 "goal_path.m"
                    {
#line 245 "goal_path.m"
                      hlds__goal_path__fill_orelse_id_slots_9_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__GoalId_18, (MR_Integer) 0, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_116_116, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_117_117, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__OrElseGoals0_92, &hlds__goal_path__OrElseGoals_95);
                    }
#line 247 "goal_path.m"
                    {
#line 247 "goal_path.m"
                      hlds__goal_path__ShortHand_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 0) = ((MR_Box) (hlds__goal_path__GoalType_87));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 1) = ((MR_Box) (hlds__goal_path__Outer_88));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 2) = ((MR_Box) (hlds__goal_path__Inner_89));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 3) = ((MR_Box) (hlds__goal_path__MaybeOutputVars_90));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 4) = ((MR_Box) (hlds__goal_path__MainGoal_94));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 5) = ((MR_Box) (hlds__goal_path__OrElseGoals_95));
#line 247 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__ShortHand_96, 6) = ((MR_Box) (hlds__goal_path__OrElseInners_93));
#line 247 "goal_path.m"
                    }
#line 241 "goal_path.m"
                  }
#line 249 "goal_path.m"
                  break;
#line 249 "goal_path.m"
                case (MR_Integer) 2:
#line 250 "goal_path.m"
                  {
#line 250 "goal_path.m"
                    MR_Word hlds__goal_path__MaybeIO_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_86, (MR_Integer) 0)));
#line 250 "goal_path.m"
                    MR_Word hlds__goal_path__ResultVar_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_86, (MR_Integer) 1)));
#line 250 "goal_path.m"
                    MR_Word hlds__goal_path__V_111_111;
#line 250 "goal_path.m"
                    MR_Word hlds__goal_path__SubGoal0_159 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand0_86, (MR_Integer) 2)));
#line 250 "goal_path.m"
                    MR_Word hlds__goal_path__SubGoal_160;

#line 251 "goal_path.m"
                    {
#line 251 "goal_path.m"
                      hlds__goal_path__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__V_111_111, 0) = ((MR_Box) (hlds__goal_path__GoalId_18));
#line 251 "goal_path.m"
                      MR_hl_field(MR_mktag(1), hlds__goal_path__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 251 "goal_path.m"
                    }
#line 251 "goal_path.m"
                    {
#line 251 "goal_path.m"
                      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_9, hlds__goal_path__V_111_111, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_105_105, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_102, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_106_106, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_104, hlds__goal_path__SubGoal0_159, &hlds__goal_path__SubGoal_160);
                    }
#line 253 "goal_path.m"
                    {
#line 253 "goal_path.m"
                      hlds__goal_path__ShortHand_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 253 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_96, 0) = ((MR_Box) (hlds__goal_path__MaybeIO_97));
#line 253 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_96, 1) = ((MR_Box) (hlds__goal_path__ResultVar_98));
#line 253 "goal_path.m"
                      MR_hl_field(MR_mktag(2), hlds__goal_path__ShortHand_96, 2) = ((MR_Box) (hlds__goal_path__SubGoal_160));
#line 253 "goal_path.m"
                    }
#line 250 "goal_path.m"
                  }
#line 249 "goal_path.m"
                  break;
#line 249 "goal_path.m"
              }
#line 259 "goal_path.m"
              {
#line 259 "goal_path.m"
                hlds__goal_path__GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 259 "goal_path.m"
                MR_hl_field(MR_mktag(3), hlds__goal_path__GoalExpr_38, 1) = ((MR_Box) (hlds__goal_path__ShortHand_96));
#line 259 "goal_path.m"
              }
#line 238 "goal_path.m"
            }
#line 167 "goal_path.m"
            break;
#line 167 "goal_path.m"
        }
#line 167 "goal_path.m"
        break;
#line 167 "goal_path.m"
    }
#line 261 "goal_path.m"
    {
#line 261 "goal_path.m"
      MR_Word base;
#line 261 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "goal_path.m"
      *hlds__goal_path__Goal_14 = base;
#line 261 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__GoalExpr_38));
#line 261 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__GoalInfo_19));
#line 261 "goal_path.m"
    }
#line 155 "goal_path.m"
  }
#line 149 "goal_path.m"
}

#line 135 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__SlotInfo_10,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__Clause0_11,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__Clause_12,
#line 135 "goal_path.m"
  MR_Integer hlds__goal_path__CurClauseNum_13,
#line 135 "goal_path.m"
  MR_Integer * hlds__goal_path__NextClauseNum_14,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_20,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_GoalNumCounter_21,
#line 135 "goal_path.m"
  MR_Word hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_22,
#line 135 "goal_path.m"
  MR_Word * hlds__goal_path__STATE_VARIABLE_ContainingGoalList_23)
#line 135 "goal_path.m"
{
#line 140 "goal_path.m"
  {
#line 140 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_17;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoal_18;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__Goal_19;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_24_24;
#line 140 "goal_path.m"
    MR_Word hlds__goal_path__V_25_25;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_29_29;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_31_31;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_32_32;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_33_33;
#line 147 "goal_path.m"
    MR_Word hlds__goal_path__V_30_30;

#line 141 "goal_path.m"
    {
#line 141 "goal_path.m"
      hlds__goal_path__Goal0_17 = hlds__hlds_clauses__clause_body_1_f_0(hlds__goal_path__Clause0_11);
    }
#line 142 "goal_path.m"
    {
#line 142 "goal_path.m"
      hlds__goal_path__V_24_24 = mdbcomp__goal_path__whole_body_goal_id_0_f_0();
    }
#line 143 "goal_path.m"
    {
#line 143 "goal_path.m"
      hlds__goal_path__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 143 "goal_path.m"
      MR_hl_field(MR_mktag(2), hlds__goal_path__V_25_25, 0) = ((MR_Box) (hlds__goal_path__CurClauseNum_13));
#line 143 "goal_path.m"
    }
#line 142 "goal_path.m"
    {
#line 142 "goal_path.m"
      hlds__goal_path__ContainingGoal_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_18, 0) = ((MR_Box) (hlds__goal_path__V_24_24));
#line 142 "goal_path.m"
      MR_hl_field(MR_mktag(1), hlds__goal_path__ContainingGoal_18, 1) = ((MR_Box) (hlds__goal_path__V_25_25));
#line 142 "goal_path.m"
    }
#line 144 "goal_path.m"
    *hlds__goal_path__NextClauseNum_14 = (hlds__goal_path__CurClauseNum_13 + (MR_Integer) 1);
#line 145 "goal_path.m"
    {
#line 145 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_10, hlds__goal_path__ContainingGoal_18, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_0_20, hlds__goal_path__STATE_VARIABLE_GoalNumCounter_21, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_0_22, hlds__goal_path__STATE_VARIABLE_ContainingGoalList_23, hlds__goal_path__Goal0_17, &hlds__goal_path__Goal_19);
    }
#line 147 "goal_path.m"
    hlds__goal_path__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 0)));
#line 147 "goal_path.m"
    hlds__goal_path__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 1)));
#line 147 "goal_path.m"
    hlds__goal_path__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 2)));
#line 147 "goal_path.m"
    hlds__goal_path__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 3)));
#line 147 "goal_path.m"
    hlds__goal_path__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__Clause0_11, (MR_Integer) 4)));
#line 147 "goal_path.m"
    {
#line 147 "goal_path.m"
      MR_Word base;
#line 147 "goal_path.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 147 "goal_path.m"
      *hlds__goal_path__Clause_12 = base;
#line 147 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__goal_path__V_29_29));
#line 147 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__goal_path__Goal_19));
#line 147 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__goal_path__V_31_31));
#line 147 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__goal_path__V_32_32));
#line 147 "goal_path.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__goal_path__V_33_33));
#line 147 "goal_path.m"
    }
#line 140 "goal_path.m"
  }
#line 135 "goal_path.m"
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
#line 328 "goal_path.m"
  {
#line 328 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_6;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_7;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_8;
#line 328 "goal_path.m"
    MR_Word hlds__goal_path__Goal_9;

#line 329 "goal_path.m"
    {
#line 329 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__Goal0_6);
    }
#line 330 "goal_path.m"
    {
#line 330 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_Proc_0_10, &hlds__goal_path__VarTypes_7);
    }
#line 331 "goal_path.m"
    {
#line 331 "goal_path.m"
      hlds__goal_path__SlotInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_4));
#line 331 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_8, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 331 "goal_path.m"
    }
#line 332 "goal_path.m"
    {
#line 332 "goal_path.m"
      hlds__goal_path__fill_goal_path_slots_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_path__SlotInfo_8, hlds__goal_path__Goal0_6, &hlds__goal_path__Goal_9);
    }
#line 333 "goal_path.m"
    {
#line 333 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_9, hlds__goal_path__STATE_VARIABLE_Proc_0_10, hlds__goal_path__STATE_VARIABLE_Proc_11);
#line 333 "goal_path.m"
      return;
    }
#line 328 "goal_path.m"
  }
#line 58 "goal_path.m"
}

#line 113 "goal_path.m"
static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__closure_arg,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_1,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_2,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_3,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_4,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_5,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_6,
#line 113 "goal_path.m"
  MR_Box hlds__goal_path__wrapper_arg_7,
#line 113 "goal_path.m"
  MR_Box * hlds__goal_path__wrapper_arg_8)
#line 113 "goal_path.m"
{
#line 113 "goal_path.m"
  {
#line 113 "goal_path.m"
    MR_Box hlds__goal_path__closure = hlds__goal_path__closure_arg;
#line 113 "goal_path.m"
    MR_Word hlds__goal_path__conv3_Clause_12;
#line 113 "goal_path.m"
    MR_Integer hlds__goal_path__conv2_NextClauseNum_14;
#line 113 "goal_path.m"
    MR_Word hlds__goal_path__conv1_STATE_VARIABLE_GoalNumCounter_21;
#line 113 "goal_path.m"
    MR_Word hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_23;

#line 113 "goal_path.m"
    {
#line 113 "goal_path.m"
      hlds__goal_path__fill_slots_in_clause_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__goal_path__closure, (MR_Integer) 3))), ((MR_Word) hlds__goal_path__wrapper_arg_1), &hlds__goal_path__conv3_Clause_12, ((MR_Integer) hlds__goal_path__wrapper_arg_3), &hlds__goal_path__conv2_NextClauseNum_14, ((MR_Word) hlds__goal_path__wrapper_arg_5), &hlds__goal_path__conv1_STATE_VARIABLE_GoalNumCounter_21, ((MR_Word) hlds__goal_path__wrapper_arg_7), &hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_23);
    }
#line 113 "goal_path.m"
    *hlds__goal_path__wrapper_arg_2 = ((MR_Box) (hlds__goal_path__conv3_Clause_12));
#line 113 "goal_path.m"
    *hlds__goal_path__wrapper_arg_4 = ((MR_Box) (hlds__goal_path__conv2_NextClauseNum_14));
#line 113 "goal_path.m"
    *hlds__goal_path__wrapper_arg_6 = ((MR_Box) (hlds__goal_path__conv1_STATE_VARIABLE_GoalNumCounter_21));
#line 113 "goal_path.m"
    *hlds__goal_path__wrapper_arg_8 = ((MR_Box) (hlds__goal_path__conv0_STATE_VARIABLE_ContainingGoalList_23));
#line 113 "goal_path.m"
  }
#line 113 "goal_path.m"
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
#line 103 "goal_path.m"
  {
#line 103 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__TypeCtorInfo_32_32;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep0_9;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__ItemNumbers_10;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__Clauses0_11;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_12;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_13;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__Clauses_14;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoalList_17;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__ClausesRep_18;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__V_19_19;
#line 103 "goal_path.m"
    MR_Word hlds__goal_path__V_21_21;
#line 113 "goal_path.m"
    MR_Integer hlds__goal_path__V_15_15;
#line 113 "goal_path.m"
    MR_Word hlds__goal_path__V_16_16;
#line 113 "goal_path.m"
    MR_Box hlds__goal_path__conv6_V_15_15;
#line 113 "goal_path.m"
    MR_Box hlds__goal_path__conv5_V_16_16;
#line 113 "goal_path.m"
    MR_Box hlds__goal_path__conv4_ContainingGoalList_17;

#line 104 "goal_path.m"
    {
#line 104 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__ClausesRep0_9, &hlds__goal_path__ItemNumbers_10);
    }
#line 105 "goal_path.m"
    {
#line 105 "goal_path.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(hlds__goal_path__ClausesRep0_9, &hlds__goal_path__Clauses0_11);
    }
#line 106 "goal_path.m"
    {
#line 106 "goal_path.m"
      hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(hlds__goal_path__ClausesInfo0_7, &hlds__goal_path__VarTypes_12);
    }
#line 107 "goal_path.m"
    {
#line 107 "goal_path.m"
      hlds__goal_path__SlotInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_5));
#line 107 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_13, 1) = ((MR_Box) (hlds__goal_path__VarTypes_12));
#line 107 "goal_path.m"
    }
#line 113 "goal_path.m"
    {
#line 113 "goal_path.m"
      hlds__goal_path__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 113 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 0) = ((MR_Box) (&hlds__goal_path_scalar_common_3[0]));
#line 113 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 1) = ((MR_Box) (hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1));
#line 113 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 113 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__V_19_19, 3) = ((MR_Box) (hlds__goal_path__SlotInfo_13));
#line 113 "goal_path.m"
    }
#line 114 "goal_path.m"
    {
#line 114 "goal_path.m"
      hlds__goal_path__V_21_21 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 3640 "hlds.goal_path.c"
    hlds__goal_path__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0;
#line 113 "goal_path.m"
    {
#line 113 "goal_path.m"
      mercury__list__map_foldl3_9_p_1(hlds__goal_path__TypeCtorInfo_32_32, hlds__goal_path__TypeCtorInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &hlds__goal_path_scalar_common_2[0], hlds__goal_path__V_19_19, hlds__goal_path__Clauses0_11, &hlds__goal_path__Clauses_14, ((MR_Box) ((MR_Integer) 1)), &hlds__goal_path__conv6_V_15_15, ((MR_Box) (hlds__goal_path__V_21_21)), &hlds__goal_path__conv5_V_16_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__goal_path__conv4_ContainingGoalList_17);
    }
#line 113 "goal_path.m"
    hlds__goal_path__V_15_15 = ((MR_Integer) hlds__goal_path__conv6_V_15_15);
#line 113 "goal_path.m"
    hlds__goal_path__V_16_16 = ((MR_Word) hlds__goal_path__conv5_V_16_16);
#line 113 "goal_path.m"
    hlds__goal_path__ContainingGoalList_17 = ((MR_Word) hlds__goal_path__conv4_ContainingGoalList_17);
#line 116 "goal_path.m"
    {
#line 116 "goal_path.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, hlds__goal_path__ContainingGoalList_17, hlds__goal_path__ContainingGoalMap_6);
    }
#line 117 "goal_path.m"
    {
#line 117 "goal_path.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(hlds__goal_path__Clauses_14, &hlds__goal_path__ClausesRep_18);
    }
#line 118 "goal_path.m"
    {
#line 118 "goal_path.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__goal_path__ClausesRep_18, hlds__goal_path__ItemNumbers_10, hlds__goal_path__ClausesInfo0_7, hlds__goal_path__ClausesInfo_8);
#line 118 "goal_path.m"
      return;
    }
#line 103 "goal_path.m"
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
#line 96 "goal_path.m"
  {
#line 96 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 96 "goal_path.m"
    MR_Word hlds__goal_path__SlotInfo_11;
#line 96 "goal_path.m"
    MR_Word hlds__goal_path__ContainingGoalList_13;
#line 96 "goal_path.m"
    MR_Word hlds__goal_path__V_15_15;
#line 98 "goal_path.m"
    MR_Word hlds__goal_path__V_12_12;

#line 97 "goal_path.m"
    {
#line 97 "goal_path.m"
      hlds__goal_path__SlotInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 97 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 0) = ((MR_Box) (hlds__goal_path__ModuleInfo_6));
#line 97 "goal_path.m"
      MR_hl_field(MR_mktag(0), hlds__goal_path__SlotInfo_11, 1) = ((MR_Box) (hlds__goal_path__VarTypes_7));
#line 97 "goal_path.m"
    }
#line 98 "goal_path.m"
    {
#line 98 "goal_path.m"
      hlds__goal_path__V_15_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 98 "goal_path.m"
    {
#line 98 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_8_p_0(hlds__goal_path__SlotInfo_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__goal_path__V_15_15, &hlds__goal_path__V_12_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__goal_path__ContainingGoalList_13, hlds__goal_path__Goal0_9, hlds__goal_path__Goal_10);
    }
#line 100 "goal_path.m"
    {
#line 100 "goal_path.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, hlds__goal_path__ContainingGoalList_13, hlds__goal_path__ContainingGoalMap_8);
#line 100 "goal_path.m"
      return;
    }
#line 96 "goal_path.m"
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
#line 88 "goal_path.m"
  {
#line 88 "goal_path.m"
    MR_bool hlds__goal_path__succeeded;
#line 88 "goal_path.m"
    MR_Word hlds__goal_path__VarTypes_8;
#line 88 "goal_path.m"
    MR_Word hlds__goal_path__Goal0_9;
#line 88 "goal_path.m"
    MR_Word hlds__goal_path__Goal_10;

#line 89 "goal_path.m"
    {
#line 89 "goal_path.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__VarTypes_8);
    }
#line 90 "goal_path.m"
    {
#line 90 "goal_path.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, &hlds__goal_path__Goal0_9);
    }
#line 91 "goal_path.m"
    {
#line 91 "goal_path.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(hlds__goal_path__ModuleInfo_5, hlds__goal_path__VarTypes_8, hlds__goal_path__ContainingGoalMap_6, hlds__goal_path__Goal0_9, &hlds__goal_path__Goal_10);
    }
#line 93 "goal_path.m"
    {
#line 93 "goal_path.m"
      hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__goal_path__Goal_10, hlds__goal_path__STATE_VARIABLE_ProcInfo_0_11, hlds__goal_path__STATE_VARIABLE_ProcInfo_12);
#line 93 "goal_path.m"
      return;
    }
#line 88 "goal_path.m"
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
