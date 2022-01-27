/*
** Automatically generated from `make_goal.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 140 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_tuple_3_p_0(
#line 140 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 140 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 140 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 140 "make_goal.m"
{
#line 342 "make_goal.m"
  {
#line 342 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 342 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 342 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 343 "make_goal.m"
    {
#line 343 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 344 "make_goal.m"
    {
#line 344 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 344 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 344 "make_goal.m"
    }
#line 345 "make_goal.m"
    {
#line 345 "make_goal.m"
      hlds__make_goal__deconstruct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
    }
#line 342 "make_goal.m"
  }
#line 140 "make_goal.m"
}

#line 138 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_tuple_3_p_0(
#line 138 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 138 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 138 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 138 "make_goal.m"
{
#line 337 "make_goal.m"
  {
#line 337 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 337 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 337 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 338 "make_goal.m"
    {
#line 338 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 339 "make_goal.m"
    {
#line 339 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 339 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 339 "make_goal.m"
    }
#line 340 "make_goal.m"
    {
#line 340 "make_goal.m"
      hlds__make_goal__construct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
    }
#line 337 "make_goal.m"
  }
#line 138 "make_goal.m"
}

#line 131 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_functor_4_p_0(
#line 131 "make_goal.m"
  MR_Word hlds__make_goal__Var_5,
#line 131 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_6,
#line 131 "make_goal.m"
  MR_Word hlds__make_goal__Args_7,
#line 131 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_8)
#line 131 "make_goal.m"
{
#line 322 "make_goal.m"
  {
#line 322 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 322 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__Unification_15;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 322 "make_goal.m"
    MR_Word hlds__make_goal__V_37_37;

#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 324 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 325 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 325 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 325 "make_goal.m"
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 326 "make_goal.m"
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 326 "make_goal.m"
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 326 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 326 "make_goal.m"
    }
#line 327 "make_goal.m"
    {
#line 327 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 329 "make_goal.m"
    {
#line 329 "make_goal.m"
      hlds__make_goal__Unification_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 4) = ((MR_Box) ((MR_Integer) 1));
#line 329 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 5) = ((MR_Box) ((MR_Integer) 1));
#line 329 "make_goal.m"
    }
#line 331 "make_goal.m"
    {
#line 331 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_15));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 331 "make_goal.m"
    }
#line 332 "make_goal.m"
    {
#line 332 "make_goal.m"
      hlds__make_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 332 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 332 "make_goal.m"
    }
#line 332 "make_goal.m"
    {
#line 332 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_37_37, &hlds__make_goal__NonLocals_17);
    }
#line 333 "make_goal.m"
    {
#line 333 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_vars_1_f_0(hlds__make_goal__Args_7);
    }
#line 334 "make_goal.m"
    {
#line 334 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 335 "make_goal.m"
    {
#line 335 "make_goal.m"
      MR_Word base;
#line 335 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 335 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 335 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 335 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 335 "make_goal.m"
    }
#line 322 "make_goal.m"
  }
#line 131 "make_goal.m"
}

#line 129 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_functor_4_p_0(
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
#line 307 "make_goal.m"
  {
#line 307 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 307 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__Unification_14;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 307 "make_goal.m"
    MR_Word hlds__make_goal__V_38_38;

#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 309 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 310 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 310 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 310 "make_goal.m"
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 311 "make_goal.m"
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 311 "make_goal.m"
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 311 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 311 "make_goal.m"
    }
#line 312 "make_goal.m"
    {
#line 312 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 313 "make_goal.m"
    {
#line 313 "make_goal.m"
      hlds__make_goal__Unification_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 5) = ((MR_Box) ((MR_Integer) 0));
#line 313 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 313 "make_goal.m"
    }
#line 316 "make_goal.m"
    {
#line 316 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_14));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 316 "make_goal.m"
    }
#line 317 "make_goal.m"
    {
#line 317 "make_goal.m"
      hlds__make_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 317 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 317 "make_goal.m"
    }
#line 317 "make_goal.m"
    {
#line 317 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_38_38, &hlds__make_goal__NonLocals_17);
    }
#line 318 "make_goal.m"
    {
#line 318 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__Var_5);
    }
#line 319 "make_goal.m"
    {
#line 319 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 320 "make_goal.m"
    {
#line 320 "make_goal.m"
      MR_Word base;
#line 320 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 320 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 320 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 320 "make_goal.m"
    }
#line 307 "make_goal.m"
  }
#line 129 "make_goal.m"
}

#line 121 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_in_proc_7_p_0(
#line 121 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_8,
#line 121 "make_goal.m"
  MR_Word hlds__make_goal__Type_9,
#line 121 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 121 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 121 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 121 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14,
#line 121 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_15)
#line 121 "make_goal.m"
{
#line 248 "make_goal.m"
  {
#line 248 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 249 "make_goal.m"
    {
#line 249 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__Type_9, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14, hlds__make_goal__STATE_VARIABLE_ProcInfo_15);
    }
#line 250 "make_goal.m"
    {
#line 250 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__ConsId_8, hlds__make_goal__Goal_11);
    }
#line 248 "make_goal.m"
  }
#line 121 "make_goal.m"
}

#line 118 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_in_proc_6_p_0(
#line 118 "make_goal.m"
  MR_Char hlds__make_goal__Char_7,
#line 118 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 118 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 118 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 118 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 118 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 118 "make_goal.m"
{
#line 243 "make_goal.m"
  {
#line 243 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 243 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 243 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 244 "make_goal.m"
    {
#line 244 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 244 "make_goal.m"
    {
#line 244 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_7));
#line 292 "make_goal.m"
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
#line 243 "make_goal.m"
  }
#line 118 "make_goal.m"
}

#line 115 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_in_proc_6_p_0(
#line 115 "make_goal.m"
  MR_Float hlds__make_goal__Float_7,
#line 115 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 115 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 115 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 115 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 115 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 115 "make_goal.m"
{
#line 238 "make_goal.m"
  {
#line 238 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 238 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 238 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 239 "make_goal.m"
    {
#line 239 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 239 "make_goal.m"
    {
#line 239 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = MR_box_float(hlds__make_goal__Float_7);
#line 289 "make_goal.m"
    }
#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
#line 238 "make_goal.m"
  }
#line 115 "make_goal.m"
}

#line 112 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_in_proc_6_p_0(
#line 112 "make_goal.m"
  MR_String hlds__make_goal__String_7,
#line 112 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 112 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 112 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 112 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 112 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 112 "make_goal.m"
{
#line 233 "make_goal.m"
  {
#line 233 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 233 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 233 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 234 "make_goal.m"
    {
#line 234 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 234 "make_goal.m"
    {
#line 234 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__String_7));
#line 286 "make_goal.m"
    }
#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
#line 233 "make_goal.m"
  }
#line 112 "make_goal.m"
}

#line 109 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(
#line 109 "make_goal.m"
  MR_Integer hlds__make_goal__Int_7,
#line 109 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 109 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 109 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 109 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 109 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 109 "make_goal.m"
{
#line 228 "make_goal.m"
  {
#line 228 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 228 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 228 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 229 "make_goal.m"
    {
#line 229 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 229 "make_goal.m"
    {
#line 229 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__Int_7));
#line 283 "make_goal.m"
    }
#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
    }
#line 228 "make_goal.m"
  }
#line 109 "make_goal.m"
}

#line 105 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_9_p_0(
#line 105 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_10,
#line 105 "make_goal.m"
  MR_Word hlds__make_goal__Type_11,
#line 105 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_12,
#line 105 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_13,
#line 105 "make_goal.m"
  MR_Word * hlds__make_goal__Var_14,
#line 105 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_17,
#line 105 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_18,
#line 105 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_19,
#line 105 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_20)
#line 105 "make_goal.m"
{
#line 277 "make_goal.m"
  {
#line 277 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 278 "make_goal.m"
    {
#line 278 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_12, hlds__make_goal__Var_14, hlds__make_goal__STATE_VARIABLE_VarSet_0_17, hlds__make_goal__STATE_VARIABLE_VarSet_18);
    }
#line 279 "make_goal.m"
    {
#line 279 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_14, hlds__make_goal__Type_11, hlds__make_goal__STATE_VARIABLE_VarTypes_0_19, hlds__make_goal__STATE_VARIABLE_VarTypes_20);
    }
#line 280 "make_goal.m"
    {
#line 280 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_14, hlds__make_goal__ConsId_10, hlds__make_goal__Goal_13);
    }
#line 277 "make_goal.m"
  }
#line 105 "make_goal.m"
}

#line 102 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_8_p_0(
#line 102 "make_goal.m"
  MR_Char hlds__make_goal__Char_9,
#line 102 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 102 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 102 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 102 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 102 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 102 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 102 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 102 "make_goal.m"
{
#line 271 "make_goal.m"
  {
#line 271 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 271 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 271 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 272 "make_goal.m"
    {
#line 272 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 273 "make_goal.m"
    {
#line 273 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 273 "make_goal.m"
    {
#line 273 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_9));
#line 292 "make_goal.m"
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
#line 271 "make_goal.m"
  }
#line 102 "make_goal.m"
}

#line 99 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_8_p_0(
#line 99 "make_goal.m"
  MR_Float hlds__make_goal__Float_9,
#line 99 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 99 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 99 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 99 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 99 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 99 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 99 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 99 "make_goal.m"
{
#line 265 "make_goal.m"
  {
#line 265 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 265 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 265 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 266 "make_goal.m"
    {
#line 266 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 267 "make_goal.m"
    {
#line 267 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 267 "make_goal.m"
    {
#line 267 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = MR_box_float(hlds__make_goal__Float_9);
#line 289 "make_goal.m"
    }
#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
#line 265 "make_goal.m"
  }
#line 99 "make_goal.m"
}

#line 96 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_8_p_0(
#line 96 "make_goal.m"
  MR_String hlds__make_goal__String_9,
#line 96 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 96 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 96 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 96 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 96 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 96 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 96 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 96 "make_goal.m"
{
#line 259 "make_goal.m"
  {
#line 259 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 259 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 259 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 260 "make_goal.m"
    {
#line 260 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 261 "make_goal.m"
    {
#line 261 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 261 "make_goal.m"
    {
#line 261 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__String_9));
#line 286 "make_goal.m"
    }
#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
#line 259 "make_goal.m"
  }
#line 96 "make_goal.m"
}

#line 93 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_8_p_0(
#line 93 "make_goal.m"
  MR_Integer hlds__make_goal__Int_9,
#line 93 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 93 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 93 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 93 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 93 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 93 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 93 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 93 "make_goal.m"
{
#line 253 "make_goal.m"
  {
#line 253 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 253 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 253 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 254 "make_goal.m"
    {
#line 254 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 255 "make_goal.m"
    {
#line 255 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 255 "make_goal.m"
    {
#line 255 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Int_9));
#line 283 "make_goal.m"
    }
#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
    }
#line 253 "make_goal.m"
  }
#line 93 "make_goal.m"
}

#line 90 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_3_p_0(
#line 90 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 90 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_5,
#line 90 "make_goal.m"
  MR_Word * hlds__make_goal__HeadVar__3_3)
#line 90 "make_goal.m"
{
#line 294 "make_goal.m"
  {
#line 294 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_6;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_7;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__RHS_8;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__Inst_9;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__Mode_10;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__Unification_11;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_13;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta0_14;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_15;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 294 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__RHS_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__Inst_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 1) = ((MR_Box) ((MR_Integer) 1));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 3) = ((MR_Box) (hlds__make_goal__V_20_20));
#line 296 "make_goal.m"
    }
#line 297 "make_goal.m"
    {
#line 297 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 297 "make_goal.m"
    }
#line 297 "make_goal.m"
    {
#line 297 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 0) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 297 "make_goal.m"
    }
#line 297 "make_goal.m"
    {
#line 297 "make_goal.m"
      hlds__make_goal__Mode_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 0) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 297 "make_goal.m"
    }
#line 298 "make_goal.m"
    {
#line 298 "make_goal.m"
      hlds__make_goal__Unification_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 1) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 5) = ((MR_Box) ((MR_Integer) 0));
#line 298 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "make_goal.m"
    }
#line 301 "make_goal.m"
    {
#line 301 "make_goal.m"
      hlds__make_goal__GoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 301 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 301 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 1) = ((MR_Box) (hlds__make_goal__RHS_8));
#line 301 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 2) = ((MR_Box) (hlds__make_goal__Mode_10));
#line 301 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 3) = ((MR_Box) (hlds__make_goal__Unification_11));
#line 301 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 301 "make_goal.m"
    }
#line 302 "make_goal.m"
    {
#line 302 "make_goal.m"
      hlds__make_goal__NonLocals_13 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__Var_4);
    }
#line 303 "make_goal.m"
    {
#line 303 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta0_14);
    }
#line 304 "make_goal.m"
    {
#line 304 "make_goal.m"
      hlds__instmap__instmap_delta_insert_var_4_p_0(hlds__make_goal__Var_4, hlds__make_goal__Inst_9, hlds__make_goal__InstMapDelta0_14, &hlds__make_goal__InstMapDelta_15);
    }
#line 305 "make_goal.m"
    {
#line 305 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_13, hlds__make_goal__InstMapDelta_15, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_7);
    }
#line 294 "make_goal.m"
    {
#line 294 "make_goal.m"
      MR_Word base;
#line 294 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 294 "make_goal.m"
      *hlds__make_goal__HeadVar__3_3 = base;
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_6));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_7));
#line 294 "make_goal.m"
    }
#line 294 "make_goal.m"
  }
#line 90 "make_goal.m"
}

#line 88 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_3_p_0(
#line 88 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 88 "make_goal.m"
  MR_Char hlds__make_goal__Char_5,
#line 88 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 88 "make_goal.m"
{
#line 291 "make_goal.m"
  {
#line 291 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 291 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 292 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_5));
#line 292 "make_goal.m"
    }
#line 292 "make_goal.m"
    {
#line 292 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
#line 291 "make_goal.m"
  }
#line 88 "make_goal.m"
}

#line 86 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_3_p_0(
#line 86 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 86 "make_goal.m"
  MR_Float hlds__make_goal__Float_5,
#line 86 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 86 "make_goal.m"
{
#line 288 "make_goal.m"
  {
#line 288 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 288 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 289 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = MR_box_float(hlds__make_goal__Float_5);
#line 289 "make_goal.m"
    }
#line 289 "make_goal.m"
    {
#line 289 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
#line 288 "make_goal.m"
  }
#line 86 "make_goal.m"
}

#line 84 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_3_p_0(
#line 84 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 84 "make_goal.m"
  MR_String hlds__make_goal__String_5,
#line 84 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 84 "make_goal.m"
{
#line 285 "make_goal.m"
  {
#line 285 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 285 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 286 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__String_5));
#line 286 "make_goal.m"
    }
#line 286 "make_goal.m"
    {
#line 286 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
#line 285 "make_goal.m"
  }
#line 84 "make_goal.m"
}

#line 82 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_3_p_0(
#line 82 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 82 "make_goal.m"
  MR_Integer hlds__make_goal__Int_5,
#line 82 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 82 "make_goal.m"
{
#line 282 "make_goal.m"
  {
#line 282 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 282 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 283 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__Int_5));
#line 283 "make_goal.m"
    }
#line 283 "make_goal.m"
    {
#line 283 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
    }
#line 282 "make_goal.m"
  }
#line 82 "make_goal.m"
}

#line 71 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_test_5_p_0(
#line 71 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 71 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 71 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 71 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 71 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 71 "make_goal.m"
{
#line 215 "make_goal.m"
  {
#line 215 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 215 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__X_6));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 2) = ((MR_Box) (hlds__make_goal__Y_7));
#line 218 "make_goal.m"
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 219 "make_goal.m"
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "make_goal.m"
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 220 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 220 "make_goal.m"
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 220 "make_goal.m"
    {
#line 220 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 1, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 222 "make_goal.m"
    {
#line 222 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 222 "make_goal.m"
    }
#line 222 "make_goal.m"
    {
#line 222 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[8]));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 222 "make_goal.m"
    }
#line 223 "make_goal.m"
    {
#line 223 "make_goal.m"
      MR_Word base;
#line 223 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 223 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 223 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 223 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 223 "make_goal.m"
    }
#line 215 "make_goal.m"
  }
#line 71 "make_goal.m"
}

#line 65 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_assign_5_p_0(
#line 65 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 65 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 65 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 65 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 65 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 65 "make_goal.m"
{
#line 205 "make_goal.m"
  {
#line 205 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 205 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__Y_7));
#line 208 "make_goal.m"
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 209 "make_goal.m"
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "make_goal.m"
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 210 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 210 "make_goal.m"
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__X_6);
    }
#line 210 "make_goal.m"
    {
#line 210 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 212 "make_goal.m"
    {
#line 212 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 212 "make_goal.m"
    }
#line 212 "make_goal.m"
    {
#line 212 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[7]));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 212 "make_goal.m"
    }
#line 213 "make_goal.m"
    {
#line 213 "make_goal.m"
      MR_Word base;
#line 213 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 213 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 213 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 213 "make_goal.m"
    }
#line 205 "make_goal.m"
  }
#line 65 "make_goal.m"
}

#line 57 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(
#line 57 "make_goal.m"
  MR_Word hlds__make_goal__LHS_7,
#line 57 "make_goal.m"
  MR_Word hlds__make_goal__RHS_8,
#line 57 "make_goal.m"
  MR_Word hlds__make_goal__Context_9,
#line 57 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_10,
#line 57 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_11,
#line 57 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_12)
#line 57 "make_goal.m"
{
#line 188 "make_goal.m"
  {
#line 188 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 189 "make_goal.m"
    {
#line 189 "make_goal.m"
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(hlds__make_goal__LHS_7, hlds__make_goal__RHS_8, hlds__make_goal__Context_9, hlds__make_goal__UnifyMainContext_10, hlds__make_goal__UnifySubContext_11, (MR_Integer) 0, hlds__make_goal__Goal_12);
    }
#line 188 "make_goal.m"
  }
#line 57 "make_goal.m"
}

#line 51 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_atomic_complicated_unification_7_p_0(
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__LHS_8,
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__RHS_9,
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__Context_10,
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_11,
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_12,
#line 51 "make_goal.m"
  MR_Word hlds__make_goal__Purity_13,
#line 51 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_14)
#line 51 "make_goal.m"
{
#line 193 "make_goal.m"
  {
#line 193 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 193 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_18;
#line 193 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_19;
#line 193 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_20;
#line 193 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_21;

#line 197 "make_goal.m"
    {
#line 197 "make_goal.m"
      hlds__make_goal__UnifyContext_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_11));
#line 197 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_12));
#line 197 "make_goal.m"
    }
#line 198 "make_goal.m"
    {
#line 198 "make_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_goal__Context_10, &hlds__make_goal__GoalInfo0_19);
    }
#line 199 "make_goal.m"
    {
#line 199 "make_goal.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_goal__Purity_13, hlds__make_goal__GoalInfo0_19, &hlds__make_goal__GoalInfo_20);
    }
#line 200 "make_goal.m"
    {
#line 200 "make_goal.m"
      hlds__make_goal__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 0) = ((MR_Box) (hlds__make_goal__LHS_8));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 1) = ((MR_Box) (hlds__make_goal__RHS_9));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[3]));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_3[0])));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_18));
#line 200 "make_goal.m"
    }
#line 201 "make_goal.m"
    {
#line 201 "make_goal.m"
      MR_Word base;
#line 201 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "make_goal.m"
      *hlds__make_goal__Goal_14 = base;
#line 201 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_21));
#line 201 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_20));
#line 201 "make_goal.m"
    }
#line 193 "make_goal.m"
  }
#line 51 "make_goal.m"
}

#line 42 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_with_context_1_f_0(
#line 42 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 42 "make_goal.m"
{
#line 181 "make_goal.m"
  {
#line 181 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 181 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 181 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 181 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 181 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 181 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 182 "make_goal.m"
    {
#line 182 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 182 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 182 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 183 "make_goal.m"
    {
#line 183 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 181 "make_goal.m"
    {
#line 181 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 181 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 181 "make_goal.m"
    }
#line 181 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 181 "make_goal.m"
  }
#line 42 "make_goal.m"
}

#line 40 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_info_0_f_0(void)
#line 40 "make_goal.m"
{
#line 176 "make_goal.m"
  {
#line 176 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 176 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 176 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 176 "make_goal.m"
    MR_Word hlds__make_goal__V_4_4;

#line 177 "make_goal.m"
    {
#line 177 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 178 "make_goal.m"
    {
#line 178 "make_goal.m"
      hlds__make_goal__V_4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 178 "make_goal.m"
    {
#line 178 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_4_4, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 176 "make_goal.m"
    return hlds__make_goal__GoalInfo_2;
#line 176 "make_goal.m"
  }
#line 40 "make_goal.m"
}

#line 39 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_expr_0_f_0(void)
#line 39 "make_goal.m"
{
#line 174 "make_goal.m"
  {
#line 174 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 174 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4]);
#line 174 "make_goal.m"
  }
#line 39 "make_goal.m"
}

#line 38 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_0_f_0(void)
#line 38 "make_goal.m"
{
#line 169 "make_goal.m"
  {
#line 169 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 169 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 169 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 169 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 169 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 170 "make_goal.m"
    {
#line 170 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 171 "make_goal.m"
    {
#line 171 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 171 "make_goal.m"
    {
#line 171 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 169 "make_goal.m"
    {
#line 169 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4])));
#line 169 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 169 "make_goal.m"
    }
#line 169 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 169 "make_goal.m"
  }
#line 38 "make_goal.m"
}

#line 34 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_with_context_1_f_0(
#line 34 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 34 "make_goal.m"
{
#line 165 "make_goal.m"
  {
#line 165 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 165 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 165 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 165 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 165 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 165 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 166 "make_goal.m"
    {
#line 166 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__true_goal_0_f_0();
    }
#line 166 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 166 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 167 "make_goal.m"
    {
#line 167 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 165 "make_goal.m"
    {
#line 165 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 165 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 165 "make_goal.m"
    }
#line 165 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 165 "make_goal.m"
  }
#line 34 "make_goal.m"
}

#line 32 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_expr_0_f_0(void)
#line 32 "make_goal.m"
{
#line 163 "make_goal.m"
  {
#line 163 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 163 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0]);
#line 163 "make_goal.m"
  }
#line 32 "make_goal.m"
}

#line 31 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_0_f_0(void)
#line 31 "make_goal.m"
{
#line 158 "make_goal.m"
  {
#line 158 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 158 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 158 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 158 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 158 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 159 "make_goal.m"
    {
#line 159 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 160 "make_goal.m"
    {
#line 160 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 160 "make_goal.m"
    {
#line 160 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 158 "make_goal.m"
    {
#line 158 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 158 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0])));
#line 158 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 158 "make_goal.m"
    }
#line 158 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 158 "make_goal.m"
  }
#line 31 "make_goal.m"
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
