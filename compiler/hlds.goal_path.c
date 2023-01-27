/*
** Automatically generated from `goal_path.m'
** by the Mercury compiler,
** version rotd-2023-01-27
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "counter.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct2 hlds__goal_path__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_path__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

static const MR_FA_TypeInfo_Struct1 hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

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
  MR_Word STATE_VARIABLE_GoalNumCounter_0_100,
  MR_Word * STATE_VARIABLE_GoalNumCounter_101,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_102,
  MR_Word * STATE_VARIABLE_ContainingGoalList_103,
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
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__goal_path_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__goal_path_scalar_common_3[1][12] = {
  /* row   0 */
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



#include "array.mh"



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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__goal_path____Unify____containing_goal_list_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____containing_goal_list_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "containing_goal_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__goal_path__list__ti_list_1pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__goal_path__hlds__goal_path__field_types_slot_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)
};

static const MR_ConstString hlds__goal_path__hlds__goal_path__field_names_slot_info_0_0[2] = {
  (MR_String) "slot_info_module_info",
  (MR_String) "slot_info_var_table"
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__goal_path____Unify____slot_info_0_0_10001)),
  ((MR_Box) (hlds__goal_path____Compare____slot_info_0_0_10001)),
  (MR_String) "hlds.goal_path",
  (MR_String) "slot_info",
  { hlds__goal_path__hlds__goal_path__du_name_ordered_slot_info_0 },
  { hlds__goal_path__hlds__goal_path__du_ptag_ordered_slot_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__goal_path__hlds__goal_path__functor_number_map_slot_info_0,

};

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__var_table____Compare____var_table_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__goal_path_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__goal_path_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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
  MR_Word Goal0_17;
  MR_Word ContainingGoal_18;
  MR_Word Goal_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  Goal0_17 = hlds__hlds_clauses__clause_body_1_f_0(Clause0_11);
  Var_24 = mdbcomp__goal_path__whole_body_goal_id_0_f_0();
  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (CurClauseNum_13));
  }
  {
    ContainingGoal_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContainingGoal_18, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, ContainingGoal_18, 1) = ((MR_Box) (Var_25));
  }
  *NextClauseNum_14 = (MR_Integer) ((MR_Unsigned) CurClauseNum_13 + (MR_Unsigned) 1);
  hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_10, ContainingGoal_18, STATE_VARIABLE_GoalNumCounter_0_20, STATE_VARIABLE_GoalNumCounter_21, STATE_VARIABLE_ContainingGoalList_0_22, STATE_VARIABLE_ContainingGoalList_23, Goal0_17, &Goal_19);
  Var_27 = ((MR_Word) ((MR_hl_field(0, Clause0_11, (MR_Integer) 0))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Clause0_11, (MR_Integer) 2))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, Clause0_11, (MR_Integer) 3))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, Clause0_11, (MR_Integer) 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Clause_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
  }
}

void MR_CALL 
hlds__goal_path__fill_goal_path_slots_in_proc_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcInfo_0_10,
  MR_Word * STATE_VARIABLE_ProcInfo_11)
{
  MR_Word VarTable_6;
  MR_Word SlotInfo_7;
  MR_Word Goal0_8;
  MR_Word Goal_9;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_10, &VarTable_6);
  {
    SlotInfo_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotInfo_7, 0) = ((MR_Box) (ModuleInfo_4));
    MR_hl_field(0, SlotInfo_7, 1) = ((MR_Box) (VarTable_6));
  }
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_10, &Goal0_8);
  hlds__goal_path__fill_goal_path_slots_4_p_0((MR_Word) ((MR_Unsigned) 0U), SlotInfo_7, Goal0_8, &Goal_9);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_9, STATE_VARIABLE_ProcInfo_0_10, STATE_VARIABLE_ProcInfo_11);
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
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurOrElseNum_16 = (MR_Integer) ((MR_Unsigned) LastOrElseNum_2 + (MR_Unsigned) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (CurOrElseNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(1, RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_orelse_path_slots_5_p_0(ParentRevGoalPath_1, CurOrElseNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
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
    MR_Word Case0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Cases0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Case_17;
    MR_Word Cases_18;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_15, (MR_Integer) 2))));
    MR_Integer CurArmNum_22 = (MR_Integer) ((MR_Unsigned) LastArmNum_2 + (MR_Unsigned) 1);
    MR_Word RevGoalPath_23;
    MR_Word Goal_24;
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (CurArmNum_22));
      MR_hl_field(3, Var_26, 2) = ((MR_Box) (MaybeNumFunctors_3));
    }
    {
      RevGoalPath_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevGoalPath_23, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(1, RevGoalPath_23, 1) = ((MR_Box) (Var_26));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_23, SlotInfo_4, Goal0_21, &Goal_24);
    {
      Case_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_17, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_17, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_17, 2) = ((MR_Box) (Goal_24));
    }
    hlds__goal_path__fill_switch_path_slots_6_p_0(ParentRevGoalPath_1, CurArmNum_22, MaybeNumFunctors_3, SlotInfo_4, Cases0_16, &Cases_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_18));
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
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurDisjunctNum_16 = (MR_Integer) ((MR_Unsigned) LastDisjunctNum_2 + (MR_Unsigned) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_19, 0) = ((MR_Box) (CurDisjunctNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(1, RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_disj_path_slots_5_p_0(ParentRevGoalPath_1, CurDisjunctNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
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
    MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_14;
    MR_Word Goals_15;
    MR_Integer CurConjunctNum_16 = (MR_Integer) ((MR_Unsigned) LastConjunctNum_2 + (MR_Unsigned) 1);
    MR_Word RevGoalPath_17;
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (CurConjunctNum_16));
    }
    {
      RevGoalPath_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevGoalPath_17, 0) = ((MR_Box) (ParentRevGoalPath_1));
      MR_hl_field(1, RevGoalPath_17, 1) = ((MR_Box) (Var_19));
    }
    hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_17, SlotInfo_3, Goal0_12, &Goal_14);
    hlds__goal_path__fill_conj_path_slots_5_p_0(ParentRevGoalPath_1, CurConjunctNum_16, SlotInfo_3, Goals0_13, &Goals_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_15));
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
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_10 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));
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
          SubRevGoalPath_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SubRevGoalPath_26, 0) = ((MR_Box) (RevGoalPath_5));
          MR_hl_field(1, SubRevGoalPath_26, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        }
        hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_26, SlotInfo_6, SubGoal0_25, &SubGoal_27);
        GoalExpr_15 = (MR_Word) ((MR_Word) (SubGoal_27));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 0))));
        MR_Word RHS0_45 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 1))));
        MR_Word Mode_46 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 2))));
        MR_Word Kind_47 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 3))));
        MR_Word Context_48 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, (MR_Integer) 4))));
        MR_Word RHS_58;

        switch (MR_tag((MR_Word) RHS0_45)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            RHS_58 = RHS0_45;
            break;
          case (MR_Integer) 2:
            {
              MR_Word LambdaNonLocals_53 = ((MR_Word) ((MR_hl_field(2, RHS0_45, (MR_Integer) 2))));
              MR_Word ArgVarsModes_54 = ((MR_Word) ((MR_hl_field(2, RHS0_45, (MR_Integer) 3))));
              MR_Word Detism_55 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_45, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_56 = ((MR_Word) ((MR_hl_field(2, RHS0_45, (MR_Integer) 5))));
              MR_Word LambdaGoal_57;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(2, RHS0_45, (MR_Integer) 0)));

              hlds__goal_path__fill_goal_path_slots_4_p_0(RevGoalPath_5, SlotInfo_6, LambdaGoal0_56, &LambdaGoal_57);
              {
                RHS_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_58, 0) = (MR_Box) (packed_word_3);
                MR_hl_field(2, RHS_58, 1) = NULL;
                MR_hl_field(2, RHS_58, 2) = ((MR_Box) (LambdaNonLocals_53));
                MR_hl_field(2, RHS_58, 3) = ((MR_Box) (ArgVarsModes_54));
                MR_hl_field(2, RHS_58, 4) = (MR_Box) ((MR_Unsigned) (Detism_55));
                MR_hl_field(2, RHS_58, 5) = ((MR_Box) (LambdaGoal_57));
              }
            }
            break;
        }
        {
          GoalExpr_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GoalExpr_15, 0) = ((MR_Box) (LHS_44));
          MR_hl_field(1, GoalExpr_15, 1) = ((MR_Box) (RHS_58));
          MR_hl_field(1, GoalExpr_15, 2) = ((MR_Box) (Mode_46));
          MR_hl_field(1, GoalExpr_15, 3) = ((MR_Box) (Kind_47));
          MR_hl_field(1, GoalExpr_15, 4) = ((MR_Box) (Context_48));
        }
      }
      break;
    case (MR_Integer) 2:
      GoalExpr_15 = GoalExpr0_9;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          GoalExpr_15 = GoalExpr0_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Goals_14;

            hlds__goal_path__fill_conj_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, Goals0_13, &Goals_14);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_15, 1) = (MR_Box) ((MR_Unsigned) (ConjType_12));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Goals_14));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Goals_111;

            hlds__goal_path__fill_disj_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, Goals0_110, &Goals_111);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Goals_111));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word CanFail_17 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word VarTable_19 = ((MR_Word) ((MR_hl_field(0, SlotInfo_6, (MR_Integer) 1))));
            MR_Word ModuleInfo_20 = ((MR_Word) ((MR_hl_field(0, SlotInfo_6, (MR_Integer) 0))));
            MR_Word Type_21;
            MR_Word MaybeNumFunctors_23;
            MR_Word Cases_24;
            MR_Integer NumFunctors_22;

            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_19, Var_16, &Type_21);
            succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_20, Type_21, &NumFunctors_22);
            if (succeeded)
              {
                MaybeNumFunctors_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeNumFunctors_23, 0) = ((MR_Box) (NumFunctors_22));
              }
            else
              MaybeNumFunctors_23 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__goal_path__fill_switch_path_slots_6_p_0(RevGoalPath_5, (MR_Integer) 0, MaybeNumFunctors_23, SlotInfo_6, Cases0_18, &Cases_24);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Var_16));
              MR_hl_field(3, GoalExpr_15, 2) = (MR_Box) ((MR_Unsigned) (CanFail_17));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Cases_24));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word InnerInfo_30;
            MR_Word OuterDetism_31;
            MR_Word InnerDetism_32;
            MR_Word MaybeCut_33;
            MR_Word Var_101;
            MR_Word SubGoal0_112 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word SubRevGoalPath_113;
            MR_Word SubGoal_114;

            InnerInfo_30 = ((MR_Word) ((MR_hl_field(0, SubGoal0_112, (MR_Integer) 1))));
            OuterDetism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_11);
            InnerDetism_32 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_30);
            succeeded = (InnerDetism_32 == OuterDetism_31);
            if (succeeded)
              MaybeCut_33 = (MR_Integer) 1;
            else
              MaybeCut_33 = (MR_Integer) 0;
            {
              Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_101, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_33));
            }
            {
              SubRevGoalPath_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SubRevGoalPath_113, 0) = ((MR_Box) (RevGoalPath_5));
              MR_hl_field(1, SubRevGoalPath_113, 1) = ((MR_Box) (Var_101));
            }
            hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_113, SlotInfo_6, SubGoal0_112, &SubGoal_114);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Reason_28));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (SubGoal_114));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word Cond0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 2))));
            MR_Word Then0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 3))));
            MR_Word Else0_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 4))));
            MR_Word RevPathCond_38;
            MR_Word RevPathThen_39;
            MR_Word RevPathElse_40;
            MR_Word Cond_41;
            MR_Word Then_42;
            MR_Word Else_43;

            {
              RevPathCond_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RevPathCond_38, 0) = ((MR_Box) (RevGoalPath_5));
              MR_hl_field(1, RevPathCond_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              RevPathThen_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RevPathThen_39, 0) = ((MR_Box) (RevGoalPath_5));
              MR_hl_field(1, RevPathThen_39, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            {
              RevPathElse_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RevPathElse_40, 0) = ((MR_Box) (RevGoalPath_5));
              MR_hl_field(1, RevPathElse_40, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathCond_38, SlotInfo_6, Cond0_35, &Cond_41);
            hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathThen_39, SlotInfo_6, Then0_36, &Then_42);
            hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathElse_40, SlotInfo_6, Else0_37, &Else_43);
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (Vars_34));
              MR_hl_field(3, GoalExpr_15, 2) = ((MR_Box) (Cond_41));
              MR_hl_field(3, GoalExpr_15, 3) = ((MR_Box) (Then_42));
              MR_hl_field(3, GoalExpr_15, 4) = ((MR_Box) (Else_43));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, (MR_Integer) 1))));
            MR_Word ShortHand_92;

            switch (MR_tag((MR_Word) ShortHand0_81)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_path.fill_goal_path_slots\'/4", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_82 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_83 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 1))));
                  MR_Word Inner_84 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_85 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 3))));
                  MR_Word MainGoal0_86 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_87 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 5))));
                  MR_Word OrElseInners_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_81, (MR_Integer) 6))));
                  MR_Word RevPathMain_89;
                  MR_Word MainGoal_90;
                  MR_Word OrElseGoals_91;

                  {
                    RevPathMain_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, RevPathMain_89, 0) = ((MR_Box) (RevGoalPath_5));
                    MR_hl_field(1, RevPathMain_89, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                  }
                  hlds__goal_path__fill_goal_path_slots_4_p_0(RevPathMain_89, SlotInfo_6, MainGoal0_86, &MainGoal_90);
                  hlds__goal_path__fill_orelse_path_slots_5_p_0(RevGoalPath_5, (MR_Integer) 0, SlotInfo_6, OrElseGoals0_87, &OrElseGoals_91);
                  {
                    ShortHand_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_92, 0) = (MR_Box) ((MR_Unsigned) (GoalType_82));
                    MR_hl_field(1, ShortHand_92, 1) = ((MR_Box) (Outer_83));
                    MR_hl_field(1, ShortHand_92, 2) = ((MR_Box) (Inner_84));
                    MR_hl_field(1, ShortHand_92, 3) = ((MR_Box) (MaybeOutputVars_85));
                    MR_hl_field(1, ShortHand_92, 4) = ((MR_Box) (MainGoal_90));
                    MR_hl_field(1, ShortHand_92, 5) = ((MR_Box) (OrElseGoals_91));
                    MR_hl_field(1, ShortHand_92, 6) = ((MR_Box) (OrElseInners_88));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_93 = ((MR_Word) ((MR_hl_field(2, ShortHand0_81, (MR_Integer) 0))));
                  MR_Word ResultVar_94 = ((MR_Word) ((MR_hl_field(2, ShortHand0_81, (MR_Integer) 1))));
                  MR_Word SubGoal0_115 = ((MR_Word) ((MR_hl_field(2, ShortHand0_81, (MR_Integer) 2))));
                  MR_Word SubRevGoalPath_116;
                  MR_Word SubGoal_117;

                  {
                    SubRevGoalPath_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SubRevGoalPath_116, 0) = ((MR_Box) (RevGoalPath_5));
                    MR_hl_field(1, SubRevGoalPath_116, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  }
                  hlds__goal_path__fill_goal_path_slots_4_p_0(SubRevGoalPath_116, SlotInfo_6, SubGoal0_115, &SubGoal_117);
                  {
                    ShortHand_92 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_92, 0) = ((MR_Box) (MaybeIO_93));
                    MR_hl_field(2, ShortHand_92, 1) = ((MR_Box) (ResultVar_94));
                    MR_hl_field(2, ShortHand_92, 2) = ((MR_Box) (SubGoal_117));
                  }
                }
                break;
            }
            {
              GoalExpr_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_15, 1) = ((MR_Box) (ShortHand_92));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_11));
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
  MR_Box closure = closure_arg;
  MR_Word conv3_Clause_12;
  MR_Integer conv2_NextClauseNum_14;
  MR_Word conv1_STATE_VARIABLE_GoalNumCounter_21;
  MR_Word conv0_STATE_VARIABLE_ContainingGoalList_23;

  hlds__goal_path__fill_slots_in_clause_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Clause_12, ((MR_Integer) (wrapper_arg_3)), &conv2_NextClauseNum_14, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_GoalNumCounter_21, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_ContainingGoalList_23);
  *wrapper_arg_2 = ((MR_Box) (conv3_Clause_12));
  *wrapper_arg_4 = ((MR_Box) (conv2_NextClauseNum_14));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_GoalNumCounter_21));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_ContainingGoalList_23));
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ContainingGoalMap_6,
  MR_Word ClausesInfo0_7,
  MR_Word * ClausesInfo_8)
{
  MR_Word ClausesRep0_9;
  MR_Word ItemNumbers_10;
  MR_Word Clauses0_11;
  MR_Word VarTable_12;
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
  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(ClausesInfo0_7, &VarTable_12);
  {
    SlotInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotInfo_13, 0) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, SlotInfo_13, 1) = ((MR_Box) (VarTable_12));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__goal_path_scalar_common_3[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (SlotInfo_13));
  }
  Var_21 = mercury__counter__init_1_f_0((MR_Integer) 1);
  mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), (MR_Word) (&hlds__goal_path_scalar_common_2[0]), Var_19, Clauses0_11, &Clauses_14, ((MR_Box) ((MR_Integer) 1)), &conv6_Var_15, ((MR_Box) (Var_21)), &conv5_Var_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ContainingGoalList_17);
  ContainingGoalList_17 = ((MR_Word) (conv4_ContainingGoalList_17));
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalList_17, ContainingGoalMap_6);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_14, &ClausesRep_18);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_18, ItemNumbers_10, ClausesInfo0_7, ClausesInfo_8);
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word * ContainingGoalMap_6,
  MR_Word STATE_VARIABLE_ProcInfo_0_11,
  MR_Word * STATE_VARIABLE_ProcInfo_12)
{
  MR_Word VarTable_8;
  MR_Word Goal0_9;
  MR_Word Goal_10;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &VarTable_8);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_11, &Goal0_9);
  hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(ModuleInfo_5, VarTable_8, ContainingGoalMap_6, Goal0_9, &Goal_10);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_10, STATE_VARIABLE_ProcInfo_0_11, STATE_VARIABLE_ProcInfo_12);
}

void MR_CALL 
hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word VarTypeSrc_7,
  MR_Word * ContainingGoalMap_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10)
{
  MR_Word SlotInfo_11;
  MR_Word ContainingGoalList_13;
  MR_Word Var_15;
  MR_Word Var_12;

  {
    SlotInfo_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SlotInfo_11, 0) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, SlotInfo_11, 1) = ((MR_Box) (VarTypeSrc_7));
  }
  Var_15 = mercury__counter__init_1_f_0((MR_Integer) 0);
  hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_11, (MR_Word) ((MR_Unsigned) 0U), Var_15, &Var_12, (MR_Word) ((MR_Unsigned) 0U), &ContainingGoalList_13, Goal0_9, Goal_10);
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0), ContainingGoalList_13, ContainingGoalMap_8);
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
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurOrElseNum_28 = (MR_Integer) ((MR_Unsigned) LastOrElseNum_3 + (MR_Unsigned) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (CurOrElseNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(1, ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_orelse_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurOrElseNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_27));
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
    MR_Word Case0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 0))));
    MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 1))));
    MR_Word Case_29;
    MR_Word Cases_30;
    MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(0, Case0_27, (MR_Integer) 0))));
    MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(0, Case0_27, (MR_Integer) 1))));
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(0, Case0_27, (MR_Integer) 2))));
    MR_Integer CurArmNum_34 = (MR_Integer) ((MR_Unsigned) LastArmNum_3 + (MR_Unsigned) 1);
    MR_Word ContainingGoal_35;
    MR_Word Goal_36;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_GoalNumCounter_43_43;
    MR_Word STATE_VARIABLE_ContainingGoalList_44_44;

    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (CurArmNum_34));
      MR_hl_field(3, Var_42, 2) = ((MR_Box) (MaybeNumFunctors_4));
    }
    {
      ContainingGoal_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ContainingGoal_35, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(1, ContainingGoal_35, 1) = ((MR_Box) (Var_42));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_35, STATE_VARIABLE_GoalNumCounter_0_5, &STATE_VARIABLE_GoalNumCounter_43_43, STATE_VARIABLE_ContainingGoalList_0_7, &STATE_VARIABLE_ContainingGoalList_44_44, Goal0_33, &Goal_36);
    {
      Case_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_29, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(0, Case_29, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(0, Case_29, 2) = ((MR_Box) (Goal_36));
    }
    hlds__goal_path__fill_switch_id_slots_10_p_0(SlotInfo_1, GoalId_2, CurArmNum_34, MaybeNumFunctors_4, STATE_VARIABLE_GoalNumCounter_43_43, STATE_VARIABLE_GoalNumCounter_6, STATE_VARIABLE_ContainingGoalList_44_44, STATE_VARIABLE_ContainingGoalList_8, Cases0_28, &Cases_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__10_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_30));
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
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurDisjunctNum_28 = (MR_Integer) ((MR_Unsigned) LastDisjunctNum_3 + (MR_Unsigned) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_35, 0) = ((MR_Box) (CurDisjunctNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(1, ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_disj_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurDisjunctNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_27));
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
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));
    MR_Word Goals0_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Goal_26;
    MR_Word Goals_27;
    MR_Integer CurConjunctNum_28 = (MR_Integer) ((MR_Unsigned) LastConjunctNum_3 + (MR_Unsigned) 1);
    MR_Word ContainingGoal_29;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_GoalNumCounter_36_36;
    MR_Word STATE_VARIABLE_ContainingGoalList_37_37;

    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (CurConjunctNum_28));
    }
    {
      ContainingGoal_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ContainingGoal_29, 0) = ((MR_Box) (GoalId_2));
      MR_hl_field(1, ContainingGoal_29, 1) = ((MR_Box) (Var_35));
    }
    hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_1, ContainingGoal_29, STATE_VARIABLE_GoalNumCounter_0_4, &STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_ContainingGoalList_0_6, &STATE_VARIABLE_ContainingGoalList_37_37, Goal0_24, &Goal_26);
    hlds__goal_path__fill_conj_id_slots_9_p_0(SlotInfo_1, GoalId_2, CurConjunctNum_28, STATE_VARIABLE_GoalNumCounter_36_36, STATE_VARIABLE_GoalNumCounter_5, STATE_VARIABLE_ContainingGoalList_37_37, STATE_VARIABLE_ContainingGoalList_7, Goals0_25, &Goals_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_27));
    }
  }
}

static void MR_CALL 
hlds__goal_path__fill_goal_id_slots_8_p_0(
  MR_Word SlotInfo_9,
  MR_Word ContainingGoal_10,
  MR_Word STATE_VARIABLE_GoalNumCounter_0_100,
  MR_Word * STATE_VARIABLE_GoalNumCounter_101,
  MR_Word STATE_VARIABLE_ContainingGoalList_0_102,
  MR_Word * STATE_VARIABLE_ContainingGoalList_103,
  MR_Word Goal0_13,
  MR_Word * Goal_14)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
  MR_Word GoalInfo0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 1))));
  MR_Integer GoalNum_17;
  MR_Word GoalId_18;
  MR_Word GoalInfo_19;
  MR_Word GoalExpr_38;
  MR_Word STATE_VARIABLE_GoalNumCounter_104_104;
  MR_Word STATE_VARIABLE_ContainingGoalList_105_105;
  MR_Word Var_106;

  mercury__counter__allocate_3_p_0(&GoalNum_17, STATE_VARIABLE_GoalNumCounter_0_100, &STATE_VARIABLE_GoalNumCounter_104_104);
  GoalId_18 = (MR_Word) (GoalNum_17);
  hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_18, GoalInfo0_16, &GoalInfo_19);
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (GoalId_18));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (ContainingGoal_10));
  }
  {
    STATE_VARIABLE_ContainingGoalList_105_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_ContainingGoalList_105_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, STATE_VARIABLE_ContainingGoalList_105_105, 1) = ((MR_Box) (STATE_VARIABLE_ContainingGoalList_0_102));
  }
  switch (MR_tag((MR_Word) GoalExpr0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_70 = (MR_Word) ((MR_Word) (GoalExpr0_15));
        MR_Word SubGoal_71;
        MR_Word Var_120;

        {
          Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_120, 0) = ((MR_Box) (GoalId_18));
          MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 12U));
        }
        hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_120, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, SubGoal0_70, &SubGoal_71);
        GoalExpr_38 = (MR_Word) ((MR_Word) (SubGoal_71));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS_39 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 0))));
        MR_Word RHS0_40 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 1))));
        MR_Word Mode_41 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 2))));
        MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 3))));
        MR_Word Context_43 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_15, (MR_Integer) 4))));

        switch (MR_tag((MR_Word) RHS0_40)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              GoalExpr_38 = GoalExpr0_15;
              *STATE_VARIABLE_GoalNumCounter_101 = STATE_VARIABLE_GoalNumCounter_104_104;
              *STATE_VARIABLE_ContainingGoalList_103 = STATE_VARIABLE_ContainingGoalList_105_105;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word NonLocals_48 = ((MR_Word) ((MR_hl_field(2, RHS0_40, (MR_Integer) 2))));
              MR_Word ArgVarsModes_49 = ((MR_Word) ((MR_hl_field(2, RHS0_40, (MR_Integer) 3))));
              MR_Word Detism_50 = ((MR_Unsigned) ((MR_hl_field(2, RHS0_40, (MR_Integer) 4))) & (MR_Integer) 7);
              MR_Word LambdaGoal0_51 = ((MR_Word) ((MR_hl_field(2, RHS0_40, (MR_Integer) 5))));
              MR_Word LambdaGoal_52;
              MR_Word RHS_53;
              MR_Word Var_107;
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(2, RHS0_40, (MR_Integer) 0)));

              {
                Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_107, 0) = ((MR_Box) (GoalId_18));
                MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              }
              hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_107, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, LambdaGoal0_51, &LambdaGoal_52);
              {
                RHS_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, RHS_53, 0) = (MR_Box) (packed_word_3);
                MR_hl_field(2, RHS_53, 1) = NULL;
                MR_hl_field(2, RHS_53, 2) = ((MR_Box) (NonLocals_48));
                MR_hl_field(2, RHS_53, 3) = ((MR_Box) (ArgVarsModes_49));
                MR_hl_field(2, RHS_53, 4) = (MR_Box) ((MR_Unsigned) (Detism_50));
                MR_hl_field(2, RHS_53, 5) = ((MR_Box) (LambdaGoal_52));
              }
              {
                GoalExpr_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, GoalExpr_38, 0) = ((MR_Box) (LHS_39));
                MR_hl_field(1, GoalExpr_38, 1) = ((MR_Box) (RHS_53));
                MR_hl_field(1, GoalExpr_38, 2) = ((MR_Box) (Mode_41));
                MR_hl_field(1, GoalExpr_38, 3) = ((MR_Box) (Kind_42));
                MR_hl_field(1, GoalExpr_38, 4) = ((MR_Box) (Context_43));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        GoalExpr_38 = GoalExpr0_15;
        *STATE_VARIABLE_GoalNumCounter_101 = STATE_VARIABLE_GoalNumCounter_104_104;
        *STATE_VARIABLE_ContainingGoalList_103 = STATE_VARIABLE_ContainingGoalList_105_105;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            GoalExpr_38 = GoalExpr0_15;
            *STATE_VARIABLE_GoalNumCounter_101 = STATE_VARIABLE_GoalNumCounter_104_104;
            *STATE_VARIABLE_ContainingGoalList_103 = STATE_VARIABLE_ContainingGoalList_105_105;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjType_58 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word Goals_60;

            hlds__goal_path__fill_conj_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, Goals0_59, &Goals_60);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_38, 1) = (MR_Box) ((MR_Unsigned) (ConjType_58));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (Goals_60));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_153 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word Goals_154;

            hlds__goal_path__fill_disj_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, Goals0_153, &Goals_154);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Goals_154));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word CanFail_62 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 3))));
            MR_Word VarTable_64 = ((MR_Word) ((MR_hl_field(0, SlotInfo_9, (MR_Integer) 1))));
            MR_Word ModuleInfo_65 = ((MR_Word) ((MR_hl_field(0, SlotInfo_9, (MR_Integer) 0))));
            MR_Word Type_66;
            MR_Word MaybeNumFunctors_68;
            MR_Word Cases_69;
            MR_Integer NumFunctors_67;

            parse_tree__var_table__lookup_var_type_3_p_0(VarTable_64, Var_61, &Type_66);
            succeeded = check_hlds__type_util__switch_type_num_functors_3_p_0(ModuleInfo_65, Type_66, &NumFunctors_67);
            if (succeeded)
              {
                MaybeNumFunctors_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeNumFunctors_68, 0) = ((MR_Box) (NumFunctors_67));
              }
            else
              MaybeNumFunctors_68 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__goal_path__fill_switch_id_slots_10_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, MaybeNumFunctors_68, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, Cases0_63, &Cases_69);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Var_61));
              MR_hl_field(3, GoalExpr_38, 2) = (MR_Box) ((MR_Unsigned) (CanFail_62));
              MR_hl_field(3, GoalExpr_38, 3) = ((MR_Box) (Cases_69));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word InnerInfo_74;
            MR_Word OuterDetism_75;
            MR_Word InnerDetism_76;
            MR_Word MaybeCut_77;
            MR_Word Var_124;
            MR_Word Var_127;
            MR_Word SubGoal0_155 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word SubGoal_156;

            InnerInfo_74 = ((MR_Word) ((MR_hl_field(0, SubGoal0_155, (MR_Integer) 1))));
            OuterDetism_75 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_19);
            InnerDetism_76 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(InnerInfo_74);
            succeeded = (InnerDetism_76 == OuterDetism_75);
            if (succeeded)
              MaybeCut_77 = (MR_Integer) 1;
            else
              MaybeCut_77 = (MR_Integer) 0;
            {
              Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_127, 1) = (MR_Box) ((MR_Unsigned) (MaybeCut_77));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (GoalId_18));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_124, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, SubGoal0_155, &SubGoal_156);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Reason_72));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (SubGoal_156));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word Cond0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 2))));
            MR_Word Then0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 3))));
            MR_Word Else0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 4))));
            MR_Word Cond_82;
            MR_Word Then_83;
            MR_Word Else_84;
            MR_Word Var_128;
            MR_Word STATE_VARIABLE_GoalNumCounter_129_129;
            MR_Word STATE_VARIABLE_ContainingGoalList_130_130;
            MR_Word Var_132;
            MR_Word STATE_VARIABLE_GoalNumCounter_133_133;
            MR_Word STATE_VARIABLE_ContainingGoalList_134_134;
            MR_Word Var_136;

            {
              Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_128, 0) = ((MR_Box) (GoalId_18));
              MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_128, STATE_VARIABLE_GoalNumCounter_104_104, &STATE_VARIABLE_GoalNumCounter_129_129, STATE_VARIABLE_ContainingGoalList_105_105, &STATE_VARIABLE_ContainingGoalList_130_130, Cond0_79, &Cond_82);
            {
              Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_132, 0) = ((MR_Box) (GoalId_18));
              MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_132, STATE_VARIABLE_GoalNumCounter_129_129, &STATE_VARIABLE_GoalNumCounter_133_133, STATE_VARIABLE_ContainingGoalList_130_130, &STATE_VARIABLE_ContainingGoalList_134_134, Then0_80, &Then_83);
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (GoalId_18));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_136, STATE_VARIABLE_GoalNumCounter_133_133, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_134_134, STATE_VARIABLE_ContainingGoalList_103, Else0_81, &Else_84);
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (Vars_78));
              MR_hl_field(3, GoalExpr_38, 2) = ((MR_Box) (Cond_82));
              MR_hl_field(3, GoalExpr_38, 3) = ((MR_Box) (Then_83));
              MR_hl_field(3, GoalExpr_38, 4) = ((MR_Box) (Else_84));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_85 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_15, (MR_Integer) 1))));
            MR_Word ShortHand_95;

            switch (MR_tag((MR_Word) ShortHand0_85)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.goal_path.fill_goal_id_slots\'/8", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_86 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_87 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 1))));
                  MR_Word Inner_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_89 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 3))));
                  MR_Word MainGoal0_90 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 5))));
                  MR_Word OrElseInners_92 = ((MR_Word) ((MR_hl_field(1, ShortHand0_85, (MR_Integer) 6))));
                  MR_Word MainGoal_93;
                  MR_Word OrElseGoals_94;
                  MR_Word Var_140;
                  MR_Word STATE_VARIABLE_GoalNumCounter_141_141;
                  MR_Word STATE_VARIABLE_ContainingGoalList_142_142;

                  {
                    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_140, 0) = ((MR_Box) (GoalId_18));
                    MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 24U));
                  }
                  hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_140, STATE_VARIABLE_GoalNumCounter_104_104, &STATE_VARIABLE_GoalNumCounter_141_141, STATE_VARIABLE_ContainingGoalList_105_105, &STATE_VARIABLE_ContainingGoalList_142_142, MainGoal0_90, &MainGoal_93);
                  hlds__goal_path__fill_orelse_id_slots_9_p_0(SlotInfo_9, GoalId_18, (MR_Integer) 0, STATE_VARIABLE_GoalNumCounter_141_141, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_142_142, STATE_VARIABLE_ContainingGoalList_103, OrElseGoals0_91, &OrElseGoals_94);
                  {
                    ShortHand_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_95, 0) = (MR_Box) ((MR_Unsigned) (GoalType_86));
                    MR_hl_field(1, ShortHand_95, 1) = ((MR_Box) (Outer_87));
                    MR_hl_field(1, ShortHand_95, 2) = ((MR_Box) (Inner_88));
                    MR_hl_field(1, ShortHand_95, 3) = ((MR_Box) (MaybeOutputVars_89));
                    MR_hl_field(1, ShortHand_95, 4) = ((MR_Box) (MainGoal_93));
                    MR_hl_field(1, ShortHand_95, 5) = ((MR_Box) (OrElseGoals_94));
                    MR_hl_field(1, ShortHand_95, 6) = ((MR_Box) (OrElseInners_92));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_96 = ((MR_Word) ((MR_hl_field(2, ShortHand0_85, (MR_Integer) 0))));
                  MR_Word ResultVar_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_85, (MR_Integer) 1))));
                  MR_Word Var_147;
                  MR_Word SubGoal0_157 = ((MR_Word) ((MR_hl_field(2, ShortHand0_85, (MR_Integer) 2))));
                  MR_Word SubGoal_158;

                  {
                    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_147, 0) = ((MR_Box) (GoalId_18));
                    MR_hl_field(1, Var_147, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  }
                  hlds__goal_path__fill_goal_id_slots_8_p_0(SlotInfo_9, Var_147, STATE_VARIABLE_GoalNumCounter_104_104, STATE_VARIABLE_GoalNumCounter_101, STATE_VARIABLE_ContainingGoalList_105_105, STATE_VARIABLE_ContainingGoalList_103, SubGoal0_157, &SubGoal_158);
                  {
                    ShortHand_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_95, 0) = ((MR_Box) (MaybeIO_96));
                    MR_hl_field(2, ShortHand_95, 1) = ((MR_Box) (ResultVar_97));
                    MR_hl_field(2, ShortHand_95, 2) = ((MR_Box) (SubGoal_158));
                  }
                }
                break;
            }
            {
              GoalExpr_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_38, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_38, 1) = ((MR_Box) (ShortHand_95));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_38));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_19));
  }
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____containing_goal_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_path____Unify____containing_goal_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_path____Compare____containing_goal_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_path____Compare____containing_goal_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__goal_path____Unify____slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__goal_path____Unify____slot_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__goal_path____Compare____slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__goal_path____Compare____slot_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
