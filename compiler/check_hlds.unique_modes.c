/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2019-08-23
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__945__1_2_p_0(
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
  MR_Word STATE_VARIABLE_ModeInfo_0_55,
  MR_Word * STATE_VARIABLE_ModeInfo_56);

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
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[0])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



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
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__945__1_2_p_0(
  MR_Word LambdaHeadVar__1_20,
  MR_Word * LambdaHeadVar__2_21)
{
  {
    MR_bool succeeded;
    MR_Integer Multiplicity_9;

    *LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0))));
    Multiplicity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));
    succeeded = (Multiplicity_9 > (MR_Integer) 1);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_21;

    succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__945__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_21);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
      check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(HeadVar__2_2, InstMap0_22, InstMap_16, Goal1_24, &Goal_25);
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * GoalExpr_8,
  MR_Word STATE_VARIABLE_ModeInfo_0_55,
  MR_Word * STATE_VARIABLE_ModeInfo_56)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_39 = (MR_Word) ((MR_Word) (GoalExpr0_6));
          MR_Word InstMap0_291;
          MR_Word NonLocals_292;
          MR_Word NonLocalsList_293;
          MR_Word LiveNonLocals_294;
          MR_Word LiveVars0_295;
          MR_Word SubGoal_296;
          MR_Word STATE_VARIABLE_ModeInfo_20_299;
          MR_Word STATE_VARIABLE_ModeInfo_21_300;
          MR_Word Var_301;
          MR_Word STATE_VARIABLE_ModeInfo_23_302;
          MR_Word STATE_VARIABLE_ModeInfo_25_304;
          MR_Word STATE_VARIABLE_ModeInfo_26_305;
          MR_Word STATE_VARIABLE_ModeInfo_28_307;
          MR_Word STATE_VARIABLE_ModeInfo_29_308;
          MR_Word STATE_VARIABLE_ModeInfo_30_309;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_299);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_299, &InstMap0_291);
          NonLocals_292 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_292, &NonLocalsList_293);
          check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_293, STATE_VARIABLE_ModeInfo_20_299, &LiveNonLocals_294);
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_294, STATE_VARIABLE_ModeInfo_20_299, &STATE_VARIABLE_ModeInfo_21_300);
          check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_300, &LiveVars0_295);
          Var_301 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_301, STATE_VARIABLE_ModeInfo_21_300, &STATE_VARIABLE_ModeInfo_23_302);
          check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_292, STATE_VARIABLE_ModeInfo_23_302, &STATE_VARIABLE_ModeInfo_25_304);
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_39, &SubGoal_296, STATE_VARIABLE_ModeInfo_25_304, &STATE_VARIABLE_ModeInfo_26_305);
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 0U), NonLocals_292, STATE_VARIABLE_ModeInfo_26_305, &STATE_VARIABLE_ModeInfo_28_307);
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_295, STATE_VARIABLE_ModeInfo_28_307, &STATE_VARIABLE_ModeInfo_29_308);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_291, STATE_VARIABLE_ModeInfo_29_308, &STATE_VARIABLE_ModeInfo_30_309);
          *GoalExpr_8 = (MR_Word) ((MR_Word) (SubGoal_296));
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_309, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0))));
          MR_Word RHS0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1))));
          MR_Word Unification0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3))));
          MR_Word UnifyContext0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4))));
          MR_Word STATE_VARIABLE_ModeInfo_20_508;
          MR_Word Var_509;
          MR_Word STATE_VARIABLE_ModeInfo_22_510;
          MR_Word STATE_VARIABLE_ModeInfo_23_511;
          MR_Word STATE_VARIABLE_ModeInfo_24_512;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_508);
          {
            Var_509 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_509, 0) = ((MR_Box) (UnifyContext0_14));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_509, STATE_VARIABLE_ModeInfo_20_508, &STATE_VARIABLE_ModeInfo_22_510);
          check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext0_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_22_510, &STATE_VARIABLE_ModeInfo_23_511);
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_23_511, &STATE_VARIABLE_ModeInfo_24_512);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_24_512, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
          MR_Integer ProcId0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
          MR_Word ArgVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2))));
          MR_Word Builtin0_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word MaybeUnifyContext0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4))));
          MR_Word SymName0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5))));
          MR_String PredNameString_326;
          MR_String CallString_327;
          MR_Integer ProcId_328;
          MR_Word STATE_VARIABLE_ModeInfo_27_331;
          MR_Word Var_332;
          MR_Word STATE_VARIABLE_ModeInfo_29_333;
          MR_Word Var_334;
          MR_Word STATE_VARIABLE_ModeInfo_31_335;
          MR_Word STATE_VARIABLE_ModeInfo_32_336;

          PredNameString_326 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName0_20);
          mercury__string__append_3_p_2((MR_String) "call ", PredNameString_326, &CallString_327);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_327, STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_27_331);
          {
            Var_334 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_334, 0) = ((MR_Box) (PredId0_15));
          }
          {
            Var_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_332, 0) = ((MR_Box) (Var_334));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_332, STATE_VARIABLE_ModeInfo_27_331, &STATE_VARIABLE_ModeInfo_29_333);
          check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_15, ProcId0_16, ArgVars0_17, GoalInfo0_7, &ProcId_328, STATE_VARIABLE_ModeInfo_29_333, &STATE_VARIABLE_ModeInfo_31_335);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId0_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_328));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars0_17));
            MR_hl_field(MR_mktag(2), base, 3) = (MR_Box) ((MR_Unsigned) (Builtin0_18));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext0_19));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName0_20));
          }
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_31_335, &STATE_VARIABLE_ModeInfo_32_336);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_32_336, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word ArgModes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Detism0_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))) & (MR_Integer) 7);
              MR_Word ArgVars0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word GenericCallId_171;
              MR_Word CallId_172;
              MR_Integer ArgOffset_179;
              MR_Word STATE_VARIABLE_ModeInfo_35_188;
              MR_Word Var_189;
              MR_Word STATE_VARIABLE_ModeInfo_37_190;
              MR_Word STATE_VARIABLE_ModeInfo_39_192;
              MR_Word STATE_VARIABLE_ModeInfo_40_193;
              MR_Word ModuleInfo_206;
              MR_Word InitialInsts_207;
              MR_Word InstVarSub_208;
              MR_Word FinalInsts0_209;
              MR_Word FinalInsts_210;
              MR_Word NewArgVars_211;
              MR_Word ExtraGoals_212;
              MR_Word STATE_VARIABLE_ModeInfo_25_215;
              MR_Word STATE_VARIABLE_ModeInfo_26_216;
              MR_Word Var_197;
              MR_Word Var_173;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_35_188);
              hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall0_21, &GenericCallId_171);
              {
                CallId_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_172, 0) = ((MR_Box) (GenericCallId_171));
              }
              {
                Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (CallId_172));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_189, STATE_VARIABLE_ModeInfo_35_188, &STATE_VARIABLE_ModeInfo_37_190);
              switch (MR_tag((MR_Word) GenericCall0_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ArgOffset_179 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  ArgOffset_179 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  ArgOffset_179 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  ArgOffset_179 = (MR_Integer) 0;
                  break;
              }
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_37_190, &ModuleInfo_206);
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_206, ArgModes0_22, &InitialInsts_207);
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_77, InitialInsts_207, ArgOffset_179, &InstVarSub_208, STATE_VARIABLE_ModeInfo_37_190, &STATE_VARIABLE_ModeInfo_25_215);
              check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_206, ArgModes0_22, &FinalInsts0_209);
              parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_208, FinalInsts0_209, &FinalInsts_210);
              check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_77, InitialInsts_207, FinalInsts_210, ArgOffset_179, &NewArgVars_211, &ExtraGoals_212, STATE_VARIABLE_ModeInfo_25_215, &STATE_VARIABLE_ModeInfo_26_216);
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_211)), ((MR_Box) (ArgVars0_77)));
              if (succeeded)
                succeeded = (ExtraGoals_212 == (MR_Word) ((MR_Unsigned) 0U));
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                  return;
                }
              }
              parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_173, &Var_197);
              succeeded = ((MR_Integer) 0 == Var_197);
              if (succeeded)
              {
                MR_Word InstMap_213;

                hlds__instmap__init_unreachable_1_p_0(&InstMap_213);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_213, STATE_VARIABLE_ModeInfo_26_216, &STATE_VARIABLE_ModeInfo_39_192);
              }
              else
              {
                MR_Word Var_222;
                MR_Word Var_214;

                parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_214, &Var_222);
                succeeded = ((MR_Integer) 3 == Var_222);
                if (succeeded)
                {
                  MR_Word FullInstMap0_226;

                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_216, &FullInstMap0_226);
                  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_226);
                  if (succeeded)
                  {
                    MR_Word AllVars_227;
                    MR_Word NondetLiveVars_228;

                    hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_226, &AllVars_227);
                    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_227, STATE_VARIABLE_ModeInfo_26_216, &NondetLiveVars_228);
                    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_228, STATE_VARIABLE_ModeInfo_26_216, &STATE_VARIABLE_ModeInfo_39_192);
                  }
                  else
                    STATE_VARIABLE_ModeInfo_39_192 = STATE_VARIABLE_ModeInfo_26_216;
                }
                else
                  STATE_VARIABLE_ModeInfo_39_192 = STATE_VARIABLE_ModeInfo_26_216;
              }
              *GoalExpr_8 = GoalExpr0_6;
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_39_192, &STATE_VARIABLE_ModeInfo_40_193);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_40_193, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
              MR_Word ExtraArgs0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))));
              MR_Word MaybeTraceRuntimeCond0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6))));
              MR_Word PragmaCode0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7))));
              MR_Word PredId0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Integer ProcId0_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word ArgVars_97;
              MR_Integer ProcId_98;
              MR_Word STATE_VARIABLE_ModeInfo_28_101;
              MR_Word Var_102;
              MR_Word STATE_VARIABLE_ModeInfo_30_103;
              MR_Word Var_104;
              MR_Word STATE_VARIABLE_ModeInfo_33_106;
              MR_Word STATE_VARIABLE_ModeInfo_34_107;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_28_101);
              {
                Var_104 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (PredId0_78));
              }
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_104));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_102, STATE_VARIABLE_ModeInfo_28_101, &STATE_VARIABLE_ModeInfo_30_103);
              ArgVars_97 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[1]), Args0_26);
              check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_78, ProcId0_79, ArgVars_97, GoalInfo0_7, &ProcId_98, STATE_VARIABLE_ModeInfo_30_103, &STATE_VARIABLE_ModeInfo_33_106);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Attributes0_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredId0_78));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ProcId_98));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args0_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs0_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeTraceRuntimeCond0_28));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (PragmaCode0_29));
              }
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_33_106, &STATE_VARIABLE_ModeInfo_34_107);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_34_107, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GoalType0_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word Goals_121;
              MR_Word STATE_VARIABLE_ModeInfo_17_126;
              MR_Word STATE_VARIABLE_ModeInfo_19_128;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_17_126);
              if ((Goals0_31 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                Goals_121 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_ModeInfo_19_128 = STATE_VARIABLE_ModeInfo_17_126;
              }
              else
              {
                MR_Word STATE_VARIABLE_ModeInfo_18_127;

                check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_30, Goals0_31, STATE_VARIABLE_ModeInfo_17_126, &STATE_VARIABLE_ModeInfo_18_127);
                check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_30, Goals0_31, &Goals_121, STATE_VARIABLE_ModeInfo_18_127, &STATE_VARIABLE_ModeInfo_19_128);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (GoalType0_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_121));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_19_128, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word Goals_138;
              MR_Word STATE_VARIABLE_ModeInfo_23_149;
              MR_Word STATE_VARIABLE_ModeInfo_31_157;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_23_149);
              if ((Goals0_80 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstMap_139;

                Goals_138 = (MR_Word) ((MR_Unsigned) 0U);
                hlds__instmap__init_unreachable_1_p_0(&InstMap_139);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_139, STATE_VARIABLE_ModeInfo_23_149, &STATE_VARIABLE_ModeInfo_31_157);
              }
              else
              {
                MR_Word NonLocals_142;
                MR_Word Determinism_143;
                MR_Word InstMaps_145;
                MR_Word ArmInstMaps_146;
                MR_Word STATE_VARIABLE_ModeInfo_27_153;
                MR_Word STATE_VARIABLE_ModeInfo_28_154;
                MR_Word Var_161;
                MR_Word Var_144;

                NonLocals_142 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                Determinism_143 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                parse_tree__prog_data__determinism_components_3_p_0(Determinism_143, &Var_144, &Var_161);
                succeeded = ((MR_Integer) 3 == Var_161);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_ModeInfo_25_151;
                  MR_Word STATE_VARIABLE_ModeInfo_26_152;

                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_142, STATE_VARIABLE_ModeInfo_23_149, &STATE_VARIABLE_ModeInfo_25_151);
                  check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_25_151, &STATE_VARIABLE_ModeInfo_26_152);
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_142, STATE_VARIABLE_ModeInfo_26_152, &STATE_VARIABLE_ModeInfo_27_153);
                }
                else
                  STATE_VARIABLE_ModeInfo_27_153 = STATE_VARIABLE_ModeInfo_23_149;
                check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_80, Determinism_143, NonLocals_142, &Goals_138, &InstMaps_145, STATE_VARIABLE_ModeInfo_27_153, &STATE_VARIABLE_ModeInfo_28_154);
                hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_138, InstMaps_145, &ArmInstMaps_146);
                hlds__instmap__instmap_merge_5_p_0(NonLocals_142, ArmInstMaps_146, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_28_154, &STATE_VARIABLE_ModeInfo_31_157);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_138));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_31_157, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word CanFail0_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Cases_480;
              MR_Word STATE_VARIABLE_ModeInfo_25_489;
              MR_Word STATE_VARIABLE_ModeInfo_29_493;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_25_489);
              if ((Cases0_34 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word InstMap_481;

                Cases_480 = (MR_Word) ((MR_Unsigned) 0U);
                hlds__instmap__init_unreachable_1_p_0(&InstMap_481);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_481, STATE_VARIABLE_ModeInfo_25_489, &STATE_VARIABLE_ModeInfo_29_493);
              }
              else
              {
                MR_Word NonLocals_484;
                MR_Word InstMaps_485;
                MR_Word ArmInstMaps_486;
                MR_Word STATE_VARIABLE_ModeInfo_26_490;

                NonLocals_484 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_34, Var0_32, &Cases_480, &InstMaps_485, STATE_VARIABLE_ModeInfo_25_489, &STATE_VARIABLE_ModeInfo_26_490);
                hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_480, InstMaps_485, &ArmInstMaps_486);
                hlds__instmap__instmap_merge_5_p_0(NonLocals_484, ArmInstMaps_486, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_26_490, &STATE_VARIABLE_ModeInfo_29_493);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var0_32));
                MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) (CanFail0_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_480));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_29_493, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word SubGoal0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));

              switch (MR_tag((MR_Word) Reason0_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_ModeInfo_47_380;
                    MR_Word STATE_VARIABLE_ModeInfo_48_381;
                    MR_Word SubGoal_430;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_380);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_430, STATE_VARIABLE_ModeInfo_47_380, &STATE_VARIABLE_ModeInfo_48_381);
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_381, STATE_VARIABLE_ModeInfo_56);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_430));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      {
                        MR_Word STATE_VARIABLE_ModeInfo_47_380;
                        MR_Word STATE_VARIABLE_ModeInfo_48_381;
                        MR_Word SubGoal_430;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_380);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_430, STATE_VARIABLE_ModeInfo_47_380, &STATE_VARIABLE_ModeInfo_48_381);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_381, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_430));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_355 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 1))));
                        MR_Word FGT_356 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 2))) & (MR_Integer) 3);

                        switch (FGT_356) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word LiveTermVar_357;
                              MR_Word STATE_VARIABLE_ModeInfo_63_396;
                              MR_Word STATE_VARIABLE_ModeInfo_66_399;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_63_396);
                              check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_396, TermVar_355, &LiveTermVar_357);
                              switch (LiveTermVar_357) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    *GoalExpr_8 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[2]));
                                    STATE_VARIABLE_ModeInfo_66_399 = STATE_VARIABLE_ModeInfo_63_396;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word SubGoalInfo_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_81, (MR_Integer) 1))));
                                    MR_Word InstMapDelta_360;
                                    MR_Word TermVarInst_361;

                                    InstMapDelta_360 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_359);
                                    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_360, TermVar_355, &TermVarInst_361);
                                    if (succeeded)
                                    {
                                      MR_Word InstMap_362;
                                      MR_Word InstMap0_417;

                                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_63_396, &InstMap0_417);
                                      hlds__instmap__instmap_set_var_4_p_0(TermVar_355, TermVarInst_361, InstMap0_417, &InstMap_362);
                                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_362, STATE_VARIABLE_ModeInfo_63_396, &STATE_VARIABLE_ModeInfo_66_399);
                                    }
                                    else
                                    {
                                      {
                                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
                                        return;
                                      }
                                    }
                                    *GoalExpr_8 = GoalExpr0_6;
                                  }
                                  break;
                              }
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_66_399, STATE_VARIABLE_ModeInfo_56);
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word STATE_VARIABLE_ModeInfo_56_389;
                              MR_Word STATE_VARIABLE_ModeInfo_57_390;
                              MR_Word SubGoal_425;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_56_389);
                              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_425, STATE_VARIABLE_ModeInfo_56_389, &STATE_VARIABLE_ModeInfo_57_390);
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_57_390, STATE_VARIABLE_ModeInfo_56);
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_8 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_425));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word InstMap0_352;
                        MR_Word NonLocals_353;
                        MR_Word SubGoal_354;
                        MR_Word STATE_VARIABLE_ModeInfo_74_407;
                        MR_Word STATE_VARIABLE_ModeInfo_76_409;
                        MR_Word STATE_VARIABLE_ModeInfo_77_410;
                        MR_Word STATE_VARIABLE_ModeInfo_79_412;
                        MR_Word STATE_VARIABLE_ModeInfo_80_413;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_74_407);
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_74_407, &InstMap0_352);
                        NonLocals_353 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_353, STATE_VARIABLE_ModeInfo_74_407, &STATE_VARIABLE_ModeInfo_76_409);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_354, STATE_VARIABLE_ModeInfo_76_409, &STATE_VARIABLE_ModeInfo_77_410);
                        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 8U), NonLocals_353, STATE_VARIABLE_ModeInfo_77_410, &STATE_VARIABLE_ModeInfo_79_412);
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_352, STATE_VARIABLE_ModeInfo_79_412, &STATE_VARIABLE_ModeInfo_80_413);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_80_413, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_354));
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
              MR_Word Vars0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word Cond0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word Then0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Else0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4))));
              MR_Word NonLocals_238;
              MR_Word CondVars_239;
              MR_Word ThenVars_240;
              MR_Word ElseVars_241;
              MR_Word InstMap0_242;
              MR_Word CondVarList_243;
              MR_Word CondLiveVars_244;
              MR_Word CondInfo0_246;
              MR_Word CondDeltaInstMap0_247;
              MR_Word ChangedVars_248;
              MR_Word Cond_249;
              MR_Word InstMapCond_250;
              MR_Word Then_251;
              MR_Word InstMapThen_252;
              MR_Word Else_253;
              MR_Word InstMapElse_254;
              MR_Word ArmInstMaps_255;
              MR_Word STATE_VARIABLE_ModeInfo_38_258;
              MR_Word STATE_VARIABLE_ModeInfo_40_260;
              MR_Word STATE_VARIABLE_ModeInfo_41_261;
              MR_Word STATE_VARIABLE_ModeInfo_42_262;
              MR_Word STATE_VARIABLE_ModeInfo_43_263;
              MR_Word STATE_VARIABLE_ModeInfo_44_264;
              MR_Word STATE_VARIABLE_ModeInfo_45_265;
              MR_Word STATE_VARIABLE_ModeInfo_46_266;
              MR_Word STATE_VARIABLE_ModeInfo_48_268;
              MR_Word STATE_VARIABLE_ModeInfo_49_269;
              MR_Word STATE_VARIABLE_ModeInfo_50_270;
              MR_Word STATE_VARIABLE_ModeInfo_51_271;
              MR_Word STATE_VARIABLE_ModeInfo_52_272;
              MR_Word Var_273;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_277;
              MR_Word STATE_VARIABLE_ModeInfo_60_280;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_258);
              NonLocals_238 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              CondVars_239 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_36);
              ThenVars_240 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_37);
              ElseVars_241 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_38);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_258, &InstMap0_242);
              check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_238, STATE_VARIABLE_ModeInfo_38_258, &STATE_VARIABLE_ModeInfo_40_260);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_241, STATE_VARIABLE_ModeInfo_40_260, &STATE_VARIABLE_ModeInfo_41_261);
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_239, &CondVarList_243);
              check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_243, STATE_VARIABLE_ModeInfo_41_261, &CondLiveVars_244);
              CondInfo0_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_36, (MR_Integer) 1))));
              CondDeltaInstMap0_247 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_246);
              check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_244, CondDeltaInstMap0_247, STATE_VARIABLE_ModeInfo_41_261, &ChangedVars_248);
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_248, STATE_VARIABLE_ModeInfo_41_261, &STATE_VARIABLE_ModeInfo_42_262);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_241, STATE_VARIABLE_ModeInfo_42_262, &STATE_VARIABLE_ModeInfo_43_263);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_240, STATE_VARIABLE_ModeInfo_43_263, &STATE_VARIABLE_ModeInfo_44_264);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_36, &Cond_249, STATE_VARIABLE_ModeInfo_44_264, &STATE_VARIABLE_ModeInfo_45_265);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_240, STATE_VARIABLE_ModeInfo_45_265, &STATE_VARIABLE_ModeInfo_46_266);
              check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Unsigned) 4U), NonLocals_238, STATE_VARIABLE_ModeInfo_46_266, &STATE_VARIABLE_ModeInfo_48_268);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_268, &InstMapCond_250);
              succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_250);
              if (succeeded)
              {
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_37, &Then_251, STATE_VARIABLE_ModeInfo_48_268, &STATE_VARIABLE_ModeInfo_49_269);
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_269, &InstMapThen_252);
              }
              else
              {
                Then_251 = hlds__make_goal__true_goal_0_f_0();
                InstMapThen_252 = InstMapCond_250;
                STATE_VARIABLE_ModeInfo_49_269 = STATE_VARIABLE_ModeInfo_48_268;
              }
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_242, STATE_VARIABLE_ModeInfo_49_269, &STATE_VARIABLE_ModeInfo_50_270);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_38, &Else_253, STATE_VARIABLE_ModeInfo_50_270, &STATE_VARIABLE_ModeInfo_51_271);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_271, &InstMapElse_254);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_242, STATE_VARIABLE_ModeInfo_51_271, &STATE_VARIABLE_ModeInfo_52_272);
              {
                Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Else_253));
                MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (Then_251));
                MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_275));
              }
              {
                Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (InstMapElse_254));
                MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (InstMapThen_252));
                MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (Var_277));
              }
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_273, Var_274, &ArmInstMaps_255);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_238, ArmInstMaps_255, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_272, &STATE_VARIABLE_ModeInfo_60_280);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars0_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_249));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_251));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_253));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_280, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand0_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 1))));
                    MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 3))));
                    MR_Word MainGoal0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 5))));
                    MR_Word OrElseInners0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 6))));
                    MR_Word MainGoal_443;
                    MR_Word OrElseGoals_444;
                    MR_Word ShortHand_454;
                    MR_Word STATE_VARIABLE_ModeInfo_38_457;
                    MR_Word STATE_VARIABLE_ModeInfo_48_467;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_457);
                    if ((OrElseGoals0_47 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_46, &MainGoal_443, STATE_VARIABLE_ModeInfo_38_457, &STATE_VARIABLE_ModeInfo_48_467);
                      OrElseGoals_444 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    else
                    {
                      MR_Word NonLocals_447;
                      MR_Word Determinism_448;
                      MR_Word Goals0_450;
                      MR_Word Goals_451;
                      MR_Word InstMaps_452;
                      MR_Word ArmInstMaps_453;
                      MR_Word STATE_VARIABLE_ModeInfo_42_461;
                      MR_Word STATE_VARIABLE_ModeInfo_43_462;
                      MR_Word Var_471;
                      MR_Word Var_449;

                      NonLocals_447 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      Determinism_448 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                      parse_tree__prog_data__determinism_components_3_p_0(Determinism_448, &Var_449, &Var_471);
                      succeeded = ((MR_Integer) 3 == Var_471);
                      if (succeeded)
                      {
                        MR_Word STATE_VARIABLE_ModeInfo_40_459;
                        MR_Word STATE_VARIABLE_ModeInfo_41_460;

                        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_447, STATE_VARIABLE_ModeInfo_38_457, &STATE_VARIABLE_ModeInfo_40_459);
                        check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_40_459, &STATE_VARIABLE_ModeInfo_41_460);
                        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_447, STATE_VARIABLE_ModeInfo_41_460, &STATE_VARIABLE_ModeInfo_42_461);
                      }
                      else
                        STATE_VARIABLE_ModeInfo_42_461 = STATE_VARIABLE_ModeInfo_38_457;
                      {
                        Goals0_450 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals0_450, 0) = ((MR_Box) (MainGoal0_46));
                        MR_hl_field(MR_mktag(1), Goals0_450, 1) = ((MR_Box) (OrElseGoals0_47));
                      }
                      check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_450, Determinism_448, NonLocals_447, &Goals_451, &InstMaps_452, STATE_VARIABLE_ModeInfo_42_461, &STATE_VARIABLE_ModeInfo_43_462);
                      if ((Goals_451 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                          return;
                        }
                      }
                      else
                      {
                        MainGoal_443 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_451, (MR_Integer) 0))));
                        OrElseGoals_444 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_451, (MR_Integer) 1))));
                      }
                      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_451, InstMaps_452, &ArmInstMaps_453);
                      hlds__instmap__instmap_merge_5_p_0(NonLocals_447, ArmInstMaps_453, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_43_462, &STATE_VARIABLE_ModeInfo_48_467);
                    }
                    {
                      ShortHand_454 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 0) = (MR_Box) ((MR_Unsigned) (GoalType_42));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 1) = ((MR_Box) (Outer_43));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 2) = ((MR_Box) (Inner_44));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 3) = ((MR_Box) (MaybeOutputVars_45));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 4) = ((MR_Box) (MainGoal_443));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 5) = ((MR_Box) (OrElseGoals_444));
                      MR_hl_field(MR_mktag(1), ShortHand_454, 6) = ((MR_Box) (OrElseInners0_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_454));
                    }
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_48_467, STATE_VARIABLE_ModeInfo_56);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 0))));
                    MR_Word ResultVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 1))));
                    MR_Word SubGoal_51;
                    MR_Word ShortHand_52;
                    MR_Word STATE_VARIABLE_ModeInfo_61_61;
                    MR_Word STATE_VARIABLE_ModeInfo_62_62;
                    MR_Word SubGoal0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 2))));

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_61_61);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_51, STATE_VARIABLE_ModeInfo_61_61, &STATE_VARIABLE_ModeInfo_62_62);
                    {
                      ShortHand_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 0) = ((MR_Box) (MaybeIO_49));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 1) = ((MR_Box) (ResultVar_50));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 2) = ((MR_Box) (SubGoal_51));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_52));
                    }
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_62_62, STATE_VARIABLE_ModeInfo_56);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * STATE_VARIABLE_ModeInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));
    MR_Word Context_10;
    MR_Word EmptyContext_11;
    MR_Word STATE_VARIABLE_ModeInfo_15_15;

    Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_9);
    mercury__term__context_init_1_p_0(&EmptyContext_11);
    succeeded = mercury__term____Unify____context_0_0(Context_10, EmptyContext_11);
    if (succeeded)
      STATE_VARIABLE_ModeInfo_15_15 = STATE_VARIABLE_ModeInfo_0_13;
    else
      check_hlds__mode_info__mode_info_set_context_3_p_0(Context_10, STATE_VARIABLE_ModeInfo_0_13, &STATE_VARIABLE_ModeInfo_15_15);
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_9, (MR_Integer) 16);
    if (succeeded)
    {
      MR_Word InDuplForSwitch_12;
      MR_Word STATE_VARIABLE_ModeInfo_18_18;
      MR_Word STATE_VARIABLE_ModeInfo_19_19;
      MR_Word InstMap0_29;
      MR_Word NondetLiveVars0_30;
      MR_Word Detism_31;
      MR_Word GoalExpr_33;
      MR_Word GoalInfo_34;
      MR_Word STATE_VARIABLE_ModeInfo_20_37;
      MR_Word STATE_VARIABLE_ModeInfo_21_38;
      MR_Word STATE_VARIABLE_ModeInfo_22_39;
      MR_Word Var_42;
      MR_Word Var_32;

      check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &InDuplForSwitch_12);
      check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_15_15, &STATE_VARIABLE_ModeInfo_18_18);
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_18_18, &InstMap0_29);
      check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_18_18, &NondetLiveVars0_30);
      Detism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_31, &Var_32, &Var_42);
      succeeded = ((MR_Integer) 3 == Var_42);
      if (succeeded)
        STATE_VARIABLE_ModeInfo_20_37 = STATE_VARIABLE_ModeInfo_18_18;
      else
      {
        MR_Word Var_36;

        Var_36 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
        check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_36, STATE_VARIABLE_ModeInfo_18_18, &STATE_VARIABLE_ModeInfo_20_37);
      }
      check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_33, STATE_VARIABLE_ModeInfo_20_37, &STATE_VARIABLE_ModeInfo_21_38);
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_30, STATE_VARIABLE_ModeInfo_21_38, &STATE_VARIABLE_ModeInfo_22_39);
      check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_29, GoalExpr_33, GoalInfo0_9, &GoalInfo_34, STATE_VARIABLE_ModeInfo_22_39, &STATE_VARIABLE_ModeInfo_19_19);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_33));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_34));
      }
      check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(InDuplForSwitch_12, STATE_VARIABLE_ModeInfo_19_19, STATE_VARIABLE_ModeInfo_14);
    }
    else
    {
      MR_Word InstMap0_49;
      MR_Word NondetLiveVars0_50;
      MR_Word Detism_51;
      MR_Word GoalExpr_53;
      MR_Word GoalInfo_54;
      MR_Word STATE_VARIABLE_ModeInfo_20_57;
      MR_Word STATE_VARIABLE_ModeInfo_21_58;
      MR_Word STATE_VARIABLE_ModeInfo_22_59;
      MR_Word Var_62;
      MR_Word Var_52;

      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &InstMap0_49);
      check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_15_15, &NondetLiveVars0_50);
      Detism_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_9);
      parse_tree__prog_data__determinism_components_3_p_0(Detism_51, &Var_52, &Var_62);
      succeeded = ((MR_Integer) 3 == Var_62);
      if (succeeded)
        STATE_VARIABLE_ModeInfo_20_57 = STATE_VARIABLE_ModeInfo_15_15;
      else
      {
        MR_Word Var_56;

        Var_56 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
        check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(Var_56, STATE_VARIABLE_ModeInfo_15_15, &STATE_VARIABLE_ModeInfo_20_57);
      }
      check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(GoalExpr0_8, GoalInfo0_9, &GoalExpr_53, STATE_VARIABLE_ModeInfo_20_57, &STATE_VARIABLE_ModeInfo_21_58);
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars0_50, STATE_VARIABLE_ModeInfo_21_58, &STATE_VARIABLE_ModeInfo_22_59);
      check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(InstMap0_49, GoalExpr_53, GoalInfo0_9, &GoalInfo_54, STATE_VARIABLE_ModeInfo_22_59, STATE_VARIABLE_ModeInfo_14);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_53));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_54));
      }
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
    MR_Word NeverSucceeds_22;
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
    hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_18, &NeverSucceeds_22);
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
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
        return;
      }
    }
    switch (NeverSucceeds_22) {
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
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 7U));
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
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", (MR_String) "call to implied mode\?");
                return;
              }
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
          succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(Inst_17, Inst0_14, Type_16, ModuleInfo_12);
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
          check_hlds__inst_util__inst_expand_3_p_0(ModuleInfo0_19, Inst0_21, &Inst1_22);
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
  MR_Integer ProcId_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13,
  MR_Word * Changed_10,
  MR_Word * Specs_11)
{
  {
    check_hlds__modes__modecheck_proc_general_8_p_0(ProcId_7, PredId_8, (MR_Integer) 1, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13, Specs_11, Changed_10);
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_module_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8,
  MR_Word * Specs_5)
{
  {
    MR_Word _SafeToContinue_6;

    check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 1, (MR_Integer) 0, STATE_VARIABLE_ModuleInfo_0_7, STATE_VARIABLE_ModuleInfo_8, &_SafeToContinue_6, Specs_5);
  }
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
