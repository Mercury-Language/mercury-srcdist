/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2024-06-07
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


// :- module check_hlds.modecheck_call.
// :- implementation.

/*
INIT mercury__check_hlds__modecheck_call__init
ENDINIT
*/

#include "check_hlds.modecheck_call.mih"


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
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_comparison.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.hlds_proc_util.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_higher_order_match_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_higher_order_match_0[2];

static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_higher_order_match_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__496__1_2_p_0(
  MR_Word TypePredOrFunc_20,
  MR_Word TypeHOPredOrFunc_24);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__548__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_19);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__116__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_65);

static void MR_CALL 
check_hlds__modecheck_call____Compare____higher_order_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____higher_order_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_10_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ProcArgModes_11,
  MR_Word ArgVars0_12,
  MR_Integer ArgOffset_13,
  MR_Word InstVarSub_14,
  MR_Word * ArgVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26);

static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars_10,
  MR_Word ProcInitialInsts_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23);

static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__modecheck_call__modecheck_find_matching_modes_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevMatchingProcModes_0_5,
  MR_Word * STATE_VARIABLE_RevMatchingProcModes_6,
  MR_Word STATE_VARIABLE_RevProcInitialInsts_0_7,
  MR_Word * STATE_VARIABLE_RevProcInitialInsts_8,
  MR_Word STATE_VARIABLE_WaitingVars_0_9,
  MR_Word * STATE_VARIABLE_WaitingVars_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12);

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____higher_order_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_call____Compare____higher_order_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[2][1];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[2][5];




static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0)),
    ((MR_Box) (&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_inst_info_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_0 = {
  (MR_String) "higher_order_match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_higher_order_mismatch_info_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_1 = {
  (MR_String) "higher_order_mismatch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_higher_order_match_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_0[1] = { &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_1[1] = { &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_higher_order_match_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_higher_order_match_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_higher_order_match_0[2] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_higher_order_match_0_1
};

static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_higher_order_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_higher_order_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_call____Unify____higher_order_match_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____higher_order_match_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "higher_order_match",
  { check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_higher_order_match_0 },
  { check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_higher_order_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_higher_order_match_0,

};

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__496__1_2_p_0(
  MR_Word TypePredOrFunc_20,
  MR_Word TypeHOPredOrFunc_24)
{
  MR_bool succeeded = (TypePredOrFunc_20 == TypeHOPredOrFunc_24);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__548__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_19)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ExtraGoals_11, HeadVar__2_19);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__116__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (PredOrFunc_29 == HeadVar__2_65);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_call____Compare____higher_order_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      parse_tree__prog_data____Compare____pred_inst_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    check_hlds__mode_errors____Compare____higher_order_mismatch_info_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____higher_order_match_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = parse_tree__prog_data____Unify____pred_inst_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = check_hlds__mode_errors____Unify____higher_order_mismatch_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_builtin_cast_7_p_0(
  MR_Word Modes_8,
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word * Det_11,
  MR_Word * ExtraGoals_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_15,
  MR_Word * STATE_VARIABLE_ModeInfo_16)
{
  MR_Word ModuleInfo0_18;
  MR_Word ExpectedArgLives_19;
  MR_Word InitialInsts_20;
  MR_Word InstVarSub_21;
  MR_Word FinalInsts0_22;
  MR_Word FinalInsts_23;
  MR_Word STATE_VARIABLE_ModeInfo_24_24;
  MR_Word STATE_VARIABLE_ModeInfo_25_25;

  *Det_11 = (MR_Integer) 0;
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo0_18);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_18, Modes_8, &ExpectedArgLives_19);
  check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_9, ExpectedArgLives_19, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_24_24);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_18, Modes_8, &InitialInsts_20);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_7_p_0((MR_Word) ((MR_Unsigned) 4U), Args0_9, InitialInsts_20, (MR_Integer) 0, &InstVarSub_21, STATE_VARIABLE_ModeInfo_24_24, &STATE_VARIABLE_ModeInfo_25_25);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_18, Modes_8, &FinalInsts0_22);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_21, FinalInsts0_22, &FinalInsts_23);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_9, InitialInsts_20, FinalInsts_23, (MR_Integer) 0, Args_10, ExtraGoals_12, STATE_VARIABLE_ModeInfo_25_25, STATE_VARIABLE_ModeInfo_16);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__548__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0(
  MR_Word Modes_6,
  MR_Word Args0_7,
  MR_Word * Args_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word ExtraGoals_11;
  MR_Word Var_16;
  MR_Word ModuleInfo0_20;
  MR_Word ExpectedArgLives_21;
  MR_Word InitialInsts_22;
  MR_Word InstVarSub_23;
  MR_Word FinalInsts0_24;
  MR_Word FinalInsts_25;
  MR_Word STATE_VARIABLE_ModeInfo_24_26;
  MR_Word STATE_VARIABLE_ModeInfo_25_27;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_20);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_20, Modes_6, &ExpectedArgLives_21);
  check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_7, ExpectedArgLives_21, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_24_26);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_20, Modes_6, &InitialInsts_22);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_7_p_0((MR_Word) ((MR_Unsigned) 8U), Args0_7, InitialInsts_22, (MR_Integer) 0, &InstVarSub_23, STATE_VARIABLE_ModeInfo_24_26, &STATE_VARIABLE_ModeInfo_25_27);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_20, Modes_6, &FinalInsts0_24);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_23, FinalInsts0_24, &FinalInsts_25);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_7, InitialInsts_22, FinalInsts_25, (MR_Integer) 0, Args_8, &ExtraGoals_11, STATE_VARIABLE_ModeInfo_25_27, STATE_VARIABLE_ModeInfo_13);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_event_call_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (ExtraGoals_11));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_16, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", (MR_String) "ExtraGoals");
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__496__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_10_p_0(
  MR_Word GenericCallId_11,
  MR_Word PredOrFunc_12,
  MR_Word PredVar_13,
  MR_Word ArgVars0_14,
  MR_Word * ArgVars_15,
  MR_Word * Modes_16,
  MR_Word * Detism_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_42,
  MR_Word * STATE_VARIABLE_ModeInfo_43)
{
  MR_bool succeeded;
  MR_Word InstMap0_20;
  MR_Word PredVarInst0_21;
  MR_Word ModuleInfo0_22;
  MR_Word PredVarInst_23;
  MR_Word ActualPredFormArity_24;
  MR_Word ActualUserArity_25;
  MR_Word Match_26;
  MR_Word HOInstInfo_59;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &InstMap0_20);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_20, PredVar_13, &PredVarInst0_21);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo0_22);
  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_22, PredVarInst0_21, &PredVarInst_23);
  ActualPredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), ArgVars0_14);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_12, &ActualUserArity_25, ActualPredFormArity_24);
  if (((MR_tag((MR_Word) PredVarInst_23)) == (MR_Integer) 1))
  {
    HOInstInfo_59 = ((MR_Word) ((MR_hl_field(1, PredVarInst_23, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) PredVarInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_23, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    HOInstInfo_59 = ((MR_Word) ((MR_hl_field(3, PredVarInst_23, (MR_Integer) 2))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    if ((HOInstInfo_59 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarTable_62;
      MR_Word Type0_63;
      MR_Word Type_64;
      MR_Word TypePredOrFunc_65;
      MR_Word ArgTypes_66;
      MR_Word TypeHOInstInfo_67;

      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &VarTable_62);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_62, PredVar_13, &Type0_63);
      Type_64 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type0_63);
      succeeded = ((((MR_tag((MR_Word) Type_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_64, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        TypePredOrFunc_65 = ((MR_Unsigned) ((MR_hl_field(3, Type_64, (MR_Integer) 1))) & (MR_Integer) 1);
        ArgTypes_66 = ((MR_Word) ((MR_hl_field(3, Type_64, (MR_Integer) 2))));
        TypeHOInstInfo_67 = ((MR_Word) ((MR_hl_field(3, Type_64, (MR_Integer) 3))));
        if ((TypeHOInstInfo_67 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (TypePredOrFunc_65) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer NumArgs_73;
                MR_Word PredInstInfo_193;
                MR_Word ActualPredOrFunc_194;
                MR_Word Modes_195;
                MR_Word Match0_220;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_66, &NumArgs_73);
                PredInstInfo_193 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(NumArgs_73);
                Match0_220 = (MR_Word) ((MR_Word) (PredInstInfo_193));
                ActualPredOrFunc_194 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_193, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes_195 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_193, (MR_Integer) 1))));
                succeeded = (PredOrFunc_12 == ActualPredOrFunc_194);
                if (succeeded)
                {
                  MR_Word ActualPredFormArity_173;
                  MR_Word ActualUserArity_174;
                  MR_Integer Var_164;
                  MR_Integer Var_165;

                  ActualPredFormArity_173 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_195);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_194, &ActualUserArity_174, ActualPredFormArity_173);
                  Var_164 = (MR_Integer) (ActualUserArity_25);
                  Var_165 = (MR_Integer) (ActualUserArity_174);
                  succeeded = (Var_164 == Var_165);
                  if (succeeded)
                    Match_26 = Match0_220;
                  else
                  {
                    MR_Word Mismatch_166;

                    {
                      Mismatch_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Mismatch_166, 0) = ((MR_Box) (ActualUserArity_174));
                    }
                    {
                      Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_166));
                    }
                  }
                }
                else
                {
                  MR_Word Mismatch_176;

                  {
                    Mismatch_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Mismatch_176, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_194));
                  }
                  {
                    Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_176));
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              Match_26 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
              break;
          }
        else
        {
          MR_Word Var_81;
          MR_Word PredInstInfo_124 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_67), (MR_Integer) 1));
          MR_Word ActualPredOrFunc_125 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_124, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes_126 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_124, (MR_Integer) 1))));
          MR_Word Match0_148;

          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_81, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
            MR_hl_field(0, Var_81, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_higher_order_call_10_p_0_1));
            MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_81, 3) = ((MR_Box) (TypePredOrFunc_65));
            MR_hl_field(0, Var_81, 4) = ((MR_Box) (ActualPredOrFunc_125));
          }
          mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140check_hlds.modecheck_call.get_higher_order_inst_match\'/6", (MR_String) "TypePredOrFunc != TypeHOPredOrFunc");
          Match0_148 = (MR_Word) ((MR_Word) (PredInstInfo_124));
          succeeded = (PredOrFunc_12 == ActualPredOrFunc_125);
          if (succeeded)
          {
            MR_Word ActualPredFormArity_110;
            MR_Word ActualUserArity_111;
            MR_Integer Var_104;
            MR_Integer Var_105;

            ActualPredFormArity_110 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_126);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_125, &ActualUserArity_111, ActualPredFormArity_110);
            Var_104 = (MR_Integer) (ActualUserArity_25);
            Var_105 = (MR_Integer) (ActualUserArity_111);
            succeeded = (Var_104 == Var_105);
            if (succeeded)
              Match_26 = Match0_148;
            else
            {
              MR_Word Mismatch_106;

              {
                Mismatch_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Mismatch_106, 0) = ((MR_Box) (ActualUserArity_111));
              }
              {
                Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_106));
              }
            }
          }
          else
          {
            MR_Word Mismatch_116;

            {
              Mismatch_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Mismatch_116, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_125));
            }
            {
              Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_116));
            }
          }
        }
      }
      else
        Match_26 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[1]));
    }
    else
    {
      MR_Word Match0_61;
      MR_Word PredInstInfo_74 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_59), (MR_Integer) 1));
      MR_Word ActualPredOrFunc_75;
      MR_Word Modes_76;

      Match0_61 = (MR_Word) ((MR_Word) (PredInstInfo_74));
      ActualPredOrFunc_75 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_74, (MR_Integer) 0))) & (MR_Integer) 1);
      Modes_76 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_74, (MR_Integer) 1))));
      succeeded = (PredOrFunc_12 == ActualPredOrFunc_75);
      if (succeeded)
      {
        MR_Word ActualPredFormArity_79;
        MR_Word ActualUserArity_80;
        MR_Integer Var_92;
        MR_Integer Var_93;

        ActualPredFormArity_79 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_76);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_75, &ActualUserArity_80, ActualPredFormArity_79);
        Var_92 = (MR_Integer) (ActualUserArity_25);
        Var_93 = (MR_Integer) (ActualUserArity_80);
        succeeded = (Var_92 == Var_93);
        if (succeeded)
          Match_26 = Match0_61;
        else
        {
          MR_Word Mismatch_87;

          {
            Mismatch_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Mismatch_87, 0) = ((MR_Box) (ActualUserArity_80));
          }
          {
            Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_87));
          }
        }
      }
      else
      {
        MR_Word Mismatch_88;

        {
          Mismatch_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mismatch_88, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_75));
        }
        {
          Match_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Match_26, 0) = ((MR_Box) (Mismatch_88));
        }
      }
    }
  else
    Match_26 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
  if (((MR_tag((MR_Word) Match_26)) == (MR_Integer) 0))
  {
    MR_Word PredInstInfo_27 = (MR_Word) ((MR_Word) (Match_26));
    MR_Word Modes0_29 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_27, (MR_Integer) 1))));
    MR_Word Detism0_31 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_27, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word A_32;
    MR_Word B_33;
    MR_Word Reason_34;

    succeeded = ((((MR_tag((MR_Word) PredVarInst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_23, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      A_32 = ((MR_Unsigned) ((MR_hl_field(3, PredVarInst_23, (MR_Integer) 1))) & (MR_Integer) 7);
      B_33 = ((MR_Word) ((MR_hl_field(3, PredVarInst_23, (MR_Integer) 2))));
      succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_42, PredVar_13, &Reason_34);
    }
    if (succeeded)
    {
      MR_Word BetterPredVarInst_35;
      MR_Word WaitingVars_36;
      MR_Word ModeError_37;

      {
        BetterPredVarInst_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BetterPredVarInst_35, 0) = (MR_Box) ((MR_Unsigned) (A_32));
        MR_hl_field(1, BetterPredVarInst_35, 1) = ((MR_Box) (B_33));
      }
      WaitingVars_36 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_13);
      {
        ModeError_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_37, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, ModeError_37, 1) = ((MR_Box) (Reason_34));
        MR_hl_field(3, ModeError_37, 2) = ((MR_Box) (PredVar_13));
        MR_hl_field(3, ModeError_37, 3) = ((MR_Box) (PredVarInst_23));
        MR_hl_field(3, ModeError_37, 4) = ((MR_Box) (BetterPredVarInst_35));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_36, ModeError_37, STATE_VARIABLE_ModeInfo_0_42, STATE_VARIABLE_ModeInfo_43);
      *Modes_16 = (MR_Word) ((MR_Unsigned) 0U);
      *Detism_17 = (MR_Integer) 6;
      *ArgVars_15 = ArgVars0_14;
      *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_45;
      MR_Word STATE_VARIABLE_ModeInfo_46_46;
      MR_Word ModuleInfo0_94;
      MR_Word ExpectedArgLives_95;
      MR_Word InitialInsts_96;
      MR_Word InstVarSub_97;
      MR_Word FinalInsts0_98;
      MR_Word FinalInsts_99;
      MR_Word STATE_VARIABLE_ModeInfo_24_100;
      MR_Word STATE_VARIABLE_ModeInfo_25_101;
      MR_Word Var_57;
      MR_Word Var_39;

      *Modes_16 = Modes0_29;
      *Detism_17 = Detism0_31;
      {
        Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_45, 0) = ((MR_Box) (GenericCallId_11));
      }
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_42, &ModuleInfo0_94);
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_94, *Modes_16, &ExpectedArgLives_95);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(ArgVars0_14, ExpectedArgLives_95, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_24_100);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_94, *Modes_16, &InitialInsts_96);
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_7_p_0(Var_45, ArgVars0_14, InitialInsts_96, (MR_Integer) 1, &InstVarSub_97, STATE_VARIABLE_ModeInfo_24_100, &STATE_VARIABLE_ModeInfo_25_101);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_94, *Modes_16, &FinalInsts0_98);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_97, FinalInsts0_98, &FinalInsts_99);
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_14, InitialInsts_96, FinalInsts_99, (MR_Integer) 1, ArgVars_15, ExtraGoals_18, STATE_VARIABLE_ModeInfo_25_101, &STATE_VARIABLE_ModeInfo_46_46);
      parse_tree__prog_data__determinism_components_3_p_0(*Detism_17, &Var_39, &Var_57);
      succeeded = ((MR_Integer) 0 == Var_57);
      if (succeeded)
      {
        MR_Word Instmap_40;

        hlds__instmap__init_unreachable_1_p_0(&Instmap_40);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_40, STATE_VARIABLE_ModeInfo_46_46, STATE_VARIABLE_ModeInfo_43);
      }
      else
        *STATE_VARIABLE_ModeInfo_43 = STATE_VARIABLE_ModeInfo_46_46;
    }
  }
  else
  {
    MR_Word Mismatch_41 = ((MR_Word) ((MR_hl_field(1, Match_26, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ModeInfo_50_50;
    MR_Word WaitingVars_52;
    MR_Word ModeError_53;

    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_42, &STATE_VARIABLE_ModeInfo_50_50);
    WaitingVars_52 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_13);
    {
      ModeError_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_53, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ModeError_53, 1) = ((MR_Box) (PredVar_13));
      MR_hl_field(3, ModeError_53, 2) = ((MR_Box) (PredVarInst_23));
      MR_hl_field(3, ModeError_53, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(3, ModeError_53, 4) = ((MR_Box) (ActualUserArity_25));
      MR_hl_field(3, ModeError_53, 5) = ((MR_Box) (Mismatch_41));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_52, ModeError_53, STATE_VARIABLE_ModeInfo_50_50, STATE_VARIABLE_ModeInfo_43);
    *Modes_16 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_17 = (MR_Integer) 6;
    *ArgVars_15 = ArgVars0_14;
    *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_call_pred_10_p_0(
  MR_Word PredId_11,
  MR_Word MaybeDetism_12,
  MR_Integer ProcId0_13,
  MR_Integer * SelectedProcId_14,
  MR_Word ArgVars0_15,
  MR_Word * ArgVars_16,
  MR_Word _GoalInfo_17,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_56,
  MR_Word * STATE_VARIABLE_ModeInfo_57)
{
  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(PredId_11, MaybeDetism_12, ProcId0_13, SelectedProcId_14, ArgVars0_15, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_0_56, STATE_VARIABLE_ModeInfo_57);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_call_pred__116__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0(
  MR_Word PredId_11,
  MR_Word MaybeDetism_12,
  MR_Integer ProcId0_13,
  MR_Integer * SelectedProcId_14,
  MR_Word ArgVars0_15,
  MR_Word * ArgVars_16,
  MR_Word * ExtraGoals_18,
  MR_Word STATE_VARIABLE_ModeInfo_0_56,
  MR_Word * STATE_VARIABLE_ModeInfo_57)
{
  MR_bool succeeded;
  MR_Word MayChangeCalledProc_20;
  MR_Word ModuleInfo_21;
  MR_Word PredInfo_22;
  MR_Word ProcTable_23;
  MR_Word ProcIds_24;
  MR_Integer ArgOffset_25;
  MR_Word Markers_26;
  MR_Word InstMap_27;
  MR_Word Var_61;

  check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &MayChangeCalledProc_20);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &ModuleInfo_21);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_21, PredId_11, &PredInfo_22);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_22, &ProcTable_23);
  switch (MayChangeCalledProc_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_22);
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_102;

        Var_102 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        succeeded = (ProcId0_13 == Var_102);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "invalid proc_id");
            return;
          }
        else
          {
            ProcIds_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ProcIds_24, 0) = ((MR_Box) (ProcId0_13));
            MR_hl_field(1, ProcIds_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
      }
      break;
  }
  check_hlds__modecheck_util__compute_arg_offset_2_p_0(PredInfo_22, &ArgOffset_25);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_22, &Markers_26);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &InstMap_27);
  succeeded = (ProcIds_24 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_61 = (MR_Integer) 3;
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, Var_61);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word WaitingVars_28;
    MR_Word PredOrFunc_29;
    MR_Word Var_62;
    MR_Word Var_66;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_22);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_99_97_108_108_95_112_114_101_100_95_95_91_55_93_95_48_10_p_0_1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (PredOrFunc_29));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_call_pred\'/10", (MR_String) "function with no mode, not even the default");
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) (PredId_11));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, Var_66, STATE_VARIABLE_ModeInfo_0_56, STATE_VARIABLE_ModeInfo_57);
    *SelectedProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    *ArgVars_16 = ArgVars0_15;
    *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer ProcId_30;
    MR_Word Var_68;

    succeeded = (ProcIds_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcId_30 = ((MR_Integer) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 1))));
      succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_26, (MR_Integer) 3);
        succeeded = !(succeeded);
        if (!(succeeded))
          succeeded = (MayChangeCalledProc_20 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ProcInfo_31;
      MR_Word ProcArgLives0_32;
      MR_Word ProcArgModes0_33;
      MR_Word ProcInstVarSet_34;
      MR_Word InstVarSet0_35;
      MR_Word InstVarSet_36;
      MR_Word ProcArgModes_37;
      MR_Word InitialInsts_38;
      MR_Word InstVarSub_39;
      MR_Word STATE_VARIABLE_ModeInfo_70_70;
      MR_Word STATE_VARIABLE_ModeInfo_71_71;
      MR_Word Var_72;
      MR_Word STATE_VARIABLE_ModeInfo_73_73;
      MR_Word ModuleInfo_104;
      MR_Word InitialInsts0_105;
      MR_Word FinalInsts0_106;
      MR_Word InitialInsts_107;
      MR_Word FinalInsts_108;
      MR_Word CanSucceed_109;
      MR_Word STATE_VARIABLE_ModeInfo_27_111;
      MR_Box conv0_ProcInfo_31;

      *SelectedProcId_14 = ProcId_30;
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (ProcId_30)), &conv0_ProcInfo_31);
      ProcInfo_31 = ((MR_Word) (conv0_ProcInfo_31));
      hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_21, ProcInfo_31, &ProcArgLives0_32);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(ArgVars0_15, ProcArgLives0_32, ArgOffset_25, STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_70_70);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_31, &ProcArgModes0_33);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_31, &ProcInstVarSet_34);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &InstVarSet0_35);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_35, ProcInstVarSet_34, &InstVarSet_36, ProcArgModes0_33, &ProcArgModes_37);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_36, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_21, ProcArgModes_37, &InitialInsts_38);
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (PredId_11));
      }
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_7_p_0(Var_72, ArgVars0_15, InitialInsts_38, ArgOffset_25, &InstVarSub_39, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_73_73);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_73_73, &ModuleInfo_104);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_104, ProcArgModes_37, &InitialInsts0_105);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_104, ProcArgModes_37, &FinalInsts0_106);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_39, InitialInsts0_105, &InitialInsts_107);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_39, FinalInsts0_106, &FinalInsts_108);
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_15, InitialInsts_107, FinalInsts_108, ArgOffset_25, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_73_73, &STATE_VARIABLE_ModeInfo_27_111);
      hlds__hlds_proc_util__proc_info_never_succeeds_2_p_0(ProcInfo_31, &CanSucceed_109);
      switch (CanSucceed_109) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModeInfo_57 = STATE_VARIABLE_ModeInfo_27_111;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Instmap_110;

            hlds__instmap__init_unreachable_1_p_0(&Instmap_110);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_110, STATE_VARIABLE_ModeInfo_27_111, STATE_VARIABLE_ModeInfo_57);
          }
          break;
      }
    }
    else
    {
      MR_Word OldErrors_40;
      MR_Word WaitingVars0_41;
      MR_Word RevMatchingProcModes_42;
      MR_Word RevProcInitialInsts_43;
      MR_Word WaitingVars1_44;
      MR_Word NewErrors_54;
      MR_Word Errors_55;
      MR_Word STATE_VARIABLE_ModeInfo_76_76;
      MR_Word STATE_VARIABLE_ModeInfo_79_79;
      MR_Word STATE_VARIABLE_ModeInfo_80_80;

      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &OldErrors_40);
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_76_76);
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars0_41);
      check_hlds__modecheck_call__modecheck_find_matching_modes_12_p_0(PredId_11, ProcTable_23, ArgVars0_15, ProcIds_24, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingProcModes_42, (MR_Word) ((MR_Unsigned) 0U), &RevProcInitialInsts_43, WaitingVars0_41, &WaitingVars1_44, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_79_79);
      if ((RevMatchingProcModes_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcInitialInsts_45;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[0]), RevProcInitialInsts_43, &ProcInitialInsts_45);
        check_hlds__modecheck_call__no_matching_modes_8_p_0(PredId_11, ArgVars0_15, ProcInitialInsts_45, MaybeDetism_12, WaitingVars1_44, SelectedProcId_14, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
        *ArgVars_16 = ArgVars0_15;
        *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word MatchingProcModes_48;
        MR_Word CalleeModeErrors_49;
        MR_Word ProcInfo_89;
        MR_Word ProcArgModes_90;
        MR_Word InstVarSub_91;
        MR_Box conv1_ProcInfo_89;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0), RevMatchingProcModes_42, &MatchingProcModes_48);
        check_hlds__mode_comparison__choose_best_match_8_p_0(STATE_VARIABLE_ModeInfo_79_79, MatchingProcModes_48, PredId_11, ProcTable_23, ArgVars0_15, SelectedProcId_14, &InstVarSub_91, &ProcArgModes_90);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (*SelectedProcId_14)), &conv1_ProcInfo_89);
        ProcInfo_89 = ((MR_Word) (conv1_ProcInfo_89));
        check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_79_79, PredId_11, *SelectedProcId_14, &CalleeModeErrors_49);
        if ((CalleeModeErrors_49 == (MR_Word) ((MR_Unsigned) 0U)))
          check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(ProcInfo_89, ProcArgModes_90, ArgVars0_15, ArgOffset_25, InstVarSub_91, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_80_80);
        else
        {
          MR_Word ArgInsts_52;
          MR_Word ModeError_53;
          MR_Word STATE_VARIABLE_ModeInfo_83_83;
          MR_Word WaitingVars_86;

          *ArgVars_16 = ArgVars0_15;
          WaitingVars_86 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ArgVars_16);
          *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, *ArgVars_16, &ArgInsts_52);
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_79_79, &STATE_VARIABLE_ModeInfo_83_83);
          {
            ModeError_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_53, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ModeError_53, 1) = ((MR_Box) (*ArgVars_16));
            MR_hl_field(3, ModeError_53, 2) = ((MR_Box) (ArgInsts_52));
            MR_hl_field(3, ModeError_53, 3) = ((MR_Box) (PredId_11));
            MR_hl_field(3, ModeError_53, 4) = ((MR_Box) (*SelectedProcId_14));
            MR_hl_field(3, ModeError_53, 5) = ((MR_Box) (CalleeModeErrors_49));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_86, ModeError_53, STATE_VARIABLE_ModeInfo_83_83, &STATE_VARIABLE_ModeInfo_80_80);
        }
      }
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_80_80, &NewErrors_54);
      mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_40, NewErrors_54, &Errors_55);
      check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_55, STATE_VARIABLE_ModeInfo_80_80, STATE_VARIABLE_ModeInfo_57);
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ProcArgModes_11,
  MR_Word ArgVars0_12,
  MR_Integer ArgOffset_13,
  MR_Word InstVarSub_14,
  MR_Word * ArgVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  MR_Word ModuleInfo_18;
  MR_Word InitialInsts0_19;
  MR_Word FinalInsts0_20;
  MR_Word InitialInsts_21;
  MR_Word FinalInsts_22;
  MR_Word CanSucceed_23;
  MR_Word STATE_VARIABLE_ModeInfo_27_27;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &ModuleInfo_18);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_18, ProcArgModes_11, &InitialInsts0_19);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_18, ProcArgModes_11, &FinalInsts0_20);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, InitialInsts0_19, &InitialInsts_21);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, FinalInsts0_20, &FinalInsts_22);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_12, InitialInsts_21, FinalInsts_22, ArgOffset_13, ArgVars_15, ExtraGoals_16, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_27_27);
  hlds__hlds_proc_util__proc_info_never_succeeds_2_p_0(ProcInfo_10, &CanSucceed_23);
  switch (CanSucceed_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ModeInfo_26 = STATE_VARIABLE_ModeInfo_27_27;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Instmap_24;

        hlds__instmap__init_unreachable_1_p_0(&Instmap_24);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_24, STATE_VARIABLE_ModeInfo_27_27, STATE_VARIABLE_ModeInfo_26);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars_10,
  MR_Word ProcInitialInsts_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_22,
  MR_Word * STATE_VARIABLE_ModeInfo_23)
{
  MR_bool succeeded;
  MR_Word PredIdTable_16;
  MR_Word PredInfo_17;
  MR_Word Markers_18;
  MR_Box conv0_PredInfo_17;

  check_hlds__mode_info__mode_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &PredIdTable_16);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_16, ((MR_Box) (PredId_9)), &conv0_PredInfo_17);
  PredInfo_17 = ((MR_Word) (conv0_PredInfo_17));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_17, &Markers_18);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word Instmap_19;
    MR_Word STATE_VARIABLE_ModeInfo_25_25;
    MR_Word InitialInsts_32;
    MR_Word ArgLives_33;
    MR_Word ModuleInfo0_34;
    MR_Word PredInfo0_35;
    MR_Word Context_36;
    MR_Integer Arity_37;
    MR_Word FinalInsts_38;
    MR_Word Modes_39;
    MR_Word InstVarSet_40;
    MR_Word ModuleInfo_41;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_ModeInfo_26_44;

    check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(STATE_VARIABLE_ModeInfo_0_22, ArgVars_10, &InitialInsts_32, &ArgLives_33);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &ModuleInfo0_34);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_34, PredId_9, &PredInfo0_35);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_35, &Context_36);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), ArgVars_10, &Arity_37);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_37, ((MR_Box) ((MR_Unsigned) 4U)), &FinalInsts_38);
    parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(InitialInsts_32, FinalInsts_38, &Modes_39);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &InstVarSet_40);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (ArgLives_33));
    }
    check_hlds__proc_requests__request_proc_9_p_0(PredId_9, Modes_39, InstVarSet_40, Var_43, MaybeDetism_12, Context_36, NewProcId_14, ModuleInfo0_34, &ModuleInfo_41);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_41, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_26_44);
    check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_26_44, &STATE_VARIABLE_ModeInfo_25_25);
    hlds__instmap__init_unreachable_1_p_0(&Instmap_19);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_19, STATE_VARIABLE_ModeInfo_25_25, STATE_VARIABLE_ModeInfo_23);
  }
  else
  {
    MR_Word InstMap_20;
    MR_Word ModeError_21;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;
    MR_Word Var_29;

    *NewProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &InstMap_20);
    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_28_28);
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (PredId_9));
    }
    {
      ModeError_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_21, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, ModeError_21, 1) = ((MR_Box) (Var_29));
      MR_hl_field(3, ModeError_21, 2) = ((MR_Box) (InstMap_20));
      MR_hl_field(3, ModeError_21, 3) = ((MR_Box) (ArgVars_10));
      MR_hl_field(3, ModeError_21, 4) = ((MR_Box) (ProcInitialInsts_11));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_13, ModeError_21, STATE_VARIABLE_ModeInfo_28_28, STATE_VARIABLE_ModeInfo_23);
  }
}

static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_9;
    MR_Word Insts_10;
    MR_Word IsLive_11;
    MR_Word IsLives_12;
    MR_Word IsLive0_13;
    MR_Word ModuleInfo_14;

    check_hlds__modecheck_util__get_var_inst_3_p_0(ModeInfo_1, Var_7, &Inst_9);
    check_hlds__mode_info__mode_info_var_is_live_3_p_0(ModeInfo_1, Var_7, &IsLive0_13);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(ModeInfo_1, &ModuleInfo_14);
    switch (IsLive0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(ModuleInfo_14, Inst_9);
          if (succeeded)
            succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_p_0(ModuleInfo_14, Inst_9);
          if (succeeded)
            IsLive_11 = (MR_Integer) 1;
          else
            IsLive_11 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        IsLive_11 = (MR_Integer) 0;
        break;
    }
    check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(ModeInfo_1, Vars_8, &Insts_10, &IsLives_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IsLive_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (IsLives_12));
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__modecheck_find_matching_modes_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_RevMatchingProcModes_0_5,
  MR_Word * STATE_VARIABLE_RevMatchingProcModes_6,
  MR_Word STATE_VARIABLE_RevProcInitialInsts_0_7,
  MR_Word * STATE_VARIABLE_RevProcInitialInsts_8,
  MR_Word STATE_VARIABLE_WaitingVars_0_9,
  MR_Word * STATE_VARIABLE_WaitingVars_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModeInfo_12 = STATE_VARIABLE_ModeInfo_0_11;
      *STATE_VARIABLE_WaitingVars_10 = STATE_VARIABLE_WaitingVars_0_9;
      *STATE_VARIABLE_RevProcInitialInsts_8 = STATE_VARIABLE_RevProcInitialInsts_0_7;
      *STATE_VARIABLE_RevMatchingProcModes_6 = STATE_VARIABLE_RevMatchingProcModes_0_5;
    }
    else
    {
      MR_Integer ProcId_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ProcIds_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word ProcInfo_37;
      MR_Word ProcArgModes0_38;
      MR_Word ProcInstVarSet_39;
      MR_Word InstVarSet0_40;
      MR_Word InstVarSet_41;
      MR_Word ProcArgModes_42;
      MR_Word ModuleInfo_43;
      MR_Word ProcArgLives0_44;
      MR_Word InitialInsts_45;
      MR_Word ProcModeErrors_46;
      MR_Word MatchWhat_47;
      MR_Word InstVarSub_48;
      MR_Word Errors_51;
      MR_Word STATE_VARIABLE_ModeInfo_67_67;
      MR_Word STATE_VARIABLE_ModeInfo_69_69;
      MR_Word STATE_VARIABLE_RevProcInitialInsts_70_70;
      MR_Word STATE_VARIABLE_ModeInfo_72_72;
      MR_Word STATE_VARIABLE_ModeInfo_76_76;
      MR_Word STATE_VARIABLE_WaitingVars_77_77;
      MR_Word STATE_VARIABLE_RevMatchingProcModes_78_78;
      MR_Box conv0_ProcInfo_37;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_5;
      MR_Word next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7;
      MR_Word next_value_of_STATE_VARIABLE_WaitingVars_0_9;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_11;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), HeadVar__2_2, ((MR_Box) (ProcId_31)), &conv0_ProcInfo_37);
      ProcInfo_37 = ((MR_Word) (conv0_ProcInfo_37));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_37, &ProcArgModes0_38);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_37, &ProcInstVarSet_39);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_11, &InstVarSet0_40);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_40, ProcInstVarSet_39, &InstVarSet_41, ProcArgModes0_38, &ProcArgModes_42);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_41, STATE_VARIABLE_ModeInfo_0_11, &STATE_VARIABLE_ModeInfo_67_67);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_67_67, &ModuleInfo_43);
      hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_43, ProcInfo_37, &ProcArgLives0_44);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(HeadVar__3_3, ProcArgLives0_44, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_67_67, &STATE_VARIABLE_ModeInfo_69_69);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_43, ProcArgModes_42, &InitialInsts_45);
      {
        STATE_VARIABLE_RevProcInitialInsts_70_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevProcInitialInsts_70_70, 0) = ((MR_Box) (InitialInsts_45));
        MR_hl_field(1, STATE_VARIABLE_RevProcInitialInsts_70_70, 1) = ((MR_Box) (STATE_VARIABLE_RevProcInitialInsts_0_7));
      }
      check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_69_69, HeadVar__1_1, ProcId_31, &ProcModeErrors_46);
      {
        MatchWhat_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MatchWhat_47, 0) = ((MR_Box) (HeadVar__1_1));
      }
      if ((ProcModeErrors_46 == (MR_Word) ((MR_Unsigned) 0U)))
        check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_7_p_0(MatchWhat_47, HeadVar__3_3, InitialInsts_45, (MR_Integer) 0, &InstVarSub_48, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_72_72);
      else
        check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_7_p_0(MatchWhat_47, HeadVar__3_3, InitialInsts_45, (MR_Integer) 0, &InstVarSub_48, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_72_72);
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_72_72, &Errors_51);
      if ((Errors_51 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NewMatchingProcMode_58;

        {
          NewMatchingProcMode_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewMatchingProcMode_58, 0) = ((MR_Box) (ProcId_31));
          MR_hl_field(0, NewMatchingProcMode_58, 1) = ((MR_Box) (InstVarSub_48));
          MR_hl_field(0, NewMatchingProcMode_58, 2) = ((MR_Box) (ProcArgModes_42));
        }
        {
          STATE_VARIABLE_RevMatchingProcModes_78_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_78_78, 0) = ((MR_Box) (NewMatchingProcMode_58));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_78_78, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingProcModes_0_5));
        }
        STATE_VARIABLE_WaitingVars_77_77 = STATE_VARIABLE_WaitingVars_0_9;
        STATE_VARIABLE_ModeInfo_76_76 = STATE_VARIABLE_ModeInfo_72_72;
      }
      else
      {
        MR_Word FirstError_52 = ((MR_Word) ((MR_hl_field(1, Errors_51, (MR_Integer) 0))));
        MR_Word ErrorWaitingVars_54;

        check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_76_76);
        ErrorWaitingVars_54 = ((MR_Word) ((MR_hl_field(0, FirstError_52, (MR_Integer) 0))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ErrorWaitingVars_54, STATE_VARIABLE_WaitingVars_0_9, &STATE_VARIABLE_WaitingVars_77_77);
        STATE_VARIABLE_RevMatchingProcModes_78_78 = STATE_VARIABLE_RevMatchingProcModes_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_32;
      next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_5 = STATE_VARIABLE_RevMatchingProcModes_78_78;
      next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7 = STATE_VARIABLE_RevProcInitialInsts_70_70;
      next_value_of_STATE_VARIABLE_WaitingVars_0_9 = STATE_VARIABLE_WaitingVars_77_77;
      next_value_of_STATE_VARIABLE_ModeInfo_0_11 = STATE_VARIABLE_ModeInfo_76_76;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_RevMatchingProcModes_0_5 = next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_5;
      STATE_VARIABLE_RevProcInitialInsts_0_7 = next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7;
      STATE_VARIABLE_WaitingVars_0_9 = next_value_of_STATE_VARIABLE_WaitingVars_0_9;
      STATE_VARIABLE_ModeInfo_0_11 = next_value_of_STATE_VARIABLE_ModeInfo_0_11;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____higher_order_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_call____Unify____higher_order_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_call____Compare____higher_order_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_call____Compare____higher_order_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__modecheck_call__init(void)
{
}

void mercury__check_hlds__modecheck_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_higher_order_match_0);
}

void mercury__check_hlds__modecheck_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__modecheck_call__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.modecheck_call.
