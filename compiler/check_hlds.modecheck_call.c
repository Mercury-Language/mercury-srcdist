/*
** Automatically generated from `modecheck_call.m'
** by the Mercury compiler,
** version rotd-2024-12-31
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_0[1];

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_0;

static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_1[1];

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_1;

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_1[1];

static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_maybe_higher_order_match_0[2];

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_maybe_higher_order_match_0[2];

static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_maybe_higher_order_match_0[2];

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__513__1_2_p_0(
  MR_Word TypePredOrFunc_19,
  MR_Word TypeHOPredOrFunc_23);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__569__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_19);

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_plain_or_foreign_call__121__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_65);

static void MR_CALL 
check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0(
  MR_Word ModeInfo_7,
  MR_Word ExpectedPredOrFunc_8,
  MR_Word PredVar_9,
  MR_Word PredVarInst_10,
  MR_Word ExpectedUserArity_11,
  MR_Word * MaybeMatch_12);

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_112_108_97_105_110_95_111_114_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ArgOffset_11,
  MR_Word ProcArgModes_12,
  MR_Word ArgVars0_13,
  MR_Word InstVarSub_14,
  MR_Word * ArgVars_15,
  MR_Word * ExtraGoals_16,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26);

static void MR_CALL 
check_hlds__modecheck_call__no_matching_modes_8_p_0(
  MR_Word PredId_9,
  MR_Word ArgVars_10,
  MR_Word Mismatches_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26);

static void MR_CALL 
check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__modecheck_call__modecheck_find_matching_modes_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevMatchingProcModes_0_6,
  MR_Word * STATE_VARIABLE_RevMatchingProcModes_7,
  MR_Word STATE_VARIABLE_RevMismatches_0_8,
  MR_Word * STATE_VARIABLE_RevMismatches_9,
  MR_Word STATE_VARIABLE_WaitingVars_0_10,
  MR_Word * STATE_VARIABLE_WaitingVars_11,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13);

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_2[2][1];

static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_3[2][5];




static /* final */ const MR_Box check_hlds__modecheck_call_scalar_common_1[1][2] = {
  /* row   0 */
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


static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_inst_info_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_0 = {
  (MR_String) "higher_order_match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_higher_order_mismatch_info_0) };

static const MR_DuFunctorDesc check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_1 = {
  (MR_String) "higher_order_mismatch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__modecheck_call__check_hlds__modecheck_call__field_types_maybe_higher_order_match_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_0[1] = { &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_0 };

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_1[1] = { &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_1 };

static const MR_DuPtagLayout check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_maybe_higher_order_match_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__modecheck_call__check_hlds__modecheck_call__du_stag_ordered_maybe_higher_order_match_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_maybe_higher_order_match_0[2] = {
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_0,
  &check_hlds__modecheck_call__check_hlds__modecheck_call__du_functor_desc_maybe_higher_order_match_0_1
};

static const MR_Integer check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_maybe_higher_order_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_maybe_higher_order_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0_10001)),
  (MR_String) "check_hlds.modecheck_call",
  (MR_String) "maybe_higher_order_match",
  { check_hlds__modecheck_call__check_hlds__modecheck_call__du_name_ordered_maybe_higher_order_match_0 },
  { check_hlds__modecheck_call__check_hlds__modecheck_call__du_ptag_ordered_maybe_higher_order_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__modecheck_call__check_hlds__modecheck_call__functor_number_map_maybe_higher_order_match_0,

};

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__513__1_2_p_0(
  MR_Word TypePredOrFunc_19,
  MR_Word TypeHOPredOrFunc_23)
{
  MR_bool succeeded = (TypePredOrFunc_19 == TypeHOPredOrFunc_23);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__569__1_2_p_0(
  MR_Word ExtraGoals_11,
  MR_Word HeadVar__2_19)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(ExtraGoals_11, HeadVar__2_19);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_plain_or_foreign_call__121__1_2_p_0(
  MR_Word PredOrFunc_29,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (PredOrFunc_29 == HeadVar__2_65);

  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0(
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
check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0(
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
  MR_Word ArgOffset_14;
  MR_Word ModuleInfo0_18;
  MR_Word ExpectedArgLives_19;
  MR_Word InitialInsts_20;
  MR_Word InstVarSub_21;
  MR_Word FinalInsts0_23;
  MR_Word FinalInsts_24;
  MR_Word STATE_VARIABLE_ModeInfo_25_25;
  MR_Word STATE_VARIABLE_ModeInfo_26_26;
  MR_Word _BoundInstVars_22;

  *Det_11 = (MR_Integer) 0;
  ArgOffset_14 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_15, &ModuleInfo0_18);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_18, Modes_8, &ExpectedArgLives_19);
  check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(ArgOffset_14, Args0_9, ExpectedArgLives_19, STATE_VARIABLE_ModeInfo_0_15, &STATE_VARIABLE_ModeInfo_25_25);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_18, Modes_8, &InitialInsts_20);
  check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0((MR_Word) ((MR_Unsigned) 4U), ArgOffset_14, Args0_9, InitialInsts_20, &InstVarSub_21, &_BoundInstVars_22, STATE_VARIABLE_ModeInfo_25_25, &STATE_VARIABLE_ModeInfo_26_26);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_18, Modes_8, &FinalInsts0_23);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_21, FinalInsts0_23, &FinalInsts_24);
  check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_14, Args0_9, InitialInsts_20, FinalInsts_24, Args_10, ExtraGoals_12, STATE_VARIABLE_ModeInfo_26_26, STATE_VARIABLE_ModeInfo_16);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__modecheck_event_call_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_event_call__569__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word ArgOffset_10;
  MR_Word ExtraGoals_11;
  MR_Word Var_16;
  MR_Word ModuleInfo0_20;
  MR_Word ExpectedArgLives_21;
  MR_Word InitialInsts_22;
  MR_Word InstVarSub_23;
  MR_Word FinalInsts0_25;
  MR_Word FinalInsts_26;
  MR_Word STATE_VARIABLE_ModeInfo_25_27;
  MR_Word STATE_VARIABLE_ModeInfo_26_28;
  MR_Word _BoundInstVars_24;

  ArgOffset_10 = check_hlds__modecheck_util__unify_method_event_cast_modecheck_arg_offset_0_f_0();
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_20);
  check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_20, Modes_6, &ExpectedArgLives_21);
  check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(ArgOffset_10, Args0_7, ExpectedArgLives_21, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_25_27);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_20, Modes_6, &InitialInsts_22);
  check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0((MR_Word) ((MR_Unsigned) 8U), ArgOffset_10, Args0_7, InitialInsts_22, &InstVarSub_23, &_BoundInstVars_24, STATE_VARIABLE_ModeInfo_25_27, &STATE_VARIABLE_ModeInfo_26_28);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_20, Modes_6, &FinalInsts0_25);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_23, FinalInsts0_25, &FinalInsts_26);
  check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_10, Args0_7, InitialInsts_22, FinalInsts_26, Args_8, &ExtraGoals_11, STATE_VARIABLE_ModeInfo_26_28, STATE_VARIABLE_ModeInfo_13);
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

void MR_CALL 
check_hlds__modecheck_call__modecheck_higher_order_call_8_p_0(
  MR_Word GenericCall_9,
  MR_Word ArgVars0_10,
  MR_Word * ArgVars_11,
  MR_Word * Modes_12,
  MR_Word * Detism_13,
  MR_Word * ExtraGoals_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_43,
  MR_Word * STATE_VARIABLE_ModeInfo_44)
{
  MR_bool succeeded;
  MR_Word PredVar_16 = ((MR_Word) ((MR_hl_field(0, GenericCall_9, (MR_Integer) 0))));
  MR_Word PredOrFunc_18 = ((MR_Unsigned) ((MR_hl_field(0, GenericCall_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word InstMap0_21;
  MR_Word PredVarInst0_22;
  MR_Word ModuleInfo0_23;
  MR_Word PredVarInst_24;
  MR_Word ActualPredFormArity_25;
  MR_Word ActualUserArity_26;
  MR_Word Match_27;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_43, &InstMap0_21);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_21, PredVar_16, &PredVarInst0_22);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_43, &ModuleInfo0_23);
  check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_23, PredVarInst0_22, &PredVarInst_24);
  ActualPredFormArity_25 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[0]), ArgVars0_10);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_18, &ActualUserArity_26, ActualPredFormArity_25);
  check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0(STATE_VARIABLE_ModeInfo_0_43, PredOrFunc_18, PredVar_16, PredVarInst_24, ActualUserArity_26, &Match_27);
  if (((MR_tag((MR_Word) Match_27)) == (MR_Integer) 0))
  {
    MR_Word PredInstInfo_28 = (MR_Word) ((MR_Word) (Match_27));
    MR_Word Modes0_30 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_28, (MR_Integer) 1))));
    MR_Word Detism0_32 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_28, (MR_Integer) 3))) & (MR_Integer) 7);
    MR_Word A_33;
    MR_Word B_34;
    MR_Word Reason_35;

    succeeded = ((((MR_tag((MR_Word) PredVarInst_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      A_33 = ((MR_Unsigned) ((MR_hl_field(3, PredVarInst_24, (MR_Integer) 1))) & (MR_Integer) 7);
      B_34 = ((MR_Word) ((MR_hl_field(3, PredVarInst_24, (MR_Integer) 2))));
      succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(STATE_VARIABLE_ModeInfo_0_43, PredVar_16, &Reason_35);
    }
    if (succeeded)
    {
      MR_Word BetterPredVarInst_36;
      MR_Word WaitingVars_37;
      MR_Word ModeError_38;

      {
        BetterPredVarInst_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, BetterPredVarInst_36, 0) = (MR_Box) ((MR_Unsigned) (A_33));
        MR_hl_field(1, BetterPredVarInst_36, 1) = ((MR_Box) (B_34));
      }
      WaitingVars_37 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_16);
      {
        ModeError_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ModeError_38, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, ModeError_38, 1) = ((MR_Box) (Reason_35));
        MR_hl_field(3, ModeError_38, 2) = ((MR_Box) (PredVar_16));
        MR_hl_field(3, ModeError_38, 3) = ((MR_Box) (PredVarInst_24));
        MR_hl_field(3, ModeError_38, 4) = ((MR_Box) (BetterPredVarInst_36));
      }
      check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_37, ModeError_38, STATE_VARIABLE_ModeInfo_0_43, STATE_VARIABLE_ModeInfo_44);
      *Modes_12 = (MR_Word) ((MR_Unsigned) 0U);
      *Detism_13 = (MR_Integer) 6;
      *ArgVars_11 = ArgVars0_10;
      *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ArgOffset_39;
      MR_Word Var_46;
      MR_Word STATE_VARIABLE_ModeInfo_47_47;
      MR_Word ModuleInfo0_59;
      MR_Word ExpectedArgLives_60;
      MR_Word InitialInsts_61;
      MR_Word InstVarSub_62;
      MR_Word FinalInsts0_64;
      MR_Word FinalInsts_65;
      MR_Word STATE_VARIABLE_ModeInfo_25_66;
      MR_Word STATE_VARIABLE_ModeInfo_26_67;
      MR_Word _BoundInstVars_63;
      MR_Word Var_58;
      MR_Word Var_40;

      *Modes_12 = Modes0_30;
      *Detism_13 = Detism0_32;
      ArgOffset_39 = check_hlds__modecheck_util__higher_order_modecheck_arg_offset_0_f_0();
      {
        Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_46, 0) = ((MR_Box) (GenericCall_9));
      }
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_43, &ModuleInfo0_59);
      check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo0_59, *Modes_12, &ExpectedArgLives_60);
      check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(ArgOffset_39, ArgVars0_10, ExpectedArgLives_60, STATE_VARIABLE_ModeInfo_0_43, &STATE_VARIABLE_ModeInfo_25_66);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo0_59, *Modes_12, &InitialInsts_61);
      check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(Var_46, ArgOffset_39, ArgVars0_10, InitialInsts_61, &InstVarSub_62, &_BoundInstVars_63, STATE_VARIABLE_ModeInfo_25_66, &STATE_VARIABLE_ModeInfo_26_67);
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo0_59, *Modes_12, &FinalInsts0_64);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_62, FinalInsts0_64, &FinalInsts_65);
      check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_39, ArgVars0_10, InitialInsts_61, FinalInsts_65, ArgVars_11, ExtraGoals_14, STATE_VARIABLE_ModeInfo_26_67, &STATE_VARIABLE_ModeInfo_47_47);
      parse_tree__prog_data__determinism_components_3_p_0(*Detism_13, &Var_40, &Var_58);
      succeeded = ((MR_Integer) 0 == Var_58);
      if (succeeded)
      {
        MR_Word Instmap_41;

        hlds__instmap__init_unreachable_1_p_0(&Instmap_41);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_41, STATE_VARIABLE_ModeInfo_47_47, STATE_VARIABLE_ModeInfo_44);
      }
      else
        *STATE_VARIABLE_ModeInfo_44 = STATE_VARIABLE_ModeInfo_47_47;
    }
  }
  else
  {
    MR_Word Mismatch_42 = ((MR_Word) ((MR_hl_field(1, Match_27, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_ModeInfo_51_51;
    MR_Word WaitingVars_53;
    MR_Word ModeError_54;

    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_0_43, &STATE_VARIABLE_ModeInfo_51_51);
    WaitingVars_53 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PredVar_16);
    {
      ModeError_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_54, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, ModeError_54, 1) = ((MR_Box) (PredVar_16));
      MR_hl_field(3, ModeError_54, 2) = ((MR_Box) (PredVarInst_24));
      MR_hl_field(3, ModeError_54, 3) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
      MR_hl_field(3, ModeError_54, 4) = ((MR_Box) (ActualUserArity_26));
      MR_hl_field(3, ModeError_54, 5) = ((MR_Box) (Mismatch_42));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_53, ModeError_54, STATE_VARIABLE_ModeInfo_51_51, STATE_VARIABLE_ModeInfo_44);
    *Modes_12 = (MR_Word) ((MR_Unsigned) 0U);
    *Detism_13 = (MR_Integer) 6;
    *ArgVars_11 = ArgVars0_10;
    *ExtraGoals_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__get_higher_order_inst_match__513__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0(
  MR_Word ModeInfo_7,
  MR_Word ExpectedPredOrFunc_8,
  MR_Word PredVar_9,
  MR_Word PredVarInst_10,
  MR_Word ExpectedUserArity_11,
  MR_Word * MaybeMatch_12)
{
  MR_bool succeeded;
  MR_Word HOInstInfo_14;

  if (((MR_tag((MR_Word) PredVarInst_10)) == (MR_Integer) 1))
  {
    HOInstInfo_14 = ((MR_Word) ((MR_hl_field(1, PredVarInst_10, (MR_Integer) 1))));
    succeeded = MR_TRUE;
  }
  else
  if (((((MR_tag((MR_Word) PredVarInst_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PredVarInst_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
  {
    HOInstInfo_14 = ((MR_Word) ((MR_hl_field(3, PredVarInst_10, (MR_Integer) 2))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    if ((HOInstInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarTable_16;
      MR_Word Type0_17;
      MR_Word Type_18;
      MR_Word TypePredOrFunc_19;
      MR_Word ArgTypes_20;
      MR_Word TypeHOInstInfo_21;

      check_hlds__mode_info__mode_info_get_var_table_2_p_0(ModeInfo_7, &VarTable_16);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_16, PredVar_9, &Type0_17);
      Type_18 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type0_17);
      succeeded = ((((MR_tag((MR_Word) Type_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        TypePredOrFunc_19 = ((MR_Unsigned) ((MR_hl_field(3, Type_18, (MR_Integer) 1))) & (MR_Integer) 1);
        ArgTypes_20 = ((MR_Word) ((MR_hl_field(3, Type_18, (MR_Integer) 2))));
        TypeHOInstInfo_21 = ((MR_Word) ((MR_hl_field(3, Type_18, (MR_Integer) 3))));
        if ((TypeHOInstInfo_21 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (TypePredOrFunc_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer NumArgs_27;
                MR_Word PredInstInfo_35;
                MR_Word ActualPredOrFunc_66;
                MR_Word Modes_67;

                mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_20, &NumArgs_27);
                PredInstInfo_35 = check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(NumArgs_27);
                ActualPredOrFunc_66 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_35, (MR_Integer) 0))) & (MR_Integer) 1);
                Modes_67 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_35, (MR_Integer) 1))));
                succeeded = (ExpectedPredOrFunc_8 == ActualPredOrFunc_66);
                if (succeeded)
                {
                  MR_Word ActualPredFormArity_70;
                  MR_Word ActualUserArity_71;
                  MR_Integer Var_76;
                  MR_Integer Var_77;

                  ActualPredFormArity_70 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_67);
                  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_66, &ActualUserArity_71, ActualPredFormArity_70);
                  Var_76 = (MR_Integer) (ExpectedUserArity_11);
                  Var_77 = (MR_Integer) (ActualUserArity_71);
                  succeeded = (Var_76 == Var_77);
                  if (succeeded)
                    *MaybeMatch_12 = (MR_Word) ((MR_Word) (PredInstInfo_35));
                  else
                  {
                    MR_Word HOMismatch_72;

                    {
                      HOMismatch_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, HOMismatch_72, 0) = ((MR_Box) (ActualUserArity_71));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeMatch_12 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_72));
                    }
                  }
                }
                else
                {
                  MR_Word HOMismatch_73;

                  {
                    HOMismatch_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HOMismatch_73, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_66));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *MaybeMatch_12 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_73));
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              *MaybeMatch_12 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
              break;
          }
        else
        {
          MR_Word TypeHOPredOrFunc_23;
          MR_Word Var_29;
          MR_Word PredInstInfo_34 = (MR_Word) (MR_body((MR_Word) (TypeHOInstInfo_21), (MR_Integer) 1));
          MR_Word ActualPredOrFunc_54;
          MR_Word Modes_55;

          TypeHOPredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_34, (MR_Integer) 0))) & (MR_Integer) 1);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
            MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__modecheck_call__get_higher_order_inst_match_6_p_0_1));
            MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_29, 3) = ((MR_Box) (TypePredOrFunc_19));
            MR_hl_field(0, Var_29, 4) = ((MR_Box) (TypeHOPredOrFunc_23));
          }
          mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140check_hlds.modecheck_call.get_higher_order_inst_match\'/6", (MR_String) "TypePredOrFunc != TypeHOPredOrFunc");
          ActualPredOrFunc_54 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_34, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes_55 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_34, (MR_Integer) 1))));
          succeeded = (ExpectedPredOrFunc_8 == ActualPredOrFunc_54);
          if (succeeded)
          {
            MR_Word ActualPredFormArity_58;
            MR_Word ActualUserArity_59;
            MR_Integer Var_64;
            MR_Integer Var_65;

            ActualPredFormArity_58 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_55);
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_54, &ActualUserArity_59, ActualPredFormArity_58);
            Var_64 = (MR_Integer) (ExpectedUserArity_11);
            Var_65 = (MR_Integer) (ActualUserArity_59);
            succeeded = (Var_64 == Var_65);
            if (succeeded)
              *MaybeMatch_12 = (MR_Word) ((MR_Word) (PredInstInfo_34));
            else
            {
              MR_Word HOMismatch_60;

              {
                HOMismatch_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, HOMismatch_60, 0) = ((MR_Box) (ActualUserArity_59));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMatch_12 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_60));
              }
            }
          }
          else
          {
            MR_Word HOMismatch_61;

            {
              HOMismatch_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HOMismatch_61, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeMatch_12 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_61));
            }
          }
        }
      }
      else
        *MaybeMatch_12 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[1]));
    }
    else
    {
      MR_Word PredInstInfo_15 = (MR_Word) (MR_body((MR_Word) (HOInstInfo_14), (MR_Integer) 1));
      MR_Word ActualPredOrFunc_42 = ((MR_Unsigned) ((MR_hl_field(0, PredInstInfo_15, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Modes_43 = ((MR_Word) ((MR_hl_field(0, PredInstInfo_15, (MR_Integer) 1))));

      succeeded = (ExpectedPredOrFunc_8 == ActualPredOrFunc_42);
      if (succeeded)
      {
        MR_Word ActualPredFormArity_46;
        MR_Word ActualUserArity_47;
        MR_Integer Var_52;
        MR_Integer Var_53;

        ActualPredFormArity_46 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_43);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(ActualPredOrFunc_42, &ActualUserArity_47, ActualPredFormArity_46);
        Var_52 = (MR_Integer) (ExpectedUserArity_11);
        Var_53 = (MR_Integer) (ActualUserArity_47);
        succeeded = (Var_52 == Var_53);
        if (succeeded)
          *MaybeMatch_12 = (MR_Word) ((MR_Word) (PredInstInfo_15));
        else
        {
          MR_Word HOMismatch_48;

          {
            HOMismatch_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, HOMismatch_48, 0) = ((MR_Box) (ActualUserArity_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMatch_12 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_48));
          }
        }
      }
      else
      {
        MR_Word HOMismatch_49;

        {
          HOMismatch_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HOMismatch_49, 0) = (MR_Box) ((MR_Unsigned) (ActualPredOrFunc_42));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMatch_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HOMismatch_49));
        }
      }
    }
  else
    *MaybeMatch_12 = (MR_Word) (MR_mkword(1, &check_hlds__modecheck_call_scalar_common_2[0]));
}

void MR_CALL 
check_hlds__modecheck_call__modecheck_plain_or_foreign_call_10_p_0(
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
  check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_112_108_97_105_110_95_111_114_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_55_93_95_48_10_p_0(PredId_11, MaybeDetism_12, ProcId0_13, SelectedProcId_14, ArgVars0_15, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_0_56, STATE_VARIABLE_ModeInfo_57);
}

static MR_bool MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_112_108_97_105_110_95_111_114_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__modecheck_call__IntroducedFrom__pred__modecheck_plain_or_foreign_call__121__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_112_108_97_105_110_95_111_114_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_55_93_95_48_10_p_0(
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
  MR_Word ArgOffset_25;
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
        MR_Integer Var_100;

        Var_100 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        succeeded = (ProcId0_13 == Var_100);
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.modecheck_call.modecheck_plain_or_foreign_call\'/10", (MR_String) "invalid proc_id");
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
  ArgOffset_25 = check_hlds__modecheck_util__compute_pred_modecheck_arg_offset_1_f_0(PredInfo_22);
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
    MR_Word ModeError_30;
    MR_Word Var_62;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars_28);
    PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_22);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__modecheck_call_scalar_common_3[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__modecheck_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_99_104_101_99_107_95_112_108_97_105_110_95_111_114_95_102_111_114_101_105_103_110_95_99_97_108_108_95_95_91_55_93_95_48_10_p_0_1));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (PredOrFunc_29));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140check_hlds.modecheck_call.modecheck_plain_or_foreign_call\'/10", (MR_String) "function with no mode, not even the default");
    {
      ModeError_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_30, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, ModeError_30, 1) = ((MR_Box) (PredId_11));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_28, ModeError_30, STATE_VARIABLE_ModeInfo_0_56, STATE_VARIABLE_ModeInfo_57);
    *SelectedProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    *ArgVars_16 = ArgVars0_15;
    *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Integer ProcId_31;
    MR_Word Var_67;

    succeeded = (ProcIds_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcId_31 = ((MR_Integer) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 0))));
      Var_67 = ((MR_Word) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 1))));
      succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word ProcInfo_32;
      MR_Word ProcArgLives0_33;
      MR_Word ProcArgModes0_34;
      MR_Word ProcInstVarSet_35;
      MR_Word InstVarSet0_36;
      MR_Word InstVarSet_37;
      MR_Word ProcArgModes_38;
      MR_Word InitialInsts_39;
      MR_Word MatchWhat_40;
      MR_Word InstVarSub_41;
      MR_Word STATE_VARIABLE_ModeInfo_69_69;
      MR_Word STATE_VARIABLE_ModeInfo_70_70;
      MR_Word STATE_VARIABLE_ModeInfo_71_71;
      MR_Word ModuleInfo_102;
      MR_Word InitialInsts0_103;
      MR_Word FinalInsts0_104;
      MR_Word InitialInsts_105;
      MR_Word FinalInsts_106;
      MR_Word CanSucceed_107;
      MR_Word STATE_VARIABLE_ModeInfo_27_109;
      MR_Box conv0_ProcInfo_32;
      MR_Word _BoundInstVars_42;

      *SelectedProcId_14 = ProcId_31;
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (ProcId_31)), &conv0_ProcInfo_32);
      ProcInfo_32 = ((MR_Word) (conv0_ProcInfo_32));
      hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_21, ProcInfo_32, &ProcArgLives0_33);
      check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(ArgOffset_25, ArgVars0_15, ProcArgLives0_33, STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_69_69);
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_32, &ProcArgModes0_34);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_32, &ProcInstVarSet_35);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_69_69, &InstVarSet0_36);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_36, ProcInstVarSet_35, &InstVarSet_37, ProcArgModes0_34, &ProcArgModes_38);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_37, STATE_VARIABLE_ModeInfo_69_69, &STATE_VARIABLE_ModeInfo_70_70);
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_21, ProcArgModes_38, &InitialInsts_39);
      {
        MatchWhat_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MatchWhat_40, 0) = ((MR_Box) (PredId_11));
      }
      check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(MatchWhat_40, ArgOffset_25, ArgVars0_15, InitialInsts_39, &InstVarSub_41, &_BoundInstVars_42, STATE_VARIABLE_ModeInfo_70_70, &STATE_VARIABLE_ModeInfo_71_71);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_71_71, &ModuleInfo_102);
      check_hlds__mode_util__mode_list_get_initial_final_insts_4_p_0(ModuleInfo_102, ProcArgModes_38, &InitialInsts0_103, &FinalInsts0_104);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_41, InitialInsts0_103, &InitialInsts_105);
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_41, FinalInsts0_104, &FinalInsts_106);
      check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_25, ArgVars0_15, InitialInsts_105, FinalInsts_106, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_71_71, &STATE_VARIABLE_ModeInfo_27_109);
      hlds__hlds_proc_util__can_proc_info_ever_succeed_2_p_0(ProcInfo_32, &CanSucceed_107);
      switch (CanSucceed_107) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModeInfo_57 = STATE_VARIABLE_ModeInfo_27_109;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Instmap_108;

            hlds__instmap__init_unreachable_1_p_0(&Instmap_108);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_108, STATE_VARIABLE_ModeInfo_27_109, STATE_VARIABLE_ModeInfo_57);
          }
          break;
      }
    }
    else
    {
      MR_Word OldErrors_43;
      MR_Word WaitingVars0_44;
      MR_Word RevMatchingProcModes_45;
      MR_Word RevMismatches_46;
      MR_Word WaitingVars1_47;
      MR_Word STATE_VARIABLE_ModeInfo_75_75;
      MR_Word STATE_VARIABLE_ModeInfo_76_76;

      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_56, &OldErrors_43);
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &WaitingVars0_44);
      check_hlds__modecheck_call__modecheck_find_matching_modes_13_p_0(PredId_11, ProcTable_23, ArgOffset_25, ArgVars0_15, ProcIds_24, (MR_Word) ((MR_Unsigned) 0U), &RevMatchingProcModes_45, (MR_Word) ((MR_Unsigned) 0U), &RevMismatches_46, WaitingVars0_44, &WaitingVars1_47, STATE_VARIABLE_ModeInfo_0_56, &STATE_VARIABLE_ModeInfo_75_75);
      check_hlds__mode_info__mode_info_set_errors_3_p_0(OldErrors_43, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_76_76);
      if ((RevMatchingProcModes_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Mismatches_48;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_mismatch_0), RevMismatches_46, &Mismatches_48);
        check_hlds__modecheck_call__no_matching_modes_8_p_0(PredId_11, ArgVars0_15, Mismatches_48, MaybeDetism_12, WaitingVars1_47, SelectedProcId_14, STATE_VARIABLE_ModeInfo_76_76, STATE_VARIABLE_ModeInfo_57);
        *ArgVars_16 = ArgVars0_15;
        *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word MatchingProcModes_51;
        MR_Word CalleeModeErrors_52;
        MR_Word ProcInfo_88;
        MR_Word ProcArgModes_89;
        MR_Word InstVarSub_90;
        MR_Box conv1_ProcInfo_88;

        mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__mode_comparison__check_hlds__mode_comparison__type_ctor_info_proc_mode_0), RevMatchingProcModes_45, &MatchingProcModes_51);
        check_hlds__mode_comparison__choose_best_match_8_p_0(STATE_VARIABLE_ModeInfo_76_76, MatchingProcModes_51, PredId_11, ProcTable_23, ArgVars0_15, SelectedProcId_14, &InstVarSub_90, &ProcArgModes_89);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_23, ((MR_Box) (*SelectedProcId_14)), &conv1_ProcInfo_88);
        ProcInfo_88 = ((MR_Word) (conv1_ProcInfo_88));
        check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_76_76, PredId_11, *SelectedProcId_14, &CalleeModeErrors_52);
        if ((CalleeModeErrors_52 == (MR_Word) ((MR_Unsigned) 0U)))
          check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(ProcInfo_88, ArgOffset_25, ProcArgModes_89, ArgVars0_15, InstVarSub_90, ArgVars_16, ExtraGoals_18, STATE_VARIABLE_ModeInfo_76_76, STATE_VARIABLE_ModeInfo_57);
        else
        {
          MR_Word ArgInsts_55;
          MR_Word STATE_VARIABLE_ModeInfo_80_80;
          MR_Word WaitingVars_82;
          MR_Word ModeError_83;

          *ArgVars_16 = ArgVars0_15;
          WaitingVars_82 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *ArgVars_16);
          *ExtraGoals_18 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, *ArgVars_16, &ArgInsts_55);
          check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_80_80);
          {
            ModeError_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ModeError_83, 0) = ((MR_Box) ((MR_Unsigned) 15U));
            MR_hl_field(3, ModeError_83, 1) = ((MR_Box) (*ArgVars_16));
            MR_hl_field(3, ModeError_83, 2) = ((MR_Box) (ArgInsts_55));
            MR_hl_field(3, ModeError_83, 3) = ((MR_Box) (PredId_11));
            MR_hl_field(3, ModeError_83, 4) = ((MR_Box) (*SelectedProcId_14));
            MR_hl_field(3, ModeError_83, 5) = ((MR_Box) (CalleeModeErrors_52));
          }
          check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_82, ModeError_83, STATE_VARIABLE_ModeInfo_80_80, STATE_VARIABLE_ModeInfo_57);
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__modecheck_call__modecheck_end_of_call_9_p_0(
  MR_Word ProcInfo_10,
  MR_Word ArgOffset_11,
  MR_Word ProcArgModes_12,
  MR_Word ArgVars0_13,
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
  check_hlds__mode_util__mode_list_get_initial_final_insts_4_p_0(ModuleInfo_18, ProcArgModes_12, &InitialInsts0_19, &FinalInsts0_20);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, InitialInsts0_19, &InitialInsts_21);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_14, FinalInsts0_20, &FinalInsts_22);
  check_hlds__modecheck_util__modecheck_set_var_insts_8_p_0(ArgOffset_11, ArgVars0_13, InitialInsts_21, FinalInsts_22, ArgVars_15, ExtraGoals_16, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_27_27);
  hlds__hlds_proc_util__can_proc_info_ever_succeed_2_p_0(ProcInfo_10, &CanSucceed_23);
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
  MR_Word Mismatches_11,
  MR_Word MaybeDetism_12,
  MR_Word WaitingVars_13,
  MR_Integer * NewProcId_14,
  MR_Word STATE_VARIABLE_ModeInfo_0_25,
  MR_Word * STATE_VARIABLE_ModeInfo_26)
{
  MR_bool succeeded;
  MR_Word PredIdTable_16;
  MR_Word PredInfo_17;
  MR_Word Markers_18;
  MR_Box conv0_PredInfo_17;

  check_hlds__mode_info__mode_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &PredIdTable_16);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_16, ((MR_Box) (PredId_9)), &conv0_PredInfo_17);
  PredInfo_17 = ((MR_Word) (conv0_PredInfo_17));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_17, &Markers_18);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_18, (MR_Integer) 3);
  if (succeeded)
  {
    MR_Word Instmap_19;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;
    MR_Word InitialInsts_35;
    MR_Word ArgLives_36;
    MR_Word ModuleInfo0_37;
    MR_Word PredInfo0_38;
    MR_Word Context_39;
    MR_Integer Arity_40;
    MR_Word FinalInsts_41;
    MR_Word Modes_42;
    MR_Word InstVarSet_43;
    MR_Word ModuleInfo_44;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_ModeInfo_26_47;

    check_hlds__modecheck_call__get_var_insts_and_lives_4_p_0(STATE_VARIABLE_ModeInfo_0_25, ArgVars_10, &InitialInsts_35, &ArgLives_36);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &ModuleInfo0_37);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo0_37, PredId_9, &PredInfo0_38);
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_38, &Context_39);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__modecheck_call_scalar_common_1[0]), ArgVars_10, &Arity_40);
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Arity_40, ((MR_Box) ((MR_Unsigned) 4U)), &FinalInsts_41);
    parse_tree__prog_mode__inst_lists_to_mode_list_3_p_0(InitialInsts_35, FinalInsts_41, &Modes_42);
    check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstVarSet_43);
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (ArgLives_36));
    }
    check_hlds__proc_requests__request_proc_9_p_0(PredId_9, Modes_42, InstVarSet_43, Var_46, MaybeDetism_12, Context_39, NewProcId_14, ModuleInfo0_37, &ModuleInfo_44);
    check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_44, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_26_47);
    check_hlds__mode_info__mode_info_set_changed_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_ModeInfo_26_47, &STATE_VARIABLE_ModeInfo_28_28);
    hlds__instmap__init_unreachable_1_p_0(&Instmap_19);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(Instmap_19, STATE_VARIABLE_ModeInfo_28_28, STATE_VARIABLE_ModeInfo_26);
  }
  else
  {
    MR_Word InstMap_20;
    MR_Word HeadMismatch_21;
    MR_Word TailMismatches_22;
    MR_Word MatchWhat_23;
    MR_Word ModeError_24;
    MR_Word STATE_VARIABLE_ModeInfo_31_31;
    MR_Box conv1_HeadMismatch_21;

    *NewProcId_14 = hlds__hlds_pred__invalid_proc_id_0_f_0();
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_25, &InstMap_20);
    check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_25, &STATE_VARIABLE_ModeInfo_31_31);
    mercury__list__det_head_tail_3_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_mismatch_0), Mismatches_11, &conv1_HeadMismatch_21, &TailMismatches_22);
    HeadMismatch_21 = ((MR_Word) (conv1_HeadMismatch_21));
    {
      MatchWhat_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MatchWhat_23, 0) = ((MR_Box) (PredId_9));
    }
    {
      ModeError_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ModeError_24, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, ModeError_24, 1) = ((MR_Box) (MatchWhat_23));
      MR_hl_field(3, ModeError_24, 2) = ((MR_Box) (InstMap_20));
      MR_hl_field(3, ModeError_24, 3) = ((MR_Box) (ArgVars_10));
      MR_hl_field(3, ModeError_24, 4) = ((MR_Box) (HeadMismatch_21));
      MR_hl_field(3, ModeError_24, 5) = ((MR_Box) (TailMismatches_22));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_13, ModeError_24, STATE_VARIABLE_ModeInfo_31_31, STATE_VARIABLE_ModeInfo_26);
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
          MR_Word VarTable_15;
          MR_Word Type_16;

          check_hlds__mode_info__mode_info_get_var_table_2_p_0(ModeInfo_1, &VarTable_15);
          parse_tree__var_table__lookup_var_type_3_p_0(VarTable_15, Var_7, &Type_16);
          succeeded = check_hlds__inst_test__inst_is_ground_3_p_0(ModuleInfo_14, Type_16, Inst_9);
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
check_hlds__modecheck_call__modecheck_find_matching_modes_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_RevMatchingProcModes_0_6,
  MR_Word * STATE_VARIABLE_RevMatchingProcModes_7,
  MR_Word STATE_VARIABLE_RevMismatches_0_8,
  MR_Word * STATE_VARIABLE_RevMismatches_9,
  MR_Word STATE_VARIABLE_WaitingVars_0_10,
  MR_Word * STATE_VARIABLE_WaitingVars_11,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModeInfo_13 = STATE_VARIABLE_ModeInfo_0_12;
      *STATE_VARIABLE_WaitingVars_11 = STATE_VARIABLE_WaitingVars_0_10;
      *STATE_VARIABLE_RevMismatches_9 = STATE_VARIABLE_RevMismatches_0_8;
      *STATE_VARIABLE_RevMatchingProcModes_7 = STATE_VARIABLE_RevMatchingProcModes_0_6;
    }
    else
    {
      MR_Integer ProcId_34 = ((MR_Integer) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ProcInfo_40;
      MR_Word ProcArgModes0_41;
      MR_Word ProcInstVarSet_42;
      MR_Word InstVarSet0_43;
      MR_Word InstVarSet_44;
      MR_Word ProcArgModes_45;
      MR_Word ModuleInfo_46;
      MR_Word ProcArgLives0_47;
      MR_Word MatchWhat_48;
      MR_Word InitialInsts_49;
      MR_Word ProcModeErrors_50;
      MR_Word ExactOrNot_51;
      MR_Word InstVarSub_52;
      MR_Word BoundInstVars_53;
      MR_Word Errors_56;
      MR_Word STATE_VARIABLE_ModeInfo_74_74;
      MR_Word STATE_VARIABLE_ModeInfo_75_75;
      MR_Word STATE_VARIABLE_ModeInfo_76_76;
      MR_Word STATE_VARIABLE_ModeInfo_77_77;
      MR_Word STATE_VARIABLE_WaitingVars_79_79;
      MR_Word STATE_VARIABLE_RevMismatches_80_80;
      MR_Word STATE_VARIABLE_RevMatchingProcModes_81_81;
      MR_Box conv0_ProcInfo_40;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevMismatches_0_8;
      MR_Word next_value_of_STATE_VARIABLE_WaitingVars_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_12;

      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_74_74);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), HeadVar__2_2, ((MR_Box) (ProcId_34)), &conv0_ProcInfo_40);
      ProcInfo_40 = ((MR_Word) (conv0_ProcInfo_40));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_40, &ProcArgModes0_41);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_40, &ProcInstVarSet_42);
      check_hlds__mode_info__mode_info_get_instvarset_2_p_0(STATE_VARIABLE_ModeInfo_74_74, &InstVarSet0_43);
      parse_tree__prog_mode__rename_apart_inst_vars_5_p_0(InstVarSet0_43, ProcInstVarSet_42, &InstVarSet_44, ProcArgModes0_41, &ProcArgModes_45);
      check_hlds__mode_info__mode_info_set_instvarset_3_p_0(InstVarSet_44, STATE_VARIABLE_ModeInfo_74_74, &STATE_VARIABLE_ModeInfo_75_75);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_75_75, &ModuleInfo_46);
      hlds__hlds_proc_util__proc_info_arglives_3_p_0(ModuleInfo_46, ProcInfo_40, &ProcArgLives0_47);
      check_hlds__modecheck_util__modecheck_vars_are_live_no_exact_match_5_p_0(HeadVar__3_3, HeadVar__4_4, ProcArgLives0_47, STATE_VARIABLE_ModeInfo_75_75, &STATE_VARIABLE_ModeInfo_76_76);
      {
        MatchWhat_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MatchWhat_48, 0) = ((MR_Box) (HeadVar__1_1));
      }
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_46, ProcArgModes_45, &InitialInsts_49);
      check_hlds__mode_info__look_up_proc_mode_errors_4_p_0(STATE_VARIABLE_ModeInfo_76_76, HeadVar__1_1, ProcId_34, &ProcModeErrors_50);
      if ((ProcModeErrors_50 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExactOrNot_51 = (MR_Integer) 0;
        check_hlds__modecheck_util__modecheck_vars_have_insts_no_exact_match_8_p_0(MatchWhat_48, HeadVar__3_3, HeadVar__4_4, InitialInsts_49, &InstVarSub_52, &BoundInstVars_53, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_77_77);
      }
      else
      {
        ExactOrNot_51 = (MR_Integer) 1;
        check_hlds__modecheck_util__modecheck_vars_have_insts_exact_match_8_p_0(MatchWhat_48, HeadVar__3_3, HeadVar__4_4, InitialInsts_49, &InstVarSub_52, &BoundInstVars_53, STATE_VARIABLE_ModeInfo_76_76, &STATE_VARIABLE_ModeInfo_77_77);
      }
      check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_77_77, &Errors_56);
      if ((Errors_56 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word NewMatchingProcMode_64;

        {
          NewMatchingProcMode_64 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NewMatchingProcMode_64, 0) = ((MR_Box) (ProcId_34));
          MR_hl_field(0, NewMatchingProcMode_64, 1) = ((MR_Box) (InstVarSub_52));
          MR_hl_field(0, NewMatchingProcMode_64, 2) = ((MR_Box) (ProcArgModes_45));
        }
        {
          STATE_VARIABLE_RevMatchingProcModes_81_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_81_81, 0) = ((MR_Box) (NewMatchingProcMode_64));
          MR_hl_field(1, STATE_VARIABLE_RevMatchingProcModes_81_81, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchingProcModes_0_6));
        }
        STATE_VARIABLE_RevMismatches_80_80 = STATE_VARIABLE_RevMismatches_0_8;
        STATE_VARIABLE_WaitingVars_79_79 = STATE_VARIABLE_WaitingVars_0_10;
      }
      else
      {
        MR_Word FirstError_57 = ((MR_Word) ((MR_hl_field(1, Errors_56, (MR_Integer) 0))));
        MR_Word ErrorWaitingVars_59 = ((MR_Word) ((MR_hl_field(0, FirstError_57, (MR_Integer) 0))));
        MR_Word Mismatch_63;

        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ErrorWaitingVars_59, STATE_VARIABLE_WaitingVars_0_10, &STATE_VARIABLE_WaitingVars_79_79);
        {
          Mismatch_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Mismatch_63, 0) = (MR_Box) ((MR_Unsigned) (ExactOrNot_51));
          MR_hl_field(0, Mismatch_63, 1) = ((MR_Box) (InitialInsts_49));
          MR_hl_field(0, Mismatch_63, 2) = ((MR_Box) (BoundInstVars_53));
        }
        {
          STATE_VARIABLE_RevMismatches_80_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevMismatches_80_80, 0) = ((MR_Box) (Mismatch_63));
          MR_hl_field(1, STATE_VARIABLE_RevMismatches_80_80, 1) = ((MR_Box) (STATE_VARIABLE_RevMismatches_0_8));
        }
        STATE_VARIABLE_RevMatchingProcModes_81_81 = STATE_VARIABLE_RevMatchingProcModes_0_6;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_35;
      next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_6 = STATE_VARIABLE_RevMatchingProcModes_81_81;
      next_value_of_STATE_VARIABLE_RevMismatches_0_8 = STATE_VARIABLE_RevMismatches_80_80;
      next_value_of_STATE_VARIABLE_WaitingVars_0_10 = STATE_VARIABLE_WaitingVars_79_79;
      next_value_of_STATE_VARIABLE_ModeInfo_0_12 = STATE_VARIABLE_ModeInfo_77_77;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_RevMatchingProcModes_0_6 = next_value_of_STATE_VARIABLE_RevMatchingProcModes_0_6;
      STATE_VARIABLE_RevMismatches_0_8 = next_value_of_STATE_VARIABLE_RevMismatches_0_8;
      STATE_VARIABLE_WaitingVars_0_10 = next_value_of_STATE_VARIABLE_WaitingVars_0_10;
      STATE_VARIABLE_ModeInfo_0_12 = next_value_of_STATE_VARIABLE_ModeInfo_0_12;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__modecheck_call____Unify____maybe_higher_order_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__modecheck_call____Compare____maybe_higher_order_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&check_hlds__modecheck_call__check_hlds__modecheck_call__type_ctor_info_maybe_higher_order_match_0);
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
