/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2022-03-14
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__643__1_2_p_0(
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__643__1_2_p_0(
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21)
{
  MR_bool succeeded;
  MR_Integer Multiplicity_9;

  *LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0))));
  Multiplicity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));
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

  succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__643__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_21);
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
  MR_Word NonLocalVarsList_20;
  MR_Word SharedList_24;
  MR_Word InstMap0_25;
  MR_Word VarInsts_26;
  MR_Word ModuleInfo0_27;
  MR_Word SharedVarInsts_28;
  MR_Word ModuleInfo1_29;
  MR_Word InstMap1_30;
  MR_Word STATE_VARIABLE_ModeInfo_23_35;

  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), NonLocalVarsBag_8, &NonLocalVarsList_20);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_2[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[3]), NonLocalVarsList_20, &SharedList_24);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &InstMap0_25);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_25, SharedList_24, &VarInsts_26);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_27);
  check_hlds__inst_util__make_shared_inst_list_4_p_0(VarInsts_26, &SharedVarInsts_28, ModuleInfo0_27, &ModuleInfo1_29);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_29, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_23_35);
  hlds__instmap__instmap_set_vars_corresponding_4_p_0(SharedList_24, SharedVarInsts_28, InstMap0_25, &InstMap1_30);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_30, STATE_VARIABLE_ModeInfo_23_35, &STATE_VARIABLE_ModeInfo_14_14);
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
    MR_Word Goal0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (InstMap_13));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (NonLocals_14));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_21_21, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_10, &Goals_12, &InstMaps_15, STATE_VARIABLE_ModeInfo_22_22, STATE_VARIABLE_ModeInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_15));
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
      MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConjGoals_15;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
      MR_Word Var_24;

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))) & (MR_Integer) 1);
        ConjGoals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2))));
        succeeded = (HeadVar__1_1 == Var_24);
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
        MR_Word Goal_30;
        MR_Word Goals_31;
        MR_Word NonLocals_33;
        MR_Word InstMap_34;
        MR_Word STATE_VARIABLE_ModeInfo_17_35;
        MR_Word STATE_VARIABLE_ModeInfo_18_36;

        NonLocals_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_11);
        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_33, STATE_VARIABLE_ModeInfo_0_4, &STATE_VARIABLE_ModeInfo_17_35);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Goal0_11, &Goal_30, STATE_VARIABLE_ModeInfo_17_35, &STATE_VARIABLE_ModeInfo_18_36);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_18_36, &InstMap_34);
        succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_34);
        if (succeeded)
        {
          check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(Goals0_12, STATE_VARIABLE_ModeInfo_18_36, STATE_VARIABLE_ModeInfo_5);
          Goals_31 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
          check_hlds__unique_modes__unique_modes_check_conj_5_p_0(HeadVar__1_1, Goals0_12, &Goals_31, STATE_VARIABLE_ModeInfo_18_36, STATE_VARIABLE_ModeInfo_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_31));
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
    MR_Word Case0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_14;
    MR_Word Cases_15;
    MR_Word InstMap_16;
    MR_Word InstMaps_17;
    MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0))));
    MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1))));
    MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2))));
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
      MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_19));
      MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_20));
      MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_25));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
    check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_12, HeadVar__2_2, &Cases_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_30_30, STATE_VARIABLE_ModeInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMap_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_17));
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
    MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstMap_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstMaps_20));
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
        MR_Word InstMap0_293;
        MR_Word NonLocals_294;
        MR_Word NonLocalsList_295;
        MR_Word LiveNonLocals_296;
        MR_Word LiveVars0_297;
        MR_Word SubGoal_298;
        MR_Word STATE_VARIABLE_ModeInfo_20_301;
        MR_Word STATE_VARIABLE_ModeInfo_21_302;
        MR_Word Var_303;
        MR_Word STATE_VARIABLE_ModeInfo_23_304;
        MR_Word STATE_VARIABLE_ModeInfo_25_306;
        MR_Word STATE_VARIABLE_ModeInfo_26_307;
        MR_Word STATE_VARIABLE_ModeInfo_28_309;
        MR_Word STATE_VARIABLE_ModeInfo_29_310;
        MR_Word STATE_VARIABLE_ModeInfo_30_311;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_20_301);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_301, &InstMap0_293);
        NonLocals_294 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_294, &NonLocalsList_295);
        check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_295, STATE_VARIABLE_ModeInfo_20_301, &LiveNonLocals_296);
        check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_296, STATE_VARIABLE_ModeInfo_20_301, &STATE_VARIABLE_ModeInfo_21_302);
        check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_302, &LiveVars0_297);
        Var_303 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_303, STATE_VARIABLE_ModeInfo_21_302, &STATE_VARIABLE_ModeInfo_23_304);
        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_294, STATE_VARIABLE_ModeInfo_23_304, &STATE_VARIABLE_ModeInfo_25_306);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_42, &SubGoal_298, STATE_VARIABLE_ModeInfo_25_306, &STATE_VARIABLE_ModeInfo_26_307);
        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_294, STATE_VARIABLE_ModeInfo_26_307, &STATE_VARIABLE_ModeInfo_28_309);
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_297, STATE_VARIABLE_ModeInfo_28_309, &STATE_VARIABLE_ModeInfo_29_310);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_293, STATE_VARIABLE_ModeInfo_29_310, &STATE_VARIABLE_ModeInfo_30_311);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_298));
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_311, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS0_506 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0))));
        MR_Word RHS0_507 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1))));
        MR_Word Unification0_509 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3))));
        MR_Word UnifyContext_510 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4))));
        MR_Word STATE_VARIABLE_ModeInfo_19_513;
        MR_Word Var_514;
        MR_Word STATE_VARIABLE_ModeInfo_21_515;
        MR_Word STATE_VARIABLE_ModeInfo_22_516;
        MR_Word STATE_VARIABLE_ModeInfo_23_517;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_19_513);
        {
          Var_514 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_514, 0) = ((MR_Box) (UnifyContext_510));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_514, STATE_VARIABLE_ModeInfo_19_513, &STATE_VARIABLE_ModeInfo_21_515);
        check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_506, RHS0_507, Unification0_509, UnifyContext_510, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_21_515, &STATE_VARIABLE_ModeInfo_22_516);
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_22_516, &STATE_VARIABLE_ModeInfo_23_517);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_23_517, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_323 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
        MR_Integer ProcId0_324 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
        MR_Word ArgVars_325 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2))));
        MR_Word Builtin_326 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word MaybeUnifyContext_327 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4))));
        MR_Word PredSymName_328 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5))));
        MR_String PredNameString_329;
        MR_String CallString_330;
        MR_Integer ProcId_331;
        MR_Word STATE_VARIABLE_ModeInfo_23_334;
        MR_Word Var_335;
        MR_Word STATE_VARIABLE_ModeInfo_25_336;
        MR_Word Var_337;
        MR_Word STATE_VARIABLE_ModeInfo_27_338;
        MR_Word STATE_VARIABLE_ModeInfo_28_339;

        PredNameString_329 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_328);
        CallString_330 = mercury__string__f_43_43_2_f_0((MR_String) "call ", PredNameString_329);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_330, STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_334);
        {
          Var_337 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_337, 0) = ((MR_Box) (PredId_323));
        }
        {
          Var_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_335, 0) = ((MR_Box) (Var_337));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_335, STATE_VARIABLE_ModeInfo_23_334, &STATE_VARIABLE_ModeInfo_25_336);
        check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_323, ProcId0_324, ArgVars_325, GoalInfo0_7, &ProcId_331, STATE_VARIABLE_ModeInfo_25_336, &STATE_VARIABLE_ModeInfo_27_338);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_323));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_331));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_325));
          MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_326));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext_327));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (PredSymName_328));
        }
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_27_338, &STATE_VARIABLE_ModeInfo_28_339);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_28_339, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word ArgVars_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Word ArgModes_170 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Detism_172 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word GenericCallId_173;
            MR_Word CallId_174;
            MR_Integer ArgOffset_181;
            MR_Word STATE_VARIABLE_ModeInfo_32_190;
            MR_Word Var_191;
            MR_Word STATE_VARIABLE_ModeInfo_34_192;
            MR_Word STATE_VARIABLE_ModeInfo_36_194;
            MR_Word STATE_VARIABLE_ModeInfo_37_195;
            MR_Word ModuleInfo_208;
            MR_Word InitialInsts_209;
            MR_Word InstVarSub_210;
            MR_Word FinalInsts0_211;
            MR_Word FinalInsts_212;
            MR_Word NewArgVars_213;
            MR_Word ExtraGoals_214;
            MR_Word STATE_VARIABLE_ModeInfo_25_217;
            MR_Word STATE_VARIABLE_ModeInfo_26_218;
            MR_Word Var_199;
            MR_Word Var_175;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_32_190);
            hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_168, &GenericCallId_173);
            {
              CallId_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallId_174, 0) = ((MR_Box) (GenericCallId_173));
            }
            {
              Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (CallId_174));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_191, STATE_VARIABLE_ModeInfo_32_190, &STATE_VARIABLE_ModeInfo_34_192);
            switch (MR_tag((MR_Word) GenericCall_168)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ArgOffset_181 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ArgOffset_181 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                ArgOffset_181 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                ArgOffset_181 = (MR_Integer) 0;
                break;
            }
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_34_192, &ModuleInfo_208);
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_208, ArgModes_170, &InitialInsts_209);
            check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_169, InitialInsts_209, ArgOffset_181, &InstVarSub_210, STATE_VARIABLE_ModeInfo_34_192, &STATE_VARIABLE_ModeInfo_25_217);
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_208, ArgModes_170, &FinalInsts0_211);
            parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_210, FinalInsts0_211, &FinalInsts_212);
            check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_169, InitialInsts_209, FinalInsts_212, ArgOffset_181, &NewArgVars_213, &ExtraGoals_214, STATE_VARIABLE_ModeInfo_25_217, &STATE_VARIABLE_ModeInfo_26_218);
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_213)), ((MR_Box) (ArgVars_169)));
            if (succeeded)
              succeeded = (ExtraGoals_214 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                return;
              }
            parse_tree__prog_data__determinism_components_3_p_0(Detism_172, &Var_175, &Var_199);
            succeeded = ((MR_Integer) 0 == Var_199);
            if (succeeded)
            {
              MR_Word InstMap_215;

              hlds__instmap__init_unreachable_1_p_0(&InstMap_215);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_215, STATE_VARIABLE_ModeInfo_26_218, &STATE_VARIABLE_ModeInfo_36_194);
            }
            else
            {
              MR_Word Var_224;
              MR_Word Var_216;

              parse_tree__prog_data__determinism_components_3_p_0(Detism_172, &Var_216, &Var_224);
              succeeded = ((MR_Integer) 3 == Var_224);
              if (succeeded)
              {
                MR_Word FullInstMap0_228;

                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_218, &FullInstMap0_228);
                succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_228);
                if (succeeded)
                {
                  MR_Word AllVars_229;
                  MR_Word NondetLiveVars_230;

                  hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_228, &AllVars_229);
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_229, STATE_VARIABLE_ModeInfo_26_218, &NondetLiveVars_230);
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_230, STATE_VARIABLE_ModeInfo_26_218, &STATE_VARIABLE_ModeInfo_36_194);
                }
                else
                  STATE_VARIABLE_ModeInfo_36_194 = STATE_VARIABLE_ModeInfo_26_218;
              }
              else
                STATE_VARIABLE_ModeInfo_36_194 = STATE_VARIABLE_ModeInfo_26_218;
            }
            *GoalExpr_8 = GoalExpr0_6;
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_36_194, &STATE_VARIABLE_ModeInfo_37_195);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_37_195, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word PredId_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Integer ProcId0_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Args_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
            MR_Word ExtraArgs_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6))));
            MR_Word PragmaCode_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7))));
            MR_Word ArgVars_98;
            MR_Integer ProcId_99;
            MR_Word STATE_VARIABLE_ModeInfo_23_102;
            MR_Word Var_103;
            MR_Word STATE_VARIABLE_ModeInfo_25_104;
            MR_Word Var_105;
            MR_Word STATE_VARIABLE_ModeInfo_28_107;
            MR_Word STATE_VARIABLE_ModeInfo_29_108;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_102);
            {
              Var_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (PredId_92));
            }
            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_105));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_103, STATE_VARIABLE_ModeInfo_23_102, &STATE_VARIABLE_ModeInfo_25_104);
            ArgVars_98 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[2]), Args_94);
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_92, ProcId0_93, ArgVars_98, GoalInfo0_7, &ProcId_99, STATE_VARIABLE_ModeInfo_25_104, &STATE_VARIABLE_ModeInfo_28_107);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Attributes_91));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredId_92));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ProcId_99));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args_94));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs_95));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeTraceRuntimeCond_96));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (PragmaCode_97));
            }
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_28_107, &STATE_VARIABLE_ModeInfo_29_108);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_29_108, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GoalType0_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Goals_122;
            MR_Word STATE_VARIABLE_ModeInfo_17_127;
            MR_Word STATE_VARIABLE_ModeInfo_19_129;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_17_127);
            if ((Goals0_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_122 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_ModeInfo_19_129 = STATE_VARIABLE_ModeInfo_17_127;
            }
            else
            {
              MR_Word STATE_VARIABLE_ModeInfo_18_128;

              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_33, Goals0_34, STATE_VARIABLE_ModeInfo_17_127, &STATE_VARIABLE_ModeInfo_18_128);
              check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_33, Goals0_34, &Goals_122, STATE_VARIABLE_ModeInfo_18_128, &STATE_VARIABLE_ModeInfo_19_129);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (GoalType0_33));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_122));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", STATE_VARIABLE_ModeInfo_19_129, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Goals_139;
            MR_Word STATE_VARIABLE_ModeInfo_23_150;
            MR_Word STATE_VARIABLE_ModeInfo_31_158;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_150);
            if ((Goals0_80 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_140;

              Goals_139 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_140);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_140, STATE_VARIABLE_ModeInfo_23_150, &STATE_VARIABLE_ModeInfo_31_158);
            }
            else
            {
              MR_Word NonLocals_143;
              MR_Word Determinism_144;
              MR_Word InstMaps_146;
              MR_Word ArmInstMaps_147;
              MR_Word STATE_VARIABLE_ModeInfo_27_154;
              MR_Word STATE_VARIABLE_ModeInfo_28_155;
              MR_Word Var_162;
              MR_Word Var_145;

              NonLocals_143 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              Determinism_144 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
              parse_tree__prog_data__determinism_components_3_p_0(Determinism_144, &Var_145, &Var_162);
              succeeded = ((MR_Integer) 3 == Var_162);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_ModeInfo_25_152;
                MR_Word STATE_VARIABLE_ModeInfo_26_153;

                check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_143, STATE_VARIABLE_ModeInfo_23_150, &STATE_VARIABLE_ModeInfo_25_152);
                check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_25_152, &STATE_VARIABLE_ModeInfo_26_153);
                check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_143, STATE_VARIABLE_ModeInfo_26_153, &STATE_VARIABLE_ModeInfo_27_154);
              }
              else
                STATE_VARIABLE_ModeInfo_27_154 = STATE_VARIABLE_ModeInfo_23_150;
              check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_80, Determinism_144, NonLocals_143, &Goals_139, &InstMaps_146, STATE_VARIABLE_ModeInfo_27_154, &STATE_VARIABLE_ModeInfo_28_155);
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_139, InstMaps_146, &ArmInstMaps_147);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_143, ArmInstMaps_147, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_28_155, &STATE_VARIABLE_ModeInfo_31_158);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_139));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_31_158, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word CanFail0_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Cases_483;
            MR_Word STATE_VARIABLE_ModeInfo_25_492;
            MR_Word STATE_VARIABLE_ModeInfo_29_496;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_25_492);
            if ((Cases0_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_484;

              Cases_483 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_484);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_484, STATE_VARIABLE_ModeInfo_25_492, &STATE_VARIABLE_ModeInfo_29_496);
            }
            else
            {
              MR_Word NonLocals_487;
              MR_Word InstMaps_488;
              MR_Word ArmInstMaps_489;
              MR_Word STATE_VARIABLE_ModeInfo_26_493;

              NonLocals_487 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_37, Var0_35, &Cases_483, &InstMaps_488, STATE_VARIABLE_ModeInfo_25_492, &STATE_VARIABLE_ModeInfo_26_493);
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_483, InstMaps_488, &ArmInstMaps_489);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_487, ArmInstMaps_489, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_26_493, &STATE_VARIABLE_ModeInfo_29_496);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var0_35));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_483));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_29_496, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Reason0_43)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  MR_Word STATE_VARIABLE_ModeInfo_47_383;
                  MR_Word STATE_VARIABLE_ModeInfo_48_384;
                  MR_Word SubGoal_433;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_47_383);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_433, STATE_VARIABLE_ModeInfo_47_383, &STATE_VARIABLE_ModeInfo_48_384);
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_384, STATE_VARIABLE_ModeInfo_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_433));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_43, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 8:
                    {
                      MR_Word STATE_VARIABLE_ModeInfo_47_383;
                      MR_Word STATE_VARIABLE_ModeInfo_48_384;
                      MR_Word SubGoal_433;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_47_383);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_433, STATE_VARIABLE_ModeInfo_47_383, &STATE_VARIABLE_ModeInfo_48_384);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_384, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_433));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_358 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_43, (MR_Integer) 1))));
                      MR_Word FGT_359 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_43, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_359) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word LiveTermVar_360;
                            MR_Word STATE_VARIABLE_ModeInfo_63_399;
                            MR_Word STATE_VARIABLE_ModeInfo_66_402;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_63_399);
                            check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_399, TermVar_358, &LiveTermVar_360);
                            switch (LiveTermVar_360) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                {
                                  *GoalExpr_8 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[1]));
                                  STATE_VARIABLE_ModeInfo_66_402 = STATE_VARIABLE_ModeInfo_63_399;
                                }
                                break;
                              case (MR_Integer) 0:
                                {
                                  MR_Word SubGoalInfo_362 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_81, (MR_Integer) 1))));
                                  MR_Word InstMapDelta_363;
                                  MR_Word TermVarInst_364;

                                  InstMapDelta_363 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_362);
                                  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_363, TermVar_358, &TermVarInst_364);
                                  if (succeeded)
                                  {
                                    MR_Word InstMap_365;
                                    MR_Word InstMap0_420;

                                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_63_399, &InstMap0_420);
                                    hlds__instmap__instmap_set_var_4_p_0(TermVar_358, TermVarInst_364, InstMap0_420, &InstMap_365);
                                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_365, STATE_VARIABLE_ModeInfo_63_399, &STATE_VARIABLE_ModeInfo_66_402);
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
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_66_402, STATE_VARIABLE_ModeInfo_59);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word STATE_VARIABLE_ModeInfo_56_392;
                            MR_Word STATE_VARIABLE_ModeInfo_57_393;
                            MR_Word SubGoal_428;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_56_392);
                            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_428, STATE_VARIABLE_ModeInfo_56_392, &STATE_VARIABLE_ModeInfo_57_393);
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_57_393, STATE_VARIABLE_ModeInfo_59);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_428));
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
                      MR_Word InstMap0_355;
                      MR_Word NonLocals_356;
                      MR_Word SubGoal_357;
                      MR_Word STATE_VARIABLE_ModeInfo_74_410;
                      MR_Word STATE_VARIABLE_ModeInfo_76_412;
                      MR_Word STATE_VARIABLE_ModeInfo_77_413;
                      MR_Word STATE_VARIABLE_ModeInfo_79_415;
                      MR_Word STATE_VARIABLE_ModeInfo_80_416;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_74_410);
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_74_410, &InstMap0_355);
                      NonLocals_356 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_356, STATE_VARIABLE_ModeInfo_74_410, &STATE_VARIABLE_ModeInfo_76_412);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_357, STATE_VARIABLE_ModeInfo_76_412, &STATE_VARIABLE_ModeInfo_77_413);
                      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_356, STATE_VARIABLE_ModeInfo_77_413, &STATE_VARIABLE_ModeInfo_79_415);
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_355, STATE_VARIABLE_ModeInfo_79_415, &STATE_VARIABLE_ModeInfo_80_416);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_80_416, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_357));
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
            MR_Word Vars0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Cond0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Then0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Else0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
            MR_Word NonLocals_240;
            MR_Word CondVars_241;
            MR_Word ThenVars_242;
            MR_Word ElseVars_243;
            MR_Word InstMap0_244;
            MR_Word CondVarList_245;
            MR_Word CondLiveVars_246;
            MR_Word CondInfo0_248;
            MR_Word CondDeltaInstMap0_249;
            MR_Word ChangedVars_250;
            MR_Word Cond_251;
            MR_Word InstMapCond_252;
            MR_Word Then_253;
            MR_Word InstMapThen_254;
            MR_Word Else_255;
            MR_Word InstMapElse_256;
            MR_Word ArmInstMaps_257;
            MR_Word STATE_VARIABLE_ModeInfo_38_260;
            MR_Word STATE_VARIABLE_ModeInfo_40_262;
            MR_Word STATE_VARIABLE_ModeInfo_41_263;
            MR_Word STATE_VARIABLE_ModeInfo_42_264;
            MR_Word STATE_VARIABLE_ModeInfo_43_265;
            MR_Word STATE_VARIABLE_ModeInfo_44_266;
            MR_Word STATE_VARIABLE_ModeInfo_45_267;
            MR_Word STATE_VARIABLE_ModeInfo_46_268;
            MR_Word STATE_VARIABLE_ModeInfo_48_270;
            MR_Word STATE_VARIABLE_ModeInfo_49_271;
            MR_Word STATE_VARIABLE_ModeInfo_50_272;
            MR_Word STATE_VARIABLE_ModeInfo_51_273;
            MR_Word STATE_VARIABLE_ModeInfo_52_274;
            MR_Word Var_275;
            MR_Word Var_276;
            MR_Word Var_277;
            MR_Word Var_279;
            MR_Word STATE_VARIABLE_ModeInfo_60_282;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_260);
            NonLocals_240 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
            CondVars_241 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_39);
            ThenVars_242 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_40);
            ElseVars_243 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_41);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_260, &InstMap0_244);
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_240, STATE_VARIABLE_ModeInfo_38_260, &STATE_VARIABLE_ModeInfo_40_262);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_243, STATE_VARIABLE_ModeInfo_40_262, &STATE_VARIABLE_ModeInfo_41_263);
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_241, &CondVarList_245);
            check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_245, STATE_VARIABLE_ModeInfo_41_263, &CondLiveVars_246);
            CondInfo0_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_39, (MR_Integer) 1))));
            CondDeltaInstMap0_249 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_248);
            check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_246, CondDeltaInstMap0_249, STATE_VARIABLE_ModeInfo_41_263, &ChangedVars_250);
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_250, STATE_VARIABLE_ModeInfo_41_263, &STATE_VARIABLE_ModeInfo_42_264);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_243, STATE_VARIABLE_ModeInfo_42_264, &STATE_VARIABLE_ModeInfo_43_265);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_242, STATE_VARIABLE_ModeInfo_43_265, &STATE_VARIABLE_ModeInfo_44_266);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_39, &Cond_251, STATE_VARIABLE_ModeInfo_44_266, &STATE_VARIABLE_ModeInfo_45_267);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_242, STATE_VARIABLE_ModeInfo_45_267, &STATE_VARIABLE_ModeInfo_46_268);
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_240, STATE_VARIABLE_ModeInfo_46_268, &STATE_VARIABLE_ModeInfo_48_270);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_270, &InstMapCond_252);
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_252);
            if (succeeded)
            {
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_40, &Then_253, STATE_VARIABLE_ModeInfo_48_270, &STATE_VARIABLE_ModeInfo_49_271);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_271, &InstMapThen_254);
            }
            else
            {
              Then_253 = hlds__make_goal__true_goal_0_f_0();
              InstMapThen_254 = InstMapCond_252;
              STATE_VARIABLE_ModeInfo_49_271 = STATE_VARIABLE_ModeInfo_48_270;
            }
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_244, STATE_VARIABLE_ModeInfo_49_271, &STATE_VARIABLE_ModeInfo_50_272);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_41, &Else_255, STATE_VARIABLE_ModeInfo_50_272, &STATE_VARIABLE_ModeInfo_51_273);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_273, &InstMapElse_256);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_244, STATE_VARIABLE_ModeInfo_51_273, &STATE_VARIABLE_ModeInfo_52_274);
            {
              Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Else_255));
              MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Then_253));
              MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (Var_277));
            }
            {
              Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (InstMapElse_256));
              MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (InstMapThen_254));
              MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (Var_279));
            }
            hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_275, Var_276, &ArmInstMaps_257);
            hlds__instmap__instmap_merge_5_p_0(NonLocals_240, ArmInstMaps_257, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_274, &STATE_VARIABLE_ModeInfo_60_282);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars0_38));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_251));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_253));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_255));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_282, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));

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
                  MR_Word GoalType_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word Outer_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 1))));
                  MR_Word Inner_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 2))));
                  MR_Word MaybeOutputVars_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 3))));
                  MR_Word MainGoal0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 4))));
                  MR_Word OrElseGoals0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 5))));
                  MR_Word OrElseInners0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_44, (MR_Integer) 6))));
                  MR_Word MainGoal_446;
                  MR_Word OrElseGoals_447;
                  MR_Word ShortHand_457;
                  MR_Word STATE_VARIABLE_ModeInfo_38_460;
                  MR_Word STATE_VARIABLE_ModeInfo_48_470;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_460);
                  if ((OrElseGoals0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_49, &MainGoal_446, STATE_VARIABLE_ModeInfo_38_460, &STATE_VARIABLE_ModeInfo_48_470);
                    OrElseGoals_447 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                  {
                    MR_Word NonLocals_450;
                    MR_Word Determinism_451;
                    MR_Word Goals0_453;
                    MR_Word Goals_454;
                    MR_Word InstMaps_455;
                    MR_Word ArmInstMaps_456;
                    MR_Word STATE_VARIABLE_ModeInfo_42_464;
                    MR_Word STATE_VARIABLE_ModeInfo_43_465;
                    MR_Word Var_474;
                    MR_Word Var_452;

                    NonLocals_450 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                    Determinism_451 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                    parse_tree__prog_data__determinism_components_3_p_0(Determinism_451, &Var_452, &Var_474);
                    succeeded = ((MR_Integer) 3 == Var_474);
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_ModeInfo_40_462;
                      MR_Word STATE_VARIABLE_ModeInfo_41_463;

                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_450, STATE_VARIABLE_ModeInfo_38_460, &STATE_VARIABLE_ModeInfo_40_462);
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_40_462, &STATE_VARIABLE_ModeInfo_41_463);
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_450, STATE_VARIABLE_ModeInfo_41_463, &STATE_VARIABLE_ModeInfo_42_464);
                    }
                    else
                      STATE_VARIABLE_ModeInfo_42_464 = STATE_VARIABLE_ModeInfo_38_460;
                    {
                      Goals0_453 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Goals0_453, 0) = ((MR_Box) (MainGoal0_49));
                      MR_hl_field(MR_mktag(1), Goals0_453, 1) = ((MR_Box) (OrElseGoals0_50));
                    }
                    check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_453, Determinism_451, NonLocals_450, &Goals_454, &InstMaps_455, STATE_VARIABLE_ModeInfo_42_464, &STATE_VARIABLE_ModeInfo_43_465);
                    if ((Goals_454 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                        return;
                      }
                    else
                    {
                      MainGoal_446 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_454, (MR_Integer) 0))));
                      OrElseGoals_447 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_454, (MR_Integer) 1))));
                    }
                    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_454, InstMaps_455, &ArmInstMaps_456);
                    hlds__instmap__instmap_merge_5_p_0(NonLocals_450, ArmInstMaps_456, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_43_465, &STATE_VARIABLE_ModeInfo_48_470);
                  }
                  {
                    ShortHand_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 0) = (MR_Box) ((MR_Unsigned) (GoalType_45));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 1) = ((MR_Box) (Outer_46));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 2) = ((MR_Box) (Inner_47));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 3) = ((MR_Box) (MaybeOutputVars_48));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 4) = ((MR_Box) (MainGoal_446));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 5) = ((MR_Box) (OrElseGoals_447));
                    MR_hl_field(MR_mktag(1), ShortHand_457, 6) = ((MR_Box) (OrElseInners0_51));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_457));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_48_470, STATE_VARIABLE_ModeInfo_59);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIO_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_44, (MR_Integer) 0))));
                  MR_Word ResultVar_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_44, (MR_Integer) 1))));
                  MR_Word SubGoal_54;
                  MR_Word ShortHand_55;
                  MR_Word STATE_VARIABLE_ModeInfo_64_64;
                  MR_Word STATE_VARIABLE_ModeInfo_65_65;
                  MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_44, (MR_Integer) 2))));

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_64_64);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_54, STATE_VARIABLE_ModeInfo_64_64, &STATE_VARIABLE_ModeInfo_65_65);
                  {
                    ShortHand_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), ShortHand_55, 0) = ((MR_Box) (MaybeIO_52));
                    MR_hl_field(MR_mktag(2), ShortHand_55, 1) = ((MR_Box) (ResultVar_53));
                    MR_hl_field(MR_mktag(2), ShortHand_55, 2) = ((MR_Box) (SubGoal_54));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_55));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_65_65, STATE_VARIABLE_ModeInfo_59);
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
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
  MR_Word Context_10;
  MR_Word STATE_VARIABLE_ModeInfo_14_14;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
  succeeded = mercury__term__is_dummy_context_1_p_0(Context_10);
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
    MR_Word InstMap0_27;
    MR_Word NondetLiveVars0_28;
    MR_Word Detism_29;
    MR_Word GoalExpr_31;
    MR_Word GoalInfo_32;
    MR_Word STATE_VARIABLE_ModeInfo_20_35;
    MR_Word STATE_VARIABLE_ModeInfo_21_36;
    MR_Word STATE_VARIABLE_ModeInfo_22_37;
    MR_Word Var_40;
    MR_Word Var_30;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InDuplForSwitch_11);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_17_17);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &InstMap0_27);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &NondetLiveVars0_28);
    Detism_29 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_29, &Var_30, &Var_40);
    succeeded = ((MR_Integer) 3 == Var_40);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_35 = STATE_VARIABLE_ModeInfo_17_17;
    else
    {
      MR_Word Var_34;

      Var_34 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_34, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_20_35);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_31, STATE_VARIABLE_ModeInfo_20_35, &STATE_VARIABLE_ModeInfo_21_36);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_28, STATE_VARIABLE_ModeInfo_21_36, &STATE_VARIABLE_ModeInfo_22_37);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_27, GoalExpr_31, GoalInfo0_9, &GoalInfo_32, STATE_VARIABLE_ModeInfo_22_37, &STATE_VARIABLE_ModeInfo_18_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_32));
    }
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_13);
  }
  else
  {
    MR_Word InstMap0_47;
    MR_Word NondetLiveVars0_48;
    MR_Word Detism_49;
    MR_Word GoalExpr_51;
    MR_Word GoalInfo_52;
    MR_Word STATE_VARIABLE_ModeInfo_20_55;
    MR_Word STATE_VARIABLE_ModeInfo_21_56;
    MR_Word STATE_VARIABLE_ModeInfo_22_57;
    MR_Word Var_60;
    MR_Word Var_50;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InstMap0_47);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &NondetLiveVars0_48);
    Detism_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_49, &Var_50, &Var_60);
    succeeded = ((MR_Integer) 3 == Var_60);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_55 = STATE_VARIABLE_ModeInfo_14_14;
    else
    {
      MR_Word Var_54;

      Var_54 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_54, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_20_55);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_51, STATE_VARIABLE_ModeInfo_20_55, &STATE_VARIABLE_ModeInfo_21_56);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_48, STATE_VARIABLE_ModeInfo_21_56, &STATE_VARIABLE_ModeInfo_22_57);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_47, GoalExpr_51, GoalInfo0_9, &GoalInfo_52, STATE_VARIABLE_ModeInfo_22_57, STATE_VARIABLE_ModeInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_52));
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
  GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1))));
  Determinism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_13);
  parse_tree__prog_data__determinism_components_3_p_0(Determinism_14, &CanFail_15, &Var_16);
  succeeded = (DisjMaxSolns_11 != (MR_Integer) 3);
  if (succeeded)
    succeeded = (CanFail_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_ModeInfo_19_19;
    MR_Word STATE_VARIABLE_ModeInfo_20_20;
    MR_Word FullInstMap0_24;

    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_19_19);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_19_19, &FullInstMap0_24);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_24);
    if (succeeded)
    {
      MR_Word AllVars_25;
      MR_Word NondetLiveVars_26;

      hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_24, &AllVars_25);
      check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_25, STATE_VARIABLE_ModeInfo_19_19, &NondetLiveVars_26);
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_26, STATE_VARIABLE_ModeInfo_19_19, &STATE_VARIABLE_ModeInfo_20_20);
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
  MR_Word ModuleInfo_62;
  MR_Word InitialInsts_63;
  MR_Word InstVarSub_64;
  MR_Word FinalInsts0_65;
  MR_Word FinalInsts_66;
  MR_Word NewArgVars_67;
  MR_Word ExtraGoals_68;
  MR_Word STATE_VARIABLE_ModeInfo_25_71;
  MR_Word STATE_VARIABLE_ModeInfo_26_72;

  check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &OldErrors_14);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &InstMap0_15);
  check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_16);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_8, ProcId0_9, &PredInfo_17, &ProcInfo_18);
  check_hlds__modecheck_util__compute_arg_offset_2_p_0(PredInfo_17, &ArgOffset_19);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ProcArgModes0_20);
  hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &InterfaceDeterminism_21);
  hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_18, &CanSucceed_22);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_62);
  check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_62, ProcArgModes0_20, &InitialInsts_63);
  check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_10, InitialInsts_63, ArgOffset_19, &InstVarSub_64, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_25_71);
  check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_62, ProcArgModes0_20, &FinalInsts0_65);
  parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_64, FinalInsts0_65, &FinalInsts_66);
  check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_10, InitialInsts_63, FinalInsts_66, ArgOffset_19, &NewArgVars_67, &ExtraGoals_68, STATE_VARIABLE_ModeInfo_25_71, &STATE_VARIABLE_ModeInfo_26_72);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_67)), ((MR_Box) (ArgVars_10)));
  if (succeeded)
    succeeded = (ExtraGoals_68 == (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
      return;
    }
  switch (CanSucceed_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_78;
        MR_Word Var_70;

        parse_tree__prog_data__determinism_components_3_p_0(InterfaceDeterminism_21, &Var_70, &Var_78);
        succeeded = ((MR_Integer) 3 == Var_78);
        if (succeeded)
        {
          MR_Word FullInstMap0_82;

          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_72, &FullInstMap0_82);
          succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_82);
          if (succeeded)
          {
            MR_Word AllVars_83;
            MR_Word NondetLiveVars_84;

            hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_82, &AllVars_83);
            check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_83, STATE_VARIABLE_ModeInfo_26_72, &NondetLiveVars_84);
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_84, STATE_VARIABLE_ModeInfo_26_72, &STATE_VARIABLE_ModeInfo_41_41);
          }
          else
            STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_72;
        }
        else
          STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_72;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InstMap_69;

        hlds__instmap__init_unreachable_1_p_0(&InstMap_69);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_69, STATE_VARIABLE_ModeInfo_26_72, &STATE_VARIABLE_ModeInfo_41_41);
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
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 15U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (ArgVars_10));
      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (ArgInsts_28));
      MR_hl_field(MR_mktag(3), Var_42, 3) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(3), Var_42, 4) = ((MR_Box) (ProcId0_9));
      MR_hl_field(MR_mktag(3), Var_42, 5) = ((MR_Box) (ModeErrors_23));
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
          MR_Word STATE_VARIABLE_ModeInfo_45_45;
          MR_Word Var_46;

          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_15, STATE_VARIABLE_ModeInfo_44_44, &STATE_VARIABLE_ModeInfo_45_45);
          hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_18, &Determinism_34);
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Determinism_34));
          }
          check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_8, Var_46, ProcId0_9, ProcId_12, ArgVars_10, &NewArgVars_35, GoalInfo_11, &ExtraGoals_36, STATE_VARIABLE_ModeInfo_45_45, STATE_VARIABLE_ModeInfo_38);
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
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleInfo_12;
      MR_Word InstMap0_13;
      MR_Word Inst0_14;
      MR_Word VarTypes_15;
      MR_Word Type_16;
      MR_Word Inst_17;

      check_hlds__mode_info__mode_info_get_module_info_2_p_0(HeadVar__3_3, &ModuleInfo_12);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(HeadVar__3_3, &InstMap0_13);
      hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_13, Var_7, &Inst0_14);
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(HeadVar__3_3, &VarTypes_15);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_15, Var_7, &Type_16);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ChangedVars1_18));
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
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word LiveVars1_9;

        check_hlds__unique_modes__select_live_vars_3_p_0(Vars_6, ModeInfo_2, &LiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LiveVars1_9));
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
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModeInfo_12_12;
      MR_Word InstMap0_18;
      MR_Word ModuleInfo0_19;
      MR_Word Inst0_21;
      MR_Word TypeInfo_25_35;
      MR_Word Vars_20;
      MR_Word Inst1_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &InstMap0_18);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &ModuleInfo0_19);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_18);
      if (succeeded)
      {
        hlds__instmap__instmap_vars_list_2_p_0(InstMap0_18, &Vars_20);
        TypeInfo_25_35 = (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_25_35, ((MR_Box) (Var_7)), Vars_20);
        if (succeeded)
        {
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_18, Var_7, &Inst0_21);
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_19, Inst0_21, &Inst1_22);
          switch (MR_tag((MR_Word) Inst1_22)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst1_22, (MR_Integer) 0))) & (MR_Integer) 7);

                succeeded = (Var_30 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_31 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_32 == (MR_Integer) 1);
                  }
                  break;
              }
              break;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Inst_27;
        MR_Word ModuleInfo_28;
        MR_Word InstMap_29;
        MR_Word STATE_VARIABLE_ModeInfo_23_33;

        check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_21, &Inst_27, ModuleInfo0_19, &ModuleInfo_28);
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_28, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_23_33);
        hlds__instmap__instmap_set_var_4_p_0(Var_7, Inst_27, InstMap0_18, &InstMap_29);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_29, STATE_VARIABLE_ModeInfo_23_33, &STATE_VARIABLE_ModeInfo_12_12);
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
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_11;

      check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(ModeInfo_2, Var_5, &Var_11);
      succeeded = ((MR_Integer) 0 == Var_11);
      if (succeeded)
      {
        MR_Word NondetLiveVars1_9;

        check_hlds__unique_modes__select_nondet_live_vars_3_p_0(Vars_6, ModeInfo_2, &NondetLiveVars1_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NondetLiveVars1_9));
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
check_hlds__unique_modes__unique_modes_check_module_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word * Specs_5)
{
  MR_Word _SafeToContinue_6;

  check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 1, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8, &_SafeToContinue_6, Specs_5);
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
