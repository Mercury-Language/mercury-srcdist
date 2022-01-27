/*
** Automatically generated from `pd_cost.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module transform_hlds.pd_cost. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_cost__init
ENDINIT
*/

#include "transform_hlds.pd_cost.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 133 "transform_hlds.pd_cost.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 136 "transform_hlds.pd_cost.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 139 "transform_hlds.pd_cost.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 157 "pd_cost.m"
static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_p_0(
#line 157 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__NonLocals_4,
#line 157 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__2_41);

#line 170 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
#line 170 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
#line 170 "pd_cost.m"
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
#line 170 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_3);

#line 162 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
#line 162 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
#line 162 "pd_cost.m"
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
#line 162 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_3);

#line 157 "pd_cost.m"
static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
#line 157 "pd_cost.m"
  MR_Box transform_hlds__pd_cost__closure_arg,
#line 157 "pd_cost.m"
  MR_Box transform_hlds__pd_cost__wrapper_arg_1);

#line 128 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
#line 128 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__NonLocals_4,
#line 128 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__Unification_5,
#line 128 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_6);

#line 58 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__goal_expr_cost_3_p_0(
#line 58 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__GoalExpr_4,
#line 58 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__GoalInfo_5,
#line 58 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_6);


static /* final */ const MR_Box transform_hlds__pd_cost_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__pd_cost_scalar_common_2[1][5];




static /* final */ const MR_Box transform_hlds__pd_cost_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_cost_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__pd_cost__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 242 "transform_hlds.pd_cost.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 250 "transform_hlds.pd_cost.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 258 "transform_hlds.pd_cost.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 157 "pd_cost.m"
static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_p_0(
#line 157 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__NonLocals_4,
#line 157 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__2_41)
#line 157 "pd_cost.m"
{
#line 157 "pd_cost.m"
  {
#line 157 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 157 "pd_cost.m"
    {
#line 157 "pd_cost.m"
      return transform_hlds__pd_cost__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_cost__NonLocals_4, transform_hlds__pd_cost__HeadVar__2_41);
    }
#line 157 "pd_cost.m"
    return transform_hlds__pd_cost__succeeded;
#line 157 "pd_cost.m"
  }
#line 157 "pd_cost.m"
}

#line 170 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
#line 170 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
#line 170 "pd_cost.m"
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
#line 170 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_3)
#line 170 "pd_cost.m"
{
#line 172 "pd_cost.m"
  while (MR_TRUE)
#line 172 "pd_cost.m"
    {
#line 172 "pd_cost.m"
      /* tailcall optimized into a loop */
#line 172 "pd_cost.m"
      {
#line 172 "pd_cost.m"
        MR_bool transform_hlds__pd_cost__succeeded;

#line 172 "pd_cost.m"
        if ((transform_hlds__pd_cost__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "pd_cost.m"
          *transform_hlds__pd_cost__Cost_3 = transform_hlds__pd_cost__HeadVar__2_2;
#line 172 "pd_cost.m"
        else
#line 173 "pd_cost.m"
          {
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Goal_7;
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__Cost1_11;
#line 173 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__Cost2_12;
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__GoalExpr_16;
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__GoalInfo_17;
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_13_13, (MR_Integer) 0)));
#line 173 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_13_13, (MR_Integer) 1)));

#line 173 "pd_cost.m"
            transform_hlds__pd_cost__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_13_13, (MR_Integer) 2)));
#line 55 "pd_cost.m"
            transform_hlds__pd_cost__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_7, (MR_Integer) 0)));
#line 55 "pd_cost.m"
            transform_hlds__pd_cost__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_7, (MR_Integer) 1)));
#line 56 "pd_cost.m"
            {
#line 56 "pd_cost.m"
              transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_16, transform_hlds__pd_cost__GoalInfo_17, &transform_hlds__pd_cost__Cost1_11);
            }
#line 175 "pd_cost.m"
            transform_hlds__pd_cost__Cost2_12 = (transform_hlds__pd_cost__HeadVar__2_2 + transform_hlds__pd_cost__Cost1_11);
#line 176 "pd_cost.m"
            /* direct tailcall eliminated */
#line 176 "pd_cost.m"
            {
#line 176 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__HeadVar__1__tmp_copy_1 = transform_hlds__pd_cost__Cases_8;
#line 176 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__HeadVar__2__tmp_copy_2 = transform_hlds__pd_cost__Cost2_12;

#line 176 "pd_cost.m"
              transform_hlds__pd_cost__HeadVar__2_2 = transform_hlds__pd_cost__HeadVar__2__tmp_copy_2;
#line 176 "pd_cost.m"
              transform_hlds__pd_cost__HeadVar__1_1 = transform_hlds__pd_cost__HeadVar__1__tmp_copy_1;
#line 176 "pd_cost.m"
            }
#line 176 "pd_cost.m"
            continue;
#line 173 "pd_cost.m"
          }
#line 172 "pd_cost.m"
      }
#line 172 "pd_cost.m"
      break;
#line 172 "pd_cost.m"
    }
#line 170 "pd_cost.m"
}

#line 162 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
#line 162 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
#line 162 "pd_cost.m"
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
#line 162 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_3)
#line 162 "pd_cost.m"
{
#line 164 "pd_cost.m"
  while (MR_TRUE)
#line 164 "pd_cost.m"
    {
#line 164 "pd_cost.m"
      /* tailcall optimized into a loop */
#line 164 "pd_cost.m"
      {
#line 164 "pd_cost.m"
        MR_bool transform_hlds__pd_cost__succeeded;

#line 164 "pd_cost.m"
        if ((transform_hlds__pd_cost__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "pd_cost.m"
          *transform_hlds__pd_cost__Cost_3 = transform_hlds__pd_cost__HeadVar__2_2;
#line 164 "pd_cost.m"
        else
#line 165 "pd_cost.m"
          {
#line 165 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 0)));
#line 165 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 1)));
#line 165 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__Cost1_9;
#line 165 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__Cost2_10;
#line 165 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_5, (MR_Integer) 0)));
#line 165 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_5, (MR_Integer) 1)));

#line 56 "pd_cost.m"
            {
#line 56 "pd_cost.m"
              transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_13, transform_hlds__pd_cost__GoalInfo_14, &transform_hlds__pd_cost__Cost1_9);
            }
#line 167 "pd_cost.m"
            transform_hlds__pd_cost__Cost2_10 = (transform_hlds__pd_cost__HeadVar__2_2 + transform_hlds__pd_cost__Cost1_9);
#line 168 "pd_cost.m"
            /* direct tailcall eliminated */
#line 168 "pd_cost.m"
            {
#line 168 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__HeadVar__1__tmp_copy_1 = transform_hlds__pd_cost__Goals_6;
#line 168 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__HeadVar__2__tmp_copy_2 = transform_hlds__pd_cost__Cost2_10;

#line 168 "pd_cost.m"
              transform_hlds__pd_cost__HeadVar__2_2 = transform_hlds__pd_cost__HeadVar__2__tmp_copy_2;
#line 168 "pd_cost.m"
              transform_hlds__pd_cost__HeadVar__1_1 = transform_hlds__pd_cost__HeadVar__1__tmp_copy_1;
#line 168 "pd_cost.m"
            }
#line 168 "pd_cost.m"
            continue;
#line 165 "pd_cost.m"
          }
#line 164 "pd_cost.m"
      }
#line 164 "pd_cost.m"
      break;
#line 164 "pd_cost.m"
    }
#line 162 "pd_cost.m"
}

#line 157 "pd_cost.m"
static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
#line 157 "pd_cost.m"
  MR_Box transform_hlds__pd_cost__closure_arg,
#line 157 "pd_cost.m"
  MR_Box transform_hlds__pd_cost__wrapper_arg_1)
#line 157 "pd_cost.m"
{
#line 157 "pd_cost.m"
  {
#line 157 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;
#line 157 "pd_cost.m"
    MR_Box transform_hlds__pd_cost__closure = transform_hlds__pd_cost__closure_arg;

#line 157 "pd_cost.m"
    {
#line 157 "pd_cost.m"
      return transform_hlds__pd_cost__succeeded = transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__157__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_cost__wrapper_arg_1));
    }
#line 157 "pd_cost.m"
    return transform_hlds__pd_cost__succeeded;
#line 157 "pd_cost.m"
  }
#line 157 "pd_cost.m"
}

#line 128 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
#line 128 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__NonLocals_4,
#line 128 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__Unification_5,
#line 128 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_6)
#line 128 "pd_cost.m"
{
#line 132 "pd_cost.m"
  {
#line 132 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 132 "pd_cost.m"
    if (((MR_tag((MR_Word) transform_hlds__pd_cost__Unification_5)) == (MR_mktag((MR_Integer) 2))))
#line 133 "pd_cost.m"
      *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 0;
#line 132 "pd_cost.m"
    else
#line 132 "pd_cost.m"
      if (((MR_tag((MR_Word) transform_hlds__pd_cost__Unification_5)) == (MR_mktag((MR_Integer) 0))))
#line 141 "pd_cost.m"
        {
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 2)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 1)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 3)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 4)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 5)));
#line 141 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 6)));

#line 142 "pd_cost.m"
          {
#line 142 "pd_cost.m"
            transform_hlds__pd_cost__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_cost__NonLocals_4, transform_hlds__pd_cost__Var_14);
          }
#line 145 "pd_cost.m"
          if (transform_hlds__pd_cost__succeeded)
#line 143 "pd_cost.m"
            {
#line 143 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__Arity_21;
#line 143 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__V_36_36;

#line 143 "pd_cost.m"
              {
#line 143 "pd_cost.m"
                mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_16, &transform_hlds__pd_cost__Arity_21);
              }
#line 144 "pd_cost.m"
              transform_hlds__pd_cost__V_36_36 = (transform_hlds__pd_cost__Arity_21 * (MR_Integer) 2);
#line 144 "pd_cost.m"
              *transform_hlds__pd_cost__Cost_6 = ((MR_Integer) 3 + transform_hlds__pd_cost__V_36_36);
#line 143 "pd_cost.m"
            }
#line 145 "pd_cost.m"
          else
#line 146 "pd_cost.m"
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 0;
#line 141 "pd_cost.m"
        }
#line 132 "pd_cost.m"
      else
#line 132 "pd_cost.m"
        if (((MR_tag((MR_Word) transform_hlds__pd_cost__Unification_5)) == (MR_mktag((MR_Integer) 1))))
#line 149 "pd_cost.m"
          {
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__TypeInfo_43_43;
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__CanFail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 4)));
#line 149 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__Cost0_27;
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__NonLocalArgs_28;
#line 149 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__NumAssigns_29;
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_30_30;
#line 149 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__V_31_31;
#line 149 "pd_cost.m"
            MR_Integer transform_hlds__pd_cost__V_33_33;
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 2)));
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)));
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 1)));
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 3)));
#line 149 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 5)));

#line 153 "pd_cost.m"
            if ((transform_hlds__pd_cost__CanFail_25 == (MR_Integer) 0))
#line 182 "pd_cost.m"
              transform_hlds__pd_cost__Cost0_27 = (MR_Integer) 3;
#line 153 "pd_cost.m"
            else
#line 155 "pd_cost.m"
              transform_hlds__pd_cost__Cost0_27 = (MR_Integer) 0;
#line 157 "pd_cost.m"
            {
#line 157 "pd_cost.m"
              transform_hlds__pd_cost__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "pd_cost.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_30_30, 0) = ((MR_Box) (&transform_hlds__pd_cost_scalar_common_2[0]));
#line 157 "pd_cost.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_30_30, 1) = ((MR_Box) (transform_hlds__pd_cost__unify_cost_3_p_0_1));
#line 157 "pd_cost.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "pd_cost.m"
              MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__V_30_30, 3) = ((MR_Box) (transform_hlds__pd_cost__NonLocals_4));
#line 157 "pd_cost.m"
            }
#line 615 "transform_hlds.pd_cost.c"
            transform_hlds__pd_cost__TypeInfo_43_43 = (MR_Word) &transform_hlds__pd_cost_scalar_common_1[0];
#line 157 "pd_cost.m"
            {
#line 157 "pd_cost.m"
              mercury__list__filter_3_p_0(transform_hlds__pd_cost__TypeInfo_43_43, transform_hlds__pd_cost__V_30_30, transform_hlds__pd_cost__Args_38, &transform_hlds__pd_cost__NonLocalArgs_28);
            }
#line 158 "pd_cost.m"
            {
#line 158 "pd_cost.m"
              mercury__list__length_2_p_0(transform_hlds__pd_cost__TypeInfo_43_43, transform_hlds__pd_cost__NonLocalArgs_28, &transform_hlds__pd_cost__NumAssigns_29);
            }
#line 159 "pd_cost.m"
            transform_hlds__pd_cost__V_31_31 = (transform_hlds__pd_cost__Cost0_27 + (MR_Integer) 3);
#line 159 "pd_cost.m"
            transform_hlds__pd_cost__V_33_33 = (transform_hlds__pd_cost__NumAssigns_29 * (MR_Integer) 2);
#line 159 "pd_cost.m"
            *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__V_31_31 + transform_hlds__pd_cost__V_33_33);
#line 149 "pd_cost.m"
          }
#line 132 "pd_cost.m"
        else
#line 132 "pd_cost.m"
          if (((((MR_tag((MR_Word) transform_hlds__pd_cost__Unification_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 184 "pd_cost.m"
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 5;
#line 132 "pd_cost.m"
          else
#line 182 "pd_cost.m"
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 3;
#line 132 "pd_cost.m"
  }
#line 128 "pd_cost.m"
}

#line 58 "pd_cost.m"
static void MR_CALL 
transform_hlds__pd_cost__goal_expr_cost_3_p_0(
#line 58 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__GoalExpr_4,
#line 58 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__GoalInfo_5,
#line 58 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_6)
#line 58 "pd_cost.m"
{
#line 63 "pd_cost.m"
  {
#line 63 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 63 "pd_cost.m"
    if (((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 0))))
#line 93 "pd_cost.m"
      {
#line 93 "pd_cost.m"
        MR_Word transform_hlds__pd_cost__Goal_28 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_cost__GoalExpr_4), (MR_Integer) 0);

#line 94 "pd_cost.m"
        {
#line 94 "pd_cost.m"
          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Goal_28, transform_hlds__pd_cost__Cost_6);
#line 94 "pd_cost.m"
          return;
        }
#line 93 "pd_cost.m"
      }
#line 63 "pd_cost.m"
    else
#line 63 "pd_cost.m"
      if (((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 2))))
#line 79 "pd_cost.m"
        {
#line 79 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 79 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__BuiltinState_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 79 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)));
#line 79 "pd_cost.m"
          MR_Integer transform_hlds__pd_cost__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 79 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 4)));
#line 79 "pd_cost.m"
          MR_Word transform_hlds__pd_cost__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 5)));

#line 83 "pd_cost.m"
          if ((transform_hlds__pd_cost__BuiltinState_23 == (MR_Integer) 0))
#line 185 "pd_cost.m"
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 3;
#line 83 "pd_cost.m"
          else
#line 86 "pd_cost.m"
            {
#line 86 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__Arity_26;
#line 86 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__InputArgs_27;
#line 86 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__V_68_68;

#line 87 "pd_cost.m"
              {
#line 87 "pd_cost.m"
                mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_22, &transform_hlds__pd_cost__Arity_26);
              }
#line 88 "pd_cost.m"
              {
#line 88 "pd_cost.m"
                transform_hlds__pd_cost__InputArgs_27 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_26, (MR_Integer) 2);
              }
#line 90 "pd_cost.m"
              transform_hlds__pd_cost__V_68_68 = ((MR_Integer) 1 * transform_hlds__pd_cost__InputArgs_27);
#line 90 "pd_cost.m"
              *transform_hlds__pd_cost__Cost_6 = ((MR_Integer) 8 + transform_hlds__pd_cost__V_68_68);
#line 86 "pd_cost.m"
            }
#line 79 "pd_cost.m"
        }
#line 63 "pd_cost.m"
      else
#line 63 "pd_cost.m"
        if (((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 1))))
#line 108 "pd_cost.m"
          {
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__Unification_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__NonLocals_40;
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)));
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 108 "pd_cost.m"
            MR_Word transform_hlds__pd_cost__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 4)));

#line 109 "pd_cost.m"
            {
#line 109 "pd_cost.m"
              transform_hlds__pd_cost__NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_cost__GoalInfo_5);
            }
#line 110 "pd_cost.m"
            {
#line 110 "pd_cost.m"
              transform_hlds__pd_cost__unify_cost_3_p_0(transform_hlds__pd_cost__NonLocals_40, transform_hlds__pd_cost__Unification_38, transform_hlds__pd_cost__Cost_6);
#line 110 "pd_cost.m"
              return;
            }
#line 108 "pd_cost.m"
          }
#line 63 "pd_cost.m"
        else
#line 63 "pd_cost.m"
          if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 112 "pd_cost.m"
            {
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__Attributes_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__V_53_53;
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__V_55_55;
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__Cost1_80;
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__Args_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 4)));
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__Arity_82;
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__InputArgs_83;
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 112 "pd_cost.m"
              MR_Integer transform_hlds__pd_cost__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 5)));
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 6)));
#line 112 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 7)));
#line 113 "pd_cost.m"
              MR_Word transform_hlds__pd_cost__V_51_51;

#line 113 "pd_cost.m"
              {
#line 113 "pd_cost.m"
                transform_hlds__pd_cost__V_51_51 = parse_tree__prog_data__get_may_call_mercury_1_f_0(transform_hlds__pd_cost__Attributes_41);
              }
#line 113 "pd_cost.m"
              transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__V_51_51 == (MR_Integer) 1);
#line 115 "pd_cost.m"
              if (transform_hlds__pd_cost__succeeded)
#line 114 "pd_cost.m"
                transform_hlds__pd_cost__Cost1_80 = (MR_Integer) 0;
#line 115 "pd_cost.m"
              else
#line 184 "pd_cost.m"
                transform_hlds__pd_cost__Cost1_80 = (MR_Integer) 5;
#line 119 "pd_cost.m"
              {
#line 119 "pd_cost.m"
                mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__pd_cost__Args_81, &transform_hlds__pd_cost__Arity_82);
              }
#line 120 "pd_cost.m"
              {
#line 120 "pd_cost.m"
                transform_hlds__pd_cost__InputArgs_83 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_82, (MR_Integer) 2);
              }
#line 121 "pd_cost.m"
              transform_hlds__pd_cost__V_53_53 = (transform_hlds__pd_cost__Cost1_80 + (MR_Integer) 3);
#line 121 "pd_cost.m"
              transform_hlds__pd_cost__V_55_55 = ((MR_Integer) 1 * transform_hlds__pd_cost__InputArgs_83);
#line 121 "pd_cost.m"
              *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__V_53_53 + transform_hlds__pd_cost__V_55_55);
#line 112 "pd_cost.m"
            }
#line 63 "pd_cost.m"
          else
#line 63 "pd_cost.m"
            if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 63 "pd_cost.m"
              {
#line 63 "pd_cost.m"
                MR_Word transform_hlds__pd_cost__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 63 "pd_cost.m"
                MR_Word transform_hlds__pd_cost__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));

#line 64 "pd_cost.m"
                {
#line 64 "pd_cost.m"
                  transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_8, (MR_Integer) 0, transform_hlds__pd_cost__Cost_6);
#line 64 "pd_cost.m"
                  return;
                }
#line 63 "pd_cost.m"
              }
#line 63 "pd_cost.m"
            else
#line 63 "pd_cost.m"
              if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 66 "pd_cost.m"
                {
#line 66 "pd_cost.m"
                  MR_Integer transform_hlds__pd_cost__Cost0_9;
#line 66 "pd_cost.m"
                  MR_Word transform_hlds__pd_cost__Goals_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));

#line 67 "pd_cost.m"
                  {
#line 67 "pd_cost.m"
                    transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_75, (MR_Integer) 0, &transform_hlds__pd_cost__Cost0_9);
                  }
#line 68 "pd_cost.m"
                  *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__Cost0_9 + (MR_Integer) 5);
#line 66 "pd_cost.m"
                }
#line 63 "pd_cost.m"
              else
#line 63 "pd_cost.m"
                if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 103 "pd_cost.m"
                  {
#line 103 "pd_cost.m"
                    MR_Integer transform_hlds__pd_cost__V_57_57;
#line 103 "pd_cost.m"
                    MR_Integer transform_hlds__pd_cost__V_60_60;
#line 103 "pd_cost.m"
                    MR_Integer transform_hlds__pd_cost__Cost0_77;
#line 103 "pd_cost.m"
                    MR_Word transform_hlds__pd_cost__Args_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 103 "pd_cost.m"
                    MR_Integer transform_hlds__pd_cost__Arity_79;
#line 103 "pd_cost.m"
                    MR_Word transform_hlds__pd_cost__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 103 "pd_cost.m"
                    MR_Word transform_hlds__pd_cost__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 103 "pd_cost.m"
                    MR_Word transform_hlds__pd_cost__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 4)));
#line 103 "pd_cost.m"
                    MR_Word transform_hlds__pd_cost__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 5)));

#line 104 "pd_cost.m"
                    {
#line 104 "pd_cost.m"
                      mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_78, &transform_hlds__pd_cost__Arity_79);
                    }
#line 105 "pd_cost.m"
                    transform_hlds__pd_cost__V_57_57 = ((MR_Integer) 1 * transform_hlds__pd_cost__Arity_79);
#line 105 "pd_cost.m"
                    {
#line 105 "pd_cost.m"
                      transform_hlds__pd_cost__Cost0_77 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__V_57_57, (MR_Integer) 2);
                    }
#line 106 "pd_cost.m"
                    transform_hlds__pd_cost__V_60_60 = (transform_hlds__pd_cost__Cost0_77 + (MR_Integer) 5);
#line 106 "pd_cost.m"
                    *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__V_60_60 + (MR_Integer) 8);
#line 103 "pd_cost.m"
                  }
#line 63 "pd_cost.m"
                else
#line 63 "pd_cost.m"
                  if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 73 "pd_cost.m"
                    {
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__Cond_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__Then_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__Else_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 4)));
#line 73 "pd_cost.m"
                      MR_Integer transform_hlds__pd_cost__Cost1_17;
#line 73 "pd_cost.m"
                      MR_Integer transform_hlds__pd_cost__Cost2_18;
#line 73 "pd_cost.m"
                      MR_Integer transform_hlds__pd_cost__Cost3_19;
#line 73 "pd_cost.m"
                      MR_Integer transform_hlds__pd_cost__V_70_70;
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalExpr_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Cond_14, (MR_Integer) 0)));
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalInfo_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Cond_14, (MR_Integer) 1)));
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalExpr_93;
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalInfo_94;
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalExpr_97;
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__GoalInfo_98;
#line 73 "pd_cost.m"
                      MR_Word transform_hlds__pd_cost__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));

#line 56 "pd_cost.m"
                      {
#line 56 "pd_cost.m"
                        transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_89, transform_hlds__pd_cost__GoalInfo_90, &transform_hlds__pd_cost__Cost1_17);
                      }
#line 55 "pd_cost.m"
                      transform_hlds__pd_cost__GoalExpr_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Then_15, (MR_Integer) 0)));
#line 55 "pd_cost.m"
                      transform_hlds__pd_cost__GoalInfo_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Then_15, (MR_Integer) 1)));
#line 56 "pd_cost.m"
                      {
#line 56 "pd_cost.m"
                        transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_93, transform_hlds__pd_cost__GoalInfo_94, &transform_hlds__pd_cost__Cost2_18);
                      }
#line 55 "pd_cost.m"
                      transform_hlds__pd_cost__GoalExpr_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Else_16, (MR_Integer) 0)));
#line 55 "pd_cost.m"
                      transform_hlds__pd_cost__GoalInfo_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Else_16, (MR_Integer) 1)));
#line 56 "pd_cost.m"
                      {
#line 56 "pd_cost.m"
                        transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_97, transform_hlds__pd_cost__GoalInfo_98, &transform_hlds__pd_cost__Cost3_19);
                      }
#line 77 "pd_cost.m"
                      transform_hlds__pd_cost__V_70_70 = (transform_hlds__pd_cost__Cost1_17 + transform_hlds__pd_cost__Cost2_18);
#line 77 "pd_cost.m"
                      *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__V_70_70 + transform_hlds__pd_cost__Cost3_19);
#line 73 "pd_cost.m"
                    }
#line 63 "pd_cost.m"
                  else
#line 63 "pd_cost.m"
                    if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 96 "pd_cost.m"
                      {
#line 96 "pd_cost.m"
                        MR_Word transform_hlds__pd_cost__Reason_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 96 "pd_cost.m"
                        MR_Word transform_hlds__pd_cost__Goal_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));
#line 97 "pd_cost.m"
                        MR_Word transform_hlds__pd_cost__V_63_63;
#line 97 "pd_cost.m"
                        MR_Word transform_hlds__pd_cost__V_30_30;

#line 97 "pd_cost.m"
                        transform_hlds__pd_cost__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_cost__Reason_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_29, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 97 "pd_cost.m"
                        if (transform_hlds__pd_cost__succeeded)
#line 97 "pd_cost.m"
                          {
#line 97 "pd_cost.m"
                            transform_hlds__pd_cost__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_29, (MR_Integer) 1)));
#line 97 "pd_cost.m"
                            transform_hlds__pd_cost__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_29, (MR_Integer) 2)));
#line 97 "pd_cost.m"
                            transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__V_63_63 == (MR_Integer) 1);
#line 97 "pd_cost.m"
                          }
#line 99 "pd_cost.m"
                        if (transform_hlds__pd_cost__succeeded)
#line 180 "pd_cost.m"
                          *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 1;
#line 99 "pd_cost.m"
                        else
#line 100 "pd_cost.m"
                          {
#line 100 "pd_cost.m"
                            transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Goal_76, transform_hlds__pd_cost__Cost_6);
#line 100 "pd_cost.m"
                            return;
                          }
#line 96 "pd_cost.m"
                      }
#line 63 "pd_cost.m"
                    else
#line 63 "pd_cost.m"
                      if (((((MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 123 "pd_cost.m"
                        {
#line 125 "pd_cost.m"
                          {
#line 125 "pd_cost.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_cost", (MR_String) "predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", (MR_String) "shorthand");
#line 125 "pd_cost.m"
                            return;
                          }
#line 123 "pd_cost.m"
                        }
#line 63 "pd_cost.m"
                      else
#line 70 "pd_cost.m"
                        {
#line 70 "pd_cost.m"
                          MR_Word transform_hlds__pd_cost__Cases_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 3)));
#line 70 "pd_cost.m"
                          MR_Word transform_hlds__pd_cost__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 1)));
#line 70 "pd_cost.m"
                          MR_Word transform_hlds__pd_cost__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_4, (MR_Integer) 2)));

#line 71 "pd_cost.m"
                          {
#line 71 "pd_cost.m"
                            transform_hlds__pd_cost__cases_cost_3_p_0(transform_hlds__pd_cost__Cases_12, (MR_Integer) 3, transform_hlds__pd_cost__Cost_6);
#line 71 "pd_cost.m"
                            return;
                          }
#line 70 "pd_cost.m"
                        }
#line 63 "pd_cost.m"
  }
#line 58 "pd_cost.m"
}

#line 38 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0(void)
#line 38 "pd_cost.m"
{
#line 191 "pd_cost.m"
  {
#line 191 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 191 "pd_cost.m"
    return (MR_Integer) 25;
#line 191 "pd_cost.m"
  }
#line 38 "pd_cost.m"
}

#line 37 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_fold_0_f_0(void)
#line 37 "pd_cost.m"
{
#line 190 "pd_cost.m"
  {
#line 190 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 190 "pd_cost.m"
    return (MR_Integer) 15;
#line 190 "pd_cost.m"
  }
#line 37 "pd_cost.m"
}

#line 36 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0(void)
#line 36 "pd_cost.m"
{
#line 189 "pd_cost.m"
  {
#line 189 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 189 "pd_cost.m"
    return (MR_Integer) 5;
#line 189 "pd_cost.m"
  }
#line 36 "pd_cost.m"
}

#line 34 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0(void)
#line 34 "pd_cost.m"
{
#line 187 "pd_cost.m"
  {
#line 187 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 187 "pd_cost.m"
    return (MR_Integer) 8;
#line 187 "pd_cost.m"
  }
#line 34 "pd_cost.m"
}

#line 33 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_call_0_f_0(void)
#line 33 "pd_cost.m"
{
#line 186 "pd_cost.m"
  {
#line 186 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 186 "pd_cost.m"
    return (MR_Integer) 3;
#line 186 "pd_cost.m"
  }
#line 33 "pd_cost.m"
}

#line 32 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_builtin_call_0_f_0(void)
#line 32 "pd_cost.m"
{
#line 185 "pd_cost.m"
  {
#line 185 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 185 "pd_cost.m"
    return (MR_Integer) 3;
#line 185 "pd_cost.m"
  }
#line 32 "pd_cost.m"
}

#line 31 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_stack_flush_0_f_0(void)
#line 31 "pd_cost.m"
{
#line 184 "pd_cost.m"
  {
#line 184 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 184 "pd_cost.m"
    return (MR_Integer) 5;
#line 184 "pd_cost.m"
  }
#line 31 "pd_cost.m"
}

#line 30 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_incr_0_f_0(void)
#line 30 "pd_cost.m"
{
#line 183 "pd_cost.m"
  {
#line 183 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 183 "pd_cost.m"
    return (MR_Integer) 3;
#line 183 "pd_cost.m"
  }
#line 30 "pd_cost.m"
}

#line 29 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_simple_test_0_f_0(void)
#line 29 "pd_cost.m"
{
#line 182 "pd_cost.m"
  {
#line 182 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 182 "pd_cost.m"
    return (MR_Integer) 3;
#line 182 "pd_cost.m"
  }
#line 29 "pd_cost.m"
}

#line 28 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_assign_0_f_0(void)
#line 28 "pd_cost.m"
{
#line 181 "pd_cost.m"
  {
#line 181 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 181 "pd_cost.m"
    return (MR_Integer) 2;
#line 181 "pd_cost.m"
  }
#line 28 "pd_cost.m"
}

#line 27 "pd_cost.m"
MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_reg_assign_0_f_0(void)
#line 27 "pd_cost.m"
{
#line 180 "pd_cost.m"
  {
#line 180 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;

#line 180 "pd_cost.m"
    return (MR_Integer) 1;
#line 180 "pd_cost.m"
  }
#line 27 "pd_cost.m"
}

#line 25 "pd_cost.m"
void MR_CALL 
transform_hlds__pd_cost__goal_cost_2_p_0(
#line 25 "pd_cost.m"
  MR_Word transform_hlds__pd_cost__Goal_3,
#line 25 "pd_cost.m"
  MR_Integer * transform_hlds__pd_cost__Cost_4)
#line 25 "pd_cost.m"
{
#line 54 "pd_cost.m"
  {
#line 54 "pd_cost.m"
    MR_bool transform_hlds__pd_cost__succeeded;
#line 54 "pd_cost.m"
    MR_Word transform_hlds__pd_cost__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_3, (MR_Integer) 0)));
#line 54 "pd_cost.m"
    MR_Word transform_hlds__pd_cost__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_3, (MR_Integer) 1)));

#line 56 "pd_cost.m"
    {
#line 56 "pd_cost.m"
      transform_hlds__pd_cost__goal_expr_cost_3_p_0(transform_hlds__pd_cost__GoalExpr_5, transform_hlds__pd_cost__GoalInfo_6, transform_hlds__pd_cost__Cost_4);
#line 56 "pd_cost.m"
      return;
    }
#line 54 "pd_cost.m"
  }
#line 25 "pd_cost.m"
}

void mercury__transform_hlds__pd_cost__init(void)
{
}

void mercury__transform_hlds__pd_cost__init_type_tables(void)
{
}

void mercury__transform_hlds__pd_cost__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.pd_cost. */
