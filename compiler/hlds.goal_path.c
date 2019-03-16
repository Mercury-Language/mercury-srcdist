/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version rotd-2019-03-16
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


// :- module hlds.goal_path.
// :- implementation.

/*
INIT mercury__hlds__goal_path__init
ENDINIT
*/

#include "hlds.goal_path.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2];

static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2];

static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0;

static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1];

static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1];

static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1];

static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1];

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
  MR_Word SlotInfo_10,
  MR_Word Clause0_11,
  MR_Word * Clause_12,
  MR_Integer CurClauseNum_13,
  MR_Integer * NextClauseNum_14,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_20,
  MR_Word * STATE_VARIABLE_GoalNumCounter_21,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_22,
  MR_Word * STATE_VARIABLE_ContainingGoalList_23);

static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastOrElseNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastArmNum_2,
  MR_Word MaybeNumFunctors_3,
  MR_Word SlotInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastDisjunctNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastConjunctNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
  MR_Word RevGoalPath_5,
  MR_Word SlotInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8);

static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastOrElseNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastArmNum_3,
  MR_Word MaybeNumFunctors_4,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_5,
  MR_Word * STATE_VARIABLE_GoalNumCounter_6,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_7,
  MR_Word * STATE_VARIABLE_ContainingGoalList_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastDisjunctNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastConjunctNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
  MR_Word SlotInfo_9,
  MR_Word ContainingGoal_10,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_101,
  MR_Word * STATE_VARIABLE_GoalNumCounter_102,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_103,
  MR_Word * STATE_VARIABLE_ContainingGoalList_104,
  MR_Word Goal0_13,
  MR_Word * Goal_14);

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 9)),
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



static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_containing_goal_list_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__goal_path____Unify____containing_goal_list_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____containing_goal_list_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "containing_goal_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__goal_path__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__goal_path__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2] = {
  (MR_String) "slot_info_module_info",
  (MR_String) "slot_info_vartypes"
};

static const MR_DuFunctorDesc hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0 = {
  (MR_String) "slot_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0,
  hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

static const MR_DuPtagLayout hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__goal_path__hlds__goal_path__du_stag_ordered_slot_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0[1] = {
  &hlds__goal_path__hlds__goal_path__du_functor_desc_slot_info_0_0
};

static const MR_Integer hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__goal_path__hlds__goal_path__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_path____Unify____slot_info_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____slot_info_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "slot_info",
  {     hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0 },
  {     hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0
};

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_10_10 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__goal_path_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__goal_path_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_path__fill_slots_in_clause_9_p_0(
  MR_Word SlotInfo_10,
  MR_Word Clause0_11,
  MR_Word * Clause_12,
  MR_Integer CurClauseNum_13,
  MR_Integer * NextClauseNum_14,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_20,
  MR_Word * STATE_VARIABLE_GoalNumCounter_21,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_22,
  MR_Word * STATE_VARIABLE_ContainingGoalList_23)
{
  {
    MR_Word Goal0_17;
    MR_Word ContainingGoal_18;
    MR_Word Goal_19;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;

    Goal0_17 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_11);
    Var_24 = mdbcomp__goal_path__whole_body_goal_id_0_f_0();
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (CurClauseNum_13));
    }
    {
      ContainingGoal_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContainingGoal_18, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), ContainingGoal_18, 1) = ((MR_Box) (Var_25));
    }
    *NextClauseNum_14 = (MR_Integer) ((MR_Unsigned) CurClauseNum_13 + (MR_Unsigned) (MR_Integer) 1);
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_10, ContainingGoal_18, STATE_VARIABLE_GoalNumCounter_0_20, STATE_VARIABLE_GoalNumCounter_21, STATE_VARIABLE_ContainingGoalList_0_22, STATE_VARIABLE_ContainingGoalList_23, Goal0_17, &Goal_19);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_11, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_11, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_11, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Clause0_11, (MR_Integer) 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
    }
  }
}

void MR_CALL 
hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Proc_0_10,
  MR_Word * STATE_VARIABLE_Proc_11)
{
  {
    MR_Word Goal0_6;
    MR_Word VarTypes_7;
    MR_Word SlotInfo_8;
    MR_Word Goal_9;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_Proc_0_10, &Goal0_6);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_Proc_0_10, &VarTypes_7);
    {
      SlotInfo_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotInfo_8, 0) = ((MR_Box) (ModuleInfo_4));
      MR_hl_field(MR_mktag(0), SlotInfo_8, 1) = ((MR_Box) (VarTypes_7));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0((MR_Word) ((MR_Unsigned) 0U), SlotInfo_8, Goal0_6, &Goal_9);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_9, STATE_VARIABLE_Proc_0_10, STATE_VARIABLE_Proc_11);
  }
}

static void MR_CALL 
hlds__goal_path__fill_orelse_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastOrElseNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurOrElseNum_16 = (MR_Integer) ((MR_Unsigned) LastOrElseNum_2 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (CurOrElseNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_orelse_path_slots_5_p_0(ParentRevGoalPath_1, CurOrElseNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_switch_path_slots_6_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastArmNum_2,
  MR_Word MaybeNumFunctors_3,
  MR_Word SlotInfo_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_15, (MR_Integer) 2))));
    MR_Integer CurArmNum_22 = (MR_Integer) ((MR_Unsigned) LastArmNum_2 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word RevGoalPath_23;
    MR_Word Goal_24;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (CurArmNum_22));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (MaybeNumFunctors_3));
    }
    {
      RevGoalPath_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevGoalPath_23, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(MR_mktag(1), RevGoalPath_23, 1) = ((MR_Box) (Var_26));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_23, SlotInfo_4, Goal0_21, &Goal_24);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_17, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), Case_17, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), Case_17, 2) = ((MR_Box) (Goal_24));
    }
    hlds__goal_path__fill_switch_path_slots_6_p_0(ParentRevGoalPath_1, CurArmNum_22, MaybeNumFunctors_3, SlotInfo_4, Cases0_16, &Cases_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_18));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_disj_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastDisjunctNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurDisjunctNum_16 = (MR_Integer) ((MR_Unsigned) LastDisjunctNum_2 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_19, 0) = ((MR_Box) (CurDisjunctNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_disj_path_slots_5_p_0(ParentRevGoalPath_1, CurDisjunctNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_conj_path_slots_5_p_0(
  MR_Word ParentRevGoalPath_1,
  MR_Integer LastConjunctNum_2,
  MR_Word SlotInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurConjunctNum_16 = (MR_Integer) ((MR_Unsigned) LastConjunctNum_2 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (CurConjunctNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(MR_mktag(1), RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_conj_path_slots_5_p_0(ParentRevGoalPath_1, CurConjunctNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_goal_path_slots_4_p_0(
  MR_Word RevGoalPath_5,
  MR_Word SlotInfo_6,
  MR_Word Goal0_7,
  MR_Word * Goal_8)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word GoalInfo_11;
    MR_Word GoalExpr_15;

    hlds__hlds_goal__goal_info_set_reverse_goal_path_3_p_0(RevGoalPath_5, GoalInfo0_10, &GoalInfo_11);
    switch (MR_tag((MR_Word) GoalExpr0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_25 = (MR_Word) ((MR_Word) (GoalExpr0_9));
          MR_Word SubRevGoalPath_26;
          MR_Word SubGoal_27;

          {
            SubRevGoalPath_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SubRevGoalPath_26, 0) = ((MR_Box) (RevGoalPath_5));
            MR_hl_field(MR_mktag(1), SubRevGoalPath_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          }
          hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_26, SlotInfo_6, SubGoal0_25, &SubGoal_27);
          GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_27));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 0))));
          MR_Word RHS0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 1))));
          MR_Word Mode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 2))));
          MR_Word Kind_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 3))));
          MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_9, (MR_Integer) 4))));
          MR_Word RHS_59;

          switch (MR_tag((MR_Word) RHS0_45)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              RHS_59 = RHS0_45;
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocals_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 2))));
                MR_Word QuantVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 3))));
                MR_Word LambdaModes_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 4))));
                MR_Word Detism_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word LambdaGoal0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 6))));
                MR_Word LambdaGoal_58;
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_45, (MR_Integer) 0)));

                hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_5, SlotInfo_6, LambdaGoal0_57, &LambdaGoal_58);
                {
                  RHS_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_59, 0) = (MR_Box) (packed_word_3);
                  MR_hl_field(MR_mktag(2), RHS_59, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_59, 2) = ((MR_Box) (NonLocals_53));
                  MR_hl_field(MR_mktag(2), RHS_59, 3) = ((MR_Box) (QuantVars_54));
                  MR_hl_field(MR_mktag(2), RHS_59, 4) = ((MR_Box) (LambdaModes_55));
                  MR_hl_field(MR_mktag(2), RHS_59, 5) = (MR_Box) ((MR_Unsigned) (Detism_56));
                  MR_hl_field(MR_mktag(2), RHS_59, 6) = ((MR_Box) (LambdaGoal_58));
                }
              }
              break;
          }
          {
            GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 0) = ((MR_Box) (LHS_44));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 1) = ((MR_Box) (RHS_59));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 2) = ((MR_Box) (Mode_46));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 3) = ((MR_Box) (Kind_47));
            MR_hl_field(MR_mktag(1), GoalExpr_15, 4) = ((MR_Box) (Context_48));
          }
        }
        break;
      case (MR_Integer) 2:
        GoalExpr_15 = GoalExpr0_9;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            GoalExpr_15 = GoalExpr0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Goals_14;

              hlds__goal_path__fill_conj_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, Goals0_13, &Goals_14);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Goals_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Goals_112;

              hlds__goal_path__fill_disj_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, Goals0_111, &Goals_112);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Goals_112));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word CanFail_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word VarTypes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_6, (MR_Integer) 1))));
              MR_Word ModuleInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_6, (MR_Integer) 0))));
              MR_Word Type_21;
              MR_Word MaybeNumFunctors_23;
              MR_Word Cases_24;
              MR_Integer NumFunctors_22;

              hlds__vartypes__lookup_var_type_3_p_0(VarTypes_19, Var_16, &Type_21);
              succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_20, Type_21, &NumFunctors_22);
              if (succeeded)
                {
                  MaybeNumFunctors_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeNumFunctors_23, 0) = ((MR_Box) (NumFunctors_22));
                }
              else
                MaybeNumFunctors_23 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__goal_path__fill_switch_path_slots_6_p_0(RevGoalPath_5, (MR_Integer) 0, MaybeNumFunctors_23, SlotInfo_6, Cases0_18, &Cases_24);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Var_16));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_17));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Cases_24));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word InnerInfo_30;
              MR_Word OuterDetism_31;
              MR_Word InnerDetism_32;
              MR_Word MaybeCut_33;
              MR_Word Var_106;
              MR_Word SubGoal0_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word SubRevGoalPath_114;
              MR_Word SubGoal_115;

              InnerInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_113, (MR_Integer) 1))));
              OuterDetism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_11);
              InnerDetism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_30);
              succeeded = (InnerDetism_32 == OuterDetism_31);
              if (succeeded)
                MaybeCut_33 = (MR_Integer) 1;
              else
                MaybeCut_33 = (MR_Integer) 0;
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_106, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_33));
              }
              {
                SubRevGoalPath_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_114, 0) = ((MR_Box) (RevGoalPath_5));
                MR_hl_field(MR_mktag(1), SubRevGoalPath_114, 1) = ((MR_Box) (Var_106));
              }
              hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_114, SlotInfo_6, SubGoal0_113, &SubGoal_115);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Reason_28));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (SubGoal_115));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word Cond0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 2))));
              MR_Word Then0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 3))));
              MR_Word Else0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 4))));
              MR_Word RevPathCond_38;
              MR_Word RevPathThen_39;
              MR_Word RevPathElse_40;
              MR_Word Cond_41;
              MR_Word Then_42;
              MR_Word Else_43;

              {
                RevPathCond_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevPathCond_38, 0) = ((MR_Box) (RevGoalPath_5));
                MR_hl_field(MR_mktag(1), RevPathCond_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                RevPathThen_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevPathThen_39, 0) = ((MR_Box) (RevGoalPath_5));
                MR_hl_field(MR_mktag(1), RevPathThen_39, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              }
              {
                RevPathElse_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), RevPathElse_40, 0) = ((MR_Box) (RevGoalPath_5));
                MR_hl_field(MR_mktag(1), RevPathElse_40, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathCond_38, SlotInfo_6, Cond0_35, &Cond_41);
              hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathThen_39, SlotInfo_6, Then0_36, &Then_42);
              hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathElse_40, SlotInfo_6, Else0_37, &Else_43);
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (Vars_34));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 2) = ((MR_Box) (Cond_41));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 3) = ((MR_Box) (Then_42));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 4) = ((MR_Box) (Else_43));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_9, (MR_Integer) 1))));
              MR_Word ShortHand_93;

              switch (MR_tag((MR_Word) ShortHand0_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_path.fill_goal_path_slots\'/4", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_83 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 1))));
                    MR_Word Inner_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 3))));
                    MR_Word MainGoal0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 5))));
                    MR_Word OrElseInners_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_82, (MR_Integer) 6))));
                    MR_Word RevPathMain_90;
                    MR_Word MainGoal_91;
                    MR_Word OrElseGoals_92;

                    {
                      RevPathMain_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RevPathMain_90, 0) = ((MR_Box) (RevGoalPath_5));
                      MR_hl_field(MR_mktag(1), RevPathMain_90, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                    }
                    hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathMain_90, SlotInfo_6, MainGoal0_87, &MainGoal_91);
                    hlds__goal_path__fill_orelse_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, OrElseGoals0_88, &OrElseGoals_92);
                    {
                      ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 0) = (MR_Box) ((MR_Unsigned) (GoalType_83));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 1) = ((MR_Box) (Outer_84));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 2) = ((MR_Box) (Inner_85));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 3) = ((MR_Box) (MaybeOutputVars_86));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 4) = ((MR_Box) (MainGoal_91));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 5) = ((MR_Box) (OrElseGoals_92));
                      MR_hl_field(MR_mktag(1), ShortHand_93, 6) = ((MR_Box) (OrElseInners_89));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_94 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_82, (MR_Integer) 0))));
                    MR_Word ResultVar_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_82, (MR_Integer) 1))));
                    MR_Word SubGoal0_116 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_82, (MR_Integer) 2))));
                    MR_Word SubRevGoalPath_117;
                    MR_Word SubGoal_118;

                    {
                      SubRevGoalPath_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SubRevGoalPath_117, 0) = ((MR_Box) (RevGoalPath_5));
                      MR_hl_field(MR_mktag(1), SubRevGoalPath_117, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                    }
                    hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_117, SlotInfo_6, SubGoal0_116, &SubGoal_118);
                    {
                      ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_93, 0) = ((MR_Box) (MaybeIO_94));
                      MR_hl_field(MR_mktag(2), ShortHand_93, 1) = ((MR_Box) (ResultVar_95));
                      MR_hl_field(MR_mktag(2), ShortHand_93, 2) = ((MR_Box) (SubGoal_118));
                    }
                  }
                  break;
              }
              {
                GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_15, 1) = ((MR_Box) (ShortHand_93));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_11));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Clause_12;
    MR_Integer conv2_NextClauseNum_14;
    MR_Word conv1_STATE_VARIABLE_GoalNumCounter_21;
    MR_Word conv0_STATE_VARIABLE_ContainingGoalList_23;

    hlds__goal_path__fill_slots_in_clause_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Clause_12, ((MR_Integer) (wrapper_arg_3)), &conv2_NextClauseNum_14, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_GoalNumCounter_21, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ContainingGoalList_23);
    *wrapper_arg_2 = ((MR_Box) (conv3_Clause_12));
    *wrapper_arg_4 = ((MR_Box) (conv2_NextClauseNum_14));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_GoalNumCounter_21));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ContainingGoalList_23));
  }
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ContainingGoalMap_6,
  MR_Word ClausesInfo0_7,
  MR_Word * ClausesInfo_8)
{
  {
    MR_Word ClausesRep0_9;
    MR_Word ItemNumbers_10;
    MR_Word Clauses0_11;
    MR_Word VarTypes_12;
    MR_Word SlotInfo_13;
    MR_Word Clauses_14;
    MR_Word ContainingGoalList_17;
    MR_Word ClausesRep_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Box conv6_Var_15;
    MR_Box conv5_Var_16;
    MR_Box conv4_ContainingGoalList_17;

    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_7, &ClausesRep0_9, &ItemNumbers_10);
    hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_9, &Clauses0_11);
    hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(ClausesInfo0_7, &VarTypes_12);
    {
      SlotInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotInfo_13, 0) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), SlotInfo_13, 1) = ((MR_Box) (VarTypes_12));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__goal_path_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (SlotInfo_13));
    }
    Var_21 = mercury__counter__init_1_f_0((MR_Integer) 1);
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__goal_path_scalar_common_2[0]), Var_19, Clauses0_11, &Clauses_14, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_15, ((MR_Box) (Var_21)), &conv5_Var_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ContainingGoalList_17);
    ContainingGoalList_17 = ((MR_Word) (conv4_ContainingGoalList_17));
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalList_17, ContainingGoalMap_6);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_14, &ClausesRep_18);
    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_18, ItemNumbers_10, ClausesInfo0_7, ClausesInfo_8);
  }
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ContainingGoalMap_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  {
    MR_Word VarTypes_8;
    MR_Word Goal0_9;
    MR_Word Goal_10;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &VarTypes_8);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_9);
    hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(ModuleInfo_5, VarTypes_8, ContainingGoalMap_6, Goal0_9, &Goal_10);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
  }
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypes_7,
  MR_Word * ContainingGoalMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  {
    MR_Word SlotInfo_11;
    MR_Word ContainingGoalList_13;
    MR_Word Var_15;
    MR_Word Var_12;

    {
      SlotInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotInfo_11, 0) = ((MR_Box) (ModuleInfo_6));
      MR_hl_field(MR_mktag(0), SlotInfo_11, 1) = ((MR_Box) (VarTypes_7));
    }
    Var_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_11, (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &ContainingGoalList_13, Goal0_9, Goal_10);
    mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalList_13, ContainingGoalMap_8);
  }
}

static void MR_CALL 
hlds__goal_path__fill_orelse_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastOrElseNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainingGoalList_7 = STATE_VARIABLE_ContainingGoalList_0_6;
    *STATE_VARIABLE_GoalNumCounter_5 = STATE_VARIABLE_GoalNumCounter_0_4;
  }
  else
  {
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurOrElseNum_28 = (MR_Integer) ((MR_Unsigned) LastOrElseNum_3 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (CurOrElseNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_orelse_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurOrElseNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_27));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_switch_id_slots_10_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastArmNum_3,
  MR_Word MaybeNumFunctors_4,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_5,
  MR_Word * STATE_VARIABLE_GoalNumCounter_6,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_7,
  MR_Word * STATE_VARIABLE_ContainingGoalList_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10)
{
  if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainingGoalList_8 = STATE_VARIABLE_ContainingGoalList_0_7;
    *STATE_VARIABLE_GoalNumCounter_6 = STATE_VARIABLE_GoalNumCounter_0_5;
  }
  else
  {
    MR_Word Case0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
    MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 1))));
    MR_Word Case_29;
    MR_Word Cases_30;
    MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 0))));
    MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 1))));
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_27, (MR_Integer) 2))));
    MR_Integer CurArmNum_34 = (MR_Integer) ((MR_Unsigned) LastArmNum_3 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word ContainingGoal_35;
    MR_Word Goal_36;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_GoalNumCounter_43_43;
    MR_Word STATE_VARIABLE_ContainingGoalList_44_44;

    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (CurArmNum_34));
      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (MaybeNumFunctors_4));
    }
    {
      ContainingGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContainingGoal_35, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(MR_mktag(1), ContainingGoal_35, 1) = ((MR_Box) (Var_42));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_35, STATE_VARIABLE_GoalNumCounter_0_5, &STATE_VARIABLE_GoalNumCounter_43_43, STATE_VARIABLE_ContainingGoalList_0_7, &STATE_VARIABLE_ContainingGoalList_44_44, Goal0_33, &Goal_36);
    {
      Case_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_29, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(MR_mktag(0), Case_29, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(MR_mktag(0), Case_29, 2) = ((MR_Box) (Goal_36));
    }
    hlds__goal_path__fill_switch_id_slots_10_p_0(SlotInfo_1, GoalId_2, CurArmNum_34, MaybeNumFunctors_4, STATE_VARIABLE_GoalNumCounter_43_43, STATE_VARIABLE_GoalNumCounter_6, STATE_VARIABLE_ContainingGoalList_44_44, STATE_VARIABLE_ContainingGoalList_8, Cases0_28, &Cases_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_29));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_30));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_disj_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastDisjunctNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainingGoalList_7 = STATE_VARIABLE_ContainingGoalList_0_6;
    *STATE_VARIABLE_GoalNumCounter_5 = STATE_VARIABLE_GoalNumCounter_0_4;
  }
  else
  {
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurDisjunctNum_28 = (MR_Integer) ((MR_Unsigned) LastDisjunctNum_3 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_35, 0) = ((MR_Box) (CurDisjunctNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_disj_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurDisjunctNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_27));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_conj_id_slots_9_p_0(
  MR_Word SlotInfo_1,
  MR_Word GoalId_2,
  MR_Integer LastConjunctNum_3,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_4,
  MR_Word * STATE_VARIABLE_GoalNumCounter_5,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_6,
  MR_Word * STATE_VARIABLE_ContainingGoalList_7,
  MR_Word HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ContainingGoalList_7 = STATE_VARIABLE_ContainingGoalList_0_6;
    *STATE_VARIABLE_GoalNumCounter_5 = STATE_VARIABLE_GoalNumCounter_0_4;
  }
  else
  {
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurConjunctNum_28 = (MR_Integer) ((MR_Unsigned) LastConjunctNum_3 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CurConjunctNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(MR_mktag(1), ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_conj_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurConjunctNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_27));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
  MR_Word SlotInfo_9,
  MR_Word ContainingGoal_10,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_101,
  MR_Word * STATE_VARIABLE_GoalNumCounter_102,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_103,
  MR_Word * STATE_VARIABLE_ContainingGoalList_104,
  MR_Word Goal0_13,
  MR_Word * Goal_14)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    MR_Integer GoalNum_17;
    MR_Word GoalId_18;
    MR_Word GoalInfo_19;
    MR_Word GoalExpr_38;
    MR_Word STATE_VARIABLE_GoalNumCounter_105_105;
    MR_Word STATE_VARIABLE_ContainingGoalList_106_106;
    MR_Word Var_107;

    mercury__counter__allocate_3_p_0(&GoalNum_17, STATE_VARIABLE_GoalNumCounter_0_101, &STATE_VARIABLE_GoalNumCounter_105_105);
    GoalId_18 = (MR_Word) (GoalNum_17);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_18, GoalInfo0_16, &GoalInfo_19);
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (GoalId_18));
      MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (ContainingGoal_10));
    }
    {
      STATE_VARIABLE_ContainingGoalList_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainingGoalList_106_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainingGoalList_106_106, 1) = ((MR_Box) (STATE_VARIABLE_ContainingGoalList_0_103));
    }
    switch (MR_tag((MR_Word) GoalExpr0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_71 = (MR_Word) ((MR_Word) (GoalExpr0_15));
          MR_Word SubGoal_72;
          MR_Word Var_137;

          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (GoalId_18));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 12U));
          }
          hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_137, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, SubGoal0_71, &SubGoal_72);
          GoalExpr_38 = (MR_Word) ((MR_Word) (SubGoal_72));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 0))));
          MR_Word RHS0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 1))));
          MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 2))));
          MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 3))));
          MR_Word Context_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_15, (MR_Integer) 4))));

          switch (MR_tag((MR_Word) RHS0_40)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                GoalExpr_38 = GoalExpr0_15;
                *STATE_VARIABLE_GoalNumCounter_102 = STATE_VARIABLE_GoalNumCounter_105_105;
                *STATE_VARIABLE_ContainingGoalList_104 = STATE_VARIABLE_ContainingGoalList_106_106;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NonLocals_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 2))));
                MR_Word QuantVars_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 3))));
                MR_Word LambdaModes_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 4))));
                MR_Word Detism_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 5))) & (MR_Integer) 7);
                MR_Word LambdaGoal0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 6))));
                MR_Word LambdaGoal_53;
                MR_Word RHS_54;
                MR_Word Var_150;
                MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), RHS0_40, (MR_Integer) 0)));

                {
                  Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (GoalId_18));
                  MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 16U));
                }
                hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_150, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, LambdaGoal0_52, &LambdaGoal_53);
                {
                  RHS_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), RHS_54, 0) = (MR_Box) (packed_word_3);
                  MR_hl_field(MR_mktag(2), RHS_54, 1) = NULL;
                  MR_hl_field(MR_mktag(2), RHS_54, 2) = ((MR_Box) (NonLocals_48));
                  MR_hl_field(MR_mktag(2), RHS_54, 3) = ((MR_Box) (QuantVars_49));
                  MR_hl_field(MR_mktag(2), RHS_54, 4) = ((MR_Box) (LambdaModes_50));
                  MR_hl_field(MR_mktag(2), RHS_54, 5) = (MR_Box) ((MR_Unsigned) (Detism_51));
                  MR_hl_field(MR_mktag(2), RHS_54, 6) = ((MR_Box) (LambdaGoal_53));
                }
                {
                  GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), GoalExpr_38, 0) = ((MR_Box) (LHS_39));
                  MR_hl_field(MR_mktag(1), GoalExpr_38, 1) = ((MR_Box) (RHS_54));
                  MR_hl_field(MR_mktag(1), GoalExpr_38, 2) = ((MR_Box) (Mode_41));
                  MR_hl_field(MR_mktag(1), GoalExpr_38, 3) = ((MR_Box) (Kind_42));
                  MR_hl_field(MR_mktag(1), GoalExpr_38, 4) = ((MR_Box) (Context_43));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          GoalExpr_38 = GoalExpr0_15;
          *STATE_VARIABLE_GoalNumCounter_102 = STATE_VARIABLE_GoalNumCounter_105_105;
          *STATE_VARIABLE_ContainingGoalList_104 = STATE_VARIABLE_ContainingGoalList_106_106;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_38 = GoalExpr0_15;
              *STATE_VARIABLE_GoalNumCounter_102 = STATE_VARIABLE_GoalNumCounter_105_105;
              *STATE_VARIABLE_ContainingGoalList_104 = STATE_VARIABLE_ContainingGoalList_106_106;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Goals_61;

              hlds__goal_path__fill_conj_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, Goals0_60, &Goals_61);
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_59));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (Goals_61));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_154 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Goals_155;

              hlds__goal_path__fill_disj_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, Goals0_154, &Goals_155);
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Goals_155));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word CanFail_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word VarTypes_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_9, (MR_Integer) 1))));
              MR_Word ModuleInfo_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_9, (MR_Integer) 0))));
              MR_Word Type_67;
              MR_Word MaybeNumFunctors_69;
              MR_Word Cases_70;
              MR_Integer NumFunctors_68;

              hlds__vartypes__lookup_var_type_3_p_0(VarTypes_65, Var_62, &Type_67);
              succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_66, Type_67, &NumFunctors_68);
              if (succeeded)
                {
                  MaybeNumFunctors_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeNumFunctors_69, 0) = ((MR_Box) (NumFunctors_68));
                }
              else
                MaybeNumFunctors_69 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__goal_path__fill_switch_id_slots_10_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, MaybeNumFunctors_69, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, Cases0_64, &Cases_70);
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Var_62));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = (MR_Box) ((MR_Unsigned) (CanFail_63));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 3) = ((MR_Box) (Cases_70));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word InnerInfo_75;
              MR_Word OuterDetism_76;
              MR_Word InnerDetism_77;
              MR_Word MaybeCut_78;
              MR_Word Var_133;
              MR_Word Var_136;
              MR_Word SubGoal0_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word SubGoal_157;

              InnerInfo_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_156, (MR_Integer) 1))));
              OuterDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_19);
              InnerDetism_77 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_75);
              succeeded = (InnerDetism_77 == OuterDetism_76);
              if (succeeded)
                MaybeCut_78 = (MR_Integer) 1;
              else
                MaybeCut_78 = (MR_Integer) 0;
              {
                Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_136, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_78));
              }
              {
                Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (GoalId_18));
                MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_136));
              }
              hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_133, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, SubGoal0_156, &SubGoal_157);
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Reason_73));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (SubGoal_157));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word Cond0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 2))));
              MR_Word Then0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 3))));
              MR_Word Else0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 4))));
              MR_Word Cond_83;
              MR_Word Then_84;
              MR_Word Else_85;
              MR_Word Var_121;
              MR_Word STATE_VARIABLE_GoalNumCounter_122_122;
              MR_Word STATE_VARIABLE_ContainingGoalList_123_123;
              MR_Word Var_125;
              MR_Word STATE_VARIABLE_GoalNumCounter_126_126;
              MR_Word STATE_VARIABLE_ContainingGoalList_127_127;
              MR_Word Var_129;

              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (GoalId_18));
                MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_121, STATE_VARIABLE_GoalNumCounter_105_105, &STATE_VARIABLE_GoalNumCounter_122_122, STATE_VARIABLE_ContainingGoalList_106_106, &STATE_VARIABLE_ContainingGoalList_123_123, Cond0_80, &Cond_83);
              {
                Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (GoalId_18));
                MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              }
              hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_125, STATE_VARIABLE_GoalNumCounter_122_122, &STATE_VARIABLE_GoalNumCounter_126_126, STATE_VARIABLE_ContainingGoalList_123_123, &STATE_VARIABLE_ContainingGoalList_127_127, Then0_81, &Then_84);
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (GoalId_18));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 8U));
              }
              hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_129, STATE_VARIABLE_GoalNumCounter_126_126, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_127_127, STATE_VARIABLE_ContainingGoalList_104, Else0_82, &Else_85);
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (Vars_79));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 2) = ((MR_Box) (Cond_83));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 3) = ((MR_Box) (Then_84));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 4) = ((MR_Box) (Else_85));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_15, (MR_Integer) 1))));
              MR_Word ShortHand_96;

              switch (MR_tag((MR_Word) ShortHand0_86)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_path.fill_goal_id_slots\'/8", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 1))));
                    MR_Word Inner_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 3))));
                    MR_Word MainGoal0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 5))));
                    MR_Word OrElseInners_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_86, (MR_Integer) 6))));
                    MR_Word MainGoal_94;
                    MR_Word OrElseGoals_95;
                    MR_Word Var_114;
                    MR_Word STATE_VARIABLE_GoalNumCounter_115_115;
                    MR_Word STATE_VARIABLE_ContainingGoalList_116_116;

                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (GoalId_18));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                    }
                    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_114, STATE_VARIABLE_GoalNumCounter_105_105, &STATE_VARIABLE_GoalNumCounter_115_115, STATE_VARIABLE_ContainingGoalList_106_106, &STATE_VARIABLE_ContainingGoalList_116_116, MainGoal0_91, &MainGoal_94);
                    hlds__goal_path__fill_orelse_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_115_115, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_116_116, STATE_VARIABLE_ContainingGoalList_104, OrElseGoals0_92, &OrElseGoals_95);
                    {
                      ShortHand_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 0) = (MR_Box) ((MR_Unsigned) (GoalType_87));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 1) = ((MR_Box) (Outer_88));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 2) = ((MR_Box) (Inner_89));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 3) = ((MR_Box) (MaybeOutputVars_90));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 4) = ((MR_Box) (MainGoal_94));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 5) = ((MR_Box) (OrElseGoals_95));
                      MR_hl_field(MR_mktag(1), ShortHand_96, 6) = ((MR_Box) (OrElseInners_93));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_97 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_86, (MR_Integer) 0))));
                    MR_Word ResultVar_98 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_86, (MR_Integer) 1))));
                    MR_Word Var_110;
                    MR_Word SubGoal0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_86, (MR_Integer) 2))));
                    MR_Word SubGoal_159;

                    {
                      Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (GoalId_18));
                      MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                    }
                    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_110, STATE_VARIABLE_GoalNumCounter_105_105, STATE_VARIABLE_GoalNumCounter_102, STATE_VARIABLE_ContainingGoalList_106_106, STATE_VARIABLE_ContainingGoalList_104, SubGoal0_158, &SubGoal_159);
                    {
                      ShortHand_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_96, 0) = ((MR_Box) (MaybeIO_97));
                      MR_hl_field(MR_mktag(2), ShortHand_96, 1) = ((MR_Box) (ResultVar_98));
                      MR_hl_field(MR_mktag(2), ShortHand_96, 2) = ((MR_Box) (SubGoal_159));
                    }
                  }
                  break;
              }
              {
                GoalExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), GoalExpr_38, 1) = ((MR_Box) (ShortHand_96));
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_38));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_19));
    }
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_path____Unify____containing_goal_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_path____Compare____containing_goal_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__goal_path____Unify____slot_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__goal_path____Compare____slot_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_path__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_path.
