/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2023-05-30
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


// :- module check_hlds.unique_modes.
// :- implementation.

/*
INIT mercury__check_hlds__unique_modes__init
ENDINIT
*/

#include "check_hlds.unique_modes.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_debug.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_call.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.modecheck_util.mih"
#include "check_hlds.modes.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__644__1_2_p_0(
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21);

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word Goals0_7,
  MR_Word NonLocalVarsBag_8,
  MR_Word * Goals_9,
  MR_Word * Instmaps_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DisjDetism_2,
  MR_Word DisjNonLocals_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7);

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_58,
  MR_Word * STATE_VARIABLE_ModeInfo_59);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId0_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Integer * ProcId_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * STATE_VARIABLE_ModeInfo_38);

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * STATE_VARIABLE_ModeInfo_3);

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3);


static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5];




static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[0])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__644__1_2_p_0(
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21)
{
  MR_bool succeeded;
  MR_Integer Multiplicity_9;

  *LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_20, (MR_Integer) 0))));
  Multiplicity_9 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_20, (MR_Integer) 1))));
  succeeded = (Multiplicity_9 > (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_21;

  succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__644__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_21);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word Goals0_7,
  MR_Word NonLocalVarsBag_8,
  MR_Word * Goals_9,
  MR_Word * Instmaps_10,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_ModeInfo_14_14;
  MR_Word NonLocalVarsList_15;
  MR_Word SharedList_16;
  MR_Word InstMap0_17;
  MR_Word VarInsts_18;
  MR_Word ModuleInfo0_19;
  MR_Word SharedVarInsts_20;
  MR_Word ModuleInfo1_21;
  MR_Word InstMap1_22;
  MR_Word STATE_VARIABLE_ModeInfo_23_24;

  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), NonLocalVarsBag_8, &NonLocalVarsList_15);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_2[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[3]), NonLocalVarsList_15, &SharedList_16);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &InstMap0_17);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_17, SharedList_16, &VarInsts_18);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_19);
  check_hlds__inst_util__make_shared_inst_list_4_p_0(VarInsts_18, &SharedVarInsts_20, ModuleInfo0_19, &ModuleInfo1_21);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_21, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_23_24);
  hlds__instmap__instmap_set_vars_corresponding_4_p_0(SharedList_16, SharedVarInsts_20, InstMap0_17, &InstMap1_22);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_22, STATE_VARIABLE_ModeInfo_23_24, &STATE_VARIABLE_ModeInfo_14_14);
  check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_7, Goals_9, Instmaps_10, STATE_VARIABLE_ModeInfo_14_14, STATE_VARIABLE_ModeInfo_13);
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
  }
  else
  {
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_11;
    MR_Word Goals_12;
    MR_Word InstMap_13;
    MR_Word NonLocals_14;
    MR_Word InstMaps_15;
    MR_Word InstMap0_17;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_ModeInfo_21_21;
    MR_Word STATE_VARIABLE_ModeInfo_22_22;

    NonLocals_14 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_9);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_4, &InstMap0_17);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_9, &Goal_11, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_21_21);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_21_21, &InstMap_13);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (InstMap_13));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (NonLocals_14));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_21_21, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_10, &Goals_12, &InstMaps_15, STATE_VARIABLE_ModeInfo_22_22, STATE_VARIABLE_ModeInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_15));
    }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConjGoals_15;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
      MR_Word Var_22;

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_22 = ((MR_Unsigned) ((MR_hl_field(3, Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_15 = ((MR_Word) ((MR_hl_field(3, Var_20, (MR_Integer) 2))));
        succeeded = (HeadVar__1_1 == Var_22);
      }
      if (succeeded)
      {
        MR_Word Goals1_17;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ConjGoals_15, Goals0_12, &Goals1_17);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Goals1_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Goal_23;
        MR_Word Goals_24;
        MR_Word NonLocals_25;
        MR_Word InstMap_26;
        MR_Word STATE_VARIABLE_ModeInfo_17_27;
        MR_Word STATE_VARIABLE_ModeInfo_18_28;

        NonLocals_25 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_11);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_25, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_17_27);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_11, &Goal_23, STATE_VARIABLE_ModeInfo_17_27, &STATE_VARIABLE_ModeInfo_18_28);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_18_28, &InstMap_26);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_26);
        if (succeeded)
        {
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals0_12, STATE_VARIABLE_ModeInfo_18_28, STATE_VARIABLE_ModeInfo_5);
          Goals_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
          check_hlds__unique_modes__unique_modes_check_conj_5_p_0(HeadVar__1_1, Goals0_12, &Goals_24, STATE_VARIABLE_ModeInfo_18_28, STATE_VARIABLE_ModeInfo_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (Goals_24));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * STATE_VARIABLE_ModeInfo_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
  }
  else
  {
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(0, Case0_11, (MR_Integer) 2))));
    MR_Word InstMap0_22;
    MR_Word InstMap1_23;
    MR_Word Goal1_24;
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_ModeInfo_28_28;
    MR_Word STATE_VARIABLE_ModeInfo_29_29;
    MR_Word STATE_VARIABLE_ModeInfo_30_30;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_5, &InstMap0_22);
    check_hlds__modecheck_util__modecheck_functors_test_5_p_0(HeadVar__2_2, MainConsId_19, OtherConsIds_20, STATE_VARIABLE_ModeInfo_0_5, &STATE_VARIABLE_ModeInfo_28_28);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_28_28, &InstMap1_23);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap1_23);
    if (succeeded)
      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_21, &Goal1_24, STATE_VARIABLE_ModeInfo_28_28, &STATE_VARIABLE_ModeInfo_29_29);
    else
    {
      Goal1_24 = hlds__make_goal__true_goal_0_f_0();
      STATE_VARIABLE_ModeInfo_29_29 = STATE_VARIABLE_ModeInfo_28_28;
    }
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_29_29, &InstMap_16);
    check_hlds__modecheck_util__fixup_instmap_switch_var_5_p_0(HeadVar__2_2, InstMap0_22, InstMap_16, Goal1_24, &Goal_25);
    {
      Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_14, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(0, Case_14, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(0, Case_14, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
    check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_12, HeadVar__2_2, &Cases_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_30_30, STATE_VARIABLE_ModeInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_17));
    }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DisjDetism_2,
  MR_Word DisjNonLocals_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * STATE_VARIABLE_ModeInfo_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModeInfo_7 = STATE_VARIABLE_ModeInfo_0_6;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_17;
    MR_Word Goals_18;
    MR_Word InstMap_19;
    MR_Word InstMaps_20;
    MR_Word InstMap0_22;
    MR_Word STATE_VARIABLE_ModeInfo_25_25;
    MR_Word STATE_VARIABLE_ModeInfo_26_26;
    MR_Word STATE_VARIABLE_ModeInfo_27_27;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_6, &InstMap0_22);
    check_hlds__unique_modes__prepare_for_disjunct_5_p_0(Goal0_13, DisjDetism_2, DisjNonLocals_3, STATE_VARIABLE_ModeInfo_0_6, &STATE_VARIABLE_ModeInfo_25_25);
    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_13, &Goal_17, STATE_VARIABLE_ModeInfo_25_25, &STATE_VARIABLE_ModeInfo_26_26);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_26, &InstMap_19);
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_26_26, &STATE_VARIABLE_ModeInfo_27_27);
    check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_14, DisjDetism_2, DisjNonLocals_3, &Goals_18, &InstMaps_20, STATE_VARIABLE_ModeInfo_27_27, STATE_VARIABLE_ModeInfo_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstMap_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstMaps_20));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_58,
  MR_Word * STATE_VARIABLE_ModeInfo_59)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) GoalExpr0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_42 = (MR_Word) ((MR_Word) (GoalExpr0_6));
        MR_Word InstMap0_233;
        MR_Word NonLocals_234;
        MR_Word NonLocalsList_235;
        MR_Word LiveNonLocals_236;
        MR_Word LiveVars0_237;
        MR_Word SubGoal_238;
        MR_Word STATE_VARIABLE_ModeInfo_20_241;
        MR_Word STATE_VARIABLE_ModeInfo_21_242;
        MR_Word Var_243;
        MR_Word STATE_VARIABLE_ModeInfo_23_244;
        MR_Word STATE_VARIABLE_ModeInfo_25_246;
        MR_Word STATE_VARIABLE_ModeInfo_26_247;
        MR_Word STATE_VARIABLE_ModeInfo_28_249;
        MR_Word STATE_VARIABLE_ModeInfo_29_250;
        MR_Word STATE_VARIABLE_ModeInfo_30_251;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_20_241);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_241, &InstMap0_233);
        NonLocals_234 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_234, &NonLocalsList_235);
        check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_235, STATE_VARIABLE_ModeInfo_20_241, &LiveNonLocals_236);
        check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_236, STATE_VARIABLE_ModeInfo_20_241, &STATE_VARIABLE_ModeInfo_21_242);
        check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_242, &LiveVars0_237);
        Var_243 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_243, STATE_VARIABLE_ModeInfo_21_242, &STATE_VARIABLE_ModeInfo_23_244);
        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_234, STATE_VARIABLE_ModeInfo_23_244, &STATE_VARIABLE_ModeInfo_25_246);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_42, &SubGoal_238, STATE_VARIABLE_ModeInfo_25_246, &STATE_VARIABLE_ModeInfo_26_247);
        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_234, STATE_VARIABLE_ModeInfo_26_247, &STATE_VARIABLE_ModeInfo_28_249);
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_237, STATE_VARIABLE_ModeInfo_28_249, &STATE_VARIABLE_ModeInfo_29_250);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_233, STATE_VARIABLE_ModeInfo_29_250, &STATE_VARIABLE_ModeInfo_30_251);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_238));
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_251, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS0_387 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 0))));
        MR_Word RHS0_388 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 1))));
        MR_Word Unification0_390 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 3))));
        MR_Word UnifyContext_391 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_6, (MR_Integer) 4))));
        MR_Word STATE_VARIABLE_ModeInfo_19_394;
        MR_Word Var_395;
        MR_Word STATE_VARIABLE_ModeInfo_21_396;
        MR_Word STATE_VARIABLE_ModeInfo_22_397;
        MR_Word STATE_VARIABLE_ModeInfo_23_398;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_19_394);
        {
          Var_395 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_395, 0) = ((MR_Box) (UnifyContext_391));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_395, STATE_VARIABLE_ModeInfo_19_394, &STATE_VARIABLE_ModeInfo_21_396);
        check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_387, RHS0_388, Unification0_390, UnifyContext_391, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_21_396, &STATE_VARIABLE_ModeInfo_22_397);
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_22_397, &STATE_VARIABLE_ModeInfo_23_398);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_23_398, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_256 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 0))));
        MR_Integer ProcId0_257 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 1))));
        MR_Word ArgVars_258 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 2))));
        MR_Word Builtin_259 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word MaybeUnifyContext_260 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 4))));
        MR_Word PredSymName_261 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, (MR_Integer) 5))));
        MR_String PredNameString_262;
        MR_String CallString_263;
        MR_Integer ProcId_264;
        MR_Word STATE_VARIABLE_ModeInfo_23_267;
        MR_Word Var_268;
        MR_Word STATE_VARIABLE_ModeInfo_25_269;
        MR_Word Var_270;
        MR_Word STATE_VARIABLE_ModeInfo_27_271;
        MR_Word STATE_VARIABLE_ModeInfo_28_272;

        PredNameString_262 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_261);
        CallString_263 = mercury__string__f_43_43_2_f_0((MR_String) "call ", PredNameString_262);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_263, STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_267);
        {
          Var_270 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_270, 0) = ((MR_Box) (PredId_256));
        }
        {
          Var_268 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_268, 0) = ((MR_Box) (Var_270));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_268, STATE_VARIABLE_ModeInfo_23_267, &STATE_VARIABLE_ModeInfo_25_269);
        check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_256, ProcId0_257, ArgVars_258, GoalInfo0_7, &ProcId_264, STATE_VARIABLE_ModeInfo_25_269, &STATE_VARIABLE_ModeInfo_27_271);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PredId_256));
          MR_hl_field(2, base, 1) = ((MR_Box) (ProcId_264));
          MR_hl_field(2, base, 2) = ((MR_Box) (ArgVars_258));
          MR_hl_field(2, base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_259));
          MR_hl_field(2, base, 4) = ((MR_Box) (MaybeUnifyContext_260));
          MR_hl_field(2, base, 5) = ((MR_Box) (PredSymName_261));
        }
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_27_271, &STATE_VARIABLE_ModeInfo_28_272);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_28_272, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_137 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word ArgVars_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word ArgModes_139 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Detism_141 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word GenericCallId_142;
            MR_Word CallId_143;
            MR_Integer ArgOffset_150;
            MR_Word STATE_VARIABLE_ModeInfo_32_159;
            MR_Word Var_160;
            MR_Word STATE_VARIABLE_ModeInfo_34_161;
            MR_Word STATE_VARIABLE_ModeInfo_36_163;
            MR_Word STATE_VARIABLE_ModeInfo_37_164;
            MR_Word ModuleInfo_168;
            MR_Word InitialInsts_169;
            MR_Word InstVarSub_170;
            MR_Word FinalInsts0_171;
            MR_Word FinalInsts_172;
            MR_Word NewArgVars_173;
            MR_Word ExtraGoals_174;
            MR_Word STATE_VARIABLE_ModeInfo_25_177;
            MR_Word STATE_VARIABLE_ModeInfo_26_178;
            MR_Word Var_167;
            MR_Word Var_144;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_32_159);
            hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_137, &GenericCallId_142);
            {
              CallId_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CallId_143, 0) = ((MR_Box) (GenericCallId_142));
            }
            {
              Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_160, 0) = ((MR_Box) (CallId_143));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_160, STATE_VARIABLE_ModeInfo_32_159, &STATE_VARIABLE_ModeInfo_34_161);
            switch (MR_tag((MR_Word) GenericCall_137)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ArgOffset_150 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ArgOffset_150 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                ArgOffset_150 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                ArgOffset_150 = (MR_Integer) 0;
                break;
            }
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_34_161, &ModuleInfo_168);
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_168, ArgModes_139, &InitialInsts_169);
            check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_138, InitialInsts_169, ArgOffset_150, &InstVarSub_170, STATE_VARIABLE_ModeInfo_34_161, &STATE_VARIABLE_ModeInfo_25_177);
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_168, ArgModes_139, &FinalInsts0_171);
            parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_170, FinalInsts0_171, &FinalInsts_172);
            check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_138, InitialInsts_169, FinalInsts_172, ArgOffset_150, &NewArgVars_173, &ExtraGoals_174, STATE_VARIABLE_ModeInfo_25_177, &STATE_VARIABLE_ModeInfo_26_178);
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_173)), ((MR_Box) (ArgVars_138)));
            if (succeeded)
              succeeded = (ExtraGoals_174 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                return;
              }
            parse_tree__prog_data__determinism_components_3_p_0(Detism_141, &Var_144, &Var_167);
            succeeded = ((MR_Integer) 0 == Var_167);
            if (succeeded)
            {
              MR_Word InstMap_175;

              hlds__instmap__init_unreachable_1_p_0(&InstMap_175);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_175, STATE_VARIABLE_ModeInfo_26_178, &STATE_VARIABLE_ModeInfo_36_163);
            }
            else
            {
              MR_Word Var_182;
              MR_Word Var_176;

              parse_tree__prog_data__determinism_components_3_p_0(Detism_141, &Var_176, &Var_182);
              succeeded = ((MR_Integer) 3 == Var_182);
              if (succeeded)
              {
                MR_Word FullInstMap0_184;

                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_178, &FullInstMap0_184);
                succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_184);
                if (succeeded)
                {
                  MR_Word AllVars_185;
                  MR_Word NondetLiveVars_186;

                  hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_184, &AllVars_185);
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_185, STATE_VARIABLE_ModeInfo_26_178, &NondetLiveVars_186);
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_186, STATE_VARIABLE_ModeInfo_26_178, &STATE_VARIABLE_ModeInfo_36_163);
                }
                else
                  STATE_VARIABLE_ModeInfo_36_163 = STATE_VARIABLE_ModeInfo_26_178;
              }
              else
                STATE_VARIABLE_ModeInfo_36_163 = STATE_VARIABLE_ModeInfo_26_178;
            }
            *GoalExpr_8 = GoalExpr0_6;
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_36_163, &STATE_VARIABLE_ModeInfo_37_164);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_37_164, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word PredId_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Integer ProcId0_85 = ((MR_Integer) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Args_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 4))));
            MR_Word ExtraArgs_87 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 6))));
            MR_Word PragmaCode_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 7))));
            MR_Word ArgVars_90;
            MR_Integer ProcId_91;
            MR_Word STATE_VARIABLE_ModeInfo_23_94;
            MR_Word Var_95;
            MR_Word STATE_VARIABLE_ModeInfo_25_96;
            MR_Word Var_97;
            MR_Word STATE_VARIABLE_ModeInfo_28_99;
            MR_Word STATE_VARIABLE_ModeInfo_29_100;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_94);
            {
              Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_97, 0) = ((MR_Box) (PredId_84));
            }
            {
              Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_97));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_95, STATE_VARIABLE_ModeInfo_23_94, &STATE_VARIABLE_ModeInfo_25_96);
            ArgVars_90 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[2]), Args_86);
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_84, ProcId0_85, ArgVars_90, GoalInfo0_7, &ProcId_91, STATE_VARIABLE_ModeInfo_25_96, &STATE_VARIABLE_ModeInfo_28_99);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Attributes_83));
              MR_hl_field(3, base, 2) = ((MR_Box) (PredId_84));
              MR_hl_field(3, base, 3) = ((MR_Box) (ProcId_91));
              MR_hl_field(3, base, 4) = ((MR_Box) (Args_86));
              MR_hl_field(3, base, 5) = ((MR_Box) (ExtraArgs_87));
              MR_hl_field(3, base, 6) = ((MR_Box) (MaybeTraceRuntimeCond_88));
              MR_hl_field(3, base, 7) = ((MR_Box) (PragmaCode_89));
            }
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_28_99, &STATE_VARIABLE_ModeInfo_29_100);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_29_100, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GoalType0_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Goals_105;
            MR_Word STATE_VARIABLE_ModeInfo_17_110;
            MR_Word STATE_VARIABLE_ModeInfo_19_112;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_17_110);
            if ((Goals0_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_105 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_ModeInfo_19_112 = STATE_VARIABLE_ModeInfo_17_110;
            }
            else
            {
              MR_Word STATE_VARIABLE_ModeInfo_18_111;

              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_33, Goals0_34, STATE_VARIABLE_ModeInfo_17_110, &STATE_VARIABLE_ModeInfo_18_111);
              check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_33, Goals0_34, &Goals_105, STATE_VARIABLE_ModeInfo_18_111, &STATE_VARIABLE_ModeInfo_19_112);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (GoalType0_33));
              MR_hl_field(3, base, 2) = ((MR_Box) (Goals_105));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", STATE_VARIABLE_ModeInfo_19_112, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Goals_115;
            MR_Word STATE_VARIABLE_ModeInfo_23_126;
            MR_Word STATE_VARIABLE_ModeInfo_24_127;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_126);
            if ((Goals0_80 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_116;

              Goals_115 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_116);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_116, STATE_VARIABLE_ModeInfo_23_126, &STATE_VARIABLE_ModeInfo_24_127);
            }
            else
            {
              MR_Word NonLocals_119;
              MR_Word Determinism_120;
              MR_Word InstMaps_122;
              MR_Word ArmInstMaps_123;
              MR_Word STATE_VARIABLE_ModeInfo_28_131;
              MR_Word STATE_VARIABLE_ModeInfo_29_132;
              MR_Word Var_136;
              MR_Word Var_121;

              NonLocals_119 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              Determinism_120 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
              parse_tree__prog_data__determinism_components_3_p_0(Determinism_120, &Var_121, &Var_136);
              succeeded = ((MR_Integer) 3 == Var_136);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_ModeInfo_26_129;
                MR_Word STATE_VARIABLE_ModeInfo_27_130;

                check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_119, STATE_VARIABLE_ModeInfo_23_126, &STATE_VARIABLE_ModeInfo_26_129);
                check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_26_129, &STATE_VARIABLE_ModeInfo_27_130);
                check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_119, STATE_VARIABLE_ModeInfo_27_130, &STATE_VARIABLE_ModeInfo_28_131);
              }
              else
                STATE_VARIABLE_ModeInfo_28_131 = STATE_VARIABLE_ModeInfo_23_126;
              check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_80, Determinism_120, NonLocals_119, &Goals_115, &InstMaps_122, STATE_VARIABLE_ModeInfo_28_131, &STATE_VARIABLE_ModeInfo_29_132);
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_115, InstMaps_122, &ArmInstMaps_123);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_119, ArmInstMaps_123, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_29_132, &STATE_VARIABLE_ModeInfo_24_127);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Goals_115));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_24_127, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word CanFail0_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Cases_372;
            MR_Word STATE_VARIABLE_ModeInfo_25_381;
            MR_Word STATE_VARIABLE_ModeInfo_26_382;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_25_381);
            if ((Cases0_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_373;

              Cases_372 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_373);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_373, STATE_VARIABLE_ModeInfo_25_381, &STATE_VARIABLE_ModeInfo_26_382);
            }
            else
            {
              MR_Word NonLocals_376;
              MR_Word InstMaps_377;
              MR_Word ArmInstMaps_378;
              MR_Word STATE_VARIABLE_ModeInfo_27_383;

              NonLocals_376 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_37, Var0_35, &Cases_372, &InstMaps_377, STATE_VARIABLE_ModeInfo_25_381, &STATE_VARIABLE_ModeInfo_27_383);
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_372, InstMaps_377, &ArmInstMaps_378);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_376, ArmInstMaps_378, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_27_383, &STATE_VARIABLE_ModeInfo_26_382);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var0_35));
              MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_36));
              MR_hl_field(3, base, 3) = ((MR_Box) (Cases_372));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_26_382, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Reason0_43)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_79_337;
                  MR_Word STATE_VARIABLE_ModeInfo_80_338;
                  MR_Word SubGoal_344;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_79_337);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_344, STATE_VARIABLE_ModeInfo_79_337, &STATE_VARIABLE_ModeInfo_80_338);
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_80_338, STATE_VARIABLE_ModeInfo_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_43));
                    MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_344));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason0_43, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word STATE_VARIABLE_ModeInfo_79_337;
                      MR_Word STATE_VARIABLE_ModeInfo_80_338;
                      MR_Word SubGoal_344;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_79_337);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_344, STATE_VARIABLE_ModeInfo_79_337, &STATE_VARIABLE_ModeInfo_80_338);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_80_338, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_344));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_283 = ((MR_Word) ((MR_hl_field(3, Reason0_43, (MR_Integer) 1))));
                      MR_Word FGT_284 = ((MR_Unsigned) ((MR_hl_field(3, Reason0_43, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_284) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word LiveTermVar_285;
                            MR_Word STATE_VARIABLE_ModeInfo_59_319;
                            MR_Word STATE_VARIABLE_ModeInfo_60_320;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_59_319);
                            check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_59_319, TermVar_283, &LiveTermVar_285);
                            switch (LiveTermVar_285) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                {
                                  *GoalExpr_8 = (MR_Word) (MR_mkword(3, &check_hlds__unique_modes_scalar_common_2[1]));
                                  STATE_VARIABLE_ModeInfo_60_320 = STATE_VARIABLE_ModeInfo_59_319;
                                }
                                break;
                              case (MR_Integer) 0:
                                {
                                  MR_Word SubGoalInfo_287 = ((MR_Word) ((MR_hl_field(0, SubGoal0_81, (MR_Integer) 1))));
                                  MR_Word InstMapDelta_288;
                                  MR_Word TermVarInst_289;

                                  InstMapDelta_288 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_287);
                                  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_288, TermVar_283, &TermVarInst_289);
                                  if (succeeded)
                                  {
                                    MR_Word InstMap_290;
                                    MR_Word InstMap0_341;

                                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_59_319, &InstMap0_341);
                                    hlds__instmap__instmap_set_var_4_p_0(TermVar_283, TermVarInst_289, InstMap0_341, &InstMap_290);
                                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_290, STATE_VARIABLE_ModeInfo_59_319, &STATE_VARIABLE_ModeInfo_60_320);
                                  }
                                  else
                                    {
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
                                      return;
                                    }
                                  *GoalExpr_8 = GoalExpr0_6;
                                }
                                break;
                            }
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_60_320, STATE_VARIABLE_ModeInfo_59);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word STATE_VARIABLE_ModeInfo_70_329;
                            MR_Word STATE_VARIABLE_ModeInfo_71_330;
                            MR_Word SubGoal_343;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_70_329);
                            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_343, STATE_VARIABLE_ModeInfo_70_329, &STATE_VARIABLE_ModeInfo_71_330);
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_71_330, STATE_VARIABLE_ModeInfo_59);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_8 = base;
                              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_43));
                              MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_343));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                            return;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word InstMap0_280;
                      MR_Word NonLocals_281;
                      MR_Word SubGoal_282;
                      MR_Word STATE_VARIABLE_ModeInfo_47_308;
                      MR_Word STATE_VARIABLE_ModeInfo_49_310;
                      MR_Word STATE_VARIABLE_ModeInfo_50_311;
                      MR_Word STATE_VARIABLE_ModeInfo_52_313;
                      MR_Word STATE_VARIABLE_ModeInfo_53_314;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_47_308);
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_47_308, &InstMap0_280);
                      NonLocals_281 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_281, STATE_VARIABLE_ModeInfo_47_308, &STATE_VARIABLE_ModeInfo_49_310);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_282, STATE_VARIABLE_ModeInfo_49_310, &STATE_VARIABLE_ModeInfo_50_311);
                      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_281, STATE_VARIABLE_ModeInfo_50_311, &STATE_VARIABLE_ModeInfo_52_313);
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_280, STATE_VARIABLE_ModeInfo_52_313, &STATE_VARIABLE_ModeInfo_53_314);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_53_314, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubGoal_282));
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars0_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Cond0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Then0_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Else0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 4))));
            MR_Word NonLocals_187;
            MR_Word CondVars_188;
            MR_Word ThenVars_189;
            MR_Word ElseVars_190;
            MR_Word InstMap0_191;
            MR_Word CondVarList_192;
            MR_Word CondLiveVars_193;
            MR_Word CondInfo0_195;
            MR_Word CondDeltaInstMap0_196;
            MR_Word ChangedVars_197;
            MR_Word Cond_198;
            MR_Word InstMapCond_199;
            MR_Word Then_200;
            MR_Word InstMapThen_201;
            MR_Word Else_202;
            MR_Word InstMapElse_203;
            MR_Word ArmInstMaps_204;
            MR_Word STATE_VARIABLE_ModeInfo_38_207;
            MR_Word STATE_VARIABLE_ModeInfo_40_209;
            MR_Word STATE_VARIABLE_ModeInfo_41_210;
            MR_Word STATE_VARIABLE_ModeInfo_42_211;
            MR_Word STATE_VARIABLE_ModeInfo_43_212;
            MR_Word STATE_VARIABLE_ModeInfo_44_213;
            MR_Word STATE_VARIABLE_ModeInfo_45_214;
            MR_Word STATE_VARIABLE_ModeInfo_46_215;
            MR_Word STATE_VARIABLE_ModeInfo_48_217;
            MR_Word STATE_VARIABLE_ModeInfo_49_218;
            MR_Word STATE_VARIABLE_ModeInfo_50_219;
            MR_Word STATE_VARIABLE_ModeInfo_51_220;
            MR_Word STATE_VARIABLE_ModeInfo_52_221;
            MR_Word Var_222;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_226;
            MR_Word STATE_VARIABLE_ModeInfo_60_229;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_207);
            NonLocals_187 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
            CondVars_188 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_39);
            ThenVars_189 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_40);
            ElseVars_190 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_41);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_207, &InstMap0_191);
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_187, STATE_VARIABLE_ModeInfo_38_207, &STATE_VARIABLE_ModeInfo_40_209);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_190, STATE_VARIABLE_ModeInfo_40_209, &STATE_VARIABLE_ModeInfo_41_210);
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_188, &CondVarList_192);
            check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_192, STATE_VARIABLE_ModeInfo_41_210, &CondLiveVars_193);
            CondInfo0_195 = ((MR_Word) ((MR_hl_field(0, Cond0_39, (MR_Integer) 1))));
            CondDeltaInstMap0_196 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_195);
            check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_193, CondDeltaInstMap0_196, STATE_VARIABLE_ModeInfo_41_210, &ChangedVars_197);
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_197, STATE_VARIABLE_ModeInfo_41_210, &STATE_VARIABLE_ModeInfo_42_211);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_190, STATE_VARIABLE_ModeInfo_42_211, &STATE_VARIABLE_ModeInfo_43_212);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_189, STATE_VARIABLE_ModeInfo_43_212, &STATE_VARIABLE_ModeInfo_44_213);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_39, &Cond_198, STATE_VARIABLE_ModeInfo_44_213, &STATE_VARIABLE_ModeInfo_45_214);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_189, STATE_VARIABLE_ModeInfo_45_214, &STATE_VARIABLE_ModeInfo_46_215);
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_187, STATE_VARIABLE_ModeInfo_46_215, &STATE_VARIABLE_ModeInfo_48_217);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_217, &InstMapCond_199);
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_199);
            if (succeeded)
            {
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_40, &Then_200, STATE_VARIABLE_ModeInfo_48_217, &STATE_VARIABLE_ModeInfo_49_218);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_218, &InstMapThen_201);
            }
            else
            {
              Then_200 = hlds__make_goal__true_goal_0_f_0();
              InstMapThen_201 = InstMapCond_199;
              STATE_VARIABLE_ModeInfo_49_218 = STATE_VARIABLE_ModeInfo_48_217;
            }
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_191, STATE_VARIABLE_ModeInfo_49_218, &STATE_VARIABLE_ModeInfo_50_219);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_41, &Else_202, STATE_VARIABLE_ModeInfo_50_219, &STATE_VARIABLE_ModeInfo_51_220);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_220, &InstMapElse_203);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_191, STATE_VARIABLE_ModeInfo_51_220, &STATE_VARIABLE_ModeInfo_52_221);
            {
              Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_224, 0) = ((MR_Box) (Else_202));
              MR_hl_field(1, Var_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_222, 0) = ((MR_Box) (Then_200));
              MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_224));
            }
            {
              Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_226, 0) = ((MR_Box) (InstMapElse_203));
              MR_hl_field(1, Var_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_223, 0) = ((MR_Box) (InstMapThen_201));
              MR_hl_field(1, Var_223, 1) = ((MR_Box) (Var_226));
            }
            hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_222, Var_223, &ArmInstMaps_204);
            hlds__instmap__instmap_merge_5_p_0(NonLocals_187, ArmInstMaps_204, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_221, &STATE_VARIABLE_ModeInfo_60_229);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Vars0_38));
              MR_hl_field(3, base, 2) = ((MR_Box) (Cond_198));
              MR_hl_field(3, base, 3) = ((MR_Box) (Then_200));
              MR_hl_field(3, base, 4) = ((MR_Box) (Else_202));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_229, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_6, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) ShortHand0_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GoalType_45 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 1))));
                  MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_48 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 3))));
                  MR_Word MainGoal0_49 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_50 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 5))));
                  MR_Word OrElseInners0_51 = ((MR_Word) ((MR_hl_field(1, ShortHand0_44, (MR_Integer) 6))));
                  MR_Word MainGoal_345;
                  MR_Word OrElseGoals_346;
                  MR_Word ShortHand_356;
                  MR_Word STATE_VARIABLE_ModeInfo_38_359;
                  MR_Word STATE_VARIABLE_ModeInfo_39_360;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_359);
                  if ((OrElseGoals0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_49, &MainGoal_345, STATE_VARIABLE_ModeInfo_38_359, &STATE_VARIABLE_ModeInfo_39_360);
                    OrElseGoals_346 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                  {
                    MR_Word NonLocals_349;
                    MR_Word Determinism_350;
                    MR_Word Goals0_352;
                    MR_Word Goals_353;
                    MR_Word InstMaps_354;
                    MR_Word ArmInstMaps_355;
                    MR_Word STATE_VARIABLE_ModeInfo_43_364;
                    MR_Word STATE_VARIABLE_ModeInfo_44_365;
                    MR_Word Var_371;
                    MR_Word Var_351;

                    NonLocals_349 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                    Determinism_350 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                    parse_tree__prog_data__determinism_components_3_p_0(Determinism_350, &Var_351, &Var_371);
                    succeeded = ((MR_Integer) 3 == Var_371);
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_ModeInfo_41_362;
                      MR_Word STATE_VARIABLE_ModeInfo_42_363;

                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_349, STATE_VARIABLE_ModeInfo_38_359, &STATE_VARIABLE_ModeInfo_41_362);
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_41_362, &STATE_VARIABLE_ModeInfo_42_363);
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_349, STATE_VARIABLE_ModeInfo_42_363, &STATE_VARIABLE_ModeInfo_43_364);
                    }
                    else
                      STATE_VARIABLE_ModeInfo_43_364 = STATE_VARIABLE_ModeInfo_38_359;
                    {
                      Goals0_352 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals0_352, 0) = ((MR_Box) (MainGoal0_49));
                      MR_hl_field(1, Goals0_352, 1) = ((MR_Box) (OrElseGoals0_50));
                    }
                    check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_352, Determinism_350, NonLocals_349, &Goals_353, &InstMaps_354, STATE_VARIABLE_ModeInfo_43_364, &STATE_VARIABLE_ModeInfo_44_365);
                    if ((Goals_353 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                        return;
                      }
                    else
                    {
                      MainGoal_345 = ((MR_Word) ((MR_hl_field(1, Goals_353, (MR_Integer) 0))));
                      OrElseGoals_346 = ((MR_Word) ((MR_hl_field(1, Goals_353, (MR_Integer) 1))));
                    }
                    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_353, InstMaps_354, &ArmInstMaps_355);
                    hlds__instmap__instmap_merge_5_p_0(NonLocals_349, ArmInstMaps_355, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_44_365, &STATE_VARIABLE_ModeInfo_39_360);
                  }
                  {
                    ShortHand_356 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_356, 0) = (MR_Box) ((MR_Unsigned) (GoalType_45));
                    MR_hl_field(1, ShortHand_356, 1) = ((MR_Box) (Outer_46));
                    MR_hl_field(1, ShortHand_356, 2) = ((MR_Box) (Inner_47));
                    MR_hl_field(1, ShortHand_356, 3) = ((MR_Box) (MaybeOutputVars_48));
                    MR_hl_field(1, ShortHand_356, 4) = ((MR_Box) (MainGoal_345));
                    MR_hl_field(1, ShortHand_356, 5) = ((MR_Box) (OrElseGoals_346));
                    MR_hl_field(1, ShortHand_356, 6) = ((MR_Box) (OrElseInners0_51));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_356));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_39_360, STATE_VARIABLE_ModeInfo_59);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_52 = ((MR_Word) ((MR_hl_field(2, ShortHand0_44, (MR_Integer) 0))));
                  MR_Word ResultVar_53 = ((MR_Word) ((MR_hl_field(2, ShortHand0_44, (MR_Integer) 1))));
                  MR_Word SubGoal_54;
                  MR_Word ShortHand_55;
                  MR_Word STATE_VARIABLE_ModeInfo_73_73;
                  MR_Word STATE_VARIABLE_ModeInfo_74_74;
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(2, ShortHand0_44, (MR_Integer) 2))));

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_73_73);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_54, STATE_VARIABLE_ModeInfo_73_73, &STATE_VARIABLE_ModeInfo_74_74);
                  {
                    ShortHand_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_55, 0) = ((MR_Box) (MaybeIO_52));
                    MR_hl_field(2, ShortHand_55, 1) = ((MR_Box) (ResultVar_53));
                    MR_hl_field(2, ShortHand_55, 2) = ((MR_Box) (SubGoal_54));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ShortHand_55));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_74_74, STATE_VARIABLE_ModeInfo_59);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));
  MR_Word Context_10;
  MR_Word STATE_VARIABLE_ModeInfo_14_14;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  succeeded = mercury__term_context__is_dummy_context_1_p_0(Context_10);
  if (succeeded)
    STATE_VARIABLE_ModeInfo_14_14 = STATE_VARIABLE_ModeInfo_0_12;
  else
    check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_14_14);
  succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 16);
  if (succeeded)
  {
    MR_Word InDuplForSwitch_11;
    MR_Word STATE_VARIABLE_ModeInfo_17_17;
    MR_Word STATE_VARIABLE_ModeInfo_18_18;
    MR_Word InstMap0_19;
    MR_Word NondetLiveVars0_20;
    MR_Word Detism_21;
    MR_Word GoalExpr_23;
    MR_Word GoalInfo_24;
    MR_Word STATE_VARIABLE_ModeInfo_20_27;
    MR_Word STATE_VARIABLE_ModeInfo_21_28;
    MR_Word STATE_VARIABLE_ModeInfo_22_29;
    MR_Word Var_31;
    MR_Word Var_22;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InDuplForSwitch_11);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_17_17);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &InstMap0_19);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &NondetLiveVars0_20);
    Detism_21 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_21, &Var_22, &Var_31);
    succeeded = ((MR_Integer) 3 == Var_31);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_27 = STATE_VARIABLE_ModeInfo_17_17;
    else
    {
      MR_Word Var_26;

      Var_26 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_26, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_20_27);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_23, STATE_VARIABLE_ModeInfo_20_27, &STATE_VARIABLE_ModeInfo_21_28);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_20, STATE_VARIABLE_ModeInfo_21_28, &STATE_VARIABLE_ModeInfo_22_29);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_19, GoalExpr_23, GoalInfo0_9, &GoalInfo_24, STATE_VARIABLE_ModeInfo_22_29, &STATE_VARIABLE_ModeInfo_18_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_23));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
    }
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_13);
  }
  else
  {
    MR_Word InstMap0_32;
    MR_Word NondetLiveVars0_33;
    MR_Word Detism_34;
    MR_Word GoalExpr_36;
    MR_Word GoalInfo_37;
    MR_Word STATE_VARIABLE_ModeInfo_20_40;
    MR_Word STATE_VARIABLE_ModeInfo_21_41;
    MR_Word STATE_VARIABLE_ModeInfo_22_42;
    MR_Word Var_44;
    MR_Word Var_35;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InstMap0_32);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &NondetLiveVars0_33);
    Detism_34 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_34, &Var_35, &Var_44);
    succeeded = ((MR_Integer) 3 == Var_44);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_40 = STATE_VARIABLE_ModeInfo_14_14;
    else
    {
      MR_Word Var_39;

      Var_39 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_39, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_20_40);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_36, STATE_VARIABLE_ModeInfo_20_40, &STATE_VARIABLE_ModeInfo_21_41);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_33, STATE_VARIABLE_ModeInfo_21_41, &STATE_VARIABLE_ModeInfo_22_42);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_32, GoalExpr_36, GoalInfo0_9, &GoalInfo_37, STATE_VARIABLE_ModeInfo_22_42, STATE_VARIABLE_ModeInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_37));
    }
  }
}

void MR_CALL 
check_hlds__unique_modes__prepare_for_disjunct_5_p_0(
  MR_Word Goal0_6,
  MR_Word DisjDetism_7,
  MR_Word DisjNonLocals_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * STATE_VARIABLE_ModeInfo_18)
{
  MR_bool succeeded;
  MR_Word DisjMaxSolns_11;
  MR_Word GoalInfo0_13;
  MR_Word Determinism_14;
  MR_Word CanFail_15;
  MR_Word Var_10;
  MR_Word Var_16;

  parse_tree__prog_data__determinism_components_3_p_0(DisjDetism_7, &Var_10, &DisjMaxSolns_11);
  GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_6, (MR_Integer) 1))));
  Determinism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
  parse_tree__prog_data__determinism_components_3_p_0(Determinism_14, &CanFail_15, &Var_16);
  succeeded = (DisjMaxSolns_11 != (MR_Integer) 3);
  if (succeeded)
    succeeded = (CanFail_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModeInfo_19_19;
    MR_Word STATE_VARIABLE_ModeInfo_20_20;
    MR_Word FullInstMap0_21;

    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_19_19);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_19_19, &FullInstMap0_21);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_21);
    if (succeeded)
    {
      MR_Word AllVars_22;
      MR_Word NondetLiveVars_23;

      hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_21, &AllVars_22);
      check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_22, STATE_VARIABLE_ModeInfo_19_19, &NondetLiveVars_23);
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_23, STATE_VARIABLE_ModeInfo_19_19, &STATE_VARIABLE_ModeInfo_20_20);
    }
    else
      STATE_VARIABLE_ModeInfo_20_20 = STATE_VARIABLE_ModeInfo_19_19;
    check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_20_20, STATE_VARIABLE_ModeInfo_18);
  }
  else
    *STATE_VARIABLE_ModeInfo_18 = STATE_VARIABLE_ModeInfo_0_17;
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
  MR_Word PredId_8,
  MR_Integer ProcId0_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Integer * ProcId_12,
  MR_Word STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * STATE_VARIABLE_ModeInfo_38)
{
  MR_bool succeeded;
  MR_Word OldErrors_14;
  MR_Word InstMap0_15;
  MR_Word ModuleInfo_16;
  MR_Word PredInfo_17;
  MR_Word ProcInfo_18;
  MR_Integer ArgOffset_19;
  MR_Word ProcArgModes0_20;
  MR_Word InterfaceDeterminism_21;
  MR_Word CanSucceed_22;
  MR_Word ModeErrors_23;
  MR_Word Errors_29;
  MR_Word MayChangeCalledProc_30;
  MR_Word STATE_VARIABLE_ModeInfo_40_40;
  MR_Word STATE_VARIABLE_ModeInfo_41_41;
  MR_Word STATE_VARIABLE_ModeInfo_43_43;
  MR_Word STATE_VARIABLE_ModeInfo_44_44;
  MR_Word ModuleInfo_54;
  MR_Word InitialInsts_55;
  MR_Word InstVarSub_56;
  MR_Word FinalInsts0_57;
  MR_Word FinalInsts_58;
  MR_Word NewArgVars_59;
  MR_Word ExtraGoals_60;
  MR_Word STATE_VARIABLE_ModeInfo_25_63;
  MR_Word STATE_VARIABLE_ModeInfo_26_64;

  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &OldErrors_14);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &InstMap0_15);
  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_8, ProcId0_9, &PredInfo_17, &ProcInfo_18);
  check_hlds__modecheck_util__compute_arg_offset_2_p_0(PredInfo_17, &ArgOffset_19);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ProcArgModes0_20);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &InterfaceDeterminism_21);
  hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_18, &CanSucceed_22);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_54);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_54, ProcArgModes0_20, &InitialInsts_55);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_10, InitialInsts_55, ArgOffset_19, &InstVarSub_56, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_25_63);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_54, ProcArgModes0_20, &FinalInsts0_57);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_56, FinalInsts0_57, &FinalInsts_58);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_10, InitialInsts_55, FinalInsts_58, ArgOffset_19, &NewArgVars_59, &ExtraGoals_60, STATE_VARIABLE_ModeInfo_25_63, &STATE_VARIABLE_ModeInfo_26_64);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_59)), ((MR_Box) (ArgVars_10)));
  if (succeeded)
    succeeded = (ExtraGoals_60 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
      return;
    }
  switch (CanSucceed_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_68;
        MR_Word Var_62;

        parse_tree__prog_data__determinism_components_3_p_0(InterfaceDeterminism_21, &Var_62, &Var_68);
        succeeded = ((MR_Integer) 3 == Var_68);
        if (succeeded)
        {
          MR_Word FullInstMap0_70;

          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_64, &FullInstMap0_70);
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_70);
          if (succeeded)
          {
            MR_Word AllVars_71;
            MR_Word NondetLiveVars_72;

            hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_70, &AllVars_71);
            check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_71, STATE_VARIABLE_ModeInfo_26_64, &NondetLiveVars_72);
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_72, STATE_VARIABLE_ModeInfo_26_64, &STATE_VARIABLE_ModeInfo_41_41);
          }
          else
            STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_64;
        }
        else
          STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_64;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMap_61;

        hlds__instmap__init_unreachable_1_p_0(&InstMap_61);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_61, STATE_VARIABLE_ModeInfo_26_64, &STATE_VARIABLE_ModeInfo_41_41);
      }
      break;
  }
  hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(ProcInfo_18, &ModeErrors_23);
  if ((ModeErrors_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_ModeInfo_43_43 = STATE_VARIABLE_ModeInfo_41_41;
  else
  {
    MR_Word WaitingVars_26;
    MR_Word InstMap_27;
    MR_Word ArgInsts_28;
    MR_Word Var_42;

    WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_10);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_41_41, &InstMap_27);
    hlds__instmap__instmap_lookup_vars_3_p_0(InstMap_27, ArgVars_10, &ArgInsts_28);
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (ArgVars_10));
      MR_hl_field(3, Var_42, 2) = ((MR_Box) (ArgInsts_28));
      MR_hl_field(3, Var_42, 3) = ((MR_Box) (PredId_8));
      MR_hl_field(3, Var_42, 4) = ((MR_Box) (ProcId0_9));
      MR_hl_field(3, Var_42, 5) = ((MR_Box) (ModeErrors_23));
    }
    check_hlds__mode_info__mode_info_error_4_p_0(WaitingVars_26, Var_42, STATE_VARIABLE_ModeInfo_41_41, &STATE_VARIABLE_ModeInfo_43_43);
  }
  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_43_43, &Errors_29);
  check_hlds__mode_info__mode_info_set_errors_3_p_0(OldErrors_14, STATE_VARIABLE_ModeInfo_43_43, &STATE_VARIABLE_ModeInfo_44_44);
  check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(STATE_VARIABLE_ModeInfo_44_44, &MayChangeCalledProc_30);
  if ((Errors_29 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ProcId_12 = ProcId0_9;
    *STATE_VARIABLE_ModeInfo_38 = STATE_VARIABLE_ModeInfo_44_44;
  }
  else
    switch (MayChangeCalledProc_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Determinism_34;
          MR_Word NewArgVars_35;
          MR_Word ExtraGoals_36;
          MR_Word STATE_VARIABLE_ModeInfo_46_46;
          MR_Word Var_47;

          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_15, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_46_46);
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_18, &Determinism_34);
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Determinism_34));
          }
          check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_8, Var_47, ProcId0_9, ProcId_12, ArgVars_10, &NewArgVars_35, GoalInfo_11, &ExtraGoals_36, STATE_VARIABLE_ModeInfo_46_46, STATE_VARIABLE_ModeInfo_38);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_35)), ((MR_Box) (ArgVars_10)));
          if (succeeded)
            succeeded = (ExtraGoals_36 == (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", (MR_String) "call to implied mode\?");
              return;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllErrors_33;

          *ProcId_12 = ProcId0_9;
          mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), OldErrors_14, Errors_29, &AllErrors_33);
          check_hlds__mode_info__mode_info_set_errors_3_p_0(AllErrors_33, STATE_VARIABLE_ModeInfo_44_44, STATE_VARIABLE_ModeInfo_38);
        }
        break;
    }
}

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleInfo_12;
      MR_Word InstMap0_13;
      MR_Word Inst0_14;
      MR_Word VarTable_15;
      MR_Word Type_16;
      MR_Word Inst_17;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(HeadVar__3_3, &ModuleInfo_12);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(HeadVar__3_3, &InstMap0_13);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Var_7, &Inst0_14);
      check_hlds__mode_info__mode_info_get_var_table_2_p_0(HeadVar__3_3, &VarTable_15);
      parse_tree__var_table__lookup_var_type_3_p_0(VarTable_15, Var_7, &Type_16);
      succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(HeadVar__2_2);
      if (succeeded)
      {
        succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(HeadVar__2_2, Var_7, &Inst_17);
        if (succeeded)
        {
          succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(ModuleInfo_12, Type_16, Inst_17, Inst0_14);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word ChangedVars1_18;

        check_hlds__unique_modes__select_changed_inst_vars_4_p_0(Vars_8, HeadVar__2_2, HeadVar__3_3, &ChangedVars1_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (ChangedVars1_18));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word LiveVars1_9;

        check_hlds__unique_modes__select_live_vars_3_p_0(Vars_6, ModeInfo_2, &LiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (LiveVars1_9));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(
  MR_Word ModeInfo0_3,
  MR_Word * ModeInfo_4)
{
  MR_bool succeeded;
  MR_Word FullInstMap0_5;

  check_hlds__mode_info__mode_info_get_instmap_2_p_0(ModeInfo0_3, &FullInstMap0_5);
  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_5);
  if (succeeded)
  {
    MR_Word AllVars_6;
    MR_Word NondetLiveVars_7;

    hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_5, &AllVars_6);
    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_6, ModeInfo0_3, &NondetLiveVars_7);
    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_7, ModeInfo0_3, ModeInfo_4);
  }
  else
    *ModeInfo_4 = ModeInfo0_3;
}

static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * STATE_VARIABLE_ModeInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModeInfo_3 = STATE_VARIABLE_ModeInfo_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_12_12;
      MR_Word InstMap0_13;
      MR_Word ModuleInfo0_14;
      MR_Word Inst0_16;
      MR_Word TypeInfo_24_29;
      MR_Word Vars_15;
      MR_Word Inst1_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &InstMap0_13);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &ModuleInfo0_14);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_13);
      if (succeeded)
      {
        hlds__instmap__instmap_vars_list_2_p_0(InstMap0_13, &Vars_15);
        TypeInfo_24_29 = (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_24_29, ((MR_Box) (Var_7)), Vars_15);
        if (succeeded)
        {
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Var_7, &Inst0_16);
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_14, Inst0_16, &Inst1_17);
          switch (MR_tag((MR_Word) Inst1_17)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(2, Inst1_17, (MR_Integer) 0))) & (MR_Integer) 7);

                succeeded = (Var_27 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Inst1_17, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_26 = ((MR_Unsigned) ((MR_hl_field(3, Inst1_17, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_26 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_25 = ((MR_Unsigned) ((MR_hl_field(3, Inst1_17, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_25 == (MR_Integer) 1);
                  }
                  break;
              }
              break;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Inst_22;
        MR_Word ModuleInfo_23;
        MR_Word InstMap_24;
        MR_Word STATE_VARIABLE_ModeInfo_23_28;

        check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_16, &Inst_22, ModuleInfo0_14, &ModuleInfo_23);
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_23, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_23_28);
        hlds__instmap__instmap_set_var_4_p_0(Var_7, Inst_22, InstMap0_13, &InstMap_24);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_24, STATE_VARIABLE_ModeInfo_23_28, &STATE_VARIABLE_ModeInfo_12_12);
      }
      else
        STATE_VARIABLE_ModeInfo_12_12 = STATE_VARIABLE_ModeInfo_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_ModeInfo_0_2 = STATE_VARIABLE_ModeInfo_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModeInfo_0_2 = next_value_of_STATE_VARIABLE_ModeInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModeInfo_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word NondetLiveVars1_9;

        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(Vars_6, ModeInfo_2, &NondetLiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (NondetLiveVars1_9));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * Changed_10,
  MR_Word * Specs_11)
{
  check_hlds__modes__modecheck_proc_general_8_p_0((MR_Integer) 1, (MR_Integer) 0, PredId_7, ProcId_8, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13, Changed_10, Specs_11);
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_module_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10,
  MR_Word * Specs_7)
{
  MR_Word _SafeToContinue_8;

  check_hlds__modes__check_pred_modes_7_p_0(ProgressStream_5, (MR_Integer) 1, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_9, STATE_VARIABLE_ModuleInfo_10, &_SafeToContinue_8, Specs_7);
}

void mercury__check_hlds__unique_modes__init(void)
{
}

void mercury__check_hlds__unique_modes__init_type_tables(void)
{
}

void mercury__check_hlds__unique_modes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unique_modes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unique_modes.
