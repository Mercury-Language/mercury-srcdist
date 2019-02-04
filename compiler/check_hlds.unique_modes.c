/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2018-03-13
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__unique_modes__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__unique_modes__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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

    *LambdaHeadVar__2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 0)));
    Multiplicity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1)));
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

    succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__947__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_21);
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
    MR_Word TypeInfo_27_39 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
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

    mercury__bag__to_assoc_list_2_p_0(TypeInfo_27_39, NonLocalVarsBag_8, &NonLocalVarsList_20);
    mercury__list__filter_map_3_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_2[0], TypeInfo_27_39, (MR_Word) &check_hlds__unique_modes_scalar_common_2[3], NonLocalVarsList_20, &SharedList_24);
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
  }
  else
  {
    MR_Word Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ModeInfo_5 = STATE_VARIABLE_ModeInfo_0_4;
    }
    else
    {
      MR_Word Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ConjGoals_15;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0)));
      MR_Word Var_24;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1)));

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1)));
        ConjGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2)));
        succeeded = (HeadVar__1_1 == Var_24);
      }
      if (succeeded)
      {
        MR_Word Goals1_17;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, ConjGoals_15, Goals0_12, &Goals1_17);
        // direct tailcall eliminated
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
          Goals_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_ModeInfo_6 = STATE_VARIABLE_ModeInfo_0_5;
    }
    else
    {
      MR_Word Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Case_14;
      MR_Word Cases_15;
      MR_Word InstMap_16;
      MR_Word InstMaps_17;
      MR_Word MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 0)));
      MR_Word OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 1)));
      MR_Word Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_11, (MR_Integer) 2)));
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
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_ModeInfo_7 = STATE_VARIABLE_ModeInfo_0_6;
  }
  else
  {
    MR_Word Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) wrapper_arg_1));
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
          MR_Word SubGoal0_39 = (MR_Word) MR_body(((MR_Word) GoalExpr0_6), (MR_Integer) 0);
          MR_Word InstMap0_294;
          MR_Word NonLocals_295;
          MR_Word NonLocalsList_296;
          MR_Word LiveNonLocals_297;
          MR_Word LiveVars0_298;
          MR_Word SubGoal_299;
          MR_Word STATE_VARIABLE_ModeInfo_20_302;
          MR_Word STATE_VARIABLE_ModeInfo_21_303;
          MR_Word Var_304;
          MR_Word STATE_VARIABLE_ModeInfo_23_305;
          MR_Word STATE_VARIABLE_ModeInfo_25_307;
          MR_Word STATE_VARIABLE_ModeInfo_26_308;
          MR_Word STATE_VARIABLE_ModeInfo_28_310;
          MR_Word STATE_VARIABLE_ModeInfo_29_311;
          MR_Word STATE_VARIABLE_ModeInfo_30_312;

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_302);
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_20_302, &InstMap0_294);
          NonLocals_295 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
          parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_295, &NonLocalsList_296);
          check_hlds__unique_modes__select_live_vars_3_p_0(NonLocalsList_296, STATE_VARIABLE_ModeInfo_20_302, &LiveNonLocals_297);
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(LiveNonLocals_297, STATE_VARIABLE_ModeInfo_20_302, &STATE_VARIABLE_ModeInfo_21_303);
          check_hlds__mode_info__mode_info_get_live_vars_2_p_0(STATE_VARIABLE_ModeInfo_21_303, &LiveVars0_298);
          Var_304 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(Var_304, STATE_VARIABLE_ModeInfo_21_303, &STATE_VARIABLE_ModeInfo_23_305);
          check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), NonLocals_295, STATE_VARIABLE_ModeInfo_23_305, &STATE_VARIABLE_ModeInfo_25_307);
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_39, &SubGoal_299, STATE_VARIABLE_ModeInfo_25_307, &STATE_VARIABLE_ModeInfo_26_308);
          check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), NonLocals_295, STATE_VARIABLE_ModeInfo_26_308, &STATE_VARIABLE_ModeInfo_28_310);
          check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars0_298, STATE_VARIABLE_ModeInfo_28_310, &STATE_VARIABLE_ModeInfo_29_311);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_294, STATE_VARIABLE_ModeInfo_29_311, &STATE_VARIABLE_ModeInfo_30_312);
          *GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) SubGoal_299);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", STATE_VARIABLE_ModeInfo_30_312, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 0)));
          MR_Word RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 1)));
          MR_Word Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 3)));
          MR_Word UnifyContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 4)));
          MR_Word STATE_VARIABLE_ModeInfo_20_515;
          MR_Word Var_516;
          MR_Word STATE_VARIABLE_ModeInfo_22_517;
          MR_Word STATE_VARIABLE_ModeInfo_23_518;
          MR_Word STATE_VARIABLE_ModeInfo_24_519;
          MR_Word _UniModes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_6, (MR_Integer) 2)));

          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_20_515);
          {
            Var_516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_516, 0) = ((MR_Box) (UnifyContext0_14));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_516, STATE_VARIABLE_ModeInfo_20_515, &STATE_VARIABLE_ModeInfo_22_517);
          check_hlds__modecheck_unify__modecheck_unification_8_p_0(LHS0_10, RHS0_11, Unification0_13, UnifyContext0_14, GoalInfo0_7, GoalExpr_8, STATE_VARIABLE_ModeInfo_22_517, &STATE_VARIABLE_ModeInfo_23_518);
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_23_518, &STATE_VARIABLE_ModeInfo_24_519);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", STATE_VARIABLE_ModeInfo_24_519, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0)));
          MR_Integer ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1)));
          MR_Word ArgVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2)));
          MR_Word Builtin0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3)));
          MR_Word MaybeUnifyContext0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4)));
          MR_Word SymName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5)));
          MR_String PredNameString_329;
          MR_String CallString_330;
          MR_Word CallId_331;
          MR_Integer ProcId_332;
          MR_Word STATE_VARIABLE_ModeInfo_28_335;
          MR_Word Var_336;
          MR_Word STATE_VARIABLE_ModeInfo_30_337;
          MR_Word Var_338;
          MR_Word STATE_VARIABLE_ModeInfo_32_339;
          MR_Word STATE_VARIABLE_ModeInfo_33_340;

          PredNameString_329 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName0_20);
          mercury__string__append_3_p_2((MR_String) "call ", PredNameString_329, &CallString_330);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, CallString_330, STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_28_335);
          check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_28_335, PredId0_15, &CallId_331);
          {
            Var_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_338, 0) = ((MR_Box) (CallId_331));
          }
          {
            Var_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_336, 0) = ((MR_Box) (Var_338));
          }
          check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_336, STATE_VARIABLE_ModeInfo_28_335, &STATE_VARIABLE_ModeInfo_30_337);
          check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_15, ProcId0_16, ArgVars0_17, GoalInfo0_7, &ProcId_332, STATE_VARIABLE_ModeInfo_30_337, &STATE_VARIABLE_ModeInfo_32_339);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PredId0_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ProcId_332));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ArgVars0_17));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Builtin0_18));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (MaybeUnifyContext0_19));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (SymName0_20));
          }
          check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_32_339, &STATE_VARIABLE_ModeInfo_33_340);
          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", STATE_VARIABLE_ModeInfo_33_340, STATE_VARIABLE_ModeInfo_56);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Detism0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));
              MR_Word ArgVars0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word GenericCallId_173;
              MR_Word CallId_174;
              MR_Integer ArgOffset_181;
              MR_Word STATE_VARIABLE_ModeInfo_35_190;
              MR_Word Var_191;
              MR_Word STATE_VARIABLE_ModeInfo_37_192;
              MR_Word STATE_VARIABLE_ModeInfo_39_194;
              MR_Word STATE_VARIABLE_ModeInfo_40_195;
              MR_Word ModuleInfo_208;
              MR_Word InitialInsts_209;
              MR_Word InstVarSub_210;
              MR_Word FinalInsts0_211;
              MR_Word FinalInsts_212;
              MR_Word NewArgVars_213;
              MR_Word ExtraGoals_214;
              MR_Word STATE_VARIABLE_ModeInfo_25_217;
              MR_Word STATE_VARIABLE_ModeInfo_26_218;
              MR_Word MaybeRegTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
              MR_Word Var_199;
              MR_Word Var_175;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_35_190);
              hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall0_21, &GenericCallId_173);
              {
                CallId_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallId_174, 0) = ((MR_Box) (GenericCallId_173));
              }
              {
                Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (CallId_174));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_191, STATE_VARIABLE_ModeInfo_35_190, &STATE_VARIABLE_ModeInfo_37_192);
              switch (MR_tag((MR_Word) GenericCall0_21)) {
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
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_37_192, &ModuleInfo_208);
              check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_208, ArgModes0_22, &InitialInsts_209);
              check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars0_78, InitialInsts_209, ArgOffset_181, &InstVarSub_210, STATE_VARIABLE_ModeInfo_37_192, &STATE_VARIABLE_ModeInfo_25_217);
              check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_208, ArgModes0_22, &FinalInsts0_211);
              parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_210, FinalInsts0_211, &FinalInsts_212);
              check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars0_78, InitialInsts_209, FinalInsts_212, ArgOffset_181, &NewArgVars_213, &ExtraGoals_214, STATE_VARIABLE_ModeInfo_25_217, &STATE_VARIABLE_ModeInfo_26_218);
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (NewArgVars_213)), ((MR_Box) (ArgVars0_78)));
              if (succeeded)
                succeeded = (ExtraGoals_214 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                  return;
                }
              }
              parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_175, &Var_199);
              succeeded = ((MR_Integer) 0 == Var_199);
              if (succeeded)
              {
                MR_Word InstMap_215;

                hlds__instmap__init_unreachable_1_p_0(&InstMap_215);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_215, STATE_VARIABLE_ModeInfo_26_218, &STATE_VARIABLE_ModeInfo_39_194);
              }
              else
              {
                MR_Word Var_225;
                MR_Word Var_216;

                parse_tree__prog_data__determinism_components_3_p_0(Detism0_24, &Var_216, &Var_225);
                succeeded = ((MR_Integer) 3 == Var_225);
                if (succeeded)
                {
                  MR_Word FullInstMap0_229;

                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_218, &FullInstMap0_229);
                  succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_229);
                  if (succeeded)
                  {
                    MR_Word AllVars_230;
                    MR_Word NondetLiveVars_231;

                    hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_229, &AllVars_230);
                    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_230, STATE_VARIABLE_ModeInfo_26_218, &NondetLiveVars_231);
                    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_231, STATE_VARIABLE_ModeInfo_26_218, &STATE_VARIABLE_ModeInfo_39_194);
                  }
                  else
                    STATE_VARIABLE_ModeInfo_39_194 = STATE_VARIABLE_ModeInfo_26_218;
                }
                else
                  STATE_VARIABLE_ModeInfo_39_194 = STATE_VARIABLE_ModeInfo_26_218;
              }
              *GoalExpr_8 = GoalExpr0_6;
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_39_194, &STATE_VARIABLE_ModeInfo_40_195);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", STATE_VARIABLE_ModeInfo_40_195, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
              MR_Word ExtraArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 5)));
              MR_Word MaybeTraceRuntimeCond0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 6)));
              MR_Word PragmaCode0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 7)));
              MR_Word PredId0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Integer ProcId0_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word CallId_98;
              MR_Word ArgVars_99;
              MR_Integer ProcId_100;
              MR_Word STATE_VARIABLE_ModeInfo_29_103;
              MR_Word Var_104;
              MR_Word STATE_VARIABLE_ModeInfo_31_105;
              MR_Word Var_106;
              MR_Word STATE_VARIABLE_ModeInfo_34_108;
              MR_Word STATE_VARIABLE_ModeInfo_35_109;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_29_103);
              check_hlds__mode_info__mode_info_get_call_id_3_p_0(STATE_VARIABLE_ModeInfo_29_103, PredId0_79, &CallId_98);
              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (CallId_98));
              }
              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_106));
              }
              check_hlds__mode_info__mode_info_set_call_context_3_p_0(Var_104, STATE_VARIABLE_ModeInfo_29_103, &STATE_VARIABLE_ModeInfo_31_105);
              ArgVars_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__unique_modes_scalar_common_1[0], (MR_Word) &check_hlds__unique_modes_scalar_common_2[1], Args0_26);
              check_hlds__unique_modes__unique_modes_check_call_7_p_0(PredId0_79, ProcId0_80, ArgVars_99, GoalInfo0_7, &ProcId_100, STATE_VARIABLE_ModeInfo_31_105, &STATE_VARIABLE_ModeInfo_34_108);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Attributes0_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredId0_79));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ProcId_100));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Args0_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ExtraArgs0_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeTraceRuntimeCond0_28));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (PragmaCode0_29));
              }
              check_hlds__mode_info__mode_info_unset_call_context_2_p_0(STATE_VARIABLE_ModeInfo_34_108, &STATE_VARIABLE_ModeInfo_35_109);
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", STATE_VARIABLE_ModeInfo_35_109, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GoalType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Goals_123;
              MR_Word STATE_VARIABLE_ModeInfo_17_128;
              MR_Word STATE_VARIABLE_ModeInfo_19_130;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_17_128);
              if ((Goals0_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                Goals_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                STATE_VARIABLE_ModeInfo_19_130 = STATE_VARIABLE_ModeInfo_17_128;
              }
              else
              {
                MR_Word STATE_VARIABLE_ModeInfo_18_129;

                check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(GoalType0_30, Goals0_31, STATE_VARIABLE_ModeInfo_17_128, &STATE_VARIABLE_ModeInfo_18_129);
                check_hlds__unique_modes__unique_modes_check_conj_5_p_0(GoalType0_30, Goals0_31, &Goals_123, STATE_VARIABLE_ModeInfo_18_129, &STATE_VARIABLE_ModeInfo_19_130);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GoalType0_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Goals_123));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", STATE_VARIABLE_ModeInfo_19_130, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Goals_140;
              MR_Word STATE_VARIABLE_ModeInfo_23_151;
              MR_Word STATE_VARIABLE_ModeInfo_31_159;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_23_151);
              if ((Goals0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word InstMap_141;

                Goals_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__instmap__init_unreachable_1_p_0(&InstMap_141);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_141, STATE_VARIABLE_ModeInfo_23_151, &STATE_VARIABLE_ModeInfo_31_159);
              }
              else
              {
                MR_Word NonLocals_144;
                MR_Word Determinism_145;
                MR_Word InstMaps_147;
                MR_Word ArmInstMaps_148;
                MR_Word STATE_VARIABLE_ModeInfo_27_155;
                MR_Word STATE_VARIABLE_ModeInfo_28_156;
                MR_Word Var_163;
                MR_Word Var_146;

                NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                Determinism_145 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                parse_tree__prog_data__determinism_components_3_p_0(Determinism_145, &Var_146, &Var_163);
                succeeded = ((MR_Integer) 3 == Var_163);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_ModeInfo_25_153;
                  MR_Word STATE_VARIABLE_ModeInfo_26_154;

                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_144, STATE_VARIABLE_ModeInfo_23_151, &STATE_VARIABLE_ModeInfo_25_153);
                  check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_25_153, &STATE_VARIABLE_ModeInfo_26_154);
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_144, STATE_VARIABLE_ModeInfo_26_154, &STATE_VARIABLE_ModeInfo_27_155);
                }
                else
                  STATE_VARIABLE_ModeInfo_27_155 = STATE_VARIABLE_ModeInfo_23_151;
                check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_81, Determinism_145, NonLocals_144, &Goals_140, &InstMaps_147, STATE_VARIABLE_ModeInfo_27_155, &STATE_VARIABLE_ModeInfo_28_156);
                hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_140, InstMaps_147, &ArmInstMaps_148);
                hlds__instmap__instmap_merge_5_p_0(NonLocals_144, ArmInstMaps_148, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_28_156, &STATE_VARIABLE_ModeInfo_31_159);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Goals_140));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", STATE_VARIABLE_ModeInfo_31_159, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word CanFail0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Cases_487;
              MR_Word STATE_VARIABLE_ModeInfo_25_496;
              MR_Word STATE_VARIABLE_ModeInfo_29_500;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_25_496);
              if ((Cases0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word InstMap_488;

                Cases_487 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                hlds__instmap__init_unreachable_1_p_0(&InstMap_488);
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_488, STATE_VARIABLE_ModeInfo_25_496, &STATE_VARIABLE_ModeInfo_29_500);
              }
              else
              {
                MR_Word NonLocals_491;
                MR_Word InstMaps_492;
                MR_Word ArmInstMaps_493;
                MR_Word STATE_VARIABLE_ModeInfo_26_497;

                NonLocals_491 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(Cases0_34, Var0_32, &Cases_487, &InstMaps_492, STATE_VARIABLE_ModeInfo_25_496, &STATE_VARIABLE_ModeInfo_26_497);
                hlds__instmap__make_arm_instmaps_for_cases_3_p_0(Cases_487, InstMaps_492, &ArmInstMaps_493);
                hlds__instmap__instmap_merge_5_p_0(NonLocals_491, ArmInstMaps_493, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_26_497, &STATE_VARIABLE_ModeInfo_29_500);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var0_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (CanFail0_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Cases_487));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", STATE_VARIABLE_ModeInfo_29_500, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word SubGoal0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Reason0_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word STATE_VARIABLE_ModeInfo_47_384;
                    MR_Word STATE_VARIABLE_ModeInfo_48_385;
                    MR_Word SubGoal_436;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_384);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_436, STATE_VARIABLE_ModeInfo_47_384, &STATE_VARIABLE_ModeInfo_48_385);
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_385, STATE_VARIABLE_ModeInfo_56);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_436));
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
                        MR_Word STATE_VARIABLE_ModeInfo_47_384;
                        MR_Word STATE_VARIABLE_ModeInfo_48_385;
                        MR_Word SubGoal_436;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_47_384);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_436, STATE_VARIABLE_ModeInfo_47_384, &STATE_VARIABLE_ModeInfo_48_385);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_48_385, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_436));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word TermVar_359 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 1)));
                        MR_Word FGT_360 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason0_40, (MR_Integer) 2)));

                        switch (FGT_360) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word LiveTermVar_361;
                              MR_Word STATE_VARIABLE_ModeInfo_64_401;
                              MR_Word STATE_VARIABLE_ModeInfo_67_404;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_64_401);
                              check_hlds__mode_info__mode_info_var_is_live_3_p_0(STATE_VARIABLE_ModeInfo_64_401, TermVar_359, &LiveTermVar_361);
                              switch (LiveTermVar_361) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    *GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[2]);
                                    STATE_VARIABLE_ModeInfo_67_404 = STATE_VARIABLE_ModeInfo_64_401;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word SubGoalInfo_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_82, (MR_Integer) 1)));
                                    MR_Word InstMapDelta_364;
                                    MR_Word Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal0_82, (MR_Integer) 0)));
                                    MR_Word TermVarInst_365;

                                    InstMapDelta_364 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(SubGoalInfo_363);
                                    succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(InstMapDelta_364, TermVar_359, &TermVarInst_365);
                                    if (succeeded)
                                    {
                                      MR_Word InstMap_366;
                                      MR_Word InstMap0_423;

                                      check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_64_401, &InstMap0_423);
                                      hlds__instmap__instmap_set_var_4_p_0(TermVar_359, TermVarInst_365, InstMap0_423, &InstMap_366);
                                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_366, STATE_VARIABLE_ModeInfo_64_401, &STATE_VARIABLE_ModeInfo_67_404);
                                    }
                                    else
                                    {
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
                                        return;
                                      }
                                    }
                                    *GoalExpr_8 = GoalExpr0_6;
                                  }
                                  break;
                              }
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", STATE_VARIABLE_ModeInfo_67_404, STATE_VARIABLE_ModeInfo_56);
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word STATE_VARIABLE_ModeInfo_57_394;
                              MR_Word STATE_VARIABLE_ModeInfo_58_395;
                              MR_Word SubGoal_431;

                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_57_394);
                              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_431, STATE_VARIABLE_ModeInfo_57_394, &STATE_VARIABLE_ModeInfo_58_395);
                              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", STATE_VARIABLE_ModeInfo_58_395, STATE_VARIABLE_ModeInfo_56);
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *GoalExpr_8 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_431));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "from_ground_term_initial");
                                return;
                              }
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word InstMap0_356;
                        MR_Word NonLocals_357;
                        MR_Word SubGoal_358;
                        MR_Word STATE_VARIABLE_ModeInfo_76_413;
                        MR_Word STATE_VARIABLE_ModeInfo_78_415;
                        MR_Word STATE_VARIABLE_ModeInfo_79_416;
                        MR_Word STATE_VARIABLE_ModeInfo_81_418;
                        MR_Word STATE_VARIABLE_ModeInfo_82_419;

                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_76_413);
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_76_413, &InstMap0_356);
                        NonLocals_357 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                        check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), NonLocals_357, STATE_VARIABLE_ModeInfo_76_413, &STATE_VARIABLE_ModeInfo_78_415);
                        check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_82, &SubGoal_358, STATE_VARIABLE_ModeInfo_78_415, &STATE_VARIABLE_ModeInfo_79_416);
                        check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), NonLocals_357, STATE_VARIABLE_ModeInfo_79_416, &STATE_VARIABLE_ModeInfo_81_418);
                        check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_356, STATE_VARIABLE_ModeInfo_81_418, &STATE_VARIABLE_ModeInfo_82_419);
                        check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", STATE_VARIABLE_ModeInfo_82_419, STATE_VARIABLE_ModeInfo_56);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubGoal_358));
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
              MR_Word Vars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));
              MR_Word Cond0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 2)));
              MR_Word Then0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 3)));
              MR_Word Else0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 4)));
              MR_Word NonLocals_241;
              MR_Word CondVars_242;
              MR_Word ThenVars_243;
              MR_Word ElseVars_244;
              MR_Word InstMap0_245;
              MR_Word CondVarList_246;
              MR_Word CondLiveVars_247;
              MR_Word CondInfo0_249;
              MR_Word CondDeltaInstMap0_250;
              MR_Word ChangedVars_251;
              MR_Word Cond_252;
              MR_Word InstMapCond_253;
              MR_Word Then_254;
              MR_Word InstMapThen_255;
              MR_Word Else_256;
              MR_Word InstMapElse_257;
              MR_Word ArmInstMaps_258;
              MR_Word STATE_VARIABLE_ModeInfo_38_261;
              MR_Word STATE_VARIABLE_ModeInfo_40_263;
              MR_Word STATE_VARIABLE_ModeInfo_41_264;
              MR_Word STATE_VARIABLE_ModeInfo_42_265;
              MR_Word STATE_VARIABLE_ModeInfo_43_266;
              MR_Word STATE_VARIABLE_ModeInfo_44_267;
              MR_Word STATE_VARIABLE_ModeInfo_45_268;
              MR_Word STATE_VARIABLE_ModeInfo_46_269;
              MR_Word STATE_VARIABLE_ModeInfo_48_271;
              MR_Word STATE_VARIABLE_ModeInfo_49_272;
              MR_Word STATE_VARIABLE_ModeInfo_50_273;
              MR_Word STATE_VARIABLE_ModeInfo_51_274;
              MR_Word STATE_VARIABLE_ModeInfo_52_275;
              MR_Word Var_276;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_280;
              MR_Word STATE_VARIABLE_ModeInfo_60_283;
              MR_Word Var_248;

              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_261);
              NonLocals_241 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
              CondVars_242 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Cond0_36);
              ThenVars_243 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Then0_37);
              ElseVars_244 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Else0_38);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_38_261, &InstMap0_245);
              check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), NonLocals_241, STATE_VARIABLE_ModeInfo_38_261, &STATE_VARIABLE_ModeInfo_40_263);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ElseVars_244, STATE_VARIABLE_ModeInfo_40_263, &STATE_VARIABLE_ModeInfo_41_264);
              parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, CondVars_242, &CondVarList_246);
              check_hlds__unique_modes__select_live_vars_3_p_0(CondVarList_246, STATE_VARIABLE_ModeInfo_41_264, &CondLiveVars_247);
              Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_36, (MR_Integer) 0)));
              CondInfo0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), Cond0_36, (MR_Integer) 1)));
              CondDeltaInstMap0_250 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(CondInfo0_249);
              check_hlds__unique_modes__select_changed_inst_vars_4_p_0(CondLiveVars_247, CondDeltaInstMap0_250, STATE_VARIABLE_ModeInfo_41_264, &ChangedVars_251);
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(ChangedVars_251, STATE_VARIABLE_ModeInfo_41_264, &STATE_VARIABLE_ModeInfo_42_265);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ElseVars_244, STATE_VARIABLE_ModeInfo_42_265, &STATE_VARIABLE_ModeInfo_43_266);
              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(ThenVars_243, STATE_VARIABLE_ModeInfo_43_266, &STATE_VARIABLE_ModeInfo_44_267);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Cond0_36, &Cond_252, STATE_VARIABLE_ModeInfo_44_267, &STATE_VARIABLE_ModeInfo_45_268);
              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(ThenVars_243, STATE_VARIABLE_ModeInfo_45_268, &STATE_VARIABLE_ModeInfo_46_269);
              check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), NonLocals_241, STATE_VARIABLE_ModeInfo_46_269, &STATE_VARIABLE_ModeInfo_48_271);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_48_271, &InstMapCond_253);
              succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMapCond_253);
              if (succeeded)
              {
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Then0_37, &Then_254, STATE_VARIABLE_ModeInfo_48_271, &STATE_VARIABLE_ModeInfo_49_272);
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_49_272, &InstMapThen_255);
              }
              else
              {
                Then_254 = hlds__make_goal__true_goal_0_f_0();
                InstMapThen_255 = InstMapCond_253;
                STATE_VARIABLE_ModeInfo_49_272 = STATE_VARIABLE_ModeInfo_48_271;
              }
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_245, STATE_VARIABLE_ModeInfo_49_272, &STATE_VARIABLE_ModeInfo_50_273);
              check_hlds__unique_modes__unique_modes_check_goal_4_p_0(Else0_38, &Else_256, STATE_VARIABLE_ModeInfo_50_273, &STATE_VARIABLE_ModeInfo_51_274);
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_51_274, &InstMapElse_257);
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap0_245, STATE_VARIABLE_ModeInfo_51_274, &STATE_VARIABLE_ModeInfo_52_275);
              {
                Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (Else_256));
                MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Then_254));
                MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (Var_278));
              }
              {
                Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_280, 0) = ((MR_Box) (InstMapElse_257));
                MR_hl_field(MR_mktag(1), Var_280, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (InstMapThen_255));
                MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) (Var_280));
              }
              hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Var_276, Var_277, &ArmInstMaps_258);
              hlds__instmap__instmap_merge_5_p_0(NonLocals_241, ArmInstMaps_258, (MR_Integer) 1, STATE_VARIABLE_ModeInfo_52_275, &STATE_VARIABLE_ModeInfo_60_283);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars0_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Cond_252));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Then_254));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Else_256));
              }
              check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", STATE_VARIABLE_ModeInfo_60_283, STATE_VARIABLE_ModeInfo_56);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ShortHand0_41)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_expr\'/5", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word GoalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 0)));
                    MR_Word Outer_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 1)));
                    MR_Word Inner_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 2)));
                    MR_Word MaybeOutputVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 3)));
                    MR_Word MainGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 4)));
                    MR_Word OrElseGoals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 5)));
                    MR_Word OrElseInners0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand0_41, (MR_Integer) 6)));
                    MR_Word MainGoal_449;
                    MR_Word OrElseGoals_450;
                    MR_Word ShortHand_460;
                    MR_Word STATE_VARIABLE_ModeInfo_38_463;
                    MR_Word STATE_VARIABLE_ModeInfo_49_474;

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_38_463);
                    if ((OrElseGoals0_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(MainGoal0_46, &MainGoal_449, STATE_VARIABLE_ModeInfo_38_463, &STATE_VARIABLE_ModeInfo_49_474);
                      OrElseGoals_450 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                    else
                    {
                      MR_Word NonLocals_453;
                      MR_Word Determinism_454;
                      MR_Word Goals0_456;
                      MR_Word Goals_457;
                      MR_Word InstMaps_458;
                      MR_Word ArmInstMaps_459;
                      MR_Word STATE_VARIABLE_ModeInfo_42_467;
                      MR_Word STATE_VARIABLE_ModeInfo_43_468;
                      MR_Word Var_478;
                      MR_Word Var_455;

                      NonLocals_453 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
                      Determinism_454 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
                      parse_tree__prog_data__determinism_components_3_p_0(Determinism_454, &Var_455, &Var_478);
                      succeeded = ((MR_Integer) 3 == Var_478);
                      if (succeeded)
                      {
                        MR_Word STATE_VARIABLE_ModeInfo_40_465;
                        MR_Word STATE_VARIABLE_ModeInfo_41_466;

                        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(NonLocals_453, STATE_VARIABLE_ModeInfo_38_463, &STATE_VARIABLE_ModeInfo_40_465);
                        check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(STATE_VARIABLE_ModeInfo_40_465, &STATE_VARIABLE_ModeInfo_41_466);
                        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(NonLocals_453, STATE_VARIABLE_ModeInfo_41_466, &STATE_VARIABLE_ModeInfo_42_467);
                      }
                      else
                        STATE_VARIABLE_ModeInfo_42_467 = STATE_VARIABLE_ModeInfo_38_463;
                      {
                        Goals0_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals0_456, 0) = ((MR_Box) (MainGoal0_46));
                        MR_hl_field(MR_mktag(1), Goals0_456, 1) = ((MR_Box) (OrElseGoals0_47));
                      }
                      check_hlds__unique_modes__unique_modes_check_disj_7_p_0(Goals0_456, Determinism_454, NonLocals_453, &Goals_457, &InstMaps_458, STATE_VARIABLE_ModeInfo_42_467, &STATE_VARIABLE_ModeInfo_43_468);
                      if ((Goals_457 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                          return;
                        }
                      }
                      else
                      {
                        MainGoal_449 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_457, (MR_Integer) 0)));
                        OrElseGoals_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_457, (MR_Integer) 1)));
                      }
                      hlds__instmap__make_arm_instmaps_for_goals_3_p_0(Goals_457, InstMaps_458, &ArmInstMaps_459);
                      hlds__instmap__instmap_merge_5_p_0(NonLocals_453, ArmInstMaps_459, (MR_Integer) 0, STATE_VARIABLE_ModeInfo_43_468, &STATE_VARIABLE_ModeInfo_49_474);
                    }
                    {
                      ShortHand_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 0) = ((MR_Box) (GoalType_42));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 1) = ((MR_Box) (Outer_43));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 2) = ((MR_Box) (Inner_44));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 3) = ((MR_Box) (MaybeOutputVars_45));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 4) = ((MR_Box) (MainGoal_449));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 5) = ((MR_Box) (OrElseGoals_450));
                      MR_hl_field(MR_mktag(1), ShortHand_460, 6) = ((MR_Box) (OrElseInners0_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ShortHand_460));
                    }
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", STATE_VARIABLE_ModeInfo_49_474, STATE_VARIABLE_ModeInfo_56);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 0)));
                    MR_Word ResultVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 1)));
                    MR_Word SubGoal_51;
                    MR_Word ShortHand_52;
                    MR_Word STATE_VARIABLE_ModeInfo_62_62;
                    MR_Word STATE_VARIABLE_ModeInfo_63_63;
                    MR_Word SubGoal0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand0_41, (MR_Integer) 2)));

                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", STATE_VARIABLE_ModeInfo_0_55, &STATE_VARIABLE_ModeInfo_62_62);
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(SubGoal0_83, &SubGoal_51, STATE_VARIABLE_ModeInfo_62_62, &STATE_VARIABLE_ModeInfo_63_63);
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
                    check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", STATE_VARIABLE_ModeInfo_63_63, STATE_VARIABLE_ModeInfo_56);
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
    MR_Word GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0)));
    MR_Word GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1)));
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

        Var_36 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
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

        Var_56 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
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
    MR_Word Var_12;
    MR_Word Var_16;

    parse_tree__prog_data__determinism_components_3_p_0(DisjDetism_7, &Var_10, &DisjMaxSolns_11);
    Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 0)));
    GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal0_6, (MR_Integer) 1)));
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
    MR_Word ModuleInfo_63;
    MR_Word InitialInsts_64;
    MR_Word InstVarSub_65;
    MR_Word FinalInsts0_66;
    MR_Word FinalInsts_67;
    MR_Word NewArgVars_68;
    MR_Word ExtraGoals_69;
    MR_Word STATE_VARIABLE_ModeInfo_25_72;
    MR_Word STATE_VARIABLE_ModeInfo_26_73;

    check_hlds__mode_info__mode_info_get_errors_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &OldErrors_14);
    check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_0_37, &InstMap0_15);
    check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ModeInfo_0_37, &STATE_VARIABLE_ModeInfo_40_40);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_16);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_16, PredId_8, ProcId0_9, &PredInfo_17, &ProcInfo_18);
    check_hlds__modecheck_util__compute_arg_offset_2_p_0(PredInfo_17, &ArgOffset_19);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_18, &ProcArgModes0_20);
    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_18, &InterfaceDeterminism_21);
    hlds__hlds_pred__proc_info_never_succeeds_2_p_0(ProcInfo_18, &NeverSucceeds_22);
    check_hlds__mode_info__mode_info_get_module_info_2_p_0(STATE_VARIABLE_ModeInfo_40_40, &ModuleInfo_63);
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(ModuleInfo_63, ProcArgModes0_20, &InitialInsts_64);
    check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(ArgVars_10, InitialInsts_64, ArgOffset_19, &InstVarSub_65, STATE_VARIABLE_ModeInfo_40_40, &STATE_VARIABLE_ModeInfo_25_72);
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(ModuleInfo_63, ProcArgModes0_20, &FinalInsts0_66);
    parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(InstVarSub_65, FinalInsts0_66, &FinalInsts_67);
    check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(ArgVars_10, InitialInsts_64, FinalInsts_67, ArgOffset_19, &NewArgVars_68, &ExtraGoals_69, STATE_VARIABLE_ModeInfo_25_72, &STATE_VARIABLE_ModeInfo_26_73);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (NewArgVars_68)), ((MR_Box) (ArgVars_10)));
    if (succeeded)
      succeeded = (ExtraGoals_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(succeeded))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
        return;
      }
    }
    switch (NeverSucceeds_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_80;
          MR_Word Var_71;

          parse_tree__prog_data__determinism_components_3_p_0(InterfaceDeterminism_21, &Var_71, &Var_80);
          succeeded = ((MR_Integer) 3 == Var_80);
          if (succeeded)
          {
            MR_Word FullInstMap0_84;

            check_hlds__mode_info__mode_info_get_instmap_2_p_0(STATE_VARIABLE_ModeInfo_26_73, &FullInstMap0_84);
            succeeded = hlds__instmap__instmap_is_reachable_1_p_0(FullInstMap0_84);
            if (succeeded)
            {
              MR_Word AllVars_85;
              MR_Word NondetLiveVars_86;

              hlds__instmap__instmap_vars_list_2_p_0(FullInstMap0_84, &AllVars_85);
              check_hlds__unique_modes__select_nondet_live_vars_3_p_0(AllVars_85, STATE_VARIABLE_ModeInfo_26_73, &NondetLiveVars_86);
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(NondetLiveVars_86, STATE_VARIABLE_ModeInfo_26_73, &STATE_VARIABLE_ModeInfo_41_41);
            }
            else
              STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_73;
          }
          else
            STATE_VARIABLE_ModeInfo_41_41 = STATE_VARIABLE_ModeInfo_26_73;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word InstMap_70;

          hlds__instmap__init_unreachable_1_p_0(&InstMap_70);
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(InstMap_70, STATE_VARIABLE_ModeInfo_26_73, &STATE_VARIABLE_ModeInfo_41_41);
        }
        break;
    }
    hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(ProcInfo_18, &ModeErrors_23);
    if ((ModeErrors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_ModeInfo_43_43 = STATE_VARIABLE_ModeInfo_41_41;
    else
    {
      MR_Word WaitingVars_26;
      MR_Word InstMap_27;
      MR_Word ArgInsts_28;
      MR_Word Var_42;

      WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ArgVars_10);
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
    if ((Errors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
            succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (NewArgVars_35)), ((MR_Box) (ArgVars_10)));
            if (succeeded)
              succeeded = (ExtraGoals_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (!(succeeded))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call\'/7", (MR_String) "call to implied mode\?");
                return;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AllErrors_33;

            *ProcId_12 = ProcId0_9;
            mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, OldErrors_14, Errors_29, &AllErrors_33);
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ModeInfo_3 = STATE_VARIABLE_ModeInfo_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
        TypeInfo_25_35 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
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
                MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst1_22, (MR_Integer) 0)));
                MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), Inst1_22, (MR_Integer) 1)));

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
                    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1)));
                    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 2)));
                    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 3)));

                    succeeded = (Var_31 == (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 1)));
                    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_22, (MR_Integer) 2)));

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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
