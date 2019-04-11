/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2018-06-28
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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__947__1_2_p_0(
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__unique_modes_scalar_common_3[1])),
    ((MR_Box) (check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unique_modes_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unique_modes__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__947__1_2_p_0(
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

    succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__947__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_21);
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (InstMap_13));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (NonLocals_14));
    }
    check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_17, STATE_VARIABLE_ModeInfo_21_21, &STATE_VARIABLE_ModeInfo_22_22);
    check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(Goals0_10, &Goals_12, &InstMaps_15, STATE_VARIABLE_ModeInfo_22_22, STATE_VARIABLE_ModeInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if ((HeadVar__2_2 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConjGoals_15;
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
      MR_Word Var_24;

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1))));
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
          Goals_31 = (MR_Word) ((MR_Integer) 0);
        }
        else
          check_hlds__unique_modes__unique_modes_check_conj_5_p_0(HeadVar__1_1, Goals0_12, &Goals_31, STATE_VARIABLE_ModeInfo_18_36, STATE_VARIABLE_ModeInfo_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
      *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
        Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_19));
        MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_20));
        MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_25));
      }
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_22, STATE_VARIABLE_ModeInfo_29_29, &STATE_VARIABLE_ModeInfo_30_30);
      check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_12, HeadVar__2_2, &Cases_15, &InstMaps_17, STATE_VARIABLE_ModeInfo_30_30, STATE_VARIABLE_ModeInfo_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
    *HeadVar__5_5 = (MR_Word) ((MR_Integer) 0);
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
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
          MR_Word SubGoal0_39 = (MR_Word) (MR_body((MR_Word) (GoalExpr0_6), (MR_Integer) 0));
          MR_Word InstMap0_292;
          MR_Word NonLocals_293;
          MR_Word NonLocalsList_294;
          MR_Word LiveNonLocals_295;
          MR_Word LiveVars0_296;
          MR_Word SubGoal_297;
          MR_Word STATE_VARIABLE_ModeInfo_20_300;
          MR_Word STATE_VARIABLE_ModeInfo_21_301;
          MR_Word Var_302;
          MR_Word STATE_VARIABLE_ModeInfo_23_303;
          MR_Word STATE_VARIABLE_ModeInfo_25_305;
          MR_Word STATE_VARIABLE_ModeInfo_26_306;
          MR_Word STATE_VARIABLE_ModeInfo_28_308;
          MR_Word STATE_VARIABLE_ModeInfo_29_309;
          MR_Word STATE_VARIABLE_ModeInfo_30_310;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_300);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_300, &InstMap0_292);
          NonLocals_293 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_293, &NonLocalsList_294);
          check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_294, STATE_VARIABLE_ModeInfo_20_300, &LiveNonLocals_295);
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_295, STATE_VARIABLE_ModeInfo_20_300, &STATE_VARIABLE_ModeInfo_21_301);
          check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_301, &LiveVars0_296);
          Var_302 = mercury__bag__init_0_f_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]));
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_302, STATE_VARIABLE_ModeInfo_21_301, &STATE_VARIABLE_ModeInfo_23_303);
          check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Integer) 0), NonLocals_293, STATE_VARIABLE_ModeInfo_23_303, &STATE_VARIABLE_ModeInfo_25_305);
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_39, &SubGoal_297, STATE_VARIABLE_ModeInfo_25_305, &STATE_VARIABLE_ModeInfo_26_306);
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Integer) 0), NonLocals_293, STATE_VARIABLE_ModeInfo_26_306, &STATE_VARIABLE_ModeInfo_28_308);
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_296, STATE_VARIABLE_ModeInfo_28_308, &STATE_VARIABLE_ModeInfo_29_309);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_292, STATE_VARIABLE_ModeInfo_29_309, &STATE_VARIABLE_ModeInfo_30_310);
          *GoalExpr_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (SubGoal_297)));
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_310, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0))));
          MR_Word RHS0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1))));
          MR_Word Unification0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3))));
          MR_Word UnifyContext0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4))));
          MR_Word STATE_VARIABLE_ModeInfo_20_510;
          MR_Word Var_511;
          MR_Word STATE_VARIABLE_ModeInfo_22_512;
          MR_Word STATE_VARIABLE_ModeInfo_23_513;
          MR_Word STATE_VARIABLE_ModeInfo_24_514;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_510);
          {
            Var_511 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_511, 0) = ((MR_Box) (UnifyContext0_14));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_511, STATE_VARIABLE_ModeInfo_20_510, &STATE_VARIABLE_ModeInfo_22_512);
          check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext0_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_22_512, &STATE_VARIABLE_ModeInfo_23_513);
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_23_513, &STATE_VARIABLE_ModeInfo_24_514);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_24_514, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
          MR_Integer ProcId0_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
          MR_Word ArgVars0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2))));
          MR_Word Builtin0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))));
          MR_Word MaybeUnifyContext0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4))));
          MR_Word SymName0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5))));
          MR_String PredNameString_327;
          MR_String CallString_328;
          MR_Word CallId_329;
          MR_Integer ProcId_330;
          MR_Word STATE_VARIABLE_ModeInfo_28_333;
          MR_Word Var_334;
          MR_Word STATE_VARIABLE_ModeInfo_30_335;
          MR_Word Var_336;
          MR_Word STATE_VARIABLE_ModeInfo_32_337;
          MR_Word STATE_VARIABLE_ModeInfo_33_338;

          PredNameString_327 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName0_20);
          mercury__string__append_3_p_2((MR_String) "call ", PredNameString_327, &CallString_328);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_328, STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_28_333);
          check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_28_333, PredId0_15, &CallId_329);
          {
            Var_336 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_336, 0) = ((MR_Box) (CallId_329));
          }
          {
            Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_334, 0) = ((MR_Box) (Var_336));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_334, STATE_VARIABLE_ModeInfo_28_333, &STATE_VARIABLE_ModeInfo_30_335);
          check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_15, ProcId0_16, ArgVars0_17, GoalInfo0_7, &ProcId_330, STATE_VARIABLE_ModeInfo_30_335, &STATE_VARIABLE_ModeInfo_32_337);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId0_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_330));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars0_17));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Builtin0_18));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext0_19));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName0_20));
          }
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_32_337, &STATE_VARIABLE_ModeInfo_33_338);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_33_338, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word ArgModes0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Detism0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5))));
              MR_Word ArgVars0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word GenericCallId_172;
              MR_Word CallId_173;
              MR_Integer ArgOffset_180;
              MR_Word STATE_VARIABLE_ModeInfo_35_189;
              MR_Word Var_190;
              MR_Word STATE_VARIABLE_ModeInfo_37_191;
              MR_Word STATE_VARIABLE_ModeInfo_39_193;
              MR_Word STATE_VARIABLE_ModeInfo_40_194;
              MR_Word ModuleInfo_207;
              MR_Word InitialInsts_208;
              MR_Word InstVarSub_209;
              MR_Word FinalInsts0_210;
              MR_Word FinalInsts_211;
              MR_Word NewArgVars_212;
              MR_Word ExtraGoals_213;
              MR_Word STATE_VARIABLE_ModeInfo_25_216;
              MR_Word STATE_VARIABLE_ModeInfo_26_217;
              MR_Word Var_198;
              MR_Word Var_174;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_35_189);
              hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall0_21, &GenericCallId_172);
              {
                CallId_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_173, 0) = ((MR_Box) (GenericCallId_172));
              }
              {
                Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (CallId_173));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_190, STATE_VARIABLE_ModeInfo_35_189, &STATE_VARIABLE_ModeInfo_37_191);
              switch (MR_tag((MR_Word) GenericCall0_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ArgOffset_180 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  ArgOffset_180 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  ArgOffset_180 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  ArgOffset_180 = (MR_Integer) 0;
                  break;
              }
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_37_191, &ModuleInfo_207);
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_207, ArgModes0_22, &InitialInsts_208);
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_77, InitialInsts_208, ArgOffset_180, &InstVarSub_209, STATE_VARIABLE_ModeInfo_37_191, &STATE_VARIABLE_ModeInfo_25_216);
              check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_207, ArgModes0_22, &FinalInsts0_210);
              parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_209, FinalInsts0_210, &FinalInsts_211);
              check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_77, InitialInsts_208, FinalInsts_211, ArgOffset_180, &NewArgVars_212, &ExtraGoals_213, STATE_VARIABLE_ModeInfo_25_216, &STATE_VARIABLE_ModeInfo_26_217);
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_212)), ((MR_Box) (ArgVars0_77)));
              if (succeeded)
                succeeded = (ExtraGoals_213 == (MR_Word) ((MR_Integer) 0));
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                  return;
                }
              }
              parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_174, &Var_198);
              succeeded = ((MR_Integer) 0 == Var_198);
              if (succeeded)
              {
                MR_Word InstMap_214;

                hlds__instmap__init_unreachable_1_p_0(&InstMap_214);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_214, STATE_VARIABLE_ModeInfo_26_217, &STATE_VARIABLE_ModeInfo_39_193);
              }
              else
              {
                MR_Word Var_223;
                MR_Word Var_215;

                parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_215, &Var_223);
                succeeded = ((MR_Integer) 3 == Var_223);
                if (succeeded)
                {
                  MR_Word FullInstMap0_227;

                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_217, &FullInstMap0_227);
                  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_227);
                  if (succeeded)
                  {
                    MR_Word AllVars_228;
                    MR_Word NondetLiveVars_229;

                    hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_227, &AllVars_228);
                    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_228, STATE_VARIABLE_ModeInfo_26_217, &NondetLiveVars_229);
                    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_229, STATE_VARIABLE_ModeInfo_26_217, &STATE_VARIABLE_ModeInfo_39_193);
                  }
                  else
                    STATE_VARIABLE_ModeInfo_39_193 = STATE_VARIABLE_ModeInfo_26_217;
                }
                else
                  STATE_VARIABLE_ModeInfo_39_193 = STATE_VARIABLE_ModeInfo_26_217;
              }
              *GoalExpr_8 = GoalExpr0_6;
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_39_193, &STATE_VARIABLE_ModeInfo_40_194);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_40_194, STATE_VARIABLE_ModeInfo_56);
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
              MR_Word CallId_97;
              MR_Word ArgVars_98;
              MR_Integer ProcId_99;
              MR_Word STATE_VARIABLE_ModeInfo_29_102;
              MR_Word Var_103;
              MR_Word STATE_VARIABLE_ModeInfo_31_104;
              MR_Word Var_105;
              MR_Word STATE_VARIABLE_ModeInfo_34_107;
              MR_Word STATE_VARIABLE_ModeInfo_35_108;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_29_102);
              check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_29_102, PredId0_78, &CallId_97);
              {
                Var_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (CallId_97));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_105));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_103, STATE_VARIABLE_ModeInfo_29_102, &STATE_VARIABLE_ModeInfo_31_104);
              ArgVars_98 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__unique_modes_scalar_common_1[0]), (MR_Word) (&check_hlds__unique_modes_scalar_common_2[1]), Args0_26);
              check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_78, ProcId0_79, ArgVars_98, GoalInfo0_7, &ProcId_99, STATE_VARIABLE_ModeInfo_31_104, &STATE_VARIABLE_ModeInfo_34_107);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Attributes0_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredId0_78));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ProcId_99));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args0_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs0_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeTraceRuntimeCond0_28));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (PragmaCode0_29));
              }
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_34_107, &STATE_VARIABLE_ModeInfo_35_108);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_35_108, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GoalType0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word Goals0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word Goals_122;
              MR_Word STATE_VARIABLE_ModeInfo_17_127;
              MR_Word STATE_VARIABLE_ModeInfo_19_129;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_17_127);
              if ((Goals0_31 == (MR_Word) ((MR_Integer) 0)))
              {
                Goals_122 = (MR_Word) ((MR_Integer) 0);
                STATE_VARIABLE_ModeInfo_19_129 = STATE_VARIABLE_ModeInfo_17_127;
              }
              else
              {
                MR_Word STATE_VARIABLE_ModeInfo_18_128;

                check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_30, Goals0_31, STATE_VARIABLE_ModeInfo_17_127, &STATE_VARIABLE_ModeInfo_18_128);
                check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_30, Goals0_31, &Goals_122, STATE_VARIABLE_ModeInfo_18_128, &STATE_VARIABLE_ModeInfo_19_129);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GoalType0_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_122));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_19_129, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word Goals_139;
              MR_Word STATE_VARIABLE_ModeInfo_23_150;
              MR_Word STATE_VARIABLE_ModeInfo_31_158;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_23_150);
              if ((Goals0_80 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word InstMap_140;

                Goals_139 = (MR_Word) ((MR_Integer) 0);
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
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_139));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_31_158, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1))));
              MR_Word CanFail0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2))));
              MR_Word Cases0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3))));
              MR_Word Cases_482;
              MR_Word STATE_VARIABLE_ModeInfo_25_491;
              MR_Word STATE_VARIABLE_ModeInfo_29_495;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_25_491);
              if ((Cases0_34 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word InstMap_483;

                Cases_482 = (MR_Word) ((MR_Integer) 0);
                hlds__instmap__init_unreachable_1_p_0(&InstMap_483);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_483, STATE_VARIABLE_ModeInfo_25_491, &STATE_VARIABLE_ModeInfo_29_495);
              }
              else
              {
                MR_Word NonLocals_486;
                MR_Word InstMaps_487;
                MR_Word ArmInstMaps_488;
                MR_Word STATE_VARIABLE_ModeInfo_26_492;

                NonLocals_486 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_34, Var0_32, &Cases_482, &InstMaps_487, STATE_VARIABLE_ModeInfo_25_491, &STATE_VARIABLE_ModeInfo_26_492);
                hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_482, InstMaps_487, &ArmInstMaps_488);
                hlds__instmap__instmap_merge_5_p_0(NonLocals_486, ArmInstMaps_488, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_26_492, &STATE_VARIABLE_ModeInfo_29_495);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var0_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail0_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_482));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_29_495, STATE_VARIABLE_ModeInfo_56);
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
                    MR_Word STATE_VARIABLE_ModeInfo_47_382;
                    MR_Word STATE_VARIABLE_ModeInfo_48_383;
                    MR_Word SubGoal_432;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_382);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_432, STATE_VARIABLE_ModeInfo_47_382, &STATE_VARIABLE_ModeInfo_48_383);
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_383, STATE_VARIABLE_ModeInfo_56);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_432));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      {
                        MR_Word STATE_VARIABLE_ModeInfo_47_382;
                        MR_Word STATE_VARIABLE_ModeInfo_48_383;
                        MR_Word SubGoal_432;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_382);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_432, STATE_VARIABLE_ModeInfo_47_382, &STATE_VARIABLE_ModeInfo_48_383);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_383, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_432));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_357 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 1))));
                        MR_Word FGT_358 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 2))));

                        switch (FGT_358) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word LiveTermVar_359;
                              MR_Word STATE_VARIABLE_ModeInfo_63_398;
                              MR_Word STATE_VARIABLE_ModeInfo_66_401;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_63_398);
                              check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_63_398, TermVar_357, &LiveTermVar_359);
                              switch (LiveTermVar_359) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    *GoalExpr_8 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[2]));
                                    STATE_VARIABLE_ModeInfo_66_401 = STATE_VARIABLE_ModeInfo_63_398;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word SubGoalInfo_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_81, (MR_Integer) 1))));
                                    MR_Word InstMapDelta_362;
                                    MR_Word TermVarInst_363;

                                    InstMapDelta_362 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_361);
                                    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_362, TermVar_357, &TermVarInst_363);
                                    if (succeeded)
                                    {
                                      MR_Word InstMap_364;
                                      MR_Word InstMap0_419;

                                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_63_398, &InstMap0_419);
                                      hlds__instmap__instmap_set_var_4_p_0(TermVar_357, TermVarInst_363, InstMap0_419, &InstMap_364);
                                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_364, STATE_VARIABLE_ModeInfo_63_398, &STATE_VARIABLE_ModeInfo_66_401);
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
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_66_401, STATE_VARIABLE_ModeInfo_56);
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word STATE_VARIABLE_ModeInfo_56_391;
                              MR_Word STATE_VARIABLE_ModeInfo_57_392;
                              MR_Word SubGoal_427;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_56_391);
                              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_427, STATE_VARIABLE_ModeInfo_56_391, &STATE_VARIABLE_ModeInfo_57_392);
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_57_392, STATE_VARIABLE_ModeInfo_56);
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_8 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_427));
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
                        MR_Word InstMap0_354;
                        MR_Word NonLocals_355;
                        MR_Word SubGoal_356;
                        MR_Word STATE_VARIABLE_ModeInfo_74_409;
                        MR_Word STATE_VARIABLE_ModeInfo_76_411;
                        MR_Word STATE_VARIABLE_ModeInfo_77_412;
                        MR_Word STATE_VARIABLE_ModeInfo_79_414;
                        MR_Word STATE_VARIABLE_ModeInfo_80_415;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_74_409);
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_74_409, &InstMap0_354);
                        NonLocals_355 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Integer) 8), NonLocals_355, STATE_VARIABLE_ModeInfo_74_409, &STATE_VARIABLE_ModeInfo_76_411);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_81, &SubGoal_356, STATE_VARIABLE_ModeInfo_76_411, &STATE_VARIABLE_ModeInfo_77_412);
                        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Integer) 8), NonLocals_355, STATE_VARIABLE_ModeInfo_77_412, &STATE_VARIABLE_ModeInfo_79_414);
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_354, STATE_VARIABLE_ModeInfo_79_414, &STATE_VARIABLE_ModeInfo_80_415);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_80_415, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_356));
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
              MR_Word NonLocals_239;
              MR_Word CondVars_240;
              MR_Word ThenVars_241;
              MR_Word ElseVars_242;
              MR_Word InstMap0_243;
              MR_Word CondVarList_244;
              MR_Word CondLiveVars_245;
              MR_Word CondInfo0_247;
              MR_Word CondDeltaInstMap0_248;
              MR_Word ChangedVars_249;
              MR_Word Cond_250;
              MR_Word InstMapCond_251;
              MR_Word Then_252;
              MR_Word InstMapThen_253;
              MR_Word Else_254;
              MR_Word InstMapElse_255;
              MR_Word ArmInstMaps_256;
              MR_Word STATE_VARIABLE_ModeInfo_38_259;
              MR_Word STATE_VARIABLE_ModeInfo_40_261;
              MR_Word STATE_VARIABLE_ModeInfo_41_262;
              MR_Word STATE_VARIABLE_ModeInfo_42_263;
              MR_Word STATE_VARIABLE_ModeInfo_43_264;
              MR_Word STATE_VARIABLE_ModeInfo_44_265;
              MR_Word STATE_VARIABLE_ModeInfo_45_266;
              MR_Word STATE_VARIABLE_ModeInfo_46_267;
              MR_Word STATE_VARIABLE_ModeInfo_48_269;
              MR_Word STATE_VARIABLE_ModeInfo_49_270;
              MR_Word STATE_VARIABLE_ModeInfo_50_271;
              MR_Word STATE_VARIABLE_ModeInfo_51_272;
              MR_Word STATE_VARIABLE_ModeInfo_52_273;
              MR_Word Var_274;
              MR_Word Var_275;
              MR_Word Var_276;
              MR_Word Var_278;
              MR_Word STATE_VARIABLE_ModeInfo_60_281;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_259);
              NonLocals_239 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              CondVars_240 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_36);
              ThenVars_241 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_37);
              ElseVars_242 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_38);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_259, &InstMap0_243);
              check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) ((MR_Integer) 4), NonLocals_239, STATE_VARIABLE_ModeInfo_38_259, &STATE_VARIABLE_ModeInfo_40_261);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_242, STATE_VARIABLE_ModeInfo_40_261, &STATE_VARIABLE_ModeInfo_41_262);
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_240, &CondVarList_244);
              check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_244, STATE_VARIABLE_ModeInfo_41_262, &CondLiveVars_245);
              CondInfo0_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_36, (MR_Integer) 1))));
              CondDeltaInstMap0_248 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_247);
              check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_245, CondDeltaInstMap0_248, STATE_VARIABLE_ModeInfo_41_262, &ChangedVars_249);
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_249, STATE_VARIABLE_ModeInfo_41_262, &STATE_VARIABLE_ModeInfo_42_263);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_242, STATE_VARIABLE_ModeInfo_42_263, &STATE_VARIABLE_ModeInfo_43_264);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_241, STATE_VARIABLE_ModeInfo_43_264, &STATE_VARIABLE_ModeInfo_44_265);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_36, &Cond_250, STATE_VARIABLE_ModeInfo_44_265, &STATE_VARIABLE_ModeInfo_45_266);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_241, STATE_VARIABLE_ModeInfo_45_266, &STATE_VARIABLE_ModeInfo_46_267);
              check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) ((MR_Integer) 4), NonLocals_239, STATE_VARIABLE_ModeInfo_46_267, &STATE_VARIABLE_ModeInfo_48_269);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_269, &InstMapCond_251);
              succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_251);
              if (succeeded)
              {
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_37, &Then_252, STATE_VARIABLE_ModeInfo_48_269, &STATE_VARIABLE_ModeInfo_49_270);
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_270, &InstMapThen_253);
              }
              else
              {
                Then_252 = hlds__make_goal__true_goal_0_f_0();
                InstMapThen_253 = InstMapCond_251;
                STATE_VARIABLE_ModeInfo_49_270 = STATE_VARIABLE_ModeInfo_48_269;
              }
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_243, STATE_VARIABLE_ModeInfo_49_270, &STATE_VARIABLE_ModeInfo_50_271);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_38, &Else_254, STATE_VARIABLE_ModeInfo_50_271, &STATE_VARIABLE_ModeInfo_51_272);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_272, &InstMapElse_255);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_243, STATE_VARIABLE_ModeInfo_51_272, &STATE_VARIABLE_ModeInfo_52_273);
              {
                Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Else_254));
                MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (Then_252));
                MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (Var_276));
              }
              {
                Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (InstMapElse_255));
                MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (InstMapThen_253));
                MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (Var_278));
              }
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_274, Var_275, &ArmInstMaps_256);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_239, ArmInstMaps_256, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_273, &STATE_VARIABLE_ModeInfo_60_281);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars0_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_250));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_252));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_254));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_281, STATE_VARIABLE_ModeInfo_56);
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
                    MR_Word GoalType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 0))));
                    MR_Word Outer_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 1))));
                    MR_Word Inner_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 2))));
                    MR_Word MaybeOutputVars_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 3))));
                    MR_Word MainGoal0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 5))));
                    MR_Word OrElseInners0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 6))));
                    MR_Word MainGoal_445;
                    MR_Word OrElseGoals_446;
                    MR_Word ShortHand_456;
                    MR_Word STATE_VARIABLE_ModeInfo_38_459;
                    MR_Word STATE_VARIABLE_ModeInfo_48_469;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_459);
                    if ((OrElseGoals0_47 == (MR_Word) ((MR_Integer) 0)))
                    {
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_46, &MainGoal_445, STATE_VARIABLE_ModeInfo_38_459, &STATE_VARIABLE_ModeInfo_48_469);
                      OrElseGoals_446 = (MR_Word) ((MR_Integer) 0);
                    }
                    else
                    {
                      MR_Word NonLocals_449;
                      MR_Word Determinism_450;
                      MR_Word Goals0_452;
                      MR_Word Goals_453;
                      MR_Word InstMaps_454;
                      MR_Word ArmInstMaps_455;
                      MR_Word STATE_VARIABLE_ModeInfo_42_463;
                      MR_Word STATE_VARIABLE_ModeInfo_43_464;
                      MR_Word Var_473;
                      MR_Word Var_451;

                      NonLocals_449 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      Determinism_450 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                      parse_tree__prog_data__determinism_components_3_p_0(Determinism_450, &Var_451, &Var_473);
                      succeeded = ((MR_Integer) 3 == Var_473);
                      if (succeeded)
                      {
                        MR_Word STATE_VARIABLE_ModeInfo_40_461;
                        MR_Word STATE_VARIABLE_ModeInfo_41_462;

                        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_449, STATE_VARIABLE_ModeInfo_38_459, &STATE_VARIABLE_ModeInfo_40_461);
                        check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_40_461, &STATE_VARIABLE_ModeInfo_41_462);
                        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_449, STATE_VARIABLE_ModeInfo_41_462, &STATE_VARIABLE_ModeInfo_42_463);
                      }
                      else
                        STATE_VARIABLE_ModeInfo_42_463 = STATE_VARIABLE_ModeInfo_38_459;
                      {
                        Goals0_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals0_452, 0) = ((MR_Box) (MainGoal0_46));
                        MR_hl_field(MR_mktag(1), Goals0_452, 1) = ((MR_Box) (OrElseGoals0_47));
                      }
                      check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_452, Determinism_450, NonLocals_449, &Goals_453, &InstMaps_454, STATE_VARIABLE_ModeInfo_42_463, &STATE_VARIABLE_ModeInfo_43_464);
                      if ((Goals_453 == (MR_Word) ((MR_Integer) 0)))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                          return;
                        }
                      }
                      else
                      {
                        MainGoal_445 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_453, (MR_Integer) 0))));
                        OrElseGoals_446 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_453, (MR_Integer) 1))));
                      }
                      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_453, InstMaps_454, &ArmInstMaps_455);
                      hlds__instmap__instmap_merge_5_p_0(NonLocals_449, ArmInstMaps_455, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_43_464, &STATE_VARIABLE_ModeInfo_48_469);
                    }
                    {
                      ShortHand_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 0) = ((MR_Box) (GoalType_42));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 1) = ((MR_Box) (Outer_43));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 2) = ((MR_Box) (Inner_44));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 3) = ((MR_Box) (MaybeOutputVars_45));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 4) = ((MR_Box) (MainGoal_445));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 5) = ((MR_Box) (OrElseGoals_446));
                      MR_hl_field(MR_mktag(1), ShortHand_456, 6) = ((MR_Box) (OrElseInners0_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_456));
                    }
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_48_469, STATE_VARIABLE_ModeInfo_56);
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
                      ShortHand_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 0) = ((MR_Box) (MaybeIO_49));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 1) = ((MR_Box) (ResultVar_50));
                      MR_hl_field(MR_mktag(2), ShortHand_52, 2) = ((MR_Box) (SubGoal_51));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
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
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
    succeeded = (DisjMaxSolns_11 == (MR_Integer) 3);
    succeeded = !(succeeded);
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
    check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) ((MR_Integer) 0), STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
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
      succeeded = (ExtraGoals_68 == (MR_Word) ((MR_Integer) 0));
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
    if ((ModeErrors_23 == (MR_Word) ((MR_Integer) 0)))
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
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
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
    if ((Errors_29 == (MR_Word) ((MR_Integer) 0)))
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
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Determinism_34));
            }
            check_hlds__modecheck_call__modecheck_call_pred_10_p_0(PredId_8, Var_46, ProcId0_9, ProcId_12, ArgVars_10, &NewArgVars_35, GoalInfo_11, &ExtraGoals_36, STATE_VARIABLE_ModeInfo_45_45, STATE_VARIABLE_ModeInfo_38);
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unique_modes_scalar_common_1[1]), ((MR_Box) (NewArgVars_35)), ((MR_Box) (ArgVars_10)));
            if (succeeded)
              succeeded = (ExtraGoals_36 == (MR_Word) ((MR_Integer) 0));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__4_4 = (MR_Word) ((MR_Integer) 0);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
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
                MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst1_22, (MR_Integer) 0))));

                succeeded = (Var_30 == (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 0)))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1))));

                    succeeded = (Var_31 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1))));

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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *HeadVar__3_3 = (MR_Word) ((MR_Integer) 0);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
