/*
** Automatically generated from `make_goal.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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


/* :- module hlds.make_goal. */
/* :- implementation. */

/*
INIT mercury__hlds__make_goal__init
ENDINIT
*/

#include "hlds.make_goal.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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





static /* final */ const MR_Box hlds__make_goal_scalar_common_1[10][2];

static /* final */ const MR_Box hlds__make_goal_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_goal_scalar_common_3[1][4];




static /* final */ const MR_Box hlds__make_goal_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_goal_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_goal_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_goal_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_goal_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[1])))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_goal_scalar_common_1[5])),
    ((MR_Box) (&hlds__make_goal_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_goal_scalar_common_1[6])),
    ((MR_Box) (&hlds__make_goal_scalar_common_1[6]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_goal_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_goal_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_goal_scalar_common_1[2])),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
hlds__make_goal__deconstruct_tuple_3_p_0(
  MR_Word hlds__make_goal__Tuple_4,
  MR_Word hlds__make_goal__Args_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Integer hlds__make_goal__Arity_7;
    MR_Word hlds__make_goal__ConsId_8;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
    {
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
    }
    {
      hlds__make_goal__deconstruct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__construct_tuple_3_p_0(
  MR_Word hlds__make_goal__Tuple_4,
  MR_Word hlds__make_goal__Args_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Integer hlds__make_goal__Arity_7;
    MR_Word hlds__make_goal__ConsId_8;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
    {
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
    }
    {
      hlds__make_goal__construct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__deconstruct_functor_4_p_0(
  MR_Word hlds__make_goal__Var_5,
  MR_Word hlds__make_goal__ConsId_6,
  MR_Word hlds__make_goal__Args_7,
  MR_Word * hlds__make_goal__Goal_8)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Integer hlds__make_goal__Arity_9;
    MR_Word hlds__make_goal__RHS_10;
    MR_Word hlds__make_goal__UnifyMode_11;
    MR_Word hlds__make_goal__UniMode_12;
    MR_Word hlds__make_goal__UniModes_13;
    MR_Word hlds__make_goal__Unification_15;
    MR_Word hlds__make_goal__Unify_16;
    MR_Word hlds__make_goal__NonLocals_17;
    MR_Word hlds__make_goal__InstMapDelta_18;
    MR_Word hlds__make_goal__GoalInfo_19;
    MR_Word hlds__make_goal__V_21_21;
    MR_Word hlds__make_goal__V_22_22;
    MR_Word hlds__make_goal__V_23_23;
    MR_Word hlds__make_goal__V_24_24;
    MR_Word hlds__make_goal__V_25_25;
    MR_Word hlds__make_goal__V_26_26;
    MR_Word hlds__make_goal__V_27_27;
    MR_Word hlds__make_goal__V_28_28;
    MR_Word hlds__make_goal__V_29_29;
    MR_Word hlds__make_goal__V_30_30;
    MR_Word hlds__make_goal__V_31_31;
    MR_Word hlds__make_goal__V_32_32;
    MR_Word hlds__make_goal__V_37_37;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
    {
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
    }
    {
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__free_inst_0_f_0();
    }
    {
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
    }
    {
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
    }
    {
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
    }
    {
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__free_inst_0_f_0();
    }
    {
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
    }
    {
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
    }
    {
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
    {
      hlds__make_goal__Unification_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 2) = ((MR_Box) (hlds__make_goal__Args_7));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 5) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_15));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
    }
    {
      hlds__make_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 1) = ((MR_Box) (hlds__make_goal__Args_7));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_37_37, &hlds__make_goal__NonLocals_17);
    }
    {
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_vars_1_f_0(hlds__make_goal__Args_7);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
    }
  }
}

void MR_CALL 
hlds__make_goal__construct_functor_4_p_0(
  MR_Word hlds__make_goal__Var_5,
  MR_Word hlds__make_goal__ConsId_6,
  MR_Word hlds__make_goal__Args_7,
  MR_Word * hlds__make_goal__Goal_8)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Integer hlds__make_goal__Arity_9;
    MR_Word hlds__make_goal__RHS_10;
    MR_Word hlds__make_goal__UnifyMode_11;
    MR_Word hlds__make_goal__UniMode_12;
    MR_Word hlds__make_goal__UniModes_13;
    MR_Word hlds__make_goal__Unification_14;
    MR_Word hlds__make_goal__Unify_16;
    MR_Word hlds__make_goal__NonLocals_17;
    MR_Word hlds__make_goal__InstMapDelta_18;
    MR_Word hlds__make_goal__GoalInfo_19;
    MR_Word hlds__make_goal__V_21_21;
    MR_Word hlds__make_goal__V_22_22;
    MR_Word hlds__make_goal__V_23_23;
    MR_Word hlds__make_goal__V_24_24;
    MR_Word hlds__make_goal__V_25_25;
    MR_Word hlds__make_goal__V_26_26;
    MR_Word hlds__make_goal__V_27_27;
    MR_Word hlds__make_goal__V_28_28;
    MR_Word hlds__make_goal__V_29_29;
    MR_Word hlds__make_goal__V_30_30;
    MR_Word hlds__make_goal__V_31_31;
    MR_Word hlds__make_goal__V_32_32;
    MR_Word hlds__make_goal__V_38_38;

    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
    {
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
    }
    {
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__free_inst_0_f_0();
    }
    {
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
    }
    {
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
    }
    {
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
    }
    {
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__free_inst_0_f_0();
    }
    {
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
    }
    {
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
    {
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
    }
    {
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
    }
    {
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
    {
      hlds__make_goal__Unification_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 2) = ((MR_Box) (hlds__make_goal__Args_7));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_14));
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
    }
    {
      hlds__make_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 0) = ((MR_Box) (hlds__make_goal__Var_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 1) = ((MR_Box) (hlds__make_goal__Args_7));
    }
    {
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_38_38, &hlds__make_goal__NonLocals_17);
    }
    {
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__Var_5);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__Goal_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_alloc_in_proc_7_p_0(
  MR_Word hlds__make_goal__ConsId_8,
  MR_Word hlds__make_goal__Type_9,
  MR_Word hlds__make_goal__MaybeName_10,
  MR_Word * hlds__make_goal__Goal_11,
  MR_Word * hlds__make_goal__Var_12,
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14,
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_15)
{
  {
    MR_bool hlds__make_goal__succeeded;

    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__Type_9, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14, hlds__make_goal__STATE_VARIABLE_ProcInfo_15);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__ConsId_8, hlds__make_goal__Goal_11);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_in_proc_6_p_0(
  MR_Char hlds__make_goal__Char_7,
  MR_Word hlds__make_goal__MaybeName_8,
  MR_Word * hlds__make_goal__Goal_9,
  MR_Word * hlds__make_goal__Var_10,
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_14_14;
    MR_Word hlds__make_goal__V_19_19;

    {
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
    {
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_7));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_in_proc_6_p_0(
  MR_Float hlds__make_goal__Float_7,
  MR_Word hlds__make_goal__MaybeName_8,
  MR_Word * hlds__make_goal__Goal_9,
  MR_Word * hlds__make_goal__Var_10,
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_14_14;
    MR_Word hlds__make_goal__V_19_19;

    {
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
    {
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = MR_box_float(hlds__make_goal__Float_7);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_in_proc_6_p_0(
  MR_String hlds__make_goal__String_7,
  MR_Word hlds__make_goal__MaybeName_8,
  MR_Word * hlds__make_goal__Goal_9,
  MR_Word * hlds__make_goal__Var_10,
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_14_14;
    MR_Word hlds__make_goal__V_19_19;

    {
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
    {
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__String_7));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(
  MR_Integer hlds__make_goal__Int_7,
  MR_Word hlds__make_goal__MaybeName_8,
  MR_Word * hlds__make_goal__Goal_9,
  MR_Word * hlds__make_goal__Var_10,
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_14_14;
    MR_Word hlds__make_goal__V_19_19;

    {
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
    {
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__Int_7));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_alloc_9_p_0(
  MR_Word hlds__make_goal__ConsId_10,
  MR_Word hlds__make_goal__Type_11,
  MR_Word hlds__make_goal__MaybeName_12,
  MR_Word * hlds__make_goal__Goal_13,
  MR_Word * hlds__make_goal__Var_14,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_17,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_18,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_19,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_20)
{
  {
    MR_bool hlds__make_goal__succeeded;

    {
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_12, hlds__make_goal__Var_14, hlds__make_goal__STATE_VARIABLE_VarSet_0_17, hlds__make_goal__STATE_VARIABLE_VarSet_18);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_14, hlds__make_goal__Type_11, hlds__make_goal__STATE_VARIABLE_VarTypes_0_19, hlds__make_goal__STATE_VARIABLE_VarTypes_20);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_14, hlds__make_goal__ConsId_10, hlds__make_goal__Goal_13);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_8_p_0(
  MR_Char hlds__make_goal__Char_9,
  MR_Word hlds__make_goal__MaybeName_10,
  MR_Word * hlds__make_goal__Goal_11,
  MR_Word * hlds__make_goal__Var_12,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_20_20;
    MR_Word hlds__make_goal__V_26_26;

    {
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
    {
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
    {
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_9));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_8_p_0(
  MR_Float hlds__make_goal__Float_9,
  MR_Word hlds__make_goal__MaybeName_10,
  MR_Word * hlds__make_goal__Goal_11,
  MR_Word * hlds__make_goal__Var_12,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_20_20;
    MR_Word hlds__make_goal__V_26_26;

    {
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
    {
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
    {
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = MR_box_float(hlds__make_goal__Float_9);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_8_p_0(
  MR_String hlds__make_goal__String_9,
  MR_Word hlds__make_goal__MaybeName_10,
  MR_Word * hlds__make_goal__Goal_11,
  MR_Word * hlds__make_goal__Var_12,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_20_20;
    MR_Word hlds__make_goal__V_26_26;

    {
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
    {
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
    {
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__String_9));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_8_p_0(
  MR_Integer hlds__make_goal__Int_9,
  MR_Word hlds__make_goal__MaybeName_10,
  MR_Word * hlds__make_goal__Goal_11,
  MR_Word * hlds__make_goal__Var_12,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_20_20;
    MR_Word hlds__make_goal__V_26_26;

    {
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
    {
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
    {
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Int_9));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_const_construction_3_p_0(
  MR_Word hlds__make_goal__Var_4,
  MR_Word hlds__make_goal__ConsId_5,
  MR_Word * hlds__make_goal__HeadVar__3_3)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__GoalExpr_6;
    MR_Word hlds__make_goal__GoalInfo_7;
    MR_Word hlds__make_goal__RHS_8;
    MR_Word hlds__make_goal__Inst_9;
    MR_Word hlds__make_goal__Mode_10;
    MR_Word hlds__make_goal__Unification_11;
    MR_Word hlds__make_goal__NonLocals_13;
    MR_Word hlds__make_goal__InstMapDelta0_14;
    MR_Word hlds__make_goal__InstMapDelta_15;
    MR_Word hlds__make_goal__V_20_20;
    MR_Word hlds__make_goal__V_21_21;
    MR_Word hlds__make_goal__V_24_24;
    MR_Word hlds__make_goal__V_26_26;

    {
      hlds__make_goal__RHS_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__Inst_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 3) = ((MR_Box) (hlds__make_goal__V_20_20));
    }
    {
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
    }
    {
      hlds__make_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 0) = ((MR_Box) (hlds__make_goal__Inst_9));
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
    }
    {
      hlds__make_goal__Mode_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 0) = ((MR_Box) (hlds__make_goal__V_24_24));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
    }
    {
      hlds__make_goal__Unification_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 0) = ((MR_Box) (hlds__make_goal__Var_4));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 1) = ((MR_Box) (hlds__make_goal__ConsId_5));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__GoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 0) = ((MR_Box) (hlds__make_goal__Var_4));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 1) = ((MR_Box) (hlds__make_goal__RHS_8));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 2) = ((MR_Box) (hlds__make_goal__Mode_10));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 3) = ((MR_Box) (hlds__make_goal__Unification_11));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
    }
    {
      hlds__make_goal__NonLocals_13 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__Var_4);
    }
    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta0_14);
    }
    {
      hlds__instmap__instmap_delta_insert_var_4_p_0(hlds__make_goal__Var_4, hlds__make_goal__Inst_9, hlds__make_goal__InstMapDelta0_14, &hlds__make_goal__InstMapDelta_15);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_13, hlds__make_goal__InstMapDelta_15, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_7));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_char_const_construction_3_p_0(
  MR_Word hlds__make_goal__Var_4,
  MR_Char hlds__make_goal__Char_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_5));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_float_const_construction_3_p_0(
  MR_Word hlds__make_goal__Var_4,
  MR_Float hlds__make_goal__Float_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = MR_box_float(hlds__make_goal__Float_5);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_string_const_construction_3_p_0(
  MR_Word hlds__make_goal__Var_4,
  MR_String hlds__make_goal__String_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__String_5));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_int_const_construction_3_p_0(
  MR_Word hlds__make_goal__Var_4,
  MR_Integer hlds__make_goal__Int_5,
  MR_Word * hlds__make_goal__Goal_6)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__Int_5));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
  }
}

void MR_CALL 
hlds__make_goal__make_simple_test_5_p_0(
  MR_Word hlds__make_goal__X_6,
  MR_Word hlds__make_goal__Y_7,
  MR_Word hlds__make_goal__UnifyMainContext_8,
  MR_Word hlds__make_goal__UnifySubContext_9,
  MR_Word * hlds__make_goal__Goal_10)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__Unification_13;
    MR_Word hlds__make_goal__UnifyContext_14;
    MR_Word hlds__make_goal__GoalInfo_15;
    MR_Word hlds__make_goal__GoalExpr_16;
    MR_Word hlds__make_goal__V_23_23;
    MR_Word hlds__make_goal__V_24_24;
    MR_Word hlds__make_goal__V_27_27;
    MR_Word hlds__make_goal__V_28_28;
    MR_Word hlds__make_goal__V_30_30;

    {
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 2) = ((MR_Box) (hlds__make_goal__Y_7));
    }
    {
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
    }
    {
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
    }
    {
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
    {
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 1, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
    {
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
    }
    {
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[8]));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
    }
  }
}

void MR_CALL 
hlds__make_goal__make_simple_assign_5_p_0(
  MR_Word hlds__make_goal__X_6,
  MR_Word hlds__make_goal__Y_7,
  MR_Word hlds__make_goal__UnifyMainContext_8,
  MR_Word hlds__make_goal__UnifySubContext_9,
  MR_Word * hlds__make_goal__Goal_10)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__Unification_13;
    MR_Word hlds__make_goal__UnifyContext_14;
    MR_Word hlds__make_goal__GoalInfo_15;
    MR_Word hlds__make_goal__GoalExpr_16;
    MR_Word hlds__make_goal__V_23_23;
    MR_Word hlds__make_goal__V_24_24;
    MR_Word hlds__make_goal__V_27_27;
    MR_Word hlds__make_goal__V_28_28;
    MR_Word hlds__make_goal__V_30_30;

    {
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 0) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__Y_7));
    }
    {
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
    }
    {
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
    }
    {
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
    {
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__X_6);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
    {
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
    }
    {
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[7]));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__Goal_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
    }
  }
}

void MR_CALL 
hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(
  MR_Word hlds__make_goal__LHS_7,
  MR_Word hlds__make_goal__RHS_8,
  MR_Word hlds__make_goal__Context_9,
  MR_Word hlds__make_goal__UnifyMainContext_10,
  MR_Word hlds__make_goal__UnifySubContext_11,
  MR_Word * hlds__make_goal__Goal_12)
{
  {
    MR_bool hlds__make_goal__succeeded;

    {
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(hlds__make_goal__LHS_7, hlds__make_goal__RHS_8, hlds__make_goal__Context_9, hlds__make_goal__UnifyMainContext_10, hlds__make_goal__UnifySubContext_11, (MR_Integer) 0, hlds__make_goal__Goal_12);
    }
  }
}

void MR_CALL 
hlds__make_goal__create_atomic_complicated_unification_7_p_0(
  MR_Word hlds__make_goal__LHS_8,
  MR_Word hlds__make_goal__RHS_9,
  MR_Word hlds__make_goal__Context_10,
  MR_Word hlds__make_goal__UnifyMainContext_11,
  MR_Word hlds__make_goal__UnifySubContext_12,
  MR_Word hlds__make_goal__Purity_13,
  MR_Word * hlds__make_goal__Goal_14)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__UnifyContext_18;
    MR_Word hlds__make_goal__GoalInfo0_19;
    MR_Word hlds__make_goal__GoalInfo_20;
    MR_Word hlds__make_goal__GoalExpr_21;

    {
      hlds__make_goal__UnifyContext_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_11));
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_12));
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_goal__Context_10, &hlds__make_goal__GoalInfo0_19);
    }
    {
      hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_goal__Purity_13, hlds__make_goal__GoalInfo0_19, &hlds__make_goal__GoalInfo_20);
    }
    {
      hlds__make_goal__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 0) = ((MR_Box) (hlds__make_goal__LHS_8));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 1) = ((MR_Box) (hlds__make_goal__RHS_9));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[3]));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_3[0])));
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_goal__Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_20));
    }
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_with_context_1_f_0(
  MR_Word hlds__make_goal__Context_3)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__HeadVar__2_2;
    MR_Word hlds__make_goal__GoalExpr_4;
    MR_Word hlds__make_goal__GoalInfo_5;
    MR_Word hlds__make_goal__GoalInfo0_6;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = hlds__make_goal__fail_goal_0_f_0();
    }
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
    {
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
    }
    return hlds__make_goal__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_info_0_f_0(void)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__GoalInfo_2;
    MR_Word hlds__make_goal__InstMapDelta_3;
    MR_Word hlds__make_goal__V_4_4;

    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
    {
      hlds__make_goal__V_4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_4_4, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
    return hlds__make_goal__GoalInfo_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_expr_0_f_0(void)
{
  {
    MR_bool hlds__make_goal__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4]);
  }
}

MR_Word MR_CALL 
hlds__make_goal__fail_goal_0_f_0(void)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__HeadVar__1_1;
    MR_Word hlds__make_goal__GoalInfo_2;
    MR_Word hlds__make_goal__InstMapDelta_3;
    MR_Word hlds__make_goal__V_5_5;

    {
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
    {
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
    {
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4])));
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
    }
    return hlds__make_goal__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_with_context_1_f_0(
  MR_Word hlds__make_goal__Context_3)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__HeadVar__2_2;
    MR_Word hlds__make_goal__GoalExpr_4;
    MR_Word hlds__make_goal__GoalInfo_5;
    MR_Word hlds__make_goal__GoalInfo0_6;
    MR_Word hlds__make_goal__V_7_7;

    {
      hlds__make_goal__V_7_7 = hlds__make_goal__true_goal_0_f_0();
    }
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
    {
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
    {
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
    }
    return hlds__make_goal__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_expr_0_f_0(void)
{
  {
    MR_bool hlds__make_goal__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0]);
  }
}

MR_Word MR_CALL 
hlds__make_goal__true_goal_0_f_0(void)
{
  {
    MR_bool hlds__make_goal__succeeded;
    MR_Word hlds__make_goal__HeadVar__1_1;
    MR_Word hlds__make_goal__GoalInfo_2;
    MR_Word hlds__make_goal__InstMapDelta_3;
    MR_Word hlds__make_goal__V_5_5;

    {
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
    {
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
    {
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
    }
    return hlds__make_goal__HeadVar__1_1;
  }
}

void mercury__hlds__make_goal__init(void)
{
}

void mercury__hlds__make_goal__init_type_tables(void)
{
}

void mercury__hlds__make_goal__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_goal. */
