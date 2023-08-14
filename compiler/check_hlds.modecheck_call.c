/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2023-08-14
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.builder.mih"
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
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__494__1_2_p_0(
  MR_Word TypePredOrFunc_20,
  MR_Word TypeHOPredOrFunc_25);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__545__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_18);

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
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1(
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
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__494__1_2_p_0(
  MR_Word TypePredOrFunc_20,
  MR_Word TypeHOPredOrFunc_25)
{
  MR_bool succeeded = (TypePredOrFunc_20 == TypeHOPredOrFunc_25);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__545__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_18)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ExtraGoals_11, HeadVar__2_18);
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      parse_tree__prog_data____Compare____pred_inst_info_0_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      check_hlds__mode_errors____Compare____higher_order_mismatch_info_0_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
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
  MR_Word ModuleInfo0_17;
  MR_Word ExpectedArgLives_18;
  MR_Word InitialInsts_19;
  MR_Word InstVarSub_20;
  MR_Word FinalInsts0_21;
  MR_Word FinalInsts_22;
  MR_Word STATE_VARIABLE_ModeInfo_22_23;
  MR_Word STATE_VARIABLE_ModeInfo_23_24;

  *Det_11 = (MR_Integer) 0;
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo0_17);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_17, Modes_8, &ExpectedArgLives_18);
  check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_9, ExpectedArgLives_18, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_22_23);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_17, Modes_8, &InitialInsts_19);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(Args0_9, InitialInsts_19, (MR_Integer) 0, &InstVarSub_20, STATE_VARIABLE_ModeInfo_22_23, &STATE_VARIABLE_ModeInfo_23_24);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_17, Modes_8, &FinalInsts0_21);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_20, FinalInsts0_21, &FinalInsts_22);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_9, InitialInsts_19, FinalInsts_22, (MR_Integer) 0, Args_10, ExtraGoals_12, STATE_VARIABLE_ModeInfo_23_24, STATE_VARIABLE_ModeInfo_16);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__545__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word Var_15;
  MR_Word ModuleInfo0_19;
  MR_Word ExpectedArgLives_20;
  MR_Word InitialInsts_21;
  MR_Word InstVarSub_22;
  MR_Word FinalInsts0_23;
  MR_Word FinalInsts_24;
  MR_Word STATE_VARIABLE_ModeInfo_22_25;
  MR_Word STATE_VARIABLE_ModeInfo_23_26;

  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_19);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_19, Modes_6, &ExpectedArgLives_20);
  check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(Args0_7, ExpectedArgLives_20, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_22_25);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_19, Modes_6, &InitialInsts_21);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(Args0_7, InitialInsts_21, (MR_Integer) 0, &InstVarSub_22, STATE_VARIABLE_ModeInfo_22_25, &STATE_VARIABLE_ModeInfo_23_26);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_19, Modes_6, &FinalInsts0_23);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_22, FinalInsts0_23, &FinalInsts_24);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(Args0_7, InitialInsts_21, FinalInsts_24, (MR_Integer) 0, Args_8, &ExtraGoals_11, STATE_VARIABLE_ModeInfo_23_26, STATE_VARIABLE_ModeInfo_13);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_event_call_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (ExtraGoals_11));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_event_call\'/5", (MR_String) "ExtraGoals");
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__494__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredVar_11,
  MR_Word ArgVars0_12,
  MR_Word * ArgVars_13,
  MR_Word * Modes_14,
  MR_Word * Detism_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_40,
  MR_Word * STATE_VARIABLE_ModeInfo_41)
{
  MR_bool succeeded;
  MR_Word InstMap0_18;
  MR_Word PredVarInst0_19;
  MR_Word ModuleInfo0_20;
  MR_Word PredVarInst_21;
  MR_Word ActualPredFormArity_22;
  MR_Word ActualUserArity_23;
  MR_Word Match_24;
  MR_Word HOInstInfo_56;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &InstMap0_18);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, PredVar_11, &PredVarInst0_19);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &ModuleInfo0_20);
  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_20, PredVarInst0_19, &PredVarInst_21);
  ActualPredFormArity_22 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), ArgVars0_12);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_10, &ActualUserArity_23, ActualPredFormArity_22);
  if (((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 1))
  {
    HOInstInfo_56 = ((MR_Word) ((MR_hl_field(1, PredVarInst_21, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_21, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    HOInstInfo_56 = ((MR_Word) ((MR_hl_field(3, PredVarInst_21, (MR_Integer) 2))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    if ((HOInstInfo_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarTable_59;
      MR_Word Type0_60;
      MR_Word Type_61;
      MR_Word TypePredOrFunc_62;
      MR_Word ArgTypes_63;
      MR_Word TypeHOInstInfo_64;

      check_hlds__mode_info__mode_info_get_var_table_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &VarTable_59);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_59, PredVar_11, &Type0_60);
      Type_61 = parse_tree__prog_type__strip_kind_annotation_1_f_0(Type0_60);
      succeeded = ((((MR_tag((MR_Word) Type_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_61, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        TypePredOrFunc_62 = ((MR_Unsigned) ((MR_hl_field(3, Type_61, (MR_Integer) 1))) & (MR_Integer) 1);
        ArgTypes_63 = ((MR_Word) ((MR_hl_field(3, Type_61, (MR_Integer) 2))));
        TypeHOInstInfo_64 = ((MR_Word) ((MR_hl_field(3, Type_61, (MR_Integer) 3))));
        if ((TypeHOInstInfo_64 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (TypePredOrFunc_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer NumArgs_71;
                MR_Word PredInstInfo_191;
                MR_Word ActualPredOrFunc_192;
                MR_Word Modes_193;
                MR_Word Match0_218;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_63, &NumArgs_71);
                PredInstInfo_191 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(NumArgs_71);
                Match0_218 = (MR_Word) ((MR_Word) (PredInstInfo_191));
                ActualPredOrFunc_192 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_191, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes_193 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_191, (MR_Integer) 1))));
                succeeded = (PredOrFunc_10 == ActualPredOrFunc_192);
                if (succeeded)
                {
                  MR_Word ActualPredFormArity_171;
                  MR_Word ActualUserArity_172;
                  MR_Integer Var_162;
                  MR_Integer Var_163;

                  ActualPredFormArity_171 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_193);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_192, &ActualUserArity_172, ActualPredFormArity_171);
                  Var_162 = (MR_Integer) (ActualUserArity_23);
                  Var_163 = (MR_Integer) (ActualUserArity_172);
                  succeeded = (Var_162 == Var_163);
                  if (succeeded)
                    Match_24 = Match0_218;
                  else
                  {
                    MR_Word Mismatch_164;

                    {
                      Mismatch_164 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Mismatch_164, 0) = ((MR_Box) (ActualUserArity_172));
                    }
                    {
                      Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_164));
                    }
                  }
                }
                else
                {
                  MR_Word Mismatch_174;

                  {
                    Mismatch_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Mismatch_174, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_192));
                  }
                  {
                    Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_174));
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              Match_24 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
              break;
          }
        else
        {
          MR_Word Var_79;
          MR_Word PredInstInfo_122 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_64), (MR_Integer) 1));
          MR_Word ActualPredOrFunc_123 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_122, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Modes_124 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_122, (MR_Integer) 1))));
          MR_Word Match0_146;

          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_79, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
            MR_hl_field(0, Var_79, 1) = ((MR_Box) (check_hlds__modecheck_call__modecheck_higher_order_call_9_p_0_1));
            MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_79, 3) = ((MR_Box) (TypePredOrFunc_62));
            MR_hl_field(0, Var_79, 4) = ((MR_Box) (ActualPredOrFunc_123));
          }
          mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140check_hlds.modecheck_call.get_higher_order_inst_match\'/6", (MR_String) "TypePredOrFunc != TypeHOPredOrFunc");
          Match0_146 = (MR_Word) ((MR_Word) (PredInstInfo_122));
          succeeded = (PredOrFunc_10 == ActualPredOrFunc_123);
          if (succeeded)
          {
            MR_Word ActualPredFormArity_108;
            MR_Word ActualUserArity_109;
            MR_Integer Var_102;
            MR_Integer Var_103;

            ActualPredFormArity_108 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_124);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_123, &ActualUserArity_109, ActualPredFormArity_108);
            Var_102 = (MR_Integer) (ActualUserArity_23);
            Var_103 = (MR_Integer) (ActualUserArity_109);
            succeeded = (Var_102 == Var_103);
            if (succeeded)
              Match_24 = Match0_146;
            else
            {
              MR_Word Mismatch_104;

              {
                Mismatch_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Mismatch_104, 0) = ((MR_Box) (ActualUserArity_109));
              }
              {
                Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_104));
              }
            }
          }
          else
          {
            MR_Word Mismatch_114;

            {
              Mismatch_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Mismatch_114, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_123));
            }
            {
              Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_114));
            }
          }
        }
      }
      else
        Match_24 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[1]));
    }
    else
    {
      MR_Word Match0_58;
      MR_Word PredInstInfo_72 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_56), (MR_Integer) 1));
      MR_Word ActualPredOrFunc_73;
      MR_Word Modes_74;

      Match0_58 = (MR_Word) ((MR_Word) (PredInstInfo_72));
      ActualPredOrFunc_73 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_72, (MR_Integer) 0))) & (MR_Integer) 1);
      Modes_74 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_72, (MR_Integer) 1))));
      succeeded = (PredOrFunc_10 == ActualPredOrFunc_73);
      if (succeeded)
      {
        MR_Word ActualPredFormArity_77;
        MR_Word ActualUserArity_78;
        MR_Integer Var_90;
        MR_Integer Var_91;

        ActualPredFormArity_77 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_74);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_73, &ActualUserArity_78, ActualPredFormArity_77);
        Var_90 = (MR_Integer) (ActualUserArity_23);
        Var_91 = (MR_Integer) (ActualUserArity_78);
        succeeded = (Var_90 == Var_91);
        if (succeeded)
          Match_24 = Match0_58;
        else
        {
          MR_Word Mismatch_85;

          {
            Mismatch_85 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Mismatch_85, 0) = ((MR_Box) (ActualUserArity_78));
          }
          {
            Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_85));
          }
        }
      }
      else
      {
        MR_Word Mismatch_86;

        {
          Mismatch_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Mismatch_86, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_73));
        }
        {
          Match_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Match_24, 0) = ((MR_Box) (Mismatch_86));
        }
      }
    }
  else
    Match_24 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
  if (((MR_tag((MR_Word) Match_24)) == (MR_Integer) 0))
  {
    MR_Word PredInstInfo_25 = (MR_Word) ((MR_Word) (Match_24));
    MR_Word Modes0_27 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_25, (MR_Integer) 1))));
    MR_Word Detism0_29 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_25, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word A_30;
    MR_Word B_31;
    MR_Word Reason_32;

    succeeded = ((((MR_tag((MR_Word) PredVarInst_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      A_30 = ((MR_Unsigned) ((MR_hl_field(3, PredVarInst_21, (MR_Integer) 1))) & (MR_Integer) 7);
      B_31 = ((MR_Word) ((MR_hl_field(3, PredVarInst_21, (MR_Integer) 2))));
      succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_40, PredVar_11, &Reason_32);
    }
    if (succeeded)
    {
      MR_Word BetterPredVarInst_33;
      MR_Word WaitingVars_34;
      MR_Word ModeError_35;

      {
        BetterPredVarInst_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BetterPredVarInst_33, 0) = (MR_Box) ((MR_Unsigned) (A_30));
        MR_hl_field(1, BetterPredVarInst_33, 1) = ((MR_Box) (B_31));
      }
      WaitingVars_34 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_11);
      {
        ModeError_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_35, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, ModeError_35, 1) = ((MR_Box) (Reason_32));
        MR_hl_field(3, ModeError_35, 2) = ((MR_Box) (PredVar_11));
        MR_hl_field(3, ModeError_35, 3) = ((MR_Box) (PredVarInst_21));
        MR_hl_field(3, ModeError_35, 4) = ((MR_Box) (BetterPredVarInst_33));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_34, ModeError_35, STATE_VARIABLE_ModeInfo_0_40, STATE_VARIABLE_ModeInfo_41);
      *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
      *Detism_15 = (MR_Integer) 6;
      *ArgVars_13 = ArgVars0_12;
      *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word STATE_VARIABLE_ModeInfo_43_43;
      MR_Word ModuleInfo0_92;
      MR_Word ExpectedArgLives_93;
      MR_Word InitialInsts_94;
      MR_Word InstVarSub_95;
      MR_Word FinalInsts0_96;
      MR_Word FinalInsts_97;
      MR_Word STATE_VARIABLE_ModeInfo_22_98;
      MR_Word STATE_VARIABLE_ModeInfo_23_99;
      MR_Word Var_54;
      MR_Word Var_37;

      *Modes_14 = Modes0_27;
      *Detism_15 = Detism0_29;
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_40, &ModuleInfo0_92);
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_92, *Modes_14, &ExpectedArgLives_93);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(ArgVars0_12, ExpectedArgLives_93, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_40, &STATE_VARIABLE_ModeInfo_22_98);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_92, *Modes_14, &InitialInsts_94);
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_12, InitialInsts_94, (MR_Integer) 1, &InstVarSub_95, STATE_VARIABLE_ModeInfo_22_98, &STATE_VARIABLE_ModeInfo_23_99);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_92, *Modes_14, &FinalInsts0_96);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_95, FinalInsts0_96, &FinalInsts_97);
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_12, InitialInsts_94, FinalInsts_97, (MR_Integer) 1, ArgVars_13, ExtraGoals_16, STATE_VARIABLE_ModeInfo_23_99, &STATE_VARIABLE_ModeInfo_43_43);
      parse_tree__prog_data__determinism_components_3_p_0(*Detism_15, &Var_37, &Var_54);
      succeeded = ((MR_Integer) 0 == Var_54);
      if (succeeded)
      {
        MR_Word Instmap_38;

        hlds__instmap__init_unreachable_1_p_0(&Instmap_38);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_38, STATE_VARIABLE_ModeInfo_43_43, STATE_VARIABLE_ModeInfo_41);
      }
      else
        *STATE_VARIABLE_ModeInfo_41 = STATE_VARIABLE_ModeInfo_43_43;
    }
  }
  else
  {
    MR_Word Mismatch_39 = ((MR_Word) ((MR_hl_field(1, Match_24, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ModeInfo_47_47;
    MR_Word WaitingVars_49;
    MR_Word ModeError_50;

    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_40, &STATE_VARIABLE_ModeInfo_47_47);
    WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_11);
    {
      ModeError_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_50, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, ModeError_50, 1) = ((MR_Box) (PredVar_11));
      MR_hl_field(3, ModeError_50, 2) = ((MR_Box) (PredVarInst_21));
      MR_hl_field(3, ModeError_50, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
      MR_hl_field(3, ModeError_50, 4) = ((MR_Box) (ActualUserArity_23));
      MR_hl_field(3, ModeError_50, 5) = ((MR_Box) (Mismatch_39));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_49, ModeError_50, STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_41);
    *Modes_14 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_15 = (MR_Integer) 6;
    *ArgVars_13 = ArgVars0_12;
    *ExtraGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
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
        MR_Integer Var_101;

        Var_101 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        succeeded = (ProcId0_13 == Var_101);
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
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_56, STATE_VARIABLE_ModeInfo_57);
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
      MR_Word STATE_VARIABLE_ModeInfo_72_72;
      MR_Word ModuleInfo_103;
      MR_Word InitialInsts0_104;
      MR_Word FinalInsts0_105;
      MR_Word InitialInsts_106;
      MR_Word FinalInsts_107;
      MR_Word CanSucceed_108;
      MR_Word STATE_VARIABLE_ModeInfo_27_110;
      MR_Box conv0_ProcInfo_31;

      *SelectedProcId_14 = ProcId_30;
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (ProcId_30)), &conv0_ProcInfo_31);
      ProcInfo_31 = ((MR_Word) (conv0_ProcInfo_31));
      hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_21, ProcInfo_31, &ProcArgLives0_32);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(ArgVars0_15, ProcArgLives0_32, ArgOffset_25, STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_70_70);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_31, &ProcArgModes0_33);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_31, &ProcInstVarSet_34);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_70_70, &InstVarSet0_35);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_35, ProcInstVarSet_34, &InstVarSet_36, ProcArgModes0_33, &ProcArgModes_37);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_36, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_21, ProcArgModes_37, &InitialInsts_38);
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_15, InitialInsts_38, ArgOffset_25, &InstVarSub_39, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_72_72);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_72_72, &ModuleInfo_103);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_103, ProcArgModes_37, &InitialInsts0_104);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_103, ProcArgModes_37, &FinalInsts0_105);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_39, InitialInsts0_104, &InitialInsts_106);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_39, FinalInsts0_105, &FinalInsts_107);
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_15, InitialInsts_106, FinalInsts_107, ArgOffset_25, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_72_72, &STATE_VARIABLE_ModeInfo_27_110);
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_31, &CanSucceed_108);
      switch (CanSucceed_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModeInfo_57 = STATE_VARIABLE_ModeInfo_27_110;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Instmap_109;

            hlds__instmap__init_unreachable_1_p_0(&Instmap_109);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_109, STATE_VARIABLE_ModeInfo_27_110, STATE_VARIABLE_ModeInfo_57);
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
      MR_Word STATE_VARIABLE_ModeInfo_75_75;
      MR_Word STATE_VARIABLE_ModeInfo_78_78;
      MR_Word STATE_VARIABLE_ModeInfo_79_79;

      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &OldErrors_40);
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_75_75);
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars0_41);
      check_hlds__modecheck_call__modecheck_find_matching_modes_12_p_0(PredId_11, ProcTable_23, ArgVars0_15, ProcIds_24, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingProcModes_42, (MR_Word) ((MR_Unsigned) 0U), &RevProcInitialInsts_43, WaitingVars0_41, &WaitingVars1_44, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_78_78);
      if ((RevMatchingProcModes_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ProcInitialInsts_45;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[0]), RevProcInitialInsts_43, &ProcInitialInsts_45);
        check_hlds__modecheck_call__no_matching_modes_8_p_0(PredId_11, ArgVars0_15, ProcInitialInsts_45, MaybeDetism_12, WaitingVars1_44, SelectedProcId_14, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_79_79);
        *ArgVars_16 = ArgVars0_15;
        *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word MatchingProcModes_48;
        MR_Word CalleeModeErrors_49;
        MR_Word ProcInfo_88;
        MR_Word ProcArgModes_89;
        MR_Word InstVarSub_90;
        MR_Box conv1_ProcInfo_88;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0), RevMatchingProcModes_42, &MatchingProcModes_48);
        check_hlds__mode_comparison__choose_best_match_8_p_0(STATE_VARIABLE_ModeInfo_78_78, MatchingProcModes_48, PredId_11, ProcTable_23, ArgVars0_15, SelectedProcId_14, &InstVarSub_90, &ProcArgModes_89);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (*SelectedProcId_14)), &conv1_ProcInfo_88);
        ProcInfo_88 = ((MR_Word) (conv1_ProcInfo_88));
        check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_78_78, PredId_11, *SelectedProcId_14, &CalleeModeErrors_49);
        if ((CalleeModeErrors_49 == (MR_Word) ((MR_Unsigned) 0U)))
          check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(ProcInfo_88, ProcArgModes_89, ArgVars0_15, ArgOffset_25, InstVarSub_90, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_79_79);
        else
        {
          MR_Word ArgInsts_52;
          MR_Word ModeError_53;
          MR_Word STATE_VARIABLE_ModeInfo_82_82;
          MR_Word WaitingVars_85;

          *ArgVars_16 = ArgVars0_15;
          WaitingVars_85 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ArgVars_16);
          *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, *ArgVars_16, &ArgInsts_52);
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_78_78, &STATE_VARIABLE_ModeInfo_82_82);
          {
            ModeError_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_53, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ModeError_53, 1) = ((MR_Box) (*ArgVars_16));
            MR_hl_field(3, ModeError_53, 2) = ((MR_Box) (ArgInsts_52));
            MR_hl_field(3, ModeError_53, 3) = ((MR_Box) (PredId_11));
            MR_hl_field(3, ModeError_53, 4) = ((MR_Box) (*SelectedProcId_14));
            MR_hl_field(3, ModeError_53, 5) = ((MR_Box) (CalleeModeErrors_49));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_85, ModeError_53, STATE_VARIABLE_ModeInfo_82_82, &STATE_VARIABLE_ModeInfo_79_79);
        }
      }
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_79_79, &NewErrors_54);
      mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_40, NewErrors_54, &Errors_55);
      check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_55, STATE_VARIABLE_ModeInfo_79_79, STATE_VARIABLE_ModeInfo_57);
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
  hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_10, &CanSucceed_23);
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
    MR_Word InitialInsts_31;
    MR_Word ArgLives_32;
    MR_Word ModuleInfo0_33;
    MR_Word PredInfo0_34;
    MR_Word Context_35;
    MR_Integer Arity_36;
    MR_Word FinalInsts_37;
    MR_Word Modes_38;
    MR_Word InstVarSet_39;
    MR_Word ModuleInfo_40;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_ModeInfo_26_43;

    check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(STATE_VARIABLE_ModeInfo_0_22, ArgVars_10, &InitialInsts_31, &ArgLives_32);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &ModuleInfo0_33);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_33, PredId_9, &PredInfo0_34);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_34, &Context_35);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[1]), ArgVars_10, &Arity_36);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_36, ((MR_Box) ((MR_Unsigned) 4U)), &FinalInsts_37);
    parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(InitialInsts_31, FinalInsts_37, &Modes_38);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &InstVarSet_39);
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (ArgLives_32));
    }
    check_hlds__proc_requests__request_proc_9_p_0(PredId_9, Modes_38, InstVarSet_39, Var_42, MaybeDetism_12, Context_35, NewProcId_14, ModuleInfo0_33, &ModuleInfo_40);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_40, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_26_43);
    check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_26_43, &STATE_VARIABLE_ModeInfo_25_25);
    hlds__instmap__init_unreachable_1_p_0(&Instmap_19);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_19, STATE_VARIABLE_ModeInfo_25_25, STATE_VARIABLE_ModeInfo_23);
  }
  else
  {
    MR_Word InstMap_20;
    MR_Word ModeError_21;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;

    *NewProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_22, &InstMap_20);
    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_22, &STATE_VARIABLE_ModeInfo_28_28);
    {
      ModeError_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ModeError_21, 1) = ((MR_Box) (InstMap_20));
      MR_hl_field(3, ModeError_21, 2) = ((MR_Box) (ArgVars_10));
      MR_hl_field(3, ModeError_21, 3) = ((MR_Box) (ProcInitialInsts_11));
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
      MR_Word InstVarSub_47;
      MR_Word Errors_50;
      MR_Word STATE_VARIABLE_ModeInfo_66_66;
      MR_Word STATE_VARIABLE_ModeInfo_68_68;
      MR_Word STATE_VARIABLE_RevProcInitialInsts_69_69;
      MR_Word STATE_VARIABLE_ModeInfo_71_71;
      MR_Word STATE_VARIABLE_ModeInfo_75_75;
      MR_Word STATE_VARIABLE_WaitingVars_76_76;
      MR_Word STATE_VARIABLE_RevMatchingProcModes_77_77;
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
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_41, STATE_VARIABLE_ModeInfo_0_11, &STATE_VARIABLE_ModeInfo_66_66);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_66_66, &ModuleInfo_43);
      hlds__hlds_pred__proc_info_arglives_3_p_0(ModuleInfo_43, ProcInfo_37, &ProcArgLives0_44);
      check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(HeadVar__3_3, ProcArgLives0_44, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_66_66, &STATE_VARIABLE_ModeInfo_68_68);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_43, ProcArgModes_42, &InitialInsts_45);
      {
        STATE_VARIABLE_RevProcInitialInsts_69_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevProcInitialInsts_69_69, 0) = ((MR_Box) (InitialInsts_45));
        MR_hl_field(1, STATE_VARIABLE_RevProcInitialInsts_69_69, 1) = ((MR_Box) (STATE_VARIABLE_RevProcInitialInsts_0_7));
      }
      check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_68_68, HeadVar__1_1, ProcId_31, &ProcModeErrors_46);
      if ((ProcModeErrors_46 == (MR_Word) ((MR_Unsigned) 0U)))
        check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(HeadVar__3_3, InitialInsts_45, (MR_Integer) 0, &InstVarSub_47, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_71_71);
      else
        check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(HeadVar__3_3, InitialInsts_45, (MR_Integer) 0, &InstVarSub_47, STATE_VARIABLE_ModeInfo_68_68, &STATE_VARIABLE_ModeInfo_71_71);
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &Errors_50);
      if ((Errors_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NewMatchingProcMode_57;

        {
          NewMatchingProcMode_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewMatchingProcMode_57, 0) = ((MR_Box) (ProcId_31));
          MR_hl_field(0, NewMatchingProcMode_57, 1) = ((MR_Box) (InstVarSub_47));
          MR_hl_field(0, NewMatchingProcMode_57, 2) = ((MR_Box) (ProcArgModes_42));
        }
        {
          STATE_VARIABLE_RevMatchingProcModes_77_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_77_77, 0) = ((MR_Box) (NewMatchingProcMode_57));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_77_77, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingProcModes_0_5));
        }
        STATE_VARIABLE_WaitingVars_76_76 = STATE_VARIABLE_WaitingVars_0_9;
        STATE_VARIABLE_ModeInfo_75_75 = STATE_VARIABLE_ModeInfo_71_71;
      }
      else
      {
        MR_Word FirstError_51 = ((MR_Word) ((MR_hl_field(1, Errors_50, (MR_Integer) 0))));
        MR_Word ErrorWaitingVars_53;

        check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_75_75);
        ErrorWaitingVars_53 = ((MR_Word) ((MR_hl_field(0, FirstError_51, (MR_Integer) 0))));
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ErrorWaitingVars_53, STATE_VARIABLE_WaitingVars_0_9, &STATE_VARIABLE_WaitingVars_76_76);
        STATE_VARIABLE_RevMatchingProcModes_77_77 = STATE_VARIABLE_RevMatchingProcModes_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_32;
      next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_5 = STATE_VARIABLE_RevMatchingProcModes_77_77;
      next_value_of_STATE_VARIABLE_RevProcInitialInsts_0_7 = STATE_VARIABLE_RevProcInitialInsts_69_69;
      next_value_of_STATE_VARIABLE_WaitingVars_0_9 = STATE_VARIABLE_WaitingVars_76_76;
      next_value_of_STATE_VARIABLE_ModeInfo_0_11 = STATE_VARIABLE_ModeInfo_75_75;
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
