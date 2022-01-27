/*
** Automatically generated from `make_goal.m'
** by the Mercury compiler,
** version DEV
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 139 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_tuple_3_p_0(
#line 139 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 139 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 139 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 139 "make_goal.m"
{
#line 341 "make_goal.m"
  {
#line 341 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 341 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 341 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 342 "make_goal.m"
    {
#line 342 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 343 "make_goal.m"
    {
#line 343 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 343 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 343 "make_goal.m"
    }
#line 344 "make_goal.m"
    {
#line 344 "make_goal.m"
      hlds__make_goal__deconstruct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
#line 344 "make_goal.m"
      return;
    }
#line 341 "make_goal.m"
  }
#line 139 "make_goal.m"
}

#line 137 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_tuple_3_p_0(
#line 137 "make_goal.m"
  MR_Word hlds__make_goal__Tuple_4,
#line 137 "make_goal.m"
  MR_Word hlds__make_goal__Args_5,
#line 137 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 137 "make_goal.m"
{
#line 336 "make_goal.m"
  {
#line 336 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 336 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_7;
#line 336 "make_goal.m"
    MR_Word hlds__make_goal__ConsId_8;

#line 337 "make_goal.m"
    {
#line 337 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_5, &hlds__make_goal__Arity_7);
    }
#line 338 "make_goal.m"
    {
#line 338 "make_goal.m"
      hlds__make_goal__ConsId_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 338 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__ConsId_8, 1) = ((MR_Box) (hlds__make_goal__Arity_7));
#line 338 "make_goal.m"
    }
#line 339 "make_goal.m"
    {
#line 339 "make_goal.m"
      hlds__make_goal__construct_functor_4_p_0(hlds__make_goal__Tuple_4, hlds__make_goal__ConsId_8, hlds__make_goal__Args_5, hlds__make_goal__Goal_6);
#line 339 "make_goal.m"
      return;
    }
#line 336 "make_goal.m"
  }
#line 137 "make_goal.m"
}

#line 130 "make_goal.m"
void MR_CALL 
hlds__make_goal__deconstruct_functor_4_p_0(
#line 130 "make_goal.m"
  MR_Word hlds__make_goal__Var_5,
#line 130 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_6,
#line 130 "make_goal.m"
  MR_Word hlds__make_goal__Args_7,
#line 130 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_8)
#line 130 "make_goal.m"
{
#line 321 "make_goal.m"
  {
#line 321 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 321 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__Unification_15;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 321 "make_goal.m"
    MR_Word hlds__make_goal__V_37_37;

#line 322 "make_goal.m"
    {
#line 322 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 323 "make_goal.m"
    {
#line 323 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 323 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 323 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 324 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 324 "make_goal.m"
    }
#line 324 "make_goal.m"
    {
#line 324 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 324 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 324 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 325 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 325 "make_goal.m"
    }
#line 325 "make_goal.m"
    {
#line 325 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 325 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 325 "make_goal.m"
    }
#line 326 "make_goal.m"
    {
#line 326 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 328 "make_goal.m"
    {
#line 328 "make_goal.m"
      hlds__make_goal__Unification_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 4) = ((MR_Box) ((MR_Integer) 1));
#line 328 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unification_15, 5) = ((MR_Box) ((MR_Integer) 1));
#line 328 "make_goal.m"
    }
#line 330 "make_goal.m"
    {
#line 330 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_15));
#line 330 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 330 "make_goal.m"
    }
#line 331 "make_goal.m"
    {
#line 331 "make_goal.m"
      hlds__make_goal__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 331 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_37_37, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 331 "make_goal.m"
    }
#line 331 "make_goal.m"
    {
#line 331 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_37_37, &hlds__make_goal__NonLocals_17);
    }
#line 332 "make_goal.m"
    {
#line 332 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_vars_1_f_0(hlds__make_goal__Args_7);
    }
#line 333 "make_goal.m"
    {
#line 333 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 334 "make_goal.m"
    {
#line 334 "make_goal.m"
      MR_Word base;
#line 334 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 334 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 334 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 334 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 334 "make_goal.m"
    }
#line 321 "make_goal.m"
  }
#line 130 "make_goal.m"
}

#line 128 "make_goal.m"
void MR_CALL 
hlds__make_goal__construct_functor_4_p_0(
#line 128 "make_goal.m"
  MR_Word hlds__make_goal__Var_5,
#line 128 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_6,
#line 128 "make_goal.m"
  MR_Word hlds__make_goal__Args_7,
#line 128 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_8)
#line 128 "make_goal.m"
{
#line 306 "make_goal.m"
  {
#line 306 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 306 "make_goal.m"
    MR_Integer hlds__make_goal__Arity_9;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__RHS_10;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__UnifyMode_11;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__UniMode_12;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__UniModes_13;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__Unification_14;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__Unify_16;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_17;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_18;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_19;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_22_22;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_25_25;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_29_29;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_31_31;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_32_32;
#line 306 "make_goal.m"
    MR_Word hlds__make_goal__V_38_38;

#line 307 "make_goal.m"
    {
#line 307 "make_goal.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_goal_scalar_common_1[0], hlds__make_goal__Args_7, &hlds__make_goal__Arity_9);
    }
#line 308 "make_goal.m"
    {
#line 308 "make_goal.m"
      hlds__make_goal__RHS_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 0) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 308 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_10, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 308 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_22_22 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__V_22_22));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (hlds__make_goal__V_23_23));
#line 309 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_25_25 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_26_26 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (hlds__make_goal__V_25_25));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 309 "make_goal.m"
    }
#line 309 "make_goal.m"
    {
#line 309 "make_goal.m"
      hlds__make_goal__UnifyMode_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 309 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyMode_11, 1) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 309 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_28_28 = parse_tree__prog_mode__free_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_29_29 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_29_29));
#line 310 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_31_31 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_32_32 = parse_tree__prog_mode__ground_inst_0_f_0();
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__V_31_31));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 1) = ((MR_Box) (hlds__make_goal__V_32_32));
#line 310 "make_goal.m"
    }
#line 310 "make_goal.m"
    {
#line 310 "make_goal.m"
      hlds__make_goal__UniMode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 0) = ((MR_Box) (hlds__make_goal__V_27_27));
#line 310 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UniMode_12, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 310 "make_goal.m"
    }
#line 311 "make_goal.m"
    {
#line 311 "make_goal.m"
      mercury__list__duplicate_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_uni_mode_0, hlds__make_goal__Arity_9, ((MR_Box) (hlds__make_goal__UniMode_12)), &hlds__make_goal__UniModes_13);
    }
#line 312 "make_goal.m"
    {
#line 312 "make_goal.m"
      hlds__make_goal__Unification_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 1) = ((MR_Box) (hlds__make_goal__ConsId_6));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 2) = ((MR_Box) (hlds__make_goal__Args_7));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 3) = ((MR_Box) (hlds__make_goal__UniModes_13));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 5) = ((MR_Box) ((MR_Integer) 0));
#line 312 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_14, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "make_goal.m"
    }
#line 315 "make_goal.m"
    {
#line 315 "make_goal.m"
      hlds__make_goal__Unify_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 1) = ((MR_Box) (hlds__make_goal__RHS_10));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 2) = ((MR_Box) (hlds__make_goal__UnifyMode_11));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 3) = ((MR_Box) (hlds__make_goal__Unification_14));
#line 315 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__Unify_16, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 315 "make_goal.m"
    }
#line 316 "make_goal.m"
    {
#line 316 "make_goal.m"
      hlds__make_goal__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 0) = ((MR_Box) (hlds__make_goal__Var_5));
#line 316 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_38_38, 1) = ((MR_Box) (hlds__make_goal__Args_7));
#line 316 "make_goal.m"
    }
#line 316 "make_goal.m"
    {
#line 316 "make_goal.m"
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_38_38, &hlds__make_goal__NonLocals_17);
    }
#line 317 "make_goal.m"
    {
#line 317 "make_goal.m"
      hlds__make_goal__InstMapDelta_18 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__Var_5);
    }
#line 318 "make_goal.m"
    {
#line 318 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_17, hlds__make_goal__InstMapDelta_18, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_19);
    }
#line 319 "make_goal.m"
    {
#line 319 "make_goal.m"
      MR_Word base;
#line 319 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "make_goal.m"
      *hlds__make_goal__Goal_8 = base;
#line 319 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__Unify_16));
#line 319 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_19));
#line 319 "make_goal.m"
    }
#line 306 "make_goal.m"
  }
#line 128 "make_goal.m"
}

#line 120 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_in_proc_7_p_0(
#line 120 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_8,
#line 120 "make_goal.m"
  MR_Word hlds__make_goal__Type_9,
#line 120 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 120 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 120 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 120 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14,
#line 120 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_15)
#line 120 "make_goal.m"
{
#line 247 "make_goal.m"
  {
#line 247 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 248 "make_goal.m"
    {
#line 248 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__Type_9, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_14, hlds__make_goal__STATE_VARIABLE_ProcInfo_15);
    }
#line 249 "make_goal.m"
    {
#line 249 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__ConsId_8, hlds__make_goal__Goal_11);
#line 249 "make_goal.m"
      return;
    }
#line 247 "make_goal.m"
  }
#line 120 "make_goal.m"
}

#line 117 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_in_proc_6_p_0(
#line 117 "make_goal.m"
  MR_Char hlds__make_goal__Char_7,
#line 117 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 117 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 117 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 117 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 117 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 117 "make_goal.m"
{
#line 242 "make_goal.m"
  {
#line 242 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 242 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 242 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 243 "make_goal.m"
    {
#line 243 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 243 "make_goal.m"
    {
#line 243 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_7));
#line 291 "make_goal.m"
    }
#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 291 "make_goal.m"
      return;
    }
#line 242 "make_goal.m"
  }
#line 117 "make_goal.m"
}

#line 114 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_in_proc_6_p_0(
#line 114 "make_goal.m"
  MR_Float hlds__make_goal__Float_7,
#line 114 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 114 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 114 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 114 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 114 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 114 "make_goal.m"
{
#line 237 "make_goal.m"
  {
#line 237 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 237 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 237 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 238 "make_goal.m"
    {
#line 238 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 238 "make_goal.m"
    {
#line 238 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = MR_box_float(hlds__make_goal__Float_7);
#line 288 "make_goal.m"
    }
#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 288 "make_goal.m"
      return;
    }
#line 237 "make_goal.m"
  }
#line 114 "make_goal.m"
}

#line 111 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_in_proc_6_p_0(
#line 111 "make_goal.m"
  MR_String hlds__make_goal__String_7,
#line 111 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 111 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 111 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 111 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 111 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 111 "make_goal.m"
{
#line 232 "make_goal.m"
  {
#line 232 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 232 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 232 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 233 "make_goal.m"
    {
#line 233 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 233 "make_goal.m"
    {
#line 233 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__String_7));
#line 285 "make_goal.m"
    }
#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 285 "make_goal.m"
      return;
    }
#line 232 "make_goal.m"
  }
#line 111 "make_goal.m"
}

#line 108 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_in_proc_6_p_0(
#line 108 "make_goal.m"
  MR_Integer hlds__make_goal__Int_7,
#line 108 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_8,
#line 108 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_9,
#line 108 "make_goal.m"
  MR_Word * hlds__make_goal__Var_10,
#line 108 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12,
#line 108 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_ProcInfo_13)
#line 108 "make_goal.m"
{
#line 227 "make_goal.m"
  {
#line 227 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 227 "make_goal.m"
    MR_Word hlds__make_goal__V_14_14;
#line 227 "make_goal.m"
    MR_Word hlds__make_goal__V_19_19;

#line 228 "make_goal.m"
    {
#line 228 "make_goal.m"
      hlds__make_goal__V_14_14 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 228 "make_goal.m"
    {
#line 228 "make_goal.m"
      hlds__hlds_pred__proc_info_create_var_from_type_5_p_0(hlds__make_goal__V_14_14, hlds__make_goal__MaybeName_8, hlds__make_goal__Var_10, hlds__make_goal__STATE_VARIABLE_ProcInfo_0_12, hlds__make_goal__STATE_VARIABLE_ProcInfo_13);
    }
#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_19_19, 1) = ((MR_Box) (hlds__make_goal__Int_7));
#line 282 "make_goal.m"
    }
#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_10, hlds__make_goal__V_19_19, hlds__make_goal__Goal_9);
#line 282 "make_goal.m"
      return;
    }
#line 227 "make_goal.m"
  }
#line 108 "make_goal.m"
}

#line 104 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_alloc_9_p_0(
#line 104 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_10,
#line 104 "make_goal.m"
  MR_Word hlds__make_goal__Type_11,
#line 104 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_12,
#line 104 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_13,
#line 104 "make_goal.m"
  MR_Word * hlds__make_goal__Var_14,
#line 104 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_17,
#line 104 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_18,
#line 104 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_19,
#line 104 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_20)
#line 104 "make_goal.m"
{
#line 276 "make_goal.m"
  {
#line 276 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 277 "make_goal.m"
    {
#line 277 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_12, hlds__make_goal__Var_14, hlds__make_goal__STATE_VARIABLE_VarSet_0_17, hlds__make_goal__STATE_VARIABLE_VarSet_18);
    }
#line 278 "make_goal.m"
    {
#line 278 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_14, hlds__make_goal__Type_11, hlds__make_goal__STATE_VARIABLE_VarTypes_0_19, hlds__make_goal__STATE_VARIABLE_VarTypes_20);
    }
#line 279 "make_goal.m"
    {
#line 279 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_14, hlds__make_goal__ConsId_10, hlds__make_goal__Goal_13);
#line 279 "make_goal.m"
      return;
    }
#line 276 "make_goal.m"
  }
#line 104 "make_goal.m"
}

#line 101 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_alloc_8_p_0(
#line 101 "make_goal.m"
  MR_Char hlds__make_goal__Char_9,
#line 101 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 101 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 101 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 101 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 101 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 101 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 101 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 101 "make_goal.m"
{
#line 270 "make_goal.m"
  {
#line 270 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 270 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 270 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 271 "make_goal.m"
    {
#line 271 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 272 "make_goal.m"
    {
#line 272 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__char_type_0_f_0();
    }
#line 272 "make_goal.m"
    {
#line 272 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_9));
#line 291 "make_goal.m"
    }
#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 291 "make_goal.m"
      return;
    }
#line 270 "make_goal.m"
  }
#line 101 "make_goal.m"
}

#line 98 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_alloc_8_p_0(
#line 98 "make_goal.m"
  MR_Float hlds__make_goal__Float_9,
#line 98 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 98 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 98 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 98 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 98 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 98 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 98 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 98 "make_goal.m"
{
#line 264 "make_goal.m"
  {
#line 264 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 264 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 264 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 265 "make_goal.m"
    {
#line 265 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 266 "make_goal.m"
    {
#line 266 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__float_type_0_f_0();
    }
#line 266 "make_goal.m"
    {
#line 266 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = MR_box_float(hlds__make_goal__Float_9);
#line 288 "make_goal.m"
    }
#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 288 "make_goal.m"
      return;
    }
#line 264 "make_goal.m"
  }
#line 98 "make_goal.m"
}

#line 95 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_alloc_8_p_0(
#line 95 "make_goal.m"
  MR_String hlds__make_goal__String_9,
#line 95 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 95 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 95 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 95 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 95 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 95 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 95 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 95 "make_goal.m"
{
#line 258 "make_goal.m"
  {
#line 258 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 258 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 258 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 259 "make_goal.m"
    {
#line 259 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 260 "make_goal.m"
    {
#line 260 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__string_type_0_f_0();
    }
#line 260 "make_goal.m"
    {
#line 260 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__String_9));
#line 285 "make_goal.m"
    }
#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 285 "make_goal.m"
      return;
    }
#line 258 "make_goal.m"
  }
#line 95 "make_goal.m"
}

#line 92 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_alloc_8_p_0(
#line 92 "make_goal.m"
  MR_Integer hlds__make_goal__Int_9,
#line 92 "make_goal.m"
  MR_Word hlds__make_goal__MaybeName_10,
#line 92 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_11,
#line 92 "make_goal.m"
  MR_Word * hlds__make_goal__Var_12,
#line 92 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarSet_0_15,
#line 92 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarSet_16,
#line 92 "make_goal.m"
  MR_Word hlds__make_goal__STATE_VARIABLE_VarTypes_0_17,
#line 92 "make_goal.m"
  MR_Word * hlds__make_goal__STATE_VARIABLE_VarTypes_18)
#line 92 "make_goal.m"
{
#line 252 "make_goal.m"
  {
#line 252 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 252 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 252 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 253 "make_goal.m"
    {
#line 253 "make_goal.m"
      mercury__varset__new_maybe_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__MaybeName_10, hlds__make_goal__Var_12, hlds__make_goal__STATE_VARIABLE_VarSet_0_15, hlds__make_goal__STATE_VARIABLE_VarSet_16);
    }
#line 254 "make_goal.m"
    {
#line 254 "make_goal.m"
      hlds__make_goal__V_20_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
#line 254 "make_goal.m"
    {
#line 254 "make_goal.m"
      hlds__vartypes__add_var_type_4_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_20_20, hlds__make_goal__STATE_VARIABLE_VarTypes_0_17, hlds__make_goal__STATE_VARIABLE_VarTypes_18);
    }
#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Int_9));
#line 282 "make_goal.m"
    }
#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(*hlds__make_goal__Var_12, hlds__make_goal__V_26_26, hlds__make_goal__Goal_11);
#line 282 "make_goal.m"
      return;
    }
#line 252 "make_goal.m"
  }
#line 92 "make_goal.m"
}

#line 89 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_const_construction_3_p_0(
#line 89 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 89 "make_goal.m"
  MR_Word hlds__make_goal__ConsId_5,
#line 89 "make_goal.m"
  MR_Word * hlds__make_goal__HeadVar__3_3)
#line 89 "make_goal.m"
{
#line 293 "make_goal.m"
  {
#line 293 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_6;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_7;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__RHS_8;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__Inst_9;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__Mode_10;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__Unification_11;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__NonLocals_13;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta0_14;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_15;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__V_20_20;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__V_21_21;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 293 "make_goal.m"
    MR_Word hlds__make_goal__V_26_26;

#line 294 "make_goal.m"
    {
#line 294 "make_goal.m"
      hlds__make_goal__RHS_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 294 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__RHS_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 0) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 0) = ((MR_Box) (hlds__make_goal__V_21_21));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "make_goal.m"
    }
#line 295 "make_goal.m"
    {
#line 295 "make_goal.m"
      hlds__make_goal__Inst_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 1) = ((MR_Box) ((MR_Integer) 1));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 295 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Inst_9, 3) = ((MR_Box) (hlds__make_goal__V_20_20));
#line 295 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_24_24, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 296 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 0) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_26_26, 1) = ((MR_Box) (hlds__make_goal__Inst_9));
#line 296 "make_goal.m"
    }
#line 296 "make_goal.m"
    {
#line 296 "make_goal.m"
      hlds__make_goal__Mode_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 0) = ((MR_Box) (hlds__make_goal__V_24_24));
#line 296 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Mode_10, 1) = ((MR_Box) (hlds__make_goal__V_26_26));
#line 296 "make_goal.m"
    }
#line 297 "make_goal.m"
    {
#line 297 "make_goal.m"
      hlds__make_goal__Unification_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 1) = ((MR_Box) (hlds__make_goal__ConsId_5));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 5) = ((MR_Box) ((MR_Integer) 0));
#line 297 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__Unification_11, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "make_goal.m"
    }
#line 300 "make_goal.m"
    {
#line 300 "make_goal.m"
      hlds__make_goal__GoalExpr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 300 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 0) = ((MR_Box) (hlds__make_goal__Var_4));
#line 300 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 1) = ((MR_Box) (hlds__make_goal__RHS_8));
#line 300 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 2) = ((MR_Box) (hlds__make_goal__Mode_10));
#line 300 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 3) = ((MR_Box) (hlds__make_goal__Unification_11));
#line 300 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_6, 4) = ((MR_Box) (&hlds__make_goal_scalar_common_1[9]));
#line 300 "make_goal.m"
    }
#line 301 "make_goal.m"
    {
#line 301 "make_goal.m"
      hlds__make_goal__NonLocals_13 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__Var_4);
    }
#line 302 "make_goal.m"
    {
#line 302 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta0_14);
    }
#line 303 "make_goal.m"
    {
#line 303 "make_goal.m"
      hlds__instmap__instmap_delta_insert_var_4_p_0(hlds__make_goal__Var_4, hlds__make_goal__Inst_9, hlds__make_goal__InstMapDelta0_14, &hlds__make_goal__InstMapDelta_15);
    }
#line 304 "make_goal.m"
    {
#line 304 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__NonLocals_13, hlds__make_goal__InstMapDelta_15, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_7);
    }
#line 293 "make_goal.m"
    {
#line 293 "make_goal.m"
      MR_Word base;
#line 293 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "make_goal.m"
      *hlds__make_goal__HeadVar__3_3 = base;
#line 293 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_6));
#line 293 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_7));
#line 293 "make_goal.m"
    }
#line 293 "make_goal.m"
  }
#line 89 "make_goal.m"
}

#line 87 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_char_const_construction_3_p_0(
#line 87 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 87 "make_goal.m"
  MR_Char hlds__make_goal__Char_5,
#line 87 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 87 "make_goal.m"
{
#line 290 "make_goal.m"
  {
#line 290 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 290 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 291 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (MR_Word) (hlds__make_goal__Char_5));
#line 291 "make_goal.m"
    }
#line 291 "make_goal.m"
    {
#line 291 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 291 "make_goal.m"
      return;
    }
#line 290 "make_goal.m"
  }
#line 87 "make_goal.m"
}

#line 85 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_float_const_construction_3_p_0(
#line 85 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 85 "make_goal.m"
  MR_Float hlds__make_goal__Float_5,
#line 85 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 85 "make_goal.m"
{
#line 287 "make_goal.m"
  {
#line 287 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 287 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 288 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = MR_box_float(hlds__make_goal__Float_5);
#line 288 "make_goal.m"
    }
#line 288 "make_goal.m"
    {
#line 288 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 288 "make_goal.m"
      return;
    }
#line 287 "make_goal.m"
  }
#line 85 "make_goal.m"
}

#line 83 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_string_const_construction_3_p_0(
#line 83 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 83 "make_goal.m"
  MR_String hlds__make_goal__String_5,
#line 83 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 83 "make_goal.m"
{
#line 284 "make_goal.m"
  {
#line 284 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 284 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 285 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__String_5));
#line 285 "make_goal.m"
    }
#line 285 "make_goal.m"
    {
#line 285 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 285 "make_goal.m"
      return;
    }
#line 284 "make_goal.m"
  }
#line 83 "make_goal.m"
}

#line 81 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_int_const_construction_3_p_0(
#line 81 "make_goal.m"
  MR_Word hlds__make_goal__Var_4,
#line 81 "make_goal.m"
  MR_Integer hlds__make_goal__Int_5,
#line 81 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_6)
#line 81 "make_goal.m"
{
#line 281 "make_goal.m"
  {
#line 281 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 281 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 282 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__V_7_7, 1) = ((MR_Box) (hlds__make_goal__Int_5));
#line 282 "make_goal.m"
    }
#line 282 "make_goal.m"
    {
#line 282 "make_goal.m"
      hlds__make_goal__make_const_construction_3_p_0(hlds__make_goal__Var_4, hlds__make_goal__V_7_7, hlds__make_goal__Goal_6);
#line 282 "make_goal.m"
      return;
    }
#line 281 "make_goal.m"
  }
#line 81 "make_goal.m"
}

#line 70 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_test_5_p_0(
#line 70 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 70 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 70 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 70 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 70 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 70 "make_goal.m"
{
#line 214 "make_goal.m"
  {
#line 214 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 214 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 217 "make_goal.m"
    {
#line 217 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 217 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 217 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__X_6));
#line 217 "make_goal.m"
      MR_hl_field(MR_mktag(3), hlds__make_goal__Unification_13, 2) = ((MR_Box) (hlds__make_goal__Y_7));
#line 217 "make_goal.m"
    }
#line 218 "make_goal.m"
    {
#line 218 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 218 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 218 "make_goal.m"
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 219 "make_goal.m"
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 219 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 219 "make_goal.m"
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 219 "make_goal.m"
    {
#line 219 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 1, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 221 "make_goal.m"
    {
#line 221 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 221 "make_goal.m"
    }
#line 221 "make_goal.m"
    {
#line 221 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[8]));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 221 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 221 "make_goal.m"
    }
#line 222 "make_goal.m"
    {
#line 222 "make_goal.m"
      MR_Word base;
#line 222 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 222 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 222 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 222 "make_goal.m"
    }
#line 214 "make_goal.m"
  }
#line 70 "make_goal.m"
}

#line 64 "make_goal.m"
void MR_CALL 
hlds__make_goal__make_simple_assign_5_p_0(
#line 64 "make_goal.m"
  MR_Word hlds__make_goal__X_6,
#line 64 "make_goal.m"
  MR_Word hlds__make_goal__Y_7,
#line 64 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_8,
#line 64 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_9,
#line 64 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_10)
#line 64 "make_goal.m"
{
#line 204 "make_goal.m"
  {
#line 204 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__Unification_13;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_14;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_15;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_16;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__V_23_23;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__V_24_24;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__V_27_27;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__V_28_28;
#line 204 "make_goal.m"
    MR_Word hlds__make_goal__V_30_30;

#line 207 "make_goal.m"
    {
#line 207 "make_goal.m"
      hlds__make_goal__Unification_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 207 "make_goal.m"
      MR_hl_field(MR_mktag(2), hlds__make_goal__Unification_13, 1) = ((MR_Box) (hlds__make_goal__Y_7));
#line 207 "make_goal.m"
    }
#line 208 "make_goal.m"
    {
#line 208 "make_goal.m"
      hlds__make_goal__UnifyContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_8));
#line 208 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_14, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_9));
#line 208 "make_goal.m"
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__make_goal__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "make_goal.m"
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__make_goal__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 209 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__V_27_27, 1) = ((MR_Box) (hlds__make_goal__V_28_28));
#line 209 "make_goal.m"
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__make_goal__V_23_23 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_goal__V_27_27);
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__make_goal__V_24_24 = hlds__instmap__instmap_delta_bind_var_1_f_0(hlds__make_goal__X_6);
    }
#line 209 "make_goal.m"
    {
#line 209 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_23_23, hlds__make_goal__V_24_24, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_15);
    }
#line 211 "make_goal.m"
    {
#line 211 "make_goal.m"
      hlds__make_goal__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__V_30_30, 0) = ((MR_Box) (hlds__make_goal__Y_7));
#line 211 "make_goal.m"
    }
#line 211 "make_goal.m"
    {
#line 211 "make_goal.m"
      hlds__make_goal__GoalExpr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 0) = ((MR_Box) (hlds__make_goal__X_6));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 1) = ((MR_Box) (hlds__make_goal__V_30_30));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[7]));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 3) = ((MR_Box) (hlds__make_goal__Unification_13));
#line 211 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_16, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_14));
#line 211 "make_goal.m"
    }
#line 212 "make_goal.m"
    {
#line 212 "make_goal.m"
      MR_Word base;
#line 212 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 212 "make_goal.m"
      *hlds__make_goal__Goal_10 = base;
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_16));
#line 212 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_15));
#line 212 "make_goal.m"
    }
#line 204 "make_goal.m"
  }
#line 64 "make_goal.m"
}

#line 56 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(
#line 56 "make_goal.m"
  MR_Word hlds__make_goal__LHS_7,
#line 56 "make_goal.m"
  MR_Word hlds__make_goal__RHS_8,
#line 56 "make_goal.m"
  MR_Word hlds__make_goal__Context_9,
#line 56 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_10,
#line 56 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_11,
#line 56 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_12)
#line 56 "make_goal.m"
{
#line 187 "make_goal.m"
  {
#line 187 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 188 "make_goal.m"
    {
#line 188 "make_goal.m"
      hlds__make_goal__create_atomic_complicated_unification_7_p_0(hlds__make_goal__LHS_7, hlds__make_goal__RHS_8, hlds__make_goal__Context_9, hlds__make_goal__UnifyMainContext_10, hlds__make_goal__UnifySubContext_11, (MR_Integer) 0, hlds__make_goal__Goal_12);
#line 188 "make_goal.m"
      return;
    }
#line 187 "make_goal.m"
  }
#line 56 "make_goal.m"
}

#line 50 "make_goal.m"
void MR_CALL 
hlds__make_goal__create_atomic_complicated_unification_7_p_0(
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__LHS_8,
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__RHS_9,
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__Context_10,
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__UnifyMainContext_11,
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__UnifySubContext_12,
#line 50 "make_goal.m"
  MR_Word hlds__make_goal__Purity_13,
#line 50 "make_goal.m"
  MR_Word * hlds__make_goal__Goal_14)
#line 50 "make_goal.m"
{
#line 192 "make_goal.m"
  {
#line 192 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 192 "make_goal.m"
    MR_Word hlds__make_goal__UnifyContext_18;
#line 192 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_19;
#line 192 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_20;
#line 192 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_21;

#line 196 "make_goal.m"
    {
#line 196 "make_goal.m"
      hlds__make_goal__UnifyContext_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 0) = ((MR_Box) (hlds__make_goal__UnifyMainContext_11));
#line 196 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__UnifyContext_18, 1) = ((MR_Box) (hlds__make_goal__UnifySubContext_12));
#line 196 "make_goal.m"
    }
#line 197 "make_goal.m"
    {
#line 197 "make_goal.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_goal__Context_10, &hlds__make_goal__GoalInfo0_19);
    }
#line 198 "make_goal.m"
    {
#line 198 "make_goal.m"
      hlds__hlds_goal__goal_info_set_purity_3_p_0(hlds__make_goal__Purity_13, hlds__make_goal__GoalInfo0_19, &hlds__make_goal__GoalInfo_20);
    }
#line 199 "make_goal.m"
    {
#line 199 "make_goal.m"
      hlds__make_goal__GoalExpr_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 0) = ((MR_Box) (hlds__make_goal__LHS_8));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 1) = ((MR_Box) (hlds__make_goal__RHS_9));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 2) = ((MR_Box) (&hlds__make_goal_scalar_common_1[3]));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_3[0])));
#line 199 "make_goal.m"
      MR_hl_field(MR_mktag(1), hlds__make_goal__GoalExpr_21, 4) = ((MR_Box) (hlds__make_goal__UnifyContext_18));
#line 199 "make_goal.m"
    }
#line 200 "make_goal.m"
    {
#line 200 "make_goal.m"
      MR_Word base;
#line 200 "make_goal.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "make_goal.m"
      *hlds__make_goal__Goal_14 = base;
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_21));
#line 200 "make_goal.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_20));
#line 200 "make_goal.m"
    }
#line 192 "make_goal.m"
  }
#line 50 "make_goal.m"
}

#line 41 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_with_context_1_f_0(
#line 41 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 41 "make_goal.m"
{
#line 180 "make_goal.m"
  {
#line 180 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 180 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 180 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 180 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 180 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 180 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 181 "make_goal.m"
    {
#line 181 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__fail_goal_0_f_0();
    }
#line 181 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 181 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 182 "make_goal.m"
    {
#line 182 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 180 "make_goal.m"
    {
#line 180 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 180 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 180 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 180 "make_goal.m"
    }
#line 180 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 180 "make_goal.m"
  }
#line 41 "make_goal.m"
}

#line 39 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_info_0_f_0(void)
#line 39 "make_goal.m"
{
#line 175 "make_goal.m"
  {
#line 175 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 175 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 175 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 175 "make_goal.m"
    MR_Word hlds__make_goal__V_4_4;

#line 176 "make_goal.m"
    {
#line 176 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 177 "make_goal.m"
    {
#line 177 "make_goal.m"
      hlds__make_goal__V_4_4 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 177 "make_goal.m"
    {
#line 177 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_4_4, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 175 "make_goal.m"
    return hlds__make_goal__GoalInfo_2;
#line 175 "make_goal.m"
  }
#line 39 "make_goal.m"
}

#line 38 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_expr_0_f_0(void)
#line 38 "make_goal.m"
{
#line 173 "make_goal.m"
  {
#line 173 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 173 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4]);
#line 173 "make_goal.m"
  }
#line 38 "make_goal.m"
}

#line 37 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__fail_goal_0_f_0(void)
#line 37 "make_goal.m"
{
#line 168 "make_goal.m"
  {
#line 168 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 168 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 168 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 168 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 168 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 169 "make_goal.m"
    {
#line 169 "make_goal.m"
      hlds__instmap__instmap_delta_init_unreachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 170 "make_goal.m"
    {
#line 170 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 170 "make_goal.m"
    {
#line 170 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 7, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 168 "make_goal.m"
    {
#line 168 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_1[4])));
#line 168 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 168 "make_goal.m"
    }
#line 168 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 168 "make_goal.m"
  }
#line 37 "make_goal.m"
}

#line 33 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_with_context_1_f_0(
#line 33 "make_goal.m"
  MR_Word hlds__make_goal__Context_3)
#line 33 "make_goal.m"
{
#line 164 "make_goal.m"
  {
#line 164 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 164 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__2_2;
#line 164 "make_goal.m"
    MR_Word hlds__make_goal__GoalExpr_4;
#line 164 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_5;
#line 164 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo0_6;
#line 164 "make_goal.m"
    MR_Word hlds__make_goal__V_7_7;

#line 165 "make_goal.m"
    {
#line 165 "make_goal.m"
      hlds__make_goal__V_7_7 = hlds__make_goal__true_goal_0_f_0();
    }
#line 165 "make_goal.m"
    hlds__make_goal__GoalExpr_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 0)));
#line 165 "make_goal.m"
    hlds__make_goal__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_goal__V_7_7, (MR_Integer) 1)));
#line 166 "make_goal.m"
    {
#line 166 "make_goal.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_goal__Context_3, hlds__make_goal__GoalInfo0_6, &hlds__make_goal__GoalInfo_5);
    }
#line 164 "make_goal.m"
    {
#line 164 "make_goal.m"
      hlds__make_goal__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_goal__GoalExpr_4));
#line 164 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_5));
#line 164 "make_goal.m"
    }
#line 164 "make_goal.m"
    return hlds__make_goal__HeadVar__2_2;
#line 164 "make_goal.m"
  }
#line 33 "make_goal.m"
}

#line 31 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_expr_0_f_0(void)
#line 31 "make_goal.m"
{
#line 162 "make_goal.m"
  {
#line 162 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;

#line 162 "make_goal.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0]);
#line 162 "make_goal.m"
  }
#line 31 "make_goal.m"
}

#line 30 "make_goal.m"
MR_Word MR_CALL 
hlds__make_goal__true_goal_0_f_0(void)
#line 30 "make_goal.m"
{
#line 157 "make_goal.m"
  {
#line 157 "make_goal.m"
    MR_bool hlds__make_goal__succeeded;
#line 157 "make_goal.m"
    MR_Word hlds__make_goal__HeadVar__1_1;
#line 157 "make_goal.m"
    MR_Word hlds__make_goal__GoalInfo_2;
#line 157 "make_goal.m"
    MR_Word hlds__make_goal__InstMapDelta_3;
#line 157 "make_goal.m"
    MR_Word hlds__make_goal__V_5_5;

#line 158 "make_goal.m"
    {
#line 158 "make_goal.m"
      hlds__instmap__instmap_delta_init_reachable_1_p_0(&hlds__make_goal__InstMapDelta_3);
    }
#line 159 "make_goal.m"
    {
#line 159 "make_goal.m"
      hlds__make_goal__V_5_5 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 159 "make_goal.m"
    {
#line 159 "make_goal.m"
      hlds__hlds_goal__goal_info_init_5_p_0(hlds__make_goal__V_5_5, hlds__make_goal__InstMapDelta_3, (MR_Integer) 0, (MR_Integer) 0, &hlds__make_goal__GoalInfo_2);
    }
#line 157 "make_goal.m"
    {
#line 157 "make_goal.m"
      hlds__make_goal__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 157 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_goal_scalar_common_2[0])));
#line 157 "make_goal.m"
      MR_hl_field(MR_mktag(0), hlds__make_goal__HeadVar__1_1, 1) = ((MR_Box) (hlds__make_goal__GoalInfo_2));
#line 157 "make_goal.m"
    }
#line 157 "make_goal.m"
    return hlds__make_goal__HeadVar__1_1;
#line 157 "make_goal.m"
  }
#line 30 "make_goal.m"
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
