/*
** Automatically generated from `make_goal.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 138 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_tuple_3_p_0(
#line 138 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 138 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 138 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 138 "make_goal.m"
{
#line 340 "make_goal.m"
  {
#line 340 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 340 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 340 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 341 "make_goal.m"
    {
#line 341 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 342 "make_goal.m"
    {
#line 342 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 342 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 342 "make_goal.m"
    }
#line 343 "make_goal.m"
    {
#line 343 "make_goal.m"
      hlds__make_goal__deconstruct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
#line 343 "make_goal.m"
      return;
    }
#line 340 "make_goal.m"
  }
#line 138 "make_goal.m"
}

#line 136 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_tuple_3_p_0(
#line 136 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 136 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 136 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 136 "make_goal.m"
{
#line 335 "make_goal.m"
  {
#line 335 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 335 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 335 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 336 "make_goal.m"
    {
#line 336 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 337 "make_goal.m"
    {
#line 337 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 337 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 337 "make_goal.m"
    }
#line 338 "make_goal.m"
    {
#line 338 "make_goal.m"
      hlds__make_goal__construct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
#line 338 "make_goal.m"
      return;
    }
#line 335 "make_goal.m"
  }
#line 136 "make_goal.m"
}

#line 129 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_functor_4_p_0(
#line 129 "make_goal.m"
  MR_Word hlds__make_goal__Var_5,
#line 129 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_6,
#line 129 "make_goal.m"
  MR_Word hlds__make_goal__Args_7,
#line 129 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_8)
#line 129 "make_goal.m"
{
#line 320 "make_goal.m"
  {
#line 320 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 320 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__Unification_15;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 320 "make_goal.m"
    MR_Word hlds__make_goal__V_37_37;

#line 321 "make_goal.m"
    {
#line 321 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 322 "make_goal.m"
    {
#line 322 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 322 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 322 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 322 "make_goal.m"
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 323 "make_goal.m"
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 323 "make_goal.m"
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 323 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 324 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 324 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 324 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 327 "make_goal.m"
    {
#line 327 "make_goal.m"
      hlds__make_goal__Unification_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 4) = ((MR_Box) ((MR_Integer) 1));
#line 327 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 5) = ((MR_Box) ((MR_Integer) 1));
#line 327 "make_goal.m"
    }
#line 329 "make_goal.m"
    {
#line 329 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_15));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 329 "make_goal.m"
    }
#line 330 "make_goal.m"
    {
#line 330 "make_goal.m"
      hlds__make_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 330 "make_goal.m"
    }
#line 330 "make_goal.m"
    {
#line 330 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_37_37, &hlds__make_goal__NonLocals_17);
    }
#line 331 "make_goal.m"
    {
#line 331 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_vars_1_f_0(hlds__make_goal__Args_7);
    }
#line 332 "make_goal.m"
    {
#line 332 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 333 "make_goal.m"
    {
#line 333 "make_goal.m"
      MR_Word base;
#line 333 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 333 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 333 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 333 "make_goal.m"
    }
#line 320 "make_goal.m"
  }
#line 129 "make_goal.m"
}

#line 127 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_functor_4_p_0(
#line 127 "make_goal.m"
  MR_Word hlds__make_goal__Var_5,
#line 127 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_6,
#line 127 "make_goal.m"
  MR_Word hlds__make_goal__Args_7,
#line 127 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_8)
#line 127 "make_goal.m"
{
#line 305 "make_goal.m"
  {
#line 305 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 305 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__Unification_14;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 305 "make_goal.m"
    MR_Word hlds__make_goal__V_38_38;

#line 306 "make_goal.m"
    {
#line 306 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 307 "make_goal.m"
    {
#line 307 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 307 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 307 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 307 "make_goal.m"
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 308 "make_goal.m"
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 308 "make_goal.m"
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 308 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 309 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 309 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 309 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__Unification_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 5) = ((MR_Box) ((MR_Integer) 0));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "make_goal.m"
    }
#line 314 "make_goal.m"
    {
#line 314 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 314 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 314 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 314 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 314 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_14));
#line 314 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 314 "make_goal.m"
    }
#line 315 "make_goal.m"
    {
#line 315 "make_goal.m"
      hlds__make_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 315 "make_goal.m"
    }
#line 315 "make_goal.m"
    {
#line 315 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_38_38, &hlds__make_goal__NonLocals_17);
    }
#line 316 "make_goal.m"
    {
#line 316 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__Var_5);
    }
#line 317 "make_goal.m"
    {
#line 317 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 318 "make_goal.m"
    {
#line 318 "make_goal.m"
      MR_Word base;
#line 318 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 318 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 318 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 318 "make_goal.m"
    }
#line 305 "make_goal.m"
  }
#line 127 "make_goal.m"
}

#line 119 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_in_proc_7_p_0(
#line 119 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_8,
#line 119 "make_goal.m"
  MR_Word hlds__make_goal__Type_9,
#line 119 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 119 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 119 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 119 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14,
#line 119 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_15)
#line 119 "make_goal.m"
{
#line 246 "make_goal.m"
  {
#line 246 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 247 "make_goal.m"
    {
#line 247 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__Type_9, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14, hlds__make_goal__STATE_VARIABLE_ProcInfo_15);
    }
#line 248 "make_goal.m"
    {
#line 248 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__ConsId_8, hlds__make_goal__Goal_11);
#line 248 "make_goal.m"
      return;
    }
#line 246 "make_goal.m"
  }
#line 119 "make_goal.m"
}

#line 116 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_in_proc_6_p_0(
#line 116 "make_goal.m"
  MR_Char hlds__make_goal__Char_7,
#line 116 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 116 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 116 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 116 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 116 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 116 "make_goal.m"
{
#line 241 "make_goal.m"
  {
#line 241 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 241 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 241 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 242 "make_goal.m"
    {
#line 242 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 242 "make_goal.m"
    {
#line 242 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_7));
#line 290 "make_goal.m"
    }
#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 290 "make_goal.m"
      return;
    }
#line 241 "make_goal.m"
  }
#line 116 "make_goal.m"
}

#line 113 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_in_proc_6_p_0(
#line 113 "make_goal.m"
  MR_Float hlds__make_goal__Float_7,
#line 113 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 113 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 113 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 113 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 113 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 113 "make_goal.m"
{
#line 236 "make_goal.m"
  {
#line 236 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 236 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 236 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 237 "make_goal.m"
    {
#line 237 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 237 "make_goal.m"
    {
#line 237 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = MR_box_float(hlds__make_goal__Float_7);
#line 287 "make_goal.m"
    }
#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 287 "make_goal.m"
      return;
    }
#line 236 "make_goal.m"
  }
#line 113 "make_goal.m"
}

#line 110 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_in_proc_6_p_0(
#line 110 "make_goal.m"
  MR_String hlds__make_goal__String_7,
#line 110 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 110 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 110 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 110 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 110 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 110 "make_goal.m"
{
#line 231 "make_goal.m"
  {
#line 231 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 231 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 231 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 232 "make_goal.m"
    {
#line 232 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 232 "make_goal.m"
    {
#line 232 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__String_7));
#line 284 "make_goal.m"
    }
#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 284 "make_goal.m"
      return;
    }
#line 231 "make_goal.m"
  }
#line 110 "make_goal.m"
}

#line 107 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(
#line 107 "make_goal.m"
  MR_Integer hlds__make_goal__Int_7,
#line 107 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 107 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 107 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 107 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 107 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 107 "make_goal.m"
{
#line 226 "make_goal.m"
  {
#line 226 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 226 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 226 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 227 "make_goal.m"
    {
#line 227 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 227 "make_goal.m"
    {
#line 227 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__Int_7));
#line 281 "make_goal.m"
    }
#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 281 "make_goal.m"
      return;
    }
#line 226 "make_goal.m"
  }
#line 107 "make_goal.m"
}

#line 103 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_9_p_0(
#line 103 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_10,
#line 103 "make_goal.m"
  MR_Word hlds__make_goal__Type_11,
#line 103 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_12,
#line 103 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_13,
#line 103 "make_goal.m"
  MR_Word * hlds__make_goal__Var_14,
#line 103 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_17,
#line 103 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_18,
#line 103 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_19,
#line 103 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_20)
#line 103 "make_goal.m"
{
#line 275 "make_goal.m"
  {
#line 275 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 276 "make_goal.m"
    {
#line 276 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_12, hlds__make_goal__Var_14, hlds__make_goal__STATE_VARIABLE_VarSet_0_17, hlds__make_goal__STATE_VARIABLE_VarSet_18);
    }
#line 277 "make_goal.m"
    {
#line 277 "make_goal.m"
      parse_tree__prog_data__add_var_type_4_p_0(*hlds__make_goal__Var_14, hlds__make_goal__Type_11, hlds__make_goal__STATE_VARIABLE_VarTypes_0_19, hlds__make_goal__STATE_VARIABLE_VarTypes_20);
    }
#line 278 "make_goal.m"
    {
#line 278 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_14, hlds__make_goal__ConsId_10, hlds__make_goal__Goal_13);
#line 278 "make_goal.m"
      return;
    }
#line 275 "make_goal.m"
  }
#line 103 "make_goal.m"
}

#line 100 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_8_p_0(
#line 100 "make_goal.m"
  MR_Char hlds__make_goal__Char_9,
#line 100 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 100 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 100 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 100 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 100 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 100 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 100 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 100 "make_goal.m"
{
#line 269 "make_goal.m"
  {
#line 269 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 269 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 269 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 270 "make_goal.m"
    {
#line 270 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 271 "make_goal.m"
    {
#line 271 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 271 "make_goal.m"
    {
#line 271 "make_goal.m"
      parse_tree__prog_data__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_9));
#line 290 "make_goal.m"
    }
#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 290 "make_goal.m"
      return;
    }
#line 269 "make_goal.m"
  }
#line 100 "make_goal.m"
}

#line 97 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_8_p_0(
#line 97 "make_goal.m"
  MR_Float hlds__make_goal__Float_9,
#line 97 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 97 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 97 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 97 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 97 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 97 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 97 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 97 "make_goal.m"
{
#line 263 "make_goal.m"
  {
#line 263 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 263 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 263 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 264 "make_goal.m"
    {
#line 264 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 265 "make_goal.m"
    {
#line 265 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 265 "make_goal.m"
    {
#line 265 "make_goal.m"
      parse_tree__prog_data__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = MR_box_float(hlds__make_goal__Float_9);
#line 287 "make_goal.m"
    }
#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 287 "make_goal.m"
      return;
    }
#line 263 "make_goal.m"
  }
#line 97 "make_goal.m"
}

#line 94 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_8_p_0(
#line 94 "make_goal.m"
  MR_String hlds__make_goal__String_9,
#line 94 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 94 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 94 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 94 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 94 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 94 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 94 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 94 "make_goal.m"
{
#line 257 "make_goal.m"
  {
#line 257 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 257 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 257 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 258 "make_goal.m"
    {
#line 258 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 259 "make_goal.m"
    {
#line 259 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 259 "make_goal.m"
    {
#line 259 "make_goal.m"
      parse_tree__prog_data__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__String_9));
#line 284 "make_goal.m"
    }
#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 284 "make_goal.m"
      return;
    }
#line 257 "make_goal.m"
  }
#line 94 "make_goal.m"
}

#line 91 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_8_p_0(
#line 91 "make_goal.m"
  MR_Integer hlds__make_goal__Int_9,
#line 91 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 91 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 91 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 91 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 91 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 91 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 91 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 91 "make_goal.m"
{
#line 251 "make_goal.m"
  {
#line 251 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 251 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 251 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 252 "make_goal.m"
    {
#line 252 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 253 "make_goal.m"
    {
#line 253 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 253 "make_goal.m"
    {
#line 253 "make_goal.m"
      parse_tree__prog_data__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Int_9));
#line 281 "make_goal.m"
    }
#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 281 "make_goal.m"
      return;
    }
#line 251 "make_goal.m"
  }
#line 91 "make_goal.m"
}

#line 88 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_3_p_0(
#line 88 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 88 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_5,
#line 88 "make_goal.m"
  MR_Word * hlds__make_goal__HeadVar__3_3)
#line 88 "make_goal.m"
{
#line 292 "make_goal.m"
  {
#line 292 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_6;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_7;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__RHS_8;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__Inst_9;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__Mode_10;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__Unification_11;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_13;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta0_14;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_15;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 292 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 293 "make_goal.m"
    {
#line 293 "make_goal.m"
      hlds__make_goal__RHS_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 293 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 293 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 293 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "make_goal.m"
    }
#line 294 "make_goal.m"
    {
#line 294 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "make_goal.m"
    }
#line 294 "make_goal.m"
    {
#line 294 "make_goal.m"
      hlds__make_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "make_goal.m"
    }
#line 294 "make_goal.m"
    {
#line 294 "make_goal.m"
      hlds__make_goal__Inst_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 1) = ((MR_Box) ((MR_Integer) 1));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 3) = ((MR_Box) (hlds__make_goal__V_20_20));
#line 294 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 295 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 0) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 295 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__Mode_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 0) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 295 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__Unification_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 1) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 5) = ((MR_Box) ((MR_Integer) 0));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
    }
#line 299 "make_goal.m"
    {
#line 299 "make_goal.m"
      hlds__make_goal__GoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 299 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 299 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 1) = ((MR_Box) (hlds__make_goal__RHS_8));
#line 299 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 2) = ((MR_Box) (hlds__make_goal__Mode_10));
#line 299 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 3) = ((MR_Box) (hlds__make_goal__Unification_11));
#line 299 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 299 "make_goal.m"
    }
#line 300 "make_goal.m"
    {
#line 300 "make_goal.m"
      hlds__make_goal__NonLocals_13 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__Var_4);
    }
#line 301 "make_goal.m"
    {
#line 301 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta0_14);
    }
#line 302 "make_goal.m"
    {
#line 302 "make_goal.m"
      hlds__instmap__instmap_delta_insert_var_4_p_0(hlds__make_goal__Var_4, hlds__make_goal__Inst_9, hlds__make_goal__InstMapDelta0_14, &hlds__make_goal__InstMapDelta_15);
    }
#line 303 "make_goal.m"
    {
#line 303 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_13, hlds__make_goal__InstMapDelta_15, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_7);
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      MR_Word base;
#line 292 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "make_goal.m"
      *hlds__make_goal__HeadVar__3_3 = base;
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_6));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_7));
#line 292 "make_goal.m"
    }
#line 292 "make_goal.m"
  }
#line 88 "make_goal.m"
}

#line 86 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_3_p_0(
#line 86 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 86 "make_goal.m"
  MR_Char hlds__make_goal__Char_5,
#line 86 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 86 "make_goal.m"
{
#line 289 "make_goal.m"
  {
#line 289 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 289 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 290 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_5));
#line 290 "make_goal.m"
    }
#line 290 "make_goal.m"
    {
#line 290 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 290 "make_goal.m"
      return;
    }
#line 289 "make_goal.m"
  }
#line 86 "make_goal.m"
}

#line 84 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_3_p_0(
#line 84 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 84 "make_goal.m"
  MR_Float hlds__make_goal__Float_5,
#line 84 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 84 "make_goal.m"
{
#line 286 "make_goal.m"
  {
#line 286 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 286 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 287 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = MR_box_float(hlds__make_goal__Float_5);
#line 287 "make_goal.m"
    }
#line 287 "make_goal.m"
    {
#line 287 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 287 "make_goal.m"
      return;
    }
#line 286 "make_goal.m"
  }
#line 84 "make_goal.m"
}

#line 82 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_3_p_0(
#line 82 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 82 "make_goal.m"
  MR_String hlds__make_goal__String_5,
#line 82 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 82 "make_goal.m"
{
#line 283 "make_goal.m"
  {
#line 283 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 283 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 284 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__String_5));
#line 284 "make_goal.m"
    }
#line 284 "make_goal.m"
    {
#line 284 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 284 "make_goal.m"
      return;
    }
#line 283 "make_goal.m"
  }
#line 82 "make_goal.m"
}

#line 80 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_3_p_0(
#line 80 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 80 "make_goal.m"
  MR_Integer hlds__make_goal__Int_5,
#line 80 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 80 "make_goal.m"
{
#line 280 "make_goal.m"
  {
#line 280 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 280 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 281 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__Int_5));
#line 281 "make_goal.m"
    }
#line 281 "make_goal.m"
    {
#line 281 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 281 "make_goal.m"
      return;
    }
#line 280 "make_goal.m"
  }
#line 80 "make_goal.m"
}

#line 69 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_test_5_p_0(
#line 69 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 69 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 69 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 69 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 69 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 69 "make_goal.m"
{
#line 213 "make_goal.m"
  {
#line 213 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 213 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 216 "make_goal.m"
    {
#line 216 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 216 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 216 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__X_6));
#line 216 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 2) = ((MR_Box) (hlds__make_goal__Y_7));
#line 216 "make_goal.m"
    }
#line 217 "make_goal.m"
    {
#line 217 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 217 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 217 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 217 "make_goal.m"
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "make_goal.m"
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 218 "make_goal.m"
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 1, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 220 "make_goal.m"
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[8]));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 220 "make_goal.m"
    }
#line 221 "make_goal.m"
    {
#line 221 "make_goal.m"
      MR_Word base;
#line 221 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 221 "make_goal.m"
    }
#line 213 "make_goal.m"
  }
#line 69 "make_goal.m"
}

#line 63 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_assign_5_p_0(
#line 63 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 63 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 63 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 63 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 63 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 63 "make_goal.m"
{
#line 203 "make_goal.m"
  {
#line 203 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 203 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 206 "make_goal.m"
    {
#line 206 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 206 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__Y_7));
#line 206 "make_goal.m"
    }
#line 207 "make_goal.m"
    {
#line 207 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 207 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 207 "make_goal.m"
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "make_goal.m"
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 208 "make_goal.m"
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__X_6);
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 210 "make_goal.m"
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[7]));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 210 "make_goal.m"
    }
#line 211 "make_goal.m"
    {
#line 211 "make_goal.m"
      MR_Word base;
#line 211 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 211 "make_goal.m"
    }
#line 203 "make_goal.m"
  }
#line 63 "make_goal.m"
}

#line 55 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(
#line 55 "make_goal.m"
  MR_Word hlds__make_goal__LHS_7,
#line 55 "make_goal.m"
  MR_Word hlds__make_goal__RHS_8,
#line 55 "make_goal.m"
  MR_Word hlds__make_goal__Context_9,
#line 55 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_10,
#line 55 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_11,
#line 55 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_12)
#line 55 "make_goal.m"
{
#line 186 "make_goal.m"
  {
#line 186 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 187 "make_goal.m"
    {
#line 187 "make_goal.m"
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(hlds__make_goal__LHS_7, hlds__make_goal__RHS_8, hlds__make_goal__Context_9, hlds__make_goal__UnifyMainContext_10, hlds__make_goal__UnifySubContext_11, (MR_Integer) 0, hlds__make_goal__Goal_12);
#line 187 "make_goal.m"
      return;
    }
#line 186 "make_goal.m"
  }
#line 55 "make_goal.m"
}

#line 49 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_atomic_complicated_unification_7_p_0(
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__LHS_8,
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__RHS_9,
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__Context_10,
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_11,
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_12,
#line 49 "make_goal.m"
  MR_Word hlds__make_goal__Purity_13,
#line 49 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_14)
#line 49 "make_goal.m"
{
#line 191 "make_goal.m"
  {
#line 191 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 191 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_18;
#line 191 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_19;
#line 191 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_20;
#line 191 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_21;

#line 195 "make_goal.m"
    {
#line 195 "make_goal.m"
      hlds__make_goal__UnifyContext_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_11));
#line 195 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_12));
#line 195 "make_goal.m"
    }
#line 196 "make_goal.m"
    {
#line 196 "make_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_goal__Context_10, &hlds__make_goal__GoalInfo0_19);
    }
#line 197 "make_goal.m"
    {
#line 197 "make_goal.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_goal__Purity_13, hlds__make_goal__GoalInfo0_19, &hlds__make_goal__GoalInfo_20);
    }
#line 198 "make_goal.m"
    {
#line 198 "make_goal.m"
      hlds__make_goal__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 198 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 0) = ((MR_Box) (hlds__make_goal__LHS_8));
#line 198 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 1) = ((MR_Box) (hlds__make_goal__RHS_9));
#line 198 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[3]));
#line 198 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_3[0])));
#line 198 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_18));
#line 198 "make_goal.m"
    }
#line 199 "make_goal.m"
    {
#line 199 "make_goal.m"
      MR_Word base;
#line 199 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "make_goal.m"
      *hlds__make_goal__Goal_14 = base;
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_21));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_20));
#line 199 "make_goal.m"
    }
#line 191 "make_goal.m"
  }
#line 49 "make_goal.m"
}

#line 40 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_with_context_1_f_0(
#line 40 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 40 "make_goal.m"
{
#line 179 "make_goal.m"
  {
#line 179 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 179 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 179 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 179 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 179 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 179 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 180 "make_goal.m"
    {
#line 180 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 180 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 180 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 181 "make_goal.m"
    {
#line 181 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 179 "make_goal.m"
    {
#line 179 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 179 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 179 "make_goal.m"
    }
#line 179 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 179 "make_goal.m"
  }
#line 40 "make_goal.m"
}

#line 38 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_info_0_f_0(void)
#line 38 "make_goal.m"
{
#line 174 "make_goal.m"
  {
#line 174 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 174 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 174 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 174 "make_goal.m"
    MR_Word hlds__make_goal__V_4_4;

#line 175 "make_goal.m"
    {
#line 175 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 176 "make_goal.m"
    {
#line 176 "make_goal.m"
      hlds__make_goal__V_4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 176 "make_goal.m"
    {
#line 176 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_4_4, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 174 "make_goal.m"
    return hlds__make_goal__GoalInfo_2;
#line 174 "make_goal.m"
  }
#line 38 "make_goal.m"
}

#line 37 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_expr_0_f_0(void)
#line 37 "make_goal.m"
{
#line 172 "make_goal.m"
  {
#line 172 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 172 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4]);
#line 172 "make_goal.m"
  }
#line 37 "make_goal.m"
}

#line 36 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_0_f_0(void)
#line 36 "make_goal.m"
{
#line 167 "make_goal.m"
  {
#line 167 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 167 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 167 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 167 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 167 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 168 "make_goal.m"
    {
#line 168 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 169 "make_goal.m"
    {
#line 169 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 169 "make_goal.m"
    {
#line 169 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 167 "make_goal.m"
    {
#line 167 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4])));
#line 167 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 167 "make_goal.m"
    }
#line 167 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 167 "make_goal.m"
  }
#line 36 "make_goal.m"
}

#line 32 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_with_context_1_f_0(
#line 32 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 32 "make_goal.m"
{
#line 163 "make_goal.m"
  {
#line 163 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 163 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 163 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 163 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 163 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 163 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 164 "make_goal.m"
    {
#line 164 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__true_goal_0_f_0();
    }
#line 164 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 164 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 165 "make_goal.m"
    {
#line 165 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 163 "make_goal.m"
    {
#line 163 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 163 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 163 "make_goal.m"
    }
#line 163 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 163 "make_goal.m"
  }
#line 32 "make_goal.m"
}

#line 30 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_expr_0_f_0(void)
#line 30 "make_goal.m"
{
#line 161 "make_goal.m"
  {
#line 161 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 161 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0]);
#line 161 "make_goal.m"
  }
#line 30 "make_goal.m"
}

#line 29 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_0_f_0(void)
#line 29 "make_goal.m"
{
#line 156 "make_goal.m"
  {
#line 156 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 156 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 156 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 156 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 156 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 157 "make_goal.m"
    {
#line 157 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 158 "make_goal.m"
    {
#line 158 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 158 "make_goal.m"
    {
#line 158 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 156 "make_goal.m"
    {
#line 156 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0])));
#line 156 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 156 "make_goal.m"
    }
#line 156 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 156 "make_goal.m"
  }
#line 29 "make_goal.m"
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
