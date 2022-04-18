/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2022-04-18
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
#include "parse_tree.prog_type.mih"
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
  MR_Word NonLocalVarsList_19;
  MR_Word SharedList_23;
  MR_Word InstMap0_24;
  MR_Word VarInsts_25;
  MR_Word ModuleInfo0_26;
  MR_Word SharedVarInsts_27;
  MR_Word ModuleInfo1_28;
  MR_Word InstMap1_29;
  MR_Word STATE_VARIABLE_ModeInfo_23_34;

  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), NonLocalVarsBag_8, &NonLocalVarsList_19);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_2[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[3]), NonLocalVarsList_19, &SharedList_23);
  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &InstMap0_24);
  hlds__instmap__instmap_lookup_vars_3_p_0(InstMap0_24, SharedList_23, &VarInsts_25);
  check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_12, &ModuleInfo0_26);
  check_hlds__inst_util__make_shared_inst_list_4_p_0(VarInsts_25, &SharedVarInsts_27, ModuleInfo0_26, &ModuleInfo1_28);
  check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo1_28, STATE_VARIABLE_ModeInfo_0_12, &STATE_VARIABLE_ModeInfo_23_34);
  hlds__instmap__instmap_set_vars_corresponding_4_p_0(SharedList_23, SharedVarInsts_27, InstMap0_24, &InstMap1_29);
  check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap1_29, STATE_VARIABLE_ModeInfo_23_34, &STATE_VARIABLE_ModeInfo_14_14);
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
        MR_Word InstMap0_288;
        MR_Word NonLocals_289;
        MR_Word NonLocalsList_290;
        MR_Word LiveNonLocals_291;
        MR_Word LiveVars0_292;
        MR_Word SubGoal_293;
        MR_Word STATE_VARIABLE_ModeInfo_20_296;
        MR_Word STATE_VARIABLE_ModeInfo_21_297;
        MR_Word Var_298;
        MR_Word STATE_VARIABLE_ModeInfo_23_299;
        MR_Word STATE_VARIABLE_ModeInfo_25_301;
        MR_Word STATE_VARIABLE_ModeInfo_26_302;
        MR_Word STATE_VARIABLE_ModeInfo_28_304;
        MR_Word STATE_VARIABLE_ModeInfo_29_305;
        MR_Word STATE_VARIABLE_ModeInfo_30_306;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_20_296);
        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_296, &InstMap0_288);
        NonLocals_289 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
        parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_289, &NonLocalsList_290);
        check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_290, STATE_VARIABLE_ModeInfo_20_296, &LiveNonLocals_291);
        check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_291, STATE_VARIABLE_ModeInfo_20_296, &STATE_VARIABLE_ModeInfo_21_297);
        check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_297, &LiveVars0_292);
        Var_298 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_298, STATE_VARIABLE_ModeInfo_21_297, &STATE_VARIABLE_ModeInfo_23_299);
        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_289, STATE_VARIABLE_ModeInfo_23_299, &STATE_VARIABLE_ModeInfo_25_301);
        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_42, &SubGoal_293, STATE_VARIABLE_ModeInfo_25_301, &STATE_VARIABLE_ModeInfo_26_302);
        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_289, STATE_VARIABLE_ModeInfo_26_302, &STATE_VARIABLE_ModeInfo_28_304);
        check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_292, STATE_VARIABLE_ModeInfo_28_304, &STATE_VARIABLE_ModeInfo_29_305);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_288, STATE_VARIABLE_ModeInfo_29_305, &STATE_VARIABLE_ModeInfo_30_306);
        *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_293));
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_306, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHS0_499 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0))));
        MR_Word RHS0_500 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1))));
        MR_Word Unification0_502 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3))));
        MR_Word UnifyContext_503 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4))));
        MR_Word STATE_VARIABLE_ModeInfo_19_506;
        MR_Word Var_507;
        MR_Word STATE_VARIABLE_ModeInfo_21_508;
        MR_Word STATE_VARIABLE_ModeInfo_22_509;
        MR_Word STATE_VARIABLE_ModeInfo_23_510;

        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_19_506);
        {
          Var_507 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_507, 0) = ((MR_Box) (UnifyContext_503));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_507, STATE_VARIABLE_ModeInfo_19_506, &STATE_VARIABLE_ModeInfo_21_508);
        check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_499, RHS0_500, Unification0_502, UnifyContext_503, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_21_508, &STATE_VARIABLE_ModeInfo_22_509);
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_22_509, &STATE_VARIABLE_ModeInfo_23_510);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_23_510, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredId_318 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
        MR_Integer ProcId0_319 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
        MR_Word ArgVars_320 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2))));
        MR_Word Builtin_321 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word MaybeUnifyContext_322 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4))));
        MR_Word PredSymName_323 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5))));
        MR_String PredNameString_324;
        MR_String CallString_325;
        MR_Integer ProcId_326;
        MR_Word STATE_VARIABLE_ModeInfo_23_329;
        MR_Word Var_330;
        MR_Word STATE_VARIABLE_ModeInfo_25_331;
        MR_Word Var_332;
        MR_Word STATE_VARIABLE_ModeInfo_27_333;
        MR_Word STATE_VARIABLE_ModeInfo_28_334;

        PredNameString_324 = mdbcomp__sym_name__sym_name_to_string_1_f_0(PredSymName_323);
        CallString_325 = mercury__string__f_43_43_2_f_0((MR_String) "call ", PredNameString_324);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_325, STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_329);
        {
          Var_332 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_332, 0) = ((MR_Box) (PredId_318));
        }
        {
          Var_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_330, 0) = ((MR_Box) (Var_332));
        }
        check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_330, STATE_VARIABLE_ModeInfo_23_329, &STATE_VARIABLE_ModeInfo_25_331);
        check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_318, ProcId0_319, ArgVars_320, GoalInfo0_7, &ProcId_326, STATE_VARIABLE_ModeInfo_25_331, &STATE_VARIABLE_ModeInfo_27_333);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *GoalExpr_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId_318));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_326));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars_320));
          MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin_321));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext_322));
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (PredSymName_323));
        }
        check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_27_333, &STATE_VARIABLE_ModeInfo_28_334);
        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_28_334, STATE_VARIABLE_ModeInfo_59);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GenericCall_163 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word ArgVars_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Word ArgModes_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Detism_167 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))) & (MR_Integer) 7);
            MR_Word GenericCallId_168;
            MR_Word CallId_169;
            MR_Integer ArgOffset_176;
            MR_Word STATE_VARIABLE_ModeInfo_32_185;
            MR_Word Var_186;
            MR_Word STATE_VARIABLE_ModeInfo_34_187;
            MR_Word STATE_VARIABLE_ModeInfo_36_189;
            MR_Word STATE_VARIABLE_ModeInfo_37_190;
            MR_Word ModuleInfo_203;
            MR_Word InitialInsts_204;
            MR_Word InstVarSub_205;
            MR_Word FinalInsts0_206;
            MR_Word FinalInsts_207;
            MR_Word NewArgVars_208;
            MR_Word ExtraGoals_209;
            MR_Word STATE_VARIABLE_ModeInfo_25_212;
            MR_Word STATE_VARIABLE_ModeInfo_26_213;
            MR_Word Var_194;
            MR_Word Var_170;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_32_185);
            hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_163, &GenericCallId_168);
            {
              CallId_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallId_169, 0) = ((MR_Box) (GenericCallId_168));
            }
            {
              Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (CallId_169));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_186, STATE_VARIABLE_ModeInfo_32_185, &STATE_VARIABLE_ModeInfo_34_187);
            switch (MR_tag((MR_Word) GenericCall_163)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ArgOffset_176 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ArgOffset_176 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                ArgOffset_176 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                ArgOffset_176 = (MR_Integer) 0;
                break;
            }
            check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_34_187, &ModuleInfo_203);
            check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_203, ArgModes_165, &InitialInsts_204);
            check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_164, InitialInsts_204, ArgOffset_176, &InstVarSub_205, STATE_VARIABLE_ModeInfo_34_187, &STATE_VARIABLE_ModeInfo_25_212);
            check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_203, ArgModes_165, &FinalInsts0_206);
            parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_205, FinalInsts0_206, &FinalInsts_207);
            check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_164, InitialInsts_204, FinalInsts_207, ArgOffset_176, &NewArgVars_208, &ExtraGoals_209, STATE_VARIABLE_ModeInfo_25_212, &STATE_VARIABLE_ModeInfo_26_213);
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_208)), ((MR_Box) (ArgVars_164)));
            if (succeeded)
              succeeded = (ExtraGoals_209 == (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                return;
              }
            parse_tree__prog_data__determinism_components_3_p_0(Detism_167, &Var_170, &Var_194);
            succeeded = ((MR_Integer) 0 == Var_194);
            if (succeeded)
            {
              MR_Word InstMap_210;

              hlds__instmap__init_unreachable_1_p_0(&InstMap_210);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_210, STATE_VARIABLE_ModeInfo_26_213, &STATE_VARIABLE_ModeInfo_36_189);
            }
            else
            {
              MR_Word Var_219;
              MR_Word Var_211;

              parse_tree__prog_data__determinism_components_3_p_0(Detism_167, &Var_211, &Var_219);
              succeeded = ((MR_Integer) 3 == Var_219);
              if (succeeded)
              {
                MR_Word FullInstMap0_223;

                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_213, &FullInstMap0_223);
                succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_223);
                if (succeeded)
                {
                  MR_Word AllVars_224;
                  MR_Word NondetLiveVars_225;

                  hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_223, &AllVars_224);
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_224, STATE_VARIABLE_ModeInfo_26_213, &NondetLiveVars_225);
                  check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_225, STATE_VARIABLE_ModeInfo_26_213, &STATE_VARIABLE_ModeInfo_36_189);
                }
                else
                  STATE_VARIABLE_ModeInfo_36_189 = STATE_VARIABLE_ModeInfo_26_213;
              }
              else
                STATE_VARIABLE_ModeInfo_36_189 = STATE_VARIABLE_ModeInfo_26_213;
            }
            *GoalExpr_8 = GoalExpr0_6;
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_36_189, &STATE_VARIABLE_ModeInfo_37_190);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_37_190, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Attributes_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word PredId_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Integer ProcId0_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Args_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
            MR_Word ExtraArgs_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))));
            MR_Word MaybeTraceRuntimeCond_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6))));
            MR_Word PragmaCode_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7))));
            MR_Word ArgVars_96;
            MR_Integer ProcId_97;
            MR_Word STATE_VARIABLE_ModeInfo_23_100;
            MR_Word Var_101;
            MR_Word STATE_VARIABLE_ModeInfo_25_102;
            MR_Word Var_103;
            MR_Word STATE_VARIABLE_ModeInfo_28_105;
            MR_Word STATE_VARIABLE_ModeInfo_29_106;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_100);
            {
              Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (PredId_90));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_103));
            }
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_101, STATE_VARIABLE_ModeInfo_23_100, &STATE_VARIABLE_ModeInfo_25_102);
            ArgVars_96 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[2]), Args_92);
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId_90, ProcId0_91, ArgVars_96, GoalInfo0_7, &ProcId_97, STATE_VARIABLE_ModeInfo_25_102, &STATE_VARIABLE_ModeInfo_28_105);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Attributes_89));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredId_90));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ProcId_97));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args_92));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs_93));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeTraceRuntimeCond_94));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (PragmaCode_95));
            }
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_28_105, &STATE_VARIABLE_ModeInfo_29_106);
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_29_106, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GoalType0_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
            MR_Word Goals_118;
            MR_Word STATE_VARIABLE_ModeInfo_17_123;
            MR_Word STATE_VARIABLE_ModeInfo_19_125;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "conj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_17_123);
            if ((Goals0_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_118 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_ModeInfo_19_125 = STATE_VARIABLE_ModeInfo_17_123;
            }
            else
            {
              MR_Word STATE_VARIABLE_ModeInfo_18_124;

              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_33, Goals0_34, STATE_VARIABLE_ModeInfo_17_123, &STATE_VARIABLE_ModeInfo_18_124);
              check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_33, Goals0_34, &Goals_118, STATE_VARIABLE_ModeInfo_18_124, &STATE_VARIABLE_ModeInfo_19_125);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (GoalType0_33));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_118));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "conj", STATE_VARIABLE_ModeInfo_19_125, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word Goals_134;
            MR_Word STATE_VARIABLE_ModeInfo_23_145;
            MR_Word STATE_VARIABLE_ModeInfo_31_153;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_23_145);
            if ((Goals0_80 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_135;

              Goals_134 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_135);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_135, STATE_VARIABLE_ModeInfo_23_145, &STATE_VARIABLE_ModeInfo_31_153);
            }
            else
            {
              MR_Word NonLocals_138;
              MR_Word Determinism_139;
              MR_Word InstMaps_141;
              MR_Word ArmInstMaps_142;
              MR_Word STATE_VARIABLE_ModeInfo_27_149;
              MR_Word STATE_VARIABLE_ModeInfo_28_150;
              MR_Word Var_157;
              MR_Word Var_140;

              NonLocals_138 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              Determinism_139 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
              parse_tree__prog_data__determinism_components_3_p_0(Determinism_139, &Var_140, &Var_157);
              succeeded = ((MR_Integer) 3 == Var_157);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_ModeInfo_25_147;
                MR_Word STATE_VARIABLE_ModeInfo_26_148;

                check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_138, STATE_VARIABLE_ModeInfo_23_145, &STATE_VARIABLE_ModeInfo_25_147);
                check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_25_147, &STATE_VARIABLE_ModeInfo_26_148);
                check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_138, STATE_VARIABLE_ModeInfo_26_148, &STATE_VARIABLE_ModeInfo_27_149);
              }
              else
                STATE_VARIABLE_ModeInfo_27_149 = STATE_VARIABLE_ModeInfo_23_145;
              check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_80, Determinism_139, NonLocals_138, &Goals_134, &InstMaps_141, STATE_VARIABLE_ModeInfo_27_149, &STATE_VARIABLE_ModeInfo_28_150);
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_134, InstMaps_141, &ArmInstMaps_142);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_138, ArmInstMaps_142, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_28_150, &STATE_VARIABLE_ModeInfo_31_153);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_134));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_31_153, STATE_VARIABLE_ModeInfo_59);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
            MR_Word CanFail0_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
            MR_Word Cases_477;
            MR_Word STATE_VARIABLE_ModeInfo_25_486;
            MR_Word STATE_VARIABLE_ModeInfo_29_490;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_25_486);
            if ((Cases0_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstMap_478;

              Cases_477 = (MR_Word) ((MR_Unsigned) 0U);
              hlds__instmap__init_unreachable_1_p_0(&InstMap_478);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_478, STATE_VARIABLE_ModeInfo_25_486, &STATE_VARIABLE_ModeInfo_29_490);
            }
            else
            {
              MR_Word NonLocals_481;
              MR_Word InstMaps_482;
              MR_Word ArmInstMaps_483;
              MR_Word STATE_VARIABLE_ModeInfo_26_487;

              NonLocals_481 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_37, Var0_35, &Cases_477, &InstMaps_482, STATE_VARIABLE_ModeInfo_25_486, &STATE_VARIABLE_ModeInfo_26_487);
              hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_477, InstMaps_482, &ArmInstMaps_483);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_481, ArmInstMaps_483, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_26_487, &STATE_VARIABLE_ModeInfo_29_490);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var0_35));
              MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_477));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_29_490, STATE_VARIABLE_ModeInfo_59);
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
                  MR_Word STATE_VARIABLE_ModeInfo_47_377;
                  MR_Word STATE_VARIABLE_ModeInfo_48_378;
                  MR_Word SubGoal_427;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_47_377);
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_427, STATE_VARIABLE_ModeInfo_47_377, &STATE_VARIABLE_ModeInfo_48_378);
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_378, STATE_VARIABLE_ModeInfo_59);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_427));
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
                      MR_Word STATE_VARIABLE_ModeInfo_47_377;
                      MR_Word STATE_VARIABLE_ModeInfo_48_378;
                      MR_Word SubGoal_427;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_47_377);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_427, STATE_VARIABLE_ModeInfo_47_377, &STATE_VARIABLE_ModeInfo_48_378);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_378, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_427));
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_352 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_43, (MR_Integer) 1))));
                      MR_Word FGT_353 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_43, (MR_Integer) 2))) & (MR_Integer) 3);

                      switch (FGT_353) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word LiveTermVar_354;
                            MR_Word STATE_VARIABLE_ModeInfo_63_393;
                            MR_Word STATE_VARIABLE_ModeInfo_66_396;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_63_393);
                            check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_393, TermVar_352, &LiveTermVar_354);
                            switch (LiveTermVar_354) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 1:
                                {
                                  *GoalExpr_8 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[1]));
                                  STATE_VARIABLE_ModeInfo_66_396 = STATE_VARIABLE_ModeInfo_63_393;
                                }
                                break;
                              case (MR_Integer) 0:
                                {
                                  MR_Word SubGoalInfo_356 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_81, (MR_Integer) 1))));
                                  MR_Word InstMapDelta_357;
                                  MR_Word TermVarInst_358;

                                  InstMapDelta_357 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_356);
                                  succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_357, TermVar_352, &TermVarInst_358);
                                  if (succeeded)
                                  {
                                    MR_Word InstMap_359;
                                    MR_Word InstMap0_414;

                                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_63_393, &InstMap0_414);
                                    hlds__instmap__instmap_set_var_4_p_0(TermVar_352, TermVarInst_358, InstMap0_414, &InstMap_359);
                                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_359, STATE_VARIABLE_ModeInfo_63_393, &STATE_VARIABLE_ModeInfo_66_396);
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
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_66_396, STATE_VARIABLE_ModeInfo_59);
                          }
                          break;
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                          {
                            MR_Word STATE_VARIABLE_ModeInfo_56_386;
                            MR_Word STATE_VARIABLE_ModeInfo_57_387;
                            MR_Word SubGoal_422;

                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_56_386);
                            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_422, STATE_VARIABLE_ModeInfo_56_386, &STATE_VARIABLE_ModeInfo_57_387);
                            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_57_387, STATE_VARIABLE_ModeInfo_59);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              *GoalExpr_8 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_422));
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
                      MR_Word InstMap0_349;
                      MR_Word NonLocals_350;
                      MR_Word SubGoal_351;
                      MR_Word STATE_VARIABLE_ModeInfo_74_404;
                      MR_Word STATE_VARIABLE_ModeInfo_76_406;
                      MR_Word STATE_VARIABLE_ModeInfo_77_407;
                      MR_Word STATE_VARIABLE_ModeInfo_79_409;
                      MR_Word STATE_VARIABLE_ModeInfo_80_410;

                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_74_404);
                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_74_404, &InstMap0_349);
                      NonLocals_350 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_350, STATE_VARIABLE_ModeInfo_74_404, &STATE_VARIABLE_ModeInfo_76_406);
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_351, STATE_VARIABLE_ModeInfo_76_406, &STATE_VARIABLE_ModeInfo_77_407);
                      check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_350, STATE_VARIABLE_ModeInfo_77_407, &STATE_VARIABLE_ModeInfo_79_409);
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_349, STATE_VARIABLE_ModeInfo_79_409, &STATE_VARIABLE_ModeInfo_80_410);
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_80_410, STATE_VARIABLE_ModeInfo_59);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *GoalExpr_8 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_43));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_351));
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
            MR_Word NonLocals_235;
            MR_Word CondVars_236;
            MR_Word ThenVars_237;
            MR_Word ElseVars_238;
            MR_Word InstMap0_239;
            MR_Word CondVarList_240;
            MR_Word CondLiveVars_241;
            MR_Word CondInfo0_243;
            MR_Word CondDeltaInstMap0_244;
            MR_Word ChangedVars_245;
            MR_Word Cond_246;
            MR_Word InstMapCond_247;
            MR_Word Then_248;
            MR_Word InstMapThen_249;
            MR_Word Else_250;
            MR_Word InstMapElse_251;
            MR_Word ArmInstMaps_252;
            MR_Word STATE_VARIABLE_ModeInfo_38_255;
            MR_Word STATE_VARIABLE_ModeInfo_40_257;
            MR_Word STATE_VARIABLE_ModeInfo_41_258;
            MR_Word STATE_VARIABLE_ModeInfo_42_259;
            MR_Word STATE_VARIABLE_ModeInfo_43_260;
            MR_Word STATE_VARIABLE_ModeInfo_44_261;
            MR_Word STATE_VARIABLE_ModeInfo_45_262;
            MR_Word STATE_VARIABLE_ModeInfo_46_263;
            MR_Word STATE_VARIABLE_ModeInfo_48_265;
            MR_Word STATE_VARIABLE_ModeInfo_49_266;
            MR_Word STATE_VARIABLE_ModeInfo_50_267;
            MR_Word STATE_VARIABLE_ModeInfo_51_268;
            MR_Word STATE_VARIABLE_ModeInfo_52_269;
            MR_Word Var_270;
            MR_Word Var_271;
            MR_Word Var_272;
            MR_Word Var_274;
            MR_Word STATE_VARIABLE_ModeInfo_60_277;

            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_255);
            NonLocals_235 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
            CondVars_236 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_39);
            ThenVars_237 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_40);
            ElseVars_238 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_41);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_255, &InstMap0_239);
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_235, STATE_VARIABLE_ModeInfo_38_255, &STATE_VARIABLE_ModeInfo_40_257);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_238, STATE_VARIABLE_ModeInfo_40_257, &STATE_VARIABLE_ModeInfo_41_258);
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_236, &CondVarList_240);
            check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_240, STATE_VARIABLE_ModeInfo_41_258, &CondLiveVars_241);
            CondInfo0_243 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_39, (MR_Integer) 1))));
            CondDeltaInstMap0_244 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_243);
            check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_241, CondDeltaInstMap0_244, STATE_VARIABLE_ModeInfo_41_258, &ChangedVars_245);
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_245, STATE_VARIABLE_ModeInfo_41_258, &STATE_VARIABLE_ModeInfo_42_259);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_238, STATE_VARIABLE_ModeInfo_42_259, &STATE_VARIABLE_ModeInfo_43_260);
            check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_237, STATE_VARIABLE_ModeInfo_43_260, &STATE_VARIABLE_ModeInfo_44_261);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_39, &Cond_246, STATE_VARIABLE_ModeInfo_44_261, &STATE_VARIABLE_ModeInfo_45_262);
            check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_237, STATE_VARIABLE_ModeInfo_45_262, &STATE_VARIABLE_ModeInfo_46_263);
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_235, STATE_VARIABLE_ModeInfo_46_263, &STATE_VARIABLE_ModeInfo_48_265);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_265, &InstMapCond_247);
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_247);
            if (succeeded)
            {
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_40, &Then_248, STATE_VARIABLE_ModeInfo_48_265, &STATE_VARIABLE_ModeInfo_49_266);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_266, &InstMapThen_249);
            }
            else
            {
              Then_248 = hlds__make_goal__true_goal_0_f_0();
              InstMapThen_249 = InstMapCond_247;
              STATE_VARIABLE_ModeInfo_49_266 = STATE_VARIABLE_ModeInfo_48_265;
            }
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_239, STATE_VARIABLE_ModeInfo_49_266, &STATE_VARIABLE_ModeInfo_50_267);
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_41, &Else_250, STATE_VARIABLE_ModeInfo_50_267, &STATE_VARIABLE_ModeInfo_51_268);
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_268, &InstMapElse_251);
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_239, STATE_VARIABLE_ModeInfo_51_268, &STATE_VARIABLE_ModeInfo_52_269);
            {
              Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (Else_250));
              MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_270, 0) = ((MR_Box) (Then_248));
              MR_hl_field(MR_mktag(1), Var_270, 1) = ((MR_Box) (Var_272));
            }
            {
              Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (InstMapElse_251));
              MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (InstMapThen_249));
              MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (Var_274));
            }
            hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_270, Var_271, &ArmInstMaps_252);
            hlds__instmap__instmap_merge_5_p_0(NonLocals_235, ArmInstMaps_252, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_269, &STATE_VARIABLE_ModeInfo_60_277);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *GoalExpr_8 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars0_38));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_246));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_248));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_250));
            }
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_277, STATE_VARIABLE_ModeInfo_59);
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
                  MR_Word MainGoal_440;
                  MR_Word OrElseGoals_441;
                  MR_Word ShortHand_451;
                  MR_Word STATE_VARIABLE_ModeInfo_38_454;
                  MR_Word STATE_VARIABLE_ModeInfo_48_464;

                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_58, &STATE_VARIABLE_ModeInfo_38_454);
                  if ((OrElseGoals0_50 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_49, &MainGoal_440, STATE_VARIABLE_ModeInfo_38_454, &STATE_VARIABLE_ModeInfo_48_464);
                    OrElseGoals_441 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  else
                  {
                    MR_Word NonLocals_444;
                    MR_Word Determinism_445;
                    MR_Word Goals0_447;
                    MR_Word Goals_448;
                    MR_Word InstMaps_449;
                    MR_Word ArmInstMaps_450;
                    MR_Word STATE_VARIABLE_ModeInfo_42_458;
                    MR_Word STATE_VARIABLE_ModeInfo_43_459;
                    MR_Word Var_468;
                    MR_Word Var_446;

                    NonLocals_444 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                    Determinism_445 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                    parse_tree__prog_data__determinism_components_3_p_0(Determinism_445, &Var_446, &Var_468);
                    succeeded = ((MR_Integer) 3 == Var_468);
                    if (succeeded)
                    {
                      MR_Word STATE_VARIABLE_ModeInfo_40_456;
                      MR_Word STATE_VARIABLE_ModeInfo_41_457;

                      check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_444, STATE_VARIABLE_ModeInfo_38_454, &STATE_VARIABLE_ModeInfo_40_456);
                      check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_40_456, &STATE_VARIABLE_ModeInfo_41_457);
                      check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_444, STATE_VARIABLE_ModeInfo_41_457, &STATE_VARIABLE_ModeInfo_42_458);
                    }
                    else
                      STATE_VARIABLE_ModeInfo_42_458 = STATE_VARIABLE_ModeInfo_38_454;
                    {
                      Goals0_447 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Goals0_447, 0) = ((MR_Box) (MainGoal0_49));
                      MR_hl_field(MR_mktag(1), Goals0_447, 1) = ((MR_Box) (OrElseGoals0_50));
                    }
                    check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_447, Determinism_445, NonLocals_444, &Goals_448, &InstMaps_449, STATE_VARIABLE_ModeInfo_42_458, &STATE_VARIABLE_ModeInfo_43_459);
                    if ((Goals_448 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                        return;
                      }
                    else
                    {
                      MainGoal_440 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_448, (MR_Integer) 0))));
                      OrElseGoals_441 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_448, (MR_Integer) 1))));
                    }
                    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_448, InstMaps_449, &ArmInstMaps_450);
                    hlds__instmap__instmap_merge_5_p_0(NonLocals_444, ArmInstMaps_450, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_43_459, &STATE_VARIABLE_ModeInfo_48_464);
                  }
                  {
                    ShortHand_451 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 0) = (MR_Box) ((MR_Unsigned) (GoalType_45));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 1) = ((MR_Box) (Outer_46));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 2) = ((MR_Box) (Inner_47));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 3) = ((MR_Box) (MaybeOutputVars_48));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 4) = ((MR_Box) (MainGoal_440));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 5) = ((MR_Box) (OrElseGoals_441));
                    MR_hl_field(MR_mktag(1), ShortHand_451, 6) = ((MR_Box) (OrElseInners0_51));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *GoalExpr_8 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_451));
                  }
                  check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_48_464, STATE_VARIABLE_ModeInfo_59);
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
    MR_Word InstMap0_25;
    MR_Word NondetLiveVars0_26;
    MR_Word Detism_27;
    MR_Word GoalExpr_29;
    MR_Word GoalInfo_30;
    MR_Word STATE_VARIABLE_ModeInfo_20_33;
    MR_Word STATE_VARIABLE_ModeInfo_21_34;
    MR_Word STATE_VARIABLE_ModeInfo_22_35;
    MR_Word Var_38;
    MR_Word Var_28;

    check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InDuplForSwitch_11);
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_17_17);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &InstMap0_25);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_17_17, &NondetLiveVars0_26);
    Detism_27 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_27, &Var_28, &Var_38);
    succeeded = ((MR_Integer) 3 == Var_38);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_33 = STATE_VARIABLE_ModeInfo_17_17;
    else
    {
      MR_Word Var_32;

      Var_32 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_32, STATE_VARIABLE_ModeInfo_17_17, &STATE_VARIABLE_ModeInfo_20_33);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_29, STATE_VARIABLE_ModeInfo_20_33, &STATE_VARIABLE_ModeInfo_21_34);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_26, STATE_VARIABLE_ModeInfo_21_34, &STATE_VARIABLE_ModeInfo_22_35);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_25, GoalExpr_29, GoalInfo0_9, &GoalInfo_30, STATE_VARIABLE_ModeInfo_22_35, &STATE_VARIABLE_ModeInfo_18_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_30));
    }
    check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_11, STATE_VARIABLE_ModeInfo_18_18, STATE_VARIABLE_ModeInfo_13);
  }
  else
  {
    MR_Word InstMap0_45;
    MR_Word NondetLiveVars0_46;
    MR_Word Detism_47;
    MR_Word GoalExpr_49;
    MR_Word GoalInfo_50;
    MR_Word STATE_VARIABLE_ModeInfo_20_53;
    MR_Word STATE_VARIABLE_ModeInfo_21_54;
    MR_Word STATE_VARIABLE_ModeInfo_22_55;
    MR_Word Var_58;
    MR_Word Var_48;

    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &InstMap0_45);
    check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_14_14, &NondetLiveVars0_46);
    Detism_47 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_47, &Var_48, &Var_58);
    succeeded = ((MR_Integer) 3 == Var_58);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_20_53 = STATE_VARIABLE_ModeInfo_14_14;
    else
    {
      MR_Word Var_52;

      Var_52 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_52, STATE_VARIABLE_ModeInfo_14_14, &STATE_VARIABLE_ModeInfo_20_53);
    }
    check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_49, STATE_VARIABLE_ModeInfo_20_53, &STATE_VARIABLE_ModeInfo_21_54);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_46, STATE_VARIABLE_ModeInfo_21_54, &STATE_VARIABLE_ModeInfo_22_55);
    check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_45, GoalExpr_49, GoalInfo0_9, &GoalInfo_50, STATE_VARIABLE_ModeInfo_22_55, STATE_VARIABLE_ModeInfo_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_49));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_50));
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
    MR_Word FullInstMap0_23;

    check_hlds__mode_info__mode_info_add_live_vars_3_p_0(DisjNonLocals_8, STATE_VARIABLE_ModeInfo_0_17, &STATE_VARIABLE_ModeInfo_19_19);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_19_19, &FullInstMap0_23);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_23);
    if (succeeded)
    {
      MR_Word AllVars_24;
      MR_Word NondetLiveVars_25;

      hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_23, &AllVars_24);
      check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_24, STATE_VARIABLE_ModeInfo_19_19, &NondetLiveVars_25);
      check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_25, STATE_VARIABLE_ModeInfo_19_19, &STATE_VARIABLE_ModeInfo_20_20);
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
      parse_tree__vartypes__lookup_var_type_3_p_0(VarTypes_15, Var_7, &Type_16);
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
      MR_Word InstMap0_17;
      MR_Word ModuleInfo0_18;
      MR_Word Inst0_20;
      MR_Word TypeInfo_25_34;
      MR_Word Vars_19;
      MR_Word Inst1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModeInfo_0_2;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &InstMap0_17);
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_0_2, &ModuleInfo0_18);
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_17);
      if (succeeded)
      {
        hlds__instmap__instmap_vars_list_2_p_0(InstMap0_17, &Vars_19);
        TypeInfo_25_34 = (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_25_34, ((MR_Box) (Var_7)), Vars_19);
        if (succeeded)
        {
          hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_17, Var_7, &Inst0_20);
          check_hlds__inst_lookup__inst_expand_3_p_0(ModuleInfo0_18, Inst0_20, &Inst1_21);
          switch (MR_tag((MR_Word) Inst1_21)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst1_21, (MR_Integer) 0))) & (MR_Integer) 7);

                succeeded = (Var_29 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst1_21, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_21, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_30 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst1_21, (MR_Integer) 1))) & (MR_Integer) 7);

                    succeeded = (Var_31 == (MR_Integer) 1);
                  }
                  break;
              }
              break;
          }
        }
      }
      if (succeeded)
      {
        MR_Word Inst_26;
        MR_Word ModuleInfo_27;
        MR_Word InstMap_28;
        MR_Word STATE_VARIABLE_ModeInfo_23_32;

        check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_20, &Inst_26, ModuleInfo0_18, &ModuleInfo_27);
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(ModuleInfo_27, STATE_VARIABLE_ModeInfo_0_2, &STATE_VARIABLE_ModeInfo_23_32);
        hlds__instmap__instmap_set_var_4_p_0(Var_7, Inst_26, InstMap0_17, &InstMap_28);
        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_28, STATE_VARIABLE_ModeInfo_23_32, &STATE_VARIABLE_ModeInfo_12_12);
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
