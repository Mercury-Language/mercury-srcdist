/*
** Automatically generated from `unique_modes.m'
** by the Mercury compiler,
** version rotd-2017-07-24
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.unique_modes. */
/* :- implementation. */

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
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
  MR_Word check_hlds__unique_modes__LambdaHeadVar__1_20,
  MR_Word * check_hlds__unique_modes__LambdaHeadVar__2_21);

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box check_hlds__unique_modes__closure_arg,
  MR_Box check_hlds__unique_modes__wrapper_arg_1,
  MR_Box * check_hlds__unique_modes__wrapper_arg_2);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word check_hlds__unique_modes__Goals0_7,
  MR_Word check_hlds__unique_modes__NonLocalVarsBag_8,
  MR_Word * check_hlds__unique_modes__Goals_9,
  MR_Word * check_hlds__unique_modes__Instmaps_10,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_13);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word * check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__DisjDetism_2,
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
  MR_Box check_hlds__unique_modes__closure_arg,
  MR_Box check_hlds__unique_modes__wrapper_arg_1);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
  MR_Word check_hlds__unique_modes__PredId_8,
  MR_Integer check_hlds__unique_modes__ProcId0_9,
  MR_Word check_hlds__unique_modes__ArgVars_10,
  MR_Word check_hlds__unique_modes__GoalInfo_11,
  MR_Integer * check_hlds__unique_modes__ProcId_12,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4);

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__ModeInfo_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3);

static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3);

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__ModeInfo_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3);


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
  MR_Word check_hlds__unique_modes__LambdaHeadVar__1_20,
  MR_Word * check_hlds__unique_modes__LambdaHeadVar__2_21)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Integer check_hlds__unique_modes__Multiplicity_9;

    *check_hlds__unique_modes__LambdaHeadVar__2_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__LambdaHeadVar__1_20, (MR_Integer) 0)));
    check_hlds__unique_modes__Multiplicity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__LambdaHeadVar__1_20, (MR_Integer) 1)));
    check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__Multiplicity_9 > (MR_Integer) 1);
    return check_hlds__unique_modes__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0_1(
  MR_Box check_hlds__unique_modes__closure_arg,
  MR_Box check_hlds__unique_modes__wrapper_arg_1,
  MR_Box * check_hlds__unique_modes__wrapper_arg_2)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Box check_hlds__unique_modes__closure = check_hlds__unique_modes__closure_arg;
    MR_Word check_hlds__unique_modes__conv0_LambdaHeadVar__2_21;

    {
      check_hlds__unique_modes__succeeded = check_hlds__unique_modes__IntroducedFrom__pred__unique_modes_check_par_conj_0__947__1_2_p_0(((MR_Word) check_hlds__unique_modes__wrapper_arg_1), &check_hlds__unique_modes__conv0_LambdaHeadVar__2_21);
    }
    if (check_hlds__unique_modes__succeeded)
      {
        *check_hlds__unique_modes__wrapper_arg_2 = ((MR_Box) (check_hlds__unique_modes__conv0_LambdaHeadVar__2_21));
        check_hlds__unique_modes__succeeded = MR_TRUE;
      }
    return check_hlds__unique_modes__succeeded;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_6_p_0(
  MR_Word check_hlds__unique_modes__Goals0_7,
  MR_Word check_hlds__unique_modes__NonLocalVarsBag_8,
  MR_Word * check_hlds__unique_modes__Goals_9,
  MR_Word * check_hlds__unique_modes__Instmaps_10,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes__TypeInfo_27_39 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14_14;
    MR_Word check_hlds__unique_modes__NonLocalVarsList_20;
    MR_Word check_hlds__unique_modes__SharedList_24;
    MR_Word check_hlds__unique_modes__InstMap0_25;
    MR_Word check_hlds__unique_modes__VarInsts_26;
    MR_Word check_hlds__unique_modes__ModuleInfo0_27;
    MR_Word check_hlds__unique_modes__SharedVarInsts_28;
    MR_Word check_hlds__unique_modes__ModuleInfo1_29;
    MR_Word check_hlds__unique_modes__InstMap1_30;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_35;

    {
      mercury__bag__to_assoc_list_2_p_0(check_hlds__unique_modes__TypeInfo_27_39, check_hlds__unique_modes__NonLocalVarsBag_8, &check_hlds__unique_modes__NonLocalVarsList_20);
    }
    {
      mercury__list__filter_map_3_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_2[0], check_hlds__unique_modes__TypeInfo_27_39, (MR_Word) &check_hlds__unique_modes_scalar_common_2[3], check_hlds__unique_modes__NonLocalVarsList_20, &check_hlds__unique_modes__SharedList_24);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__unique_modes__InstMap0_25);
    }
    {
      hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__unique_modes__InstMap0_25, check_hlds__unique_modes__SharedList_24, &check_hlds__unique_modes__VarInsts_26);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__unique_modes__ModuleInfo0_27);
    }
    {
      check_hlds__inst_util__make_shared_inst_list_4_p_0(check_hlds__unique_modes__VarInsts_26, &check_hlds__unique_modes__SharedVarInsts_28, check_hlds__unique_modes__ModuleInfo0_27, &check_hlds__unique_modes__ModuleInfo1_29);
    }
    {
      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__unique_modes__ModuleInfo1_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_35);
    }
    {
      hlds__instmap__instmap_set_vars_corresponding_4_p_0(check_hlds__unique_modes__SharedList_24, check_hlds__unique_modes__SharedVarInsts_28, check_hlds__unique_modes__InstMap0_25, &check_hlds__unique_modes__InstMap1_30);
    }
    {
      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap1_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_35, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14_14);
    }
    {
      check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(check_hlds__unique_modes__Goals0_7, check_hlds__unique_modes__Goals_9, check_hlds__unique_modes__Instmaps_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_13);
    }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word * check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;

    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unique_modes__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4;
      }
    else
      {
        MR_Word check_hlds__unique_modes__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unique_modes__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unique_modes__Goal_11;
        MR_Word check_hlds__unique_modes__Goals_12;
        MR_Word check_hlds__unique_modes__InstMap_13;
        MR_Word check_hlds__unique_modes__NonLocals_14;
        MR_Word check_hlds__unique_modes__InstMaps_15;
        MR_Word check_hlds__unique_modes__InstMap0_17;
        MR_Word check_hlds__unique_modes__Var_20;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_22;

        {
          check_hlds__unique_modes__NonLocals_14 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Goal0_9);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__unique_modes__InstMap0_17);
        }
        {
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_9, &check_hlds__unique_modes__Goal_11, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__InstMap_13);
        }
        {
          check_hlds__unique_modes__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Var_20, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_13));
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Var_20, 1) = ((MR_Box) (check_hlds__unique_modes__NonLocals_14));
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_21, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_22);
        }
        {
          check_hlds__unique_modes__unique_modes_check_par_conj_1_5_p_0(check_hlds__unique_modes__Goals0_10, &check_hlds__unique_modes__Goals_12, &check_hlds__unique_modes__InstMaps_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_15));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;

    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5;
      }
    else
      {
        MR_Word check_hlds__unique_modes__Case0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unique_modes__Cases0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unique_modes__Case_14;
        MR_Word check_hlds__unique_modes__Cases_15;
        MR_Word check_hlds__unique_modes__InstMap_16;
        MR_Word check_hlds__unique_modes__InstMaps_17;
        MR_Word check_hlds__unique_modes__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 0)));
        MR_Word check_hlds__unique_modes__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 1)));
        MR_Word check_hlds__unique_modes__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case0_11, (MR_Integer) 2)));
        MR_Word check_hlds__unique_modes__InstMap0_22;
        MR_Word check_hlds__unique_modes__InstMap1_23;
        MR_Word check_hlds__unique_modes__Goal1_24;
        MR_Word check_hlds__unique_modes__Goal_25;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__InstMap0_22);
        }
        {
          check_hlds__modecheck_util__modecheck_functors_test_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__MainConsId_19, check_hlds__unique_modes__OtherConsIds_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_5, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__InstMap1_23);
        }
        {
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap1_23);
        }
        if (check_hlds__unique_modes__succeeded)
          {
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_21, &check_hlds__unique_modes__Goal1_24, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29);
          }
        else
          {
            {
              check_hlds__unique_modes__Goal1_24 = hlds__make_goal__true_goal_0_f_0();
            }
            check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_28;
          }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__InstMap_16);
        }
        {
          check_hlds__mode_util__fixup_instmap_switch_var_5_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__InstMap_16, check_hlds__unique_modes__Goal1_24, &check_hlds__unique_modes__Goal_25);
        }
        {
          check_hlds__unique_modes__Case_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 0) = ((MR_Box) (check_hlds__unique_modes__MainConsId_19));
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 1) = ((MR_Box) (check_hlds__unique_modes__OtherConsIds_20));
          MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Case_14, 2) = ((MR_Box) (check_hlds__unique_modes__Goal_25));
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_29, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30);
        }
        {
          check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_12, check_hlds__unique_modes__HeadVar__2_2, &check_hlds__unique_modes__Cases_15, &check_hlds__unique_modes__InstMaps_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Case_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Cases_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_17));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_disj_7_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__DisjDetism_2,
  MR_Word check_hlds__unique_modes__DisjNonLocals_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4,
  MR_Word * check_hlds__unique_modes__HeadVar__5_5,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;

    if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6;
      }
    else
      {
        MR_Word check_hlds__unique_modes__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__unique_modes__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__unique_modes__Goal_17;
        MR_Word check_hlds__unique_modes__Goals_18;
        MR_Word check_hlds__unique_modes__InstMap_19;
        MR_Word check_hlds__unique_modes__InstMaps_20;
        MR_Word check_hlds__unique_modes__InstMap0_22;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__InstMap0_22);
        }
        {
          check_hlds__unique_modes__prepare_for_disjunct_5_p_0(check_hlds__unique_modes__Goal0_13, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25);
        }
        {
          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_13, &check_hlds__unique_modes__Goal_17, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_25, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__InstMap_19);
        }
        {
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_22, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_26, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27);
        }
        {
          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_14, check_hlds__unique_modes__DisjDetism_2, check_hlds__unique_modes__DisjNonLocals_3, &check_hlds__unique_modes__Goals_18, &check_hlds__unique_modes__InstMaps_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_27, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__unique_modes__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__InstMap_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__InstMaps_20));
        }
      }
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_conj_5_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unique_modes__succeeded;

        if ((check_hlds__unique_modes__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4;
          }
        else
          {
            MR_Word check_hlds__unique_modes__Goal0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__unique_modes__ConjGoals_15;
            MR_Word check_hlds__unique_modes__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Var_24;
            MR_Word check_hlds__unique_modes__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_11, (MR_Integer) 1)));

            check_hlds__unique_modes__succeeded = ((((MR_tag((MR_Word) check_hlds__unique_modes__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (check_hlds__unique_modes__succeeded)
              {
                check_hlds__unique_modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_20, (MR_Integer) 1)));
                check_hlds__unique_modes__ConjGoals_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_20, (MR_Integer) 2)));
                check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__HeadVar__1_1 == check_hlds__unique_modes__Var_24);
              }
            if (check_hlds__unique_modes__succeeded)
              {
                MR_Word check_hlds__unique_modes__Goals1_17;

                {
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__unique_modes__ConjGoals_15, check_hlds__unique_modes__Goals0_12, &check_hlds__unique_modes__Goals1_17);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__unique_modes__next_value_of_HeadVar__2_2 = check_hlds__unique_modes__Goals1_17;

                  check_hlds__unique_modes__HeadVar__2_2 = check_hlds__unique_modes__next_value_of_HeadVar__2_2;
                }
                continue;
              }
            else
              {
                MR_Word check_hlds__unique_modes__Goal_30;
                MR_Word check_hlds__unique_modes__Goals_31;
                MR_Word check_hlds__unique_modes__NonLocals_33;
                MR_Word check_hlds__unique_modes__InstMap_34;
                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_35;
                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_36;

                {
                  check_hlds__unique_modes__NonLocals_33 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Goal0_11);
                }
                {
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_35);
                }
                {
                  check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Goal0_11, &check_hlds__unique_modes__Goal_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_35, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_36);
                }
                {
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_36, &check_hlds__unique_modes__InstMap_34);
                }
                {
                  check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__unique_modes__InstMap_34);
                }
                if (check_hlds__unique_modes__succeeded)
                  {
                    {
                      check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__unique_modes__Goals0_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);
                    }
                    check_hlds__unique_modes__Goals_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                else
                  {
                    check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__HeadVar__1_1, check_hlds__unique_modes__Goals0_12, &check_hlds__unique_modes__Goals_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_5);
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Goal_30));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_31));
                }
              }
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0_1(
  MR_Box check_hlds__unique_modes__closure_arg,
  MR_Box check_hlds__unique_modes__wrapper_arg_1)
{
  {
    MR_Box check_hlds__unique_modes__wrapper_arg_2;
    MR_Box check_hlds__unique_modes__closure = check_hlds__unique_modes__closure_arg;
    MR_Word check_hlds__unique_modes__conv0_HeadVar__2_2;

    {
      check_hlds__unique_modes__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__unique_modes__wrapper_arg_1));
    }
    check_hlds__unique_modes__wrapper_arg_2 = ((MR_Box) (check_hlds__unique_modes__conv0_HeadVar__2_2));
    return check_hlds__unique_modes__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(
  MR_Word check_hlds__unique_modes__GoalExpr0_6,
  MR_Word check_hlds__unique_modes__GoalInfo0_7,
  MR_Word * check_hlds__unique_modes__GoalExpr_8,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;

    switch (MR_tag((MR_Word) check_hlds__unique_modes__GoalExpr0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__unique_modes__SubGoal0_39 = (MR_Word) MR_body(((MR_Word) check_hlds__unique_modes__GoalExpr0_6), (MR_Integer) 0);
          MR_Word check_hlds__unique_modes__InstMap0_294;
          MR_Word check_hlds__unique_modes__NonLocals_295;
          MR_Word check_hlds__unique_modes__NonLocalsList_296;
          MR_Word check_hlds__unique_modes__LiveNonLocals_297;
          MR_Word check_hlds__unique_modes__LiveVars0_298;
          MR_Word check_hlds__unique_modes__SubGoal_299;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_302;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_303;
          MR_Word check_hlds__unique_modes__Var_304;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_305;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_307;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_308;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_310;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_311;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_312;

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_302);
          }
          {
            check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_302, &check_hlds__unique_modes__InstMap0_294);
          }
          {
            check_hlds__unique_modes__NonLocals_295 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
          }
          {
            parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__NonLocals_295, &check_hlds__unique_modes__NonLocalsList_296);
          }
          {
            check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__NonLocalsList_296, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_302, &check_hlds__unique_modes__LiveNonLocals_297);
          }
          {
            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__LiveNonLocals_297, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_302, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_303);
          }
          {
            check_hlds__mode_info__mode_info_get_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_303, &check_hlds__unique_modes__LiveVars0_298);
          }
          {
            check_hlds__unique_modes__Var_304 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
          }
          {
            check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__Var_304, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_303, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_305);
          }
          {
            check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_295, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_305, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_307);
          }
          {
            check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_39, &check_hlds__unique_modes__SubGoal_299, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_307, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_308);
          }
          {
            check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__NonLocals_295, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_308, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_310);
          }
          {
            check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__unique_modes__LiveVars0_298, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_310, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_311);
          }
          {
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_294, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_311, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_312);
          }
          *check_hlds__unique_modes__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__unique_modes__SubGoal_299);
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "not", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_312, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unique_modes__LHS0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
          MR_Word check_hlds__unique_modes__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
          MR_Word check_hlds__unique_modes__Unification0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
          MR_Word check_hlds__unique_modes__UnifyContext0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_515;
          MR_Word check_hlds__unique_modes__Var_516;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_517;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_518;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_519;
          MR_Word check_hlds__unique_modes___UniModes0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_515);
          }
          {
            check_hlds__unique_modes__Var_516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Var_516, 0) = ((MR_Box) (check_hlds__unique_modes__UnifyContext0_14));
          }
          {
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__Var_516, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_515, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_517);
          }
          {
            check_hlds__modecheck_unify__modecheck_unification_8_p_0(check_hlds__unique_modes__LHS0_10, check_hlds__unique_modes__RHS0_11, check_hlds__unique_modes__Unification0_13, check_hlds__unique_modes__UnifyContext0_14, check_hlds__unique_modes__GoalInfo0_7, check_hlds__unique_modes__GoalExpr_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_517, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_518);
          }
          {
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_518, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_519);
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "unify", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_24_519, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__unique_modes__PredId0_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)));
          MR_Integer check_hlds__unique_modes__ProcId0_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
          MR_Word check_hlds__unique_modes__ArgVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
          MR_Word check_hlds__unique_modes__Builtin0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
          MR_Word check_hlds__unique_modes__MaybeUnifyContext0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
          MR_Word check_hlds__unique_modes__SymName0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
          MR_String check_hlds__unique_modes__PredNameString_329;
          MR_String check_hlds__unique_modes__CallString_330;
          MR_Word check_hlds__unique_modes__CallId_331;
          MR_Integer check_hlds__unique_modes__ProcId_332;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_335;
          MR_Word check_hlds__unique_modes__Var_336;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_337;
          MR_Word check_hlds__unique_modes__Var_338;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_339;
          MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_340;

          {
            check_hlds__unique_modes__PredNameString_329 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__unique_modes__SymName0_20);
          }
          {
            mercury__string__append_3_p_2((MR_String) "call ", check_hlds__unique_modes__PredNameString_329, &check_hlds__unique_modes__CallString_330);
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, check_hlds__unique_modes__CallString_330, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_335);
          }
          {
            check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_335, check_hlds__unique_modes__PredId0_15, &check_hlds__unique_modes__CallId_331);
          }
          {
            check_hlds__unique_modes__Var_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Var_338, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_331));
          }
          {
            check_hlds__unique_modes__Var_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_336, 0) = ((MR_Box) (check_hlds__unique_modes__Var_338));
          }
          {
            check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__Var_336, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_335, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_337);
          }
          {
            check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_15, check_hlds__unique_modes__ProcId0_16, check_hlds__unique_modes__ArgVars0_17, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_332, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_30_337, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_339);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__unique_modes__GoalExpr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__unique_modes__PredId0_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__unique_modes__ProcId_332));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__unique_modes__ArgVars0_17));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__unique_modes__Builtin0_18));
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__unique_modes__MaybeUnifyContext0_19));
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__unique_modes__SymName0_20));
          }
          {
            check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_32_339, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_340);
          }
          {
            check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_33_340, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__unique_modes__GenericCall0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__unique_modes__Detism0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
              MR_Word check_hlds__unique_modes__ArgVars0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__unique_modes__GenericCallId_173;
              MR_Word check_hlds__unique_modes__CallId_174;
              MR_Integer check_hlds__unique_modes__ArgOffset_181;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_190;
              MR_Word check_hlds__unique_modes__Var_191;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_192;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_195;
              MR_Word check_hlds__unique_modes__ModuleInfo_208;
              MR_Word check_hlds__unique_modes__InitialInsts_209;
              MR_Word check_hlds__unique_modes__InstVarSub_210;
              MR_Word check_hlds__unique_modes__FinalInsts0_211;
              MR_Word check_hlds__unique_modes__FinalInsts_212;
              MR_Word check_hlds__unique_modes__NewArgVars_213;
              MR_Word check_hlds__unique_modes__ExtraGoals_214;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_217;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218;
              MR_Word check_hlds__unique_modes__MaybeRegTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
              MR_Word check_hlds__unique_modes__Var_199;
              MR_Word check_hlds__unique_modes__Var_175;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_190);
              }
              {
                hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__unique_modes__GenericCall0_21, &check_hlds__unique_modes__GenericCallId_173);
              }
              {
                check_hlds__unique_modes__CallId_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__CallId_174, 0) = ((MR_Box) (check_hlds__unique_modes__GenericCallId_173));
              }
              {
                check_hlds__unique_modes__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_191, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_174));
              }
              {
                check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__Var_191, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_190, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_192);
              }
              switch (MR_tag((MR_Word) check_hlds__unique_modes__GenericCall0_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unique_modes__ArgOffset_181 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  check_hlds__unique_modes__ArgOffset_181 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  check_hlds__unique_modes__ArgOffset_181 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  check_hlds__unique_modes__ArgOffset_181 = (MR_Integer) 0;
                  break;
              }
              {
                check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_192, &check_hlds__unique_modes__ModuleInfo_208);
              }
              {
                check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_208, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__InitialInsts_209);
              }
              {
                check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_209, check_hlds__unique_modes__ArgOffset_181, &check_hlds__unique_modes__InstVarSub_210, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_37_192, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_217);
              }
              {
                check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_208, check_hlds__unique_modes__ArgModes0_22, &check_hlds__unique_modes__FinalInsts0_211);
              }
              {
                parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_210, check_hlds__unique_modes__FinalInsts0_211, &check_hlds__unique_modes__FinalInsts_212);
              }
              {
                check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars0_78, check_hlds__unique_modes__InitialInsts_209, check_hlds__unique_modes__FinalInsts_212, check_hlds__unique_modes__ArgOffset_181, &check_hlds__unique_modes__NewArgVars_213, &check_hlds__unique_modes__ExtraGoals_214, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_217, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218);
              }
              {
                check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_213)), ((MR_Box) (check_hlds__unique_modes__ArgVars0_78)));
              }
              if (check_hlds__unique_modes__succeeded)
                check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_214 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__unique_modes__succeeded)
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
                    return;
                  }
                }
              {
                parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__Var_175, &check_hlds__unique_modes__Var_199);
              }
              check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__Var_199);
              if (check_hlds__unique_modes__succeeded)
                {
                  MR_Word check_hlds__unique_modes__InstMap_215;

                  {
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_215);
                  }
                  {
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_215, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194);
                  }
                }
              else
                {
                  MR_Word check_hlds__unique_modes__Var_225;
                  MR_Word check_hlds__unique_modes__Var_216;

                  {
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism0_24, &check_hlds__unique_modes__Var_216, &check_hlds__unique_modes__Var_225);
                  }
                  check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_225);
                  if (check_hlds__unique_modes__succeeded)
                    {
                      MR_Word check_hlds__unique_modes__FullInstMap0_229;

                      {
                        check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218, &check_hlds__unique_modes__FullInstMap0_229);
                      }
                      {
                        check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_229);
                      }
                      if (check_hlds__unique_modes__succeeded)
                        {
                          MR_Word check_hlds__unique_modes__AllVars_230;
                          MR_Word check_hlds__unique_modes__NondetLiveVars_231;

                          {
                            hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_229, &check_hlds__unique_modes__AllVars_230);
                          }
                          {
                            check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_230, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218, &check_hlds__unique_modes__NondetLiveVars_231);
                          }
                          {
                            check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_231, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194);
                          }
                        }
                      else
                        check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218;
                    }
                  else
                    check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_218;
                }
              *check_hlds__unique_modes__GoalExpr_8 = check_hlds__unique_modes__GoalExpr0_6;
              {
                check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_39_194, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_195);
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "generic_call", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_195, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__unique_modes__Attributes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
              MR_Word check_hlds__unique_modes__ExtraArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 5)));
              MR_Word check_hlds__unique_modes__MaybeTraceRuntimeCond0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 6)));
              MR_Word check_hlds__unique_modes__PragmaCode0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 7)));
              MR_Word check_hlds__unique_modes__PredId0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
              MR_Integer check_hlds__unique_modes__ProcId0_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__unique_modes__CallId_98;
              MR_Word check_hlds__unique_modes__ArgVars_99;
              MR_Integer check_hlds__unique_modes__ProcId_100;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103;
              MR_Word check_hlds__unique_modes__Var_104;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105;
              MR_Word check_hlds__unique_modes__Var_106;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103);
              }
              {
                check_hlds__mode_info__mode_info_get_call_id_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, check_hlds__unique_modes__PredId0_79, &check_hlds__unique_modes__CallId_98);
              }
              {
                check_hlds__unique_modes__Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Var_106, 0) = ((MR_Box) (check_hlds__unique_modes__CallId_98));
              }
              {
                check_hlds__unique_modes__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_104, 0) = ((MR_Box) (check_hlds__unique_modes__Var_106));
              }
              {
                check_hlds__mode_info__mode_info_set_call_context_3_p_0(check_hlds__unique_modes__Var_104, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_103, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105);
              }
              {
                check_hlds__unique_modes__ArgVars_99 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__unique_modes_scalar_common_1[0], (MR_Word) &check_hlds__unique_modes_scalar_common_2[1], check_hlds__unique_modes__Args0_26);
              }
              {
                check_hlds__unique_modes__unique_modes_check_call_7_p_0(check_hlds__unique_modes__PredId0_79, check_hlds__unique_modes__ProcId0_80, check_hlds__unique_modes__ArgVars_99, check_hlds__unique_modes__GoalInfo0_7, &check_hlds__unique_modes__ProcId_100, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_105, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__unique_modes__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Attributes0_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__PredId0_79));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__ProcId_100));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Args0_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (check_hlds__unique_modes__ExtraArgs0_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (check_hlds__unique_modes__MaybeTraceRuntimeCond0_28));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (check_hlds__unique_modes__PragmaCode0_29));
              }
              {
                check_hlds__mode_info__mode_info_unset_call_context_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_34_108, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109);
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "foreign_proc", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_35_109, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__unique_modes__GoalType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__Goals0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__unique_modes__Goals_123;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_128;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_130;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_128);
              }
              if ((check_hlds__unique_modes__Goals0_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  check_hlds__unique_modes__Goals_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_130 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_128;
                }
              else
                {
                  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_129;

                  {
                    check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__unique_modes__GoalType0_30, check_hlds__unique_modes__Goals0_31, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_17_128, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_129);
                  }
                  {
                    check_hlds__unique_modes__unique_modes_check_conj_5_p_0(check_hlds__unique_modes__GoalType0_30, check_hlds__unique_modes__Goals0_31, &check_hlds__unique_modes__Goals_123, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_129, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_130);
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__unique_modes__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalType0_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Goals_123));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "*conj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_130, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__unique_modes__Goals0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__Goals_140;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_151;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_159;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_151);
              }
              if ((check_hlds__unique_modes__Goals0_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__unique_modes__InstMap_141;

                  check_hlds__unique_modes__Goals_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_141);
                  }
                  {
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_141, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_151, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_159);
                  }
                }
              else
                {
                  MR_Word check_hlds__unique_modes__NonLocals_144;
                  MR_Word check_hlds__unique_modes__Determinism_145;
                  MR_Word check_hlds__unique_modes__InstMaps_147;
                  MR_Word check_hlds__unique_modes__ArmInstMaps_148;
                  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_155;
                  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_156;
                  MR_Word check_hlds__unique_modes__Var_163;
                  MR_Word check_hlds__unique_modes__Var_146;

                  {
                    check_hlds__unique_modes__NonLocals_144 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                  }
                  {
                    check_hlds__unique_modes__Determinism_145 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                  }
                  {
                    parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_145, &check_hlds__unique_modes__Var_146, &check_hlds__unique_modes__Var_163);
                  }
                  check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_163);
                  if (check_hlds__unique_modes__succeeded)
                    {
                      MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_153;
                      MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_154;

                      {
                        check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_144, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_151, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_153);
                      }
                      {
                        check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_153, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_154);
                      }
                      {
                        check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_144, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_154, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_155);
                      }
                    }
                  else
                    check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_155 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_151;
                  {
                    check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_81, check_hlds__unique_modes__Determinism_145, check_hlds__unique_modes__NonLocals_144, &check_hlds__unique_modes__Goals_140, &check_hlds__unique_modes__InstMaps_147, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_27_155, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_156);
                  }
                  {
                    hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_140, check_hlds__unique_modes__InstMaps_147, &check_hlds__unique_modes__ArmInstMaps_148);
                  }
                  {
                    hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_144, check_hlds__unique_modes__ArmInstMaps_148, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_28_156, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_159);
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__unique_modes__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Goals_140));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "disj", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_31_159, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__unique_modes__Var0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__CanFail0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__unique_modes__Cases0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__unique_modes__Cases_487;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_496;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_500;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_496);
              }
              if ((check_hlds__unique_modes__Cases0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__unique_modes__InstMap_488;

                  check_hlds__unique_modes__Cases_487 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_488);
                  }
                  {
                    check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_488, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_496, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_500);
                  }
                }
              else
                {
                  MR_Word check_hlds__unique_modes__NonLocals_491;
                  MR_Word check_hlds__unique_modes__InstMaps_492;
                  MR_Word check_hlds__unique_modes__ArmInstMaps_493;
                  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_497;

                  {
                    check_hlds__unique_modes__NonLocals_491 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                  }
                  {
                    check_hlds__unique_modes__unique_modes_check_case_list_6_p_0(check_hlds__unique_modes__Cases0_34, check_hlds__unique_modes__Var0_32, &check_hlds__unique_modes__Cases_487, &check_hlds__unique_modes__InstMaps_492, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_496, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_497);
                  }
                  {
                    hlds__instmap__make_arm_instmaps_for_cases_3_p_0(check_hlds__unique_modes__Cases_487, check_hlds__unique_modes__InstMaps_492, &check_hlds__unique_modes__ArmInstMaps_493);
                  }
                  {
                    hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_491, check_hlds__unique_modes__ArmInstMaps_493, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_497, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_500);
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__unique_modes__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Var0_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__CanFail0_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Cases_487));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "switch", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_29_500, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word check_hlds__unique_modes__Reason0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__SubGoal0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) check_hlds__unique_modes__Reason0_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384;
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385;
                    MR_Word check_hlds__unique_modes__SubGoal_436;

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384);
                    }
                    {
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_82, &check_hlds__unique_modes__SubGoal_436, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385);
                    }
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__unique_modes__GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason0_40));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_436));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason0_40, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      {
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385;
                        MR_Word check_hlds__unique_modes__SubGoal_436;

                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384);
                        }
                        {
                          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_82, &check_hlds__unique_modes__SubGoal_436, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_47_384, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385);
                        }
                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_385, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__unique_modes__GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_436));
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word check_hlds__unique_modes__TermVar_359 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason0_40, (MR_Integer) 1)));
                        MR_Word check_hlds__unique_modes__FGT_360 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Reason0_40, (MR_Integer) 2)));

                        switch (check_hlds__unique_modes__FGT_360) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__unique_modes__LiveTermVar_361;
                              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401;
                              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_67_404;

                              {
                                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401);
                              }
                              {
                                check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401, check_hlds__unique_modes__TermVar_359, &check_hlds__unique_modes__LiveTermVar_361);
                              }
                              switch (check_hlds__unique_modes__LiveTermVar_361) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    *check_hlds__unique_modes__GoalExpr_8 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__unique_modes_scalar_common_2[2]);
                                    check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_67_404 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401;
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    MR_Word check_hlds__unique_modes__SubGoalInfo_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_82, (MR_Integer) 1)));
                                    MR_Word check_hlds__unique_modes__InstMapDelta_364;
                                    MR_Word check_hlds__unique_modes__Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__SubGoal0_82, (MR_Integer) 0)));
                                    MR_Word check_hlds__unique_modes__TermVarInst_365;

                                    {
                                      check_hlds__unique_modes__InstMapDelta_364 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__SubGoalInfo_363);
                                    }
                                    {
                                      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__InstMapDelta_364, check_hlds__unique_modes__TermVar_359, &check_hlds__unique_modes__TermVarInst_365);
                                    }
                                    if (check_hlds__unique_modes__succeeded)
                                      {
                                        MR_Word check_hlds__unique_modes__InstMap_366;
                                        MR_Word check_hlds__unique_modes__InstMap0_423;

                                        {
                                          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401, &check_hlds__unique_modes__InstMap0_423);
                                        }
                                        {
                                          hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__TermVar_359, check_hlds__unique_modes__TermVarInst_365, check_hlds__unique_modes__InstMap0_423, &check_hlds__unique_modes__InstMap_366);
                                        }
                                        {
                                          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_366, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_64_401, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_67_404);
                                        }
                                      }
                                    else
                                      {
                                        {
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_scope\'/6", (MR_String) "bad InstMapDelta");
                                          return;
                                        }
                                      }
                                    *check_hlds__unique_modes__GoalExpr_8 = check_hlds__unique_modes__GoalExpr0_6;
                                  }
                                  break;
                              }
                              {
                                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "from_ground_term_construct scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_67_404, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_57_394;
                              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_58_395;
                              MR_Word check_hlds__unique_modes__SubGoal_431;

                              {
                                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_57_394);
                              }
                              {
                                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_82, &check_hlds__unique_modes__SubGoal_431, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_57_394, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_58_395);
                              }
                              {
                                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_58_395, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                *check_hlds__unique_modes__GoalExpr_8 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason0_40));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_431));
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
                        MR_Word check_hlds__unique_modes__InstMap0_356;
                        MR_Word check_hlds__unique_modes__NonLocals_357;
                        MR_Word check_hlds__unique_modes__SubGoal_358;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_413;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_415;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_416;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_81_418;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_82_419;

                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_413);
                        }
                        {
                          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_413, &check_hlds__unique_modes__InstMap0_356);
                        }
                        {
                          check_hlds__unique_modes__NonLocals_357 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                        }
                        {
                          check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_357, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_76_413, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_415);
                        }
                        {
                          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_82, &check_hlds__unique_modes__SubGoal_358, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_78_415, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_416);
                        }
                        {
                          check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__unique_modes__NonLocals_357, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_79_416, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_81_418);
                        }
                        {
                          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_356, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_81_418, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_82_419);
                        }
                        {
                          check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "trace scope", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_82_419, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__unique_modes__GoalExpr_8 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Reason0_40));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_358));
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
              MR_Word check_hlds__unique_modes__Vars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));
              MR_Word check_hlds__unique_modes__Cond0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 2)));
              MR_Word check_hlds__unique_modes__Then0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 3)));
              MR_Word check_hlds__unique_modes__Else0_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 4)));
              MR_Word check_hlds__unique_modes__NonLocals_241;
              MR_Word check_hlds__unique_modes__CondVars_242;
              MR_Word check_hlds__unique_modes__ThenVars_243;
              MR_Word check_hlds__unique_modes__ElseVars_244;
              MR_Word check_hlds__unique_modes__InstMap0_245;
              MR_Word check_hlds__unique_modes__CondVarList_246;
              MR_Word check_hlds__unique_modes__CondLiveVars_247;
              MR_Word check_hlds__unique_modes__CondInfo0_249;
              MR_Word check_hlds__unique_modes__CondDeltaInstMap0_250;
              MR_Word check_hlds__unique_modes__ChangedVars_251;
              MR_Word check_hlds__unique_modes__Cond_252;
              MR_Word check_hlds__unique_modes__InstMapCond_253;
              MR_Word check_hlds__unique_modes__Then_254;
              MR_Word check_hlds__unique_modes__InstMapThen_255;
              MR_Word check_hlds__unique_modes__Else_256;
              MR_Word check_hlds__unique_modes__InstMapElse_257;
              MR_Word check_hlds__unique_modes__ArmInstMaps_258;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_261;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_263;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_264;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_265;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_266;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_267;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_268;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_269;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_271;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_272;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_273;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_274;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_275;
              MR_Word check_hlds__unique_modes__Var_276;
              MR_Word check_hlds__unique_modes__Var_277;
              MR_Word check_hlds__unique_modes__Var_278;
              MR_Word check_hlds__unique_modes__Var_280;
              MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_283;
              MR_Word check_hlds__unique_modes__Var_248;

              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_261);
              }
              {
                check_hlds__unique_modes__NonLocals_241 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
              }
              {
                check_hlds__unique_modes__CondVars_242 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Cond0_36);
              }
              {
                check_hlds__unique_modes__ThenVars_243 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Then0_37);
              }
              {
                check_hlds__unique_modes__ElseVars_244 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__unique_modes__Else0_38);
              }
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_261, &check_hlds__unique_modes__InstMap0_245);
              }
              {
                check_hlds__mode_info__mode_info_lock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_241, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_261, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_263);
              }
              {
                check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_244, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_263, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_264);
              }
              {
                parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__CondVars_242, &check_hlds__unique_modes__CondVarList_246);
              }
              {
                check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__CondVarList_246, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_264, &check_hlds__unique_modes__CondLiveVars_247);
              }
              check_hlds__unique_modes__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_36, (MR_Integer) 0)));
              check_hlds__unique_modes__CondInfo0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Cond0_36, (MR_Integer) 1)));
              {
                check_hlds__unique_modes__CondDeltaInstMap0_250 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__unique_modes__CondInfo0_249);
              }
              {
                check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__CondLiveVars_247, check_hlds__unique_modes__CondDeltaInstMap0_250, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_264, &check_hlds__unique_modes__ChangedVars_251);
              }
              {
                check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__ChangedVars_251, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_264, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_265);
              }
              {
                check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ElseVars_244, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_265, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_266);
              }
              {
                check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_243, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_266, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_267);
              }
              {
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Cond0_36, &check_hlds__unique_modes__Cond_252, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_267, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_268);
              }
              {
                check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__ThenVars_243, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_268, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_269);
              }
              {
                check_hlds__mode_info__mode_info_unlock_vars_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__unique_modes__NonLocals_241, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_46_269, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_271);
              }
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_271, &check_hlds__unique_modes__InstMapCond_253);
              }
              {
                check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMapCond_253);
              }
              if (check_hlds__unique_modes__succeeded)
                {
                  {
                    check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Then0_37, &check_hlds__unique_modes__Then_254, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_271, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_272);
                  }
                  {
                    check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_272, &check_hlds__unique_modes__InstMapThen_255);
                  }
                }
              else
                {
                  {
                    check_hlds__unique_modes__Then_254 = hlds__make_goal__true_goal_0_f_0();
                  }
                  check_hlds__unique_modes__InstMapThen_255 = check_hlds__unique_modes__InstMapCond_253;
                  check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_272 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_48_271;
                }
              {
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_245, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_272, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_273);
              }
              {
                check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__Else0_38, &check_hlds__unique_modes__Else_256, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_50_273, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_274);
              }
              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_274, &check_hlds__unique_modes__InstMapElse_257);
              }
              {
                check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_245, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_51_274, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_275);
              }
              {
                check_hlds__unique_modes__Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_278, 0) = ((MR_Box) (check_hlds__unique_modes__Else_256));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unique_modes__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_276, 0) = ((MR_Box) (check_hlds__unique_modes__Then_254));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_276, 1) = ((MR_Box) (check_hlds__unique_modes__Var_278));
              }
              {
                check_hlds__unique_modes__Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_280, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapElse_257));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_280, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__unique_modes__Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_277, 0) = ((MR_Box) (check_hlds__unique_modes__InstMapThen_255));
                MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_277, 1) = ((MR_Box) (check_hlds__unique_modes__Var_280));
              }
              {
                hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Var_276, check_hlds__unique_modes__Var_277, &check_hlds__unique_modes__ArmInstMaps_258);
              }
              {
                hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_241, check_hlds__unique_modes__ArmInstMaps_258, (MR_Integer) 1, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_52_275, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_283);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__unique_modes__GoalExpr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__Vars0_35));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__unique_modes__Cond_252));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__unique_modes__Then_254));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__unique_modes__Else_256));
              }
              {
                check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "if-then-else", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_60_283, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word check_hlds__unique_modes__ShortHand0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__GoalExpr0_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) check_hlds__unique_modes__ShortHand0_41)) {
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
                    MR_Word check_hlds__unique_modes__GoalType_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
                    MR_Word check_hlds__unique_modes__Outer_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
                    MR_Word check_hlds__unique_modes__Inner_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));
                    MR_Word check_hlds__unique_modes__MaybeOutputVars_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 3)));
                    MR_Word check_hlds__unique_modes__MainGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 4)));
                    MR_Word check_hlds__unique_modes__OrElseGoals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 5)));
                    MR_Word check_hlds__unique_modes__OrElseInners0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 6)));
                    MR_Word check_hlds__unique_modes__MainGoal_449;
                    MR_Word check_hlds__unique_modes__OrElseGoals_450;
                    MR_Word check_hlds__unique_modes__ShortHand_460;
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_463;
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_474;

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_463);
                    }
                    if ((check_hlds__unique_modes__OrElseGoals0_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__MainGoal0_46, &check_hlds__unique_modes__MainGoal_449, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_463, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_474);
                        }
                        check_hlds__unique_modes__OrElseGoals_450 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                    else
                      {
                        MR_Word check_hlds__unique_modes__NonLocals_453;
                        MR_Word check_hlds__unique_modes__Determinism_454;
                        MR_Word check_hlds__unique_modes__Goals0_456;
                        MR_Word check_hlds__unique_modes__Goals_457;
                        MR_Word check_hlds__unique_modes__InstMaps_458;
                        MR_Word check_hlds__unique_modes__ArmInstMaps_459;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_467;
                        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_468;
                        MR_Word check_hlds__unique_modes__Var_478;
                        MR_Word check_hlds__unique_modes__Var_455;

                        {
                          check_hlds__unique_modes__NonLocals_453 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                        }
                        {
                          check_hlds__unique_modes__Determinism_454 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_7);
                        }
                        {
                          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_454, &check_hlds__unique_modes__Var_455, &check_hlds__unique_modes__Var_478);
                        }
                        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_478);
                        if (check_hlds__unique_modes__succeeded)
                          {
                            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_465;
                            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_466;

                            {
                              check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_453, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_463, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_465);
                            }
                            {
                              check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_465, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_466);
                            }
                            {
                              check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__NonLocals_453, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_466, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_467);
                            }
                          }
                        else
                          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_467 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38_463;
                        {
                          check_hlds__unique_modes__Goals0_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_456, 0) = ((MR_Box) (check_hlds__unique_modes__MainGoal0_46));
                          MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals0_456, 1) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals0_47));
                        }
                        {
                          check_hlds__unique_modes__unique_modes_check_disj_7_p_0(check_hlds__unique_modes__Goals0_456, check_hlds__unique_modes__Determinism_454, check_hlds__unique_modes__NonLocals_453, &check_hlds__unique_modes__Goals_457, &check_hlds__unique_modes__InstMaps_458, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_42_467, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_468);
                        }
                        if ((check_hlds__unique_modes__Goals_457 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_goal_atomic_goal\'/11", (MR_String) "Goals = []");
                              return;
                            }
                          }
                        else
                          {
                            check_hlds__unique_modes__MainGoal_449 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_457, (MR_Integer) 0)));
                            check_hlds__unique_modes__OrElseGoals_450 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Goals_457, (MR_Integer) 1)));
                          }
                        {
                          hlds__instmap__make_arm_instmaps_for_goals_3_p_0(check_hlds__unique_modes__Goals_457, check_hlds__unique_modes__InstMaps_458, &check_hlds__unique_modes__ArmInstMaps_459);
                        }
                        {
                          hlds__instmap__instmap_merge_5_p_0(check_hlds__unique_modes__NonLocals_453, check_hlds__unique_modes__ArmInstMaps_459, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_468, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_474);
                        }
                      }
                    {
                      check_hlds__unique_modes__ShortHand_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 0) = ((MR_Box) (check_hlds__unique_modes__GoalType_42));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 1) = ((MR_Box) (check_hlds__unique_modes__Outer_43));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 2) = ((MR_Box) (check_hlds__unique_modes__Inner_44));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 3) = ((MR_Box) (check_hlds__unique_modes__MaybeOutputVars_45));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 4) = ((MR_Box) (check_hlds__unique_modes__MainGoal_449));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 5) = ((MR_Box) (check_hlds__unique_modes__OrElseGoals_450));
                      MR_hl_field(MR_mktag(1), check_hlds__unique_modes__ShortHand_460, 6) = ((MR_Box) (check_hlds__unique_modes__OrElseInners0_48));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__unique_modes__GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_460));
                    }
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "atomic_goal", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_49_474, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__unique_modes__MaybeIO_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 0)));
                    MR_Word check_hlds__unique_modes__ResultVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 1)));
                    MR_Word check_hlds__unique_modes__SubGoal_51;
                    MR_Word check_hlds__unique_modes__ShortHand_52;
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62;
                    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63;
                    MR_Word check_hlds__unique_modes__SubGoal0_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand0_41, (MR_Integer) 2)));

                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 0, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_55, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62);
                    }
                    {
                      check_hlds__unique_modes__unique_modes_check_goal_4_p_0(check_hlds__unique_modes__SubGoal0_83, &check_hlds__unique_modes__SubGoal_51, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63);
                    }
                    {
                      check_hlds__unique_modes__ShortHand_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 0) = ((MR_Box) (check_hlds__unique_modes__MaybeIO_49));
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 1) = ((MR_Box) (check_hlds__unique_modes__ResultVar_50));
                      MR_hl_field(MR_mktag(2), check_hlds__unique_modes__ShortHand_52, 2) = ((MR_Box) (check_hlds__unique_modes__SubGoal_51));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__unique_modes__GoalExpr_8 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__unique_modes__ShortHand_52));
                    }
                    {
                      check_hlds__mode_debug__mode_checkpoint_4_p_0((MR_Integer) 1, (MR_String) "try", check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_63_63, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_56);
                    }
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
  MR_Word check_hlds__unique_modes__Goal0_5,
  MR_Word * check_hlds__unique_modes__Goal_6,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 0)));
    MR_Word check_hlds__unique_modes__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_5, (MR_Integer) 1)));
    MR_Word check_hlds__unique_modes__Context_10;
    MR_Word check_hlds__unique_modes__EmptyContext_11;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;

    {
      check_hlds__unique_modes__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
    }
    {
      mercury__term__context_init_1_p_0(&check_hlds__unique_modes__EmptyContext_11);
    }
    {
      check_hlds__unique_modes__succeeded = mercury__term____Unify____context_0_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__EmptyContext_11);
    }
    if (check_hlds__unique_modes__succeeded)
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13;
    else
      {
        check_hlds__mode_info__mode_info_set_context_3_p_0(check_hlds__unique_modes__Context_10, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15);
      }
    {
      check_hlds__unique_modes__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(check_hlds__unique_modes__GoalInfo0_9, (MR_Integer) 14);
    }
    if (check_hlds__unique_modes__succeeded)
      {
        MR_Word check_hlds__unique_modes__InDuplForSwitch_12;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
        MR_Word check_hlds__unique_modes__InstMap0_29;
        MR_Word check_hlds__unique_modes__NondetLiveVars0_30;
        MR_Word check_hlds__unique_modes__Detism_31;
        MR_Word check_hlds__unique_modes__GoalExpr_33;
        MR_Word check_hlds__unique_modes__GoalInfo_34;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39;
        MR_Word check_hlds__unique_modes__Var_42;
        MR_Word check_hlds__unique_modes__Var_32;

        {
          check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InDuplForSwitch_12);
        }
        {
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0((MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__InstMap0_29);
        }
        {
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__NondetLiveVars0_30);
        }
        {
          check_hlds__unique_modes__Detism_31 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_31, &check_hlds__unique_modes__Var_32, &check_hlds__unique_modes__Var_42);
        }
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_42);
        if (check_hlds__unique_modes__succeeded)
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18;
        else
          {
            MR_Word check_hlds__unique_modes__Var_36;

            {
              check_hlds__unique_modes__Var_36 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
            {
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__Var_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37);
            }
          }
        {
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38);
        }
        {
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_30, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_38, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39);
        }
        {
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_29, check_hlds__unique_modes__GoalExpr_33, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_34, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_39, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unique_modes__Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_33));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_34));
        }
        {
          check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(check_hlds__unique_modes__InDuplForSwitch_12, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
        }
      }
    else
      {
        MR_Word check_hlds__unique_modes__InstMap0_49;
        MR_Word check_hlds__unique_modes__NondetLiveVars0_50;
        MR_Word check_hlds__unique_modes__Detism_51;
        MR_Word check_hlds__unique_modes__GoalExpr_53;
        MR_Word check_hlds__unique_modes__GoalInfo_54;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59;
        MR_Word check_hlds__unique_modes__Var_62;
        MR_Word check_hlds__unique_modes__Var_52;

        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__InstMap0_49);
        }
        {
          check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__NondetLiveVars0_50);
        }
        {
          check_hlds__unique_modes__Detism_51 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_9);
        }
        {
          parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Detism_51, &check_hlds__unique_modes__Var_52, &check_hlds__unique_modes__Var_62);
        }
        check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_62);
        if (check_hlds__unique_modes__succeeded)
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15;
        else
          {
            MR_Word check_hlds__unique_modes__Var_56;

            {
              check_hlds__unique_modes__Var_56 = mercury__bag__init_0_f_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[0]);
            }
            {
              check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__Var_56, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57);
            }
          }
        {
          check_hlds__unique_modes__unique_modes_check_goal_expr_5_p_0(check_hlds__unique_modes__GoalExpr0_8, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_57, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58);
        }
        {
          check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__unique_modes__NondetLiveVars0_50, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_21_58, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59);
        }
        {
          check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(check_hlds__unique_modes__InstMap0_49, check_hlds__unique_modes__GoalExpr_53, check_hlds__unique_modes__GoalInfo0_9, &check_hlds__unique_modes__GoalInfo_54, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_22_59, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__unique_modes__Goal_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__unique_modes__GoalExpr_53));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__unique_modes__GoalInfo_54));
        }
      }
  }
}

void MR_CALL 
check_hlds__unique_modes__prepare_for_disjunct_5_p_0(
  MR_Word check_hlds__unique_modes__Goal0_6,
  MR_Word check_hlds__unique_modes__DisjDetism_7,
  MR_Word check_hlds__unique_modes__DisjNonLocals_8,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_17,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes__DisjMaxSolns_11;
    MR_Word check_hlds__unique_modes__GoalInfo0_13;
    MR_Word check_hlds__unique_modes__Determinism_14;
    MR_Word check_hlds__unique_modes__CanFail_15;
    MR_Word check_hlds__unique_modes__Var_10;
    MR_Word check_hlds__unique_modes__Var_12;
    MR_Word check_hlds__unique_modes__Var_16;

    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__DisjDetism_7, &check_hlds__unique_modes__Var_10, &check_hlds__unique_modes__DisjMaxSolns_11);
    }
    check_hlds__unique_modes__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 0)));
    check_hlds__unique_modes__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__unique_modes__Goal0_6, (MR_Integer) 1)));
    {
      check_hlds__unique_modes__Determinism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(check_hlds__unique_modes__GoalInfo0_13);
    }
    {
      parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__Determinism_14, &check_hlds__unique_modes__CanFail_15, &check_hlds__unique_modes__Var_16);
    }
    check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__DisjMaxSolns_11 == (MR_Integer) 3);
    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
    if (check_hlds__unique_modes__succeeded)
      check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__CanFail_15 == (MR_Integer) 0);
    if (check_hlds__unique_modes__succeeded)
      {
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
        MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20;
        MR_Word check_hlds__unique_modes__FullInstMap0_24;

        {
          check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__FullInstMap0_24);
        }
        {
          check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_24);
        }
        if (check_hlds__unique_modes__succeeded)
          {
            MR_Word check_hlds__unique_modes__AllVars_25;
            MR_Word check_hlds__unique_modes__NondetLiveVars_26;

            {
              hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_24, &check_hlds__unique_modes__AllVars_25);
            }
            {
              check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_25, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__NondetLiveVars_26);
            }
            {
              check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_26, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20);
            }
          }
        else
          check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_19_19;
        {
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__unique_modes__DisjNonLocals_8, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_20_20, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18);
        }
      }
    else
      *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_18 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_17;
  }
}

static void MR_CALL 
check_hlds__unique_modes__unique_modes_check_call_7_p_0(
  MR_Word check_hlds__unique_modes__PredId_8,
  MR_Integer check_hlds__unique_modes__ProcId0_9,
  MR_Word check_hlds__unique_modes__ArgVars_10,
  MR_Word check_hlds__unique_modes__GoalInfo_11,
  MR_Integer * check_hlds__unique_modes__ProcId_12,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes__OldErrors_14;
    MR_Word check_hlds__unique_modes__InstMap0_15;
    MR_Word check_hlds__unique_modes__ModuleInfo_16;
    MR_Word check_hlds__unique_modes__PredInfo_17;
    MR_Word check_hlds__unique_modes__ProcInfo_18;
    MR_Integer check_hlds__unique_modes__ArgOffset_19;
    MR_Word check_hlds__unique_modes__ProcArgModes0_20;
    MR_Word check_hlds__unique_modes__InterfaceDeterminism_21;
    MR_Word check_hlds__unique_modes__NeverSucceeds_22;
    MR_Word check_hlds__unique_modes__ModeErrors_23;
    MR_Word check_hlds__unique_modes__Errors_29;
    MR_Word check_hlds__unique_modes__MayChangeCalledProc_30;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
    MR_Word check_hlds__unique_modes__ModuleInfo_63;
    MR_Word check_hlds__unique_modes__InitialInsts_64;
    MR_Word check_hlds__unique_modes__InstVarSub_65;
    MR_Word check_hlds__unique_modes__FinalInsts0_66;
    MR_Word check_hlds__unique_modes__FinalInsts_67;
    MR_Word check_hlds__unique_modes__NewArgVars_68;
    MR_Word check_hlds__unique_modes__ExtraGoals_69;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72;
    MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;

    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__OldErrors_14);
    }
    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__InstMap0_15);
    }
    {
      check_hlds__mode_info__mode_info_set_errors_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_37, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_16);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__unique_modes__ModuleInfo_16, check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__ProcId0_9, &check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ProcInfo_18);
    }
    {
      check_hlds__modecheck_util__compute_arg_offset_2_p_0(check_hlds__unique_modes__PredInfo_17, &check_hlds__unique_modes__ArgOffset_19);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__ProcArgModes0_20);
    }
    {
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__InterfaceDeterminism_21);
    }
    {
      hlds__hlds_pred__proc_info_never_succeeds_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__NeverSucceeds_22);
    }
    {
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__ModuleInfo_63);
    }
    {
      check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_63, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__InitialInsts_64);
    }
    {
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_64, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__InstVarSub_65, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72);
    }
    {
      check_hlds__mode_util__mode_list_get_final_insts_3_p_0(check_hlds__unique_modes__ModuleInfo_63, check_hlds__unique_modes__ProcArgModes0_20, &check_hlds__unique_modes__FinalInsts0_66);
    }
    {
      parse_tree__prog_mode__inst_list_apply_substitution_3_p_0(check_hlds__unique_modes__InstVarSub_65, check_hlds__unique_modes__FinalInsts0_66, &check_hlds__unique_modes__FinalInsts_67);
    }
    {
      check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(check_hlds__unique_modes__ArgVars_10, check_hlds__unique_modes__InitialInsts_64, check_hlds__unique_modes__FinalInsts_67, check_hlds__unique_modes__ArgOffset_19, &check_hlds__unique_modes__NewArgVars_68, &check_hlds__unique_modes__ExtraGoals_69, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_25_72, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73);
    }
    {
      check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_68)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
    }
    if (check_hlds__unique_modes__succeeded)
      check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (check_hlds__unique_modes__succeeded)
      {
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.unique_modes", (MR_String) "predicate \140check_hlds.unique_modes.unique_modes_check_call_modes\'/7", (MR_String) "call to implied mode\?");
          return;
        }
      }
    switch (check_hlds__unique_modes__NeverSucceeds_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__unique_modes__Var_80;
          MR_Word check_hlds__unique_modes__Var_71;

          {
            parse_tree__prog_data__determinism_components_3_p_0(check_hlds__unique_modes__InterfaceDeterminism_21, &check_hlds__unique_modes__Var_71, &check_hlds__unique_modes__Var_80);
          }
          check_hlds__unique_modes__succeeded = ((MR_Integer) 3 == check_hlds__unique_modes__Var_80);
          if (check_hlds__unique_modes__succeeded)
            {
              MR_Word check_hlds__unique_modes__FullInstMap0_84;

              {
                check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__FullInstMap0_84);
              }
              {
                check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_84);
              }
              if (check_hlds__unique_modes__succeeded)
                {
                  MR_Word check_hlds__unique_modes__AllVars_85;
                  MR_Word check_hlds__unique_modes__NondetLiveVars_86;

                  {
                    hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_84, &check_hlds__unique_modes__AllVars_85);
                  }
                  {
                    check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_85, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__NondetLiveVars_86);
                  }
                  {
                    check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_86, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
                  }
                }
              else
                check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;
            }
          else
            check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__unique_modes__InstMap_70;

          {
            hlds__instmap__init_unreachable_1_p_0(&check_hlds__unique_modes__InstMap_70);
          }
          {
            check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_70, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_26_73, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__proc_info_get_mode_errors_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__ModeErrors_23);
    }
    if ((check_hlds__unique_modes__ModeErrors_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41;
    else
      {
        MR_Word check_hlds__unique_modes__WaitingVars_26;
        MR_Word check_hlds__unique_modes__InstMap_27;
        MR_Word check_hlds__unique_modes__ArgInsts_28;
        MR_Word check_hlds__unique_modes__Var_42;

        {
          check_hlds__unique_modes__WaitingVars_26 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__unique_modes__ArgVars_10);
        }
        {
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__InstMap_27);
        }
        {
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__unique_modes__InstMap_27, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__ArgInsts_28);
        }
        {
          check_hlds__unique_modes__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 1) = ((MR_Box) (check_hlds__unique_modes__ArgVars_10));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 2) = ((MR_Box) (check_hlds__unique_modes__ArgInsts_28));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 3) = ((MR_Box) (check_hlds__unique_modes__PredId_8));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 4) = ((MR_Box) (check_hlds__unique_modes__ProcId0_9));
          MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Var_42, 5) = ((MR_Box) (check_hlds__unique_modes__ModeErrors_23));
        }
        {
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__unique_modes__WaitingVars_26, check_hlds__unique_modes__Var_42, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_41_41, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43);
        }
      }
    {
      check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__Errors_29);
    }
    {
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_43_43, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44);
    }
    {
      check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__MayChangeCalledProc_30);
    }
    if ((check_hlds__unique_modes__Errors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
        *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44;
      }
    else
      switch (check_hlds__unique_modes__MayChangeCalledProc_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__unique_modes__Determinism_34;
            MR_Word check_hlds__unique_modes__NewArgVars_35;
            MR_Word check_hlds__unique_modes__ExtraGoals_36;
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45;
            MR_Word check_hlds__unique_modes__Var_46;

            {
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap0_15, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45);
            }
            {
              hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(check_hlds__unique_modes__ProcInfo_18, &check_hlds__unique_modes__Determinism_34);
            }
            {
              check_hlds__unique_modes__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__unique_modes__Var_46, 0) = ((MR_Box) (check_hlds__unique_modes__Determinism_34));
            }
            {
              check_hlds__modecheck_call__modecheck_call_pred_10_p_0(check_hlds__unique_modes__PredId_8, check_hlds__unique_modes__Var_46, check_hlds__unique_modes__ProcId0_9, check_hlds__unique_modes__ProcId_12, check_hlds__unique_modes__ArgVars_10, &check_hlds__unique_modes__NewArgVars_35, check_hlds__unique_modes__GoalInfo_11, &check_hlds__unique_modes__ExtraGoals_36, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_45_45, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
            }
            {
              check_hlds__unique_modes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__unique_modes_scalar_common_1[1], ((MR_Box) (check_hlds__unique_modes__NewArgVars_35)), ((MR_Box) (check_hlds__unique_modes__ArgVars_10)));
            }
            if (check_hlds__unique_modes__succeeded)
              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__ExtraGoals_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (check_hlds__unique_modes__succeeded)
              {
              }
            else
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
            MR_Word check_hlds__unique_modes__AllErrors_33;

            *check_hlds__unique_modes__ProcId_12 = check_hlds__unique_modes__ProcId0_9;
            {
              mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__unique_modes__OldErrors_14, check_hlds__unique_modes__Errors_29, &check_hlds__unique_modes__AllErrors_33);
            }
            {
              check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__unique_modes__AllErrors_33, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_44_44, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_38);
            }
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__unique_modes__select_changed_inst_vars_4_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__HeadVar__2_2,
  MR_Word check_hlds__unique_modes__HeadVar__3_3,
  MR_Word * check_hlds__unique_modes__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unique_modes__succeeded;

        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__unique_modes__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unique_modes__ModuleInfo_12;
            MR_Word check_hlds__unique_modes__InstMap0_13;
            MR_Word check_hlds__unique_modes__Inst0_14;
            MR_Word check_hlds__unique_modes__VarTypes_15;
            MR_Word check_hlds__unique_modes__Type_16;
            MR_Word check_hlds__unique_modes__Inst_17;

            {
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ModuleInfo_12);
            }
            {
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__InstMap0_13);
            }
            {
              hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_13, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_14);
            }
            {
              check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__VarTypes_15);
            }
            {
              hlds__vartypes__lookup_var_type_3_p_0(check_hlds__unique_modes__VarTypes_15, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Type_16);
            }
            {
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(check_hlds__unique_modes__HeadVar__2_2);
            }
            if (check_hlds__unique_modes__succeeded)
              {
                {
                  check_hlds__unique_modes__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0(check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst_17);
                }
                if (check_hlds__unique_modes__succeeded)
                  {
                    {
                      check_hlds__unique_modes__succeeded = check_hlds__inst_match__inst_matches_final_typed_4_p_0(check_hlds__unique_modes__Inst_17, check_hlds__unique_modes__Inst0_14, check_hlds__unique_modes__Type_16, check_hlds__unique_modes__ModuleInfo_12);
                    }
                    check_hlds__unique_modes__succeeded = !(check_hlds__unique_modes__succeeded);
                  }
              }
            if (check_hlds__unique_modes__succeeded)
              {
                MR_Word check_hlds__unique_modes__ChangedVars1_18;

                {
                  check_hlds__unique_modes__select_changed_inst_vars_4_p_0(check_hlds__unique_modes__Vars_8, check_hlds__unique_modes__HeadVar__2_2, check_hlds__unique_modes__HeadVar__3_3, &check_hlds__unique_modes__ChangedVars1_18);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__unique_modes__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_7));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__ChangedVars1_18));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__unique_modes__next_value_of_HeadVar__1_1 = check_hlds__unique_modes__Vars_8;

                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__unique_modes__select_live_vars_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__ModeInfo_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unique_modes__succeeded;

        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unique_modes__Var_11;

            {
              check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__Var_11);
            }
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__Var_11);
            if (check_hlds__unique_modes__succeeded)
              {
                MR_Word check_hlds__unique_modes__LiveVars1_9;

                {
                  check_hlds__unique_modes__select_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__LiveVars1_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__LiveVars1_9));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__unique_modes__next_value_of_HeadVar__1_1 = check_hlds__unique_modes__Vars_6;

                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__unique_modes__make_all_nondet_live_vars_mostly_uniq_2_p_0(
  MR_Word check_hlds__unique_modes__ModeInfo0_3,
  MR_Word * check_hlds__unique_modes__ModeInfo_4)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes__FullInstMap0_5;

    {
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__FullInstMap0_5);
    }
    {
      check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__FullInstMap0_5);
    }
    if (check_hlds__unique_modes__succeeded)
      {
        MR_Word check_hlds__unique_modes__AllVars_6;
        MR_Word check_hlds__unique_modes__NondetLiveVars_7;

        {
          hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__FullInstMap0_5, &check_hlds__unique_modes__AllVars_6);
        }
        {
          check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__AllVars_6, check_hlds__unique_modes__ModeInfo0_3, &check_hlds__unique_modes__NondetLiveVars_7);
        }
        {
          check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(check_hlds__unique_modes__NondetLiveVars_7, check_hlds__unique_modes__ModeInfo0_3, check_hlds__unique_modes__ModeInfo_4);
        }
      }
    else
      *check_hlds__unique_modes__ModeInfo_4 = check_hlds__unique_modes__ModeInfo0_3;
  }
}

static void MR_CALL 
check_hlds__unique_modes__make_var_list_mostly_uniq_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unique_modes__succeeded;

        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_3 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
        else
          {
            MR_Word check_hlds__unique_modes__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;
            MR_Word check_hlds__unique_modes__InstMap0_18;
            MR_Word check_hlds__unique_modes__ModuleInfo0_19;
            MR_Word check_hlds__unique_modes__Inst0_21;
            MR_Word check_hlds__unique_modes__TypeInfo_25_35;
            MR_Word check_hlds__unique_modes__Vars_20;
            MR_Word check_hlds__unique_modes__Inst1_22;

            {
              check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__InstMap0_18);
            }
            {
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__ModuleInfo0_19);
            }
            {
              check_hlds__unique_modes__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__unique_modes__InstMap0_18);
            }
            if (check_hlds__unique_modes__succeeded)
              {
                {
                  hlds__instmap__instmap_vars_list_2_p_0(check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__Vars_20);
                }
                check_hlds__unique_modes__TypeInfo_25_35 = (MR_Word) &check_hlds__unique_modes_scalar_common_1[0];
                {
                  check_hlds__unique_modes__succeeded = mercury__list__member_2_p_0(check_hlds__unique_modes__TypeInfo_25_35, ((MR_Box) (check_hlds__unique_modes__Var_7)), check_hlds__unique_modes__Vars_20);
                }
                if (check_hlds__unique_modes__succeeded)
                  {
                    {
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__unique_modes__InstMap0_18, check_hlds__unique_modes__Var_7, &check_hlds__unique_modes__Inst0_21);
                    }
                    {
                      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__unique_modes__ModuleInfo0_19, check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst1_22);
                    }
                    switch (MR_tag((MR_Word) check_hlds__unique_modes__Inst1_22)) {
                      default:
                        check_hlds__unique_modes__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word check_hlds__unique_modes__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)));
                          MR_Word check_hlds__unique_modes__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));

                          check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__Var_30 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 0)))) {
                          default:
                            check_hlds__unique_modes__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word check_hlds__unique_modes__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
                              MR_Word check_hlds__unique_modes__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));
                              MR_Word check_hlds__unique_modes__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 3)));

                              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__Var_31 == (MR_Integer) 1);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__unique_modes__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 1)));
                              MR_Word check_hlds__unique_modes__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__unique_modes__Inst1_22, (MR_Integer) 2)));

                              check_hlds__unique_modes__succeeded = (check_hlds__unique_modes__Var_32 == (MR_Integer) 1);
                            }
                            break;
                        }
                        break;
                    }
                  }
              }
            if (check_hlds__unique_modes__succeeded)
              {
                MR_Word check_hlds__unique_modes__Inst_27;
                MR_Word check_hlds__unique_modes__ModuleInfo_28;
                MR_Word check_hlds__unique_modes__InstMap_29;
                MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33;

                {
                  check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(check_hlds__unique_modes__Inst0_21, &check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__ModuleInfo0_19, &check_hlds__unique_modes__ModuleInfo_28);
                }
                {
                  check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__unique_modes__ModuleInfo_28, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33);
                }
                {
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__unique_modes__Var_7, check_hlds__unique_modes__Inst_27, check_hlds__unique_modes__InstMap0_18, &check_hlds__unique_modes__InstMap_29);
                }
                {
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__unique_modes__InstMap_29, check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_23_33, &check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12);
                }
              }
            else
              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__unique_modes__next_value_of_HeadVar__1_1 = check_hlds__unique_modes__Vars_8;
              MR_Word check_hlds__unique_modes__next_value_of_STATE_VARIABLE_ModeInfo_0_2 = check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_12_12;

              check_hlds__unique_modes__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__unique_modes__next_value_of_STATE_VARIABLE_ModeInfo_0_2;
              check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__unique_modes__select_nondet_live_vars_3_p_0(
  MR_Word check_hlds__unique_modes__HeadVar__1_1,
  MR_Word check_hlds__unique_modes__ModeInfo_2,
  MR_Word * check_hlds__unique_modes__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__unique_modes__succeeded;

        if ((check_hlds__unique_modes__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__unique_modes__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__unique_modes__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__unique_modes__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__unique_modes__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__unique_modes__Var_11;

            {
              check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(check_hlds__unique_modes__ModeInfo_2, check_hlds__unique_modes__Var_5, &check_hlds__unique_modes__Var_11);
            }
            check_hlds__unique_modes__succeeded = ((MR_Integer) 0 == check_hlds__unique_modes__Var_11);
            if (check_hlds__unique_modes__succeeded)
              {
                MR_Word check_hlds__unique_modes__NondetLiveVars1_9;

                {
                  check_hlds__unique_modes__select_nondet_live_vars_3_p_0(check_hlds__unique_modes__Vars_6, check_hlds__unique_modes__ModeInfo_2, &check_hlds__unique_modes__NondetLiveVars1_9);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__unique_modes__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__unique_modes__Var_5));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__unique_modes__NondetLiveVars1_9));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__unique_modes__next_value_of_HeadVar__1_1 = check_hlds__unique_modes__Vars_6;

                  check_hlds__unique_modes__HeadVar__1_1 = check_hlds__unique_modes__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_proc_6_p_0(
  MR_Integer check_hlds__unique_modes__ProcId_7,
  MR_Word check_hlds__unique_modes__PredId_8,
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_13,
  MR_Word * check_hlds__unique_modes__Changed_10,
  MR_Word * check_hlds__unique_modes__Specs_11)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;

    {
      check_hlds__modes__modecheck_proc_general_8_p_0(check_hlds__unique_modes__ProcId_7, check_hlds__unique_modes__PredId_8, (MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_13, check_hlds__unique_modes__Specs_11, check_hlds__unique_modes__Changed_10);
    }
  }
}

void MR_CALL 
check_hlds__unique_modes__unique_modes_check_module_3_p_0(
  MR_Word check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_8,
  MR_Word * check_hlds__unique_modes__Specs_5)
{
  {
    MR_bool check_hlds__unique_modes__succeeded;
    MR_Word check_hlds__unique_modes___SafeToContinue_6;

    {
      check_hlds__modes__check_pred_modes_6_p_0((MR_Integer) 1, (MR_Integer) 0, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_0_7, check_hlds__unique_modes__STATE_VARIABLE_ModuleInfo_8, &check_hlds__unique_modes___SafeToContinue_6, check_hlds__unique_modes__Specs_5);
    }
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

/* :- end_module check_hlds.unique_modes. */
