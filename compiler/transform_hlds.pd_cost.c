/*
** Automatically generated from `pd_cost.m'
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


/* :- module transform_hlds.pd_cost. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__pd_cost__init
ENDINIT
*/

#include "transform_hlds.pd_cost.mih"


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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(
  MR_Word transform_hlds__pd_cost__NonLocals_4,
  MR_Word transform_hlds__pd_cost__HeadVar__2_41);

static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
  MR_Integer * transform_hlds__pd_cost__Cost_3);

static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
  MR_Integer * transform_hlds__pd_cost__Cost_3);

static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
  MR_Box transform_hlds__pd_cost__closure_arg,
  MR_Box transform_hlds__pd_cost__wrapper_arg_1);

static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
  MR_Word transform_hlds__pd_cost__NonLocals_4,
  MR_Word transform_hlds__pd_cost__Unification_5,
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
    ((MR_Box) (&transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(
  MR_Word transform_hlds__pd_cost__NonLocals_4,
  MR_Word transform_hlds__pd_cost__HeadVar__2_41)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    {
      transform_hlds__pd_cost__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_cost__NonLocals_4, transform_hlds__pd_cost__HeadVar__2_41);
    }
    return transform_hlds__pd_cost__succeeded;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 25;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_fold_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 15;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 5;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_incr_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_assign_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 2;
  }
}

static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
  MR_Integer * transform_hlds__pd_cost__Cost_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__pd_cost__succeeded;

        if ((transform_hlds__pd_cost__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__pd_cost__Cost_3 = transform_hlds__pd_cost__HeadVar__2_2;
        else
          {
            MR_Word transform_hlds__pd_cost__Goal_7;
            MR_Word transform_hlds__pd_cost__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__pd_cost__Cost1_11;
            MR_Integer transform_hlds__pd_cost__Cost2_12;
            MR_Word transform_hlds__pd_cost__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_cost__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_13, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_cost__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_13, (MR_Integer) 1)));

            transform_hlds__pd_cost__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_13, (MR_Integer) 2)));
            {
              transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Goal_7, &transform_hlds__pd_cost__Cost1_11);
            }
            transform_hlds__pd_cost__Cost2_12 = (transform_hlds__pd_cost__HeadVar__2_2 + transform_hlds__pd_cost__Cost1_11);
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__pd_cost__next_value_of_HeadVar__1_1 = transform_hlds__pd_cost__Cases_8;
              MR_Integer transform_hlds__pd_cost__next_value_of_HeadVar__2_2 = transform_hlds__pd_cost__Cost2_12;

              transform_hlds__pd_cost__HeadVar__2_2 = transform_hlds__pd_cost__next_value_of_HeadVar__2_2;
              transform_hlds__pd_cost__HeadVar__1_1 = transform_hlds__pd_cost__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
  MR_Word transform_hlds__pd_cost__HeadVar__1_1,
  MR_Integer transform_hlds__pd_cost__HeadVar__2_2,
  MR_Integer * transform_hlds__pd_cost__Cost_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__pd_cost__succeeded;

        if ((transform_hlds__pd_cost__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__pd_cost__Cost_3 = transform_hlds__pd_cost__HeadVar__2_2;
        else
          {
            MR_Word transform_hlds__pd_cost__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_cost__Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__pd_cost__Cost1_9;
            MR_Integer transform_hlds__pd_cost__Cost2_10;
            MR_Word transform_hlds__pd_cost__GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_5, (MR_Integer) 0)));
            MR_Word transform_hlds__pd_cost__GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_5, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__pd_cost__Goal_39 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_cost__GoalExpr_13), (MR_Integer) 0);

                  {
                    transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Goal_39, &transform_hlds__pd_cost__Cost1_9);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__pd_cost__Unification_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_cost__NonLocals_51;
                  MR_Word transform_hlds__pd_cost__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 0)));
                  MR_Word transform_hlds__pd_cost__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_cost__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_cost__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 4)));

                  {
                    transform_hlds__pd_cost__NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_cost__GoalInfo_14);
                  }
                  {
                    transform_hlds__pd_cost__unify_cost_3_p_0(transform_hlds__pd_cost__NonLocals_51, transform_hlds__pd_cost__Unification_49, &transform_hlds__pd_cost__Cost1_9);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__pd_cost__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_cost__BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_cost__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 0)));
                  MR_Integer transform_hlds__pd_cost__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_cost__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 4)));
                  MR_Word transform_hlds__pd_cost__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 5)));

                  switch (transform_hlds__pd_cost__BuiltinState_34) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        transform_hlds__pd_cost__Cost1_9 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer transform_hlds__pd_cost__Arity_37;
                        MR_Integer transform_hlds__pd_cost__InputArgs_38;
                        MR_Integer transform_hlds__pd_cost__Var_76;
                        MR_Integer transform_hlds__pd_cost__Var_77;
                        MR_Integer transform_hlds__pd_cost__Var_78;
                        MR_Integer transform_hlds__pd_cost__Var_79;
                        MR_Integer transform_hlds__pd_cost__Var_80;

                        {
                          mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_33, &transform_hlds__pd_cost__Arity_37);
                        }
                        {
                          transform_hlds__pd_cost__InputArgs_38 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_37, (MR_Integer) 2);
                        }
                        {
                          transform_hlds__pd_cost__Var_77 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                        }
                        {
                          transform_hlds__pd_cost__Var_78 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                        }
                        transform_hlds__pd_cost__Var_76 = (transform_hlds__pd_cost__Var_77 + transform_hlds__pd_cost__Var_78);
                        {
                          transform_hlds__pd_cost__Var_80 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                        }
                        transform_hlds__pd_cost__Var_79 = (transform_hlds__pd_cost__Var_80 * transform_hlds__pd_cost__InputArgs_38);
                        transform_hlds__pd_cost__Cost1_9 = (transform_hlds__pd_cost__Var_76 + transform_hlds__pd_cost__Var_79);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer transform_hlds__pd_cost__Var_68;
                      MR_Integer transform_hlds__pd_cost__Var_69;
                      MR_Integer transform_hlds__pd_cost__Var_71;
                      MR_Integer transform_hlds__pd_cost__Var_72;
                      MR_Integer transform_hlds__pd_cost__Var_73;
                      MR_Integer transform_hlds__pd_cost__Cost0_88;
                      MR_Word transform_hlds__pd_cost__Args_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                      MR_Integer transform_hlds__pd_cost__Arity_90;
                      MR_Word transform_hlds__pd_cost__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                      MR_Word transform_hlds__pd_cost__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                      MR_Word transform_hlds__pd_cost__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 4)));
                      MR_Word transform_hlds__pd_cost__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 5)));

                      {
                        mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_89, &transform_hlds__pd_cost__Arity_90);
                      }
                      {
                        transform_hlds__pd_cost__Var_69 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                      }
                      transform_hlds__pd_cost__Var_68 = (transform_hlds__pd_cost__Var_69 * transform_hlds__pd_cost__Arity_90);
                      {
                        transform_hlds__pd_cost__Cost0_88 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Var_68, (MR_Integer) 2);
                      }
                      {
                        transform_hlds__pd_cost__Var_72 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                      }
                      transform_hlds__pd_cost__Var_71 = (transform_hlds__pd_cost__Cost0_88 + transform_hlds__pd_cost__Var_72);
                      {
                        transform_hlds__pd_cost__Var_73 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                      }
                      transform_hlds__pd_cost__Cost1_9 = (transform_hlds__pd_cost__Var_71 + transform_hlds__pd_cost__Var_73);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word transform_hlds__pd_cost__Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                      MR_Integer transform_hlds__pd_cost__Var_64;
                      MR_Integer transform_hlds__pd_cost__Var_65;
                      MR_Integer transform_hlds__pd_cost__Var_66;
                      MR_Integer transform_hlds__pd_cost__Var_67;
                      MR_Integer transform_hlds__pd_cost__Cost1_91;
                      MR_Word transform_hlds__pd_cost__Args_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 4)));
                      MR_Integer transform_hlds__pd_cost__Arity_93;
                      MR_Integer transform_hlds__pd_cost__InputArgs_94;
                      MR_Word transform_hlds__pd_cost__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                      MR_Integer transform_hlds__pd_cost__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                      MR_Word transform_hlds__pd_cost__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 5)));
                      MR_Word transform_hlds__pd_cost__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 6)));
                      MR_Word transform_hlds__pd_cost__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 7)));
                      MR_Word transform_hlds__pd_cost__Var_62;

                      {
                        transform_hlds__pd_cost__Var_62 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(transform_hlds__pd_cost__Attributes_52);
                      }
                      transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__Var_62 == (MR_Integer) 1);
                      if (transform_hlds__pd_cost__succeeded)
                        transform_hlds__pd_cost__Cost1_91 = (MR_Integer) 0;
                      else
                        {
                          transform_hlds__pd_cost__Cost1_91 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                        }
                      {
                        mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__pd_cost__Args_92, &transform_hlds__pd_cost__Arity_93);
                      }
                      {
                        transform_hlds__pd_cost__InputArgs_94 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_93, (MR_Integer) 2);
                      }
                      {
                        transform_hlds__pd_cost__Var_65 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                      }
                      transform_hlds__pd_cost__Var_64 = (transform_hlds__pd_cost__Cost1_91 + transform_hlds__pd_cost__Var_65);
                      {
                        transform_hlds__pd_cost__Var_67 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                      }
                      transform_hlds__pd_cost__Var_66 = (transform_hlds__pd_cost__Var_67 * transform_hlds__pd_cost__InputArgs_94);
                      transform_hlds__pd_cost__Cost1_9 = (transform_hlds__pd_cost__Var_64 + transform_hlds__pd_cost__Var_66);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word transform_hlds__pd_cost__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                      MR_Word transform_hlds__pd_cost__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));

                      {
                        transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_19, (MR_Integer) 0, &transform_hlds__pd_cost__Cost1_9);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Integer transform_hlds__pd_cost__Cost0_20;
                      MR_Integer transform_hlds__pd_cost__Var_84;
                      MR_Word transform_hlds__pd_cost__Goals_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));

                      {
                        transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_86, (MR_Integer) 0, &transform_hlds__pd_cost__Cost0_20);
                      }
                      {
                        transform_hlds__pd_cost__Var_84 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                      }
                      transform_hlds__pd_cost__Cost1_9 = (transform_hlds__pd_cost__Cost0_20 + transform_hlds__pd_cost__Var_84);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word transform_hlds__pd_cost__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                      MR_Integer transform_hlds__pd_cost__Var_82;
                      MR_Word transform_hlds__pd_cost__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                      MR_Word transform_hlds__pd_cost__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));

                      {
                        transform_hlds__pd_cost__Var_82 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                      }
                      {
                        transform_hlds__pd_cost__cases_cost_3_p_0(transform_hlds__pd_cost__Cases_23, transform_hlds__pd_cost__Var_82, &transform_hlds__pd_cost__Cost1_9);
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word transform_hlds__pd_cost__Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));
                      MR_Word transform_hlds__pd_cost__Goal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                      MR_Word transform_hlds__pd_cost__Var_74;
                      MR_Word transform_hlds__pd_cost__Var_41;

                      transform_hlds__pd_cost__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_cost__Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (transform_hlds__pd_cost__succeeded)
                        {
                          transform_hlds__pd_cost__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_40, (MR_Integer) 1)));
                          transform_hlds__pd_cost__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_40, (MR_Integer) 2)));
                          transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__Var_74 == (MR_Integer) 1);
                        }
                      if (transform_hlds__pd_cost__succeeded)
                        {
                          transform_hlds__pd_cost__Cost1_9 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                        }
                      else
                        {
                          transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Goal_87, &transform_hlds__pd_cost__Cost1_9);
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word transform_hlds__pd_cost__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 2)));
                      MR_Word transform_hlds__pd_cost__Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 3)));
                      MR_Word transform_hlds__pd_cost__Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 4)));
                      MR_Integer transform_hlds__pd_cost__Cost1_28;
                      MR_Integer transform_hlds__pd_cost__Cost2_29;
                      MR_Integer transform_hlds__pd_cost__Cost3_30;
                      MR_Integer transform_hlds__pd_cost__Var_81;
                      MR_Word transform_hlds__pd_cost__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_13, (MR_Integer) 1)));

                      {
                        transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Cond_25, &transform_hlds__pd_cost__Cost1_28);
                      }
                      {
                        transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Then_26, &transform_hlds__pd_cost__Cost2_29);
                      }
                      {
                        transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Else_27, &transform_hlds__pd_cost__Cost3_30);
                      }
                      transform_hlds__pd_cost__Var_81 = (transform_hlds__pd_cost__Cost1_28 + transform_hlds__pd_cost__Cost2_29);
                      transform_hlds__pd_cost__Cost1_9 = (transform_hlds__pd_cost__Var_81 + transform_hlds__pd_cost__Cost3_30);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_cost", (MR_String) "predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", (MR_String) "shorthand");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            transform_hlds__pd_cost__Cost2_10 = (transform_hlds__pd_cost__HeadVar__2_2 + transform_hlds__pd_cost__Cost1_9);
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__pd_cost__next_value_of_HeadVar__1_1 = transform_hlds__pd_cost__Goals_6;
              MR_Integer transform_hlds__pd_cost__next_value_of_HeadVar__2_2 = transform_hlds__pd_cost__Cost2_10;

              transform_hlds__pd_cost__HeadVar__2_2 = transform_hlds__pd_cost__next_value_of_HeadVar__2_2;
              transform_hlds__pd_cost__HeadVar__1_1 = transform_hlds__pd_cost__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__pd_cost__goal_cost_2_p_0(
  MR_Word transform_hlds__pd_cost__Goal_3,
  MR_Integer * transform_hlds__pd_cost__Cost_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__pd_cost__succeeded;
        MR_Word transform_hlds__pd_cost__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_3, (MR_Integer) 0)));
        MR_Word transform_hlds__pd_cost__GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Goal_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) transform_hlds__pd_cost__GoalExpr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__pd_cost__Goal_31 = (MR_Word) MR_body(((MR_Word) transform_hlds__pd_cost__GoalExpr_5), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word transform_hlds__pd_cost__next_value_of_Goal_3 = transform_hlds__pd_cost__Goal_31;

                transform_hlds__pd_cost__Goal_3 = transform_hlds__pd_cost__next_value_of_Goal_3;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__pd_cost__Unification_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
              MR_Word transform_hlds__pd_cost__NonLocals_43;
              MR_Word transform_hlds__pd_cost__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 0)));
              MR_Word transform_hlds__pd_cost__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
              MR_Word transform_hlds__pd_cost__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
              MR_Word transform_hlds__pd_cost__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 4)));

              {
                transform_hlds__pd_cost__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__pd_cost__GoalInfo_6);
              }
              {
                transform_hlds__pd_cost__unify_cost_3_p_0(transform_hlds__pd_cost__NonLocals_43, transform_hlds__pd_cost__Unification_41, transform_hlds__pd_cost__Cost_4);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__pd_cost__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
              MR_Word transform_hlds__pd_cost__BuiltinState_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
              MR_Word transform_hlds__pd_cost__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 0)));
              MR_Integer transform_hlds__pd_cost__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
              MR_Word transform_hlds__pd_cost__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 4)));
              MR_Word transform_hlds__pd_cost__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 5)));

              switch (transform_hlds__pd_cost__BuiltinState_26) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *transform_hlds__pd_cost__Cost_4 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer transform_hlds__pd_cost__Arity_29;
                    MR_Integer transform_hlds__pd_cost__InputArgs_30;
                    MR_Integer transform_hlds__pd_cost__Var_68;
                    MR_Integer transform_hlds__pd_cost__Var_69;
                    MR_Integer transform_hlds__pd_cost__Var_70;
                    MR_Integer transform_hlds__pd_cost__Var_71;
                    MR_Integer transform_hlds__pd_cost__Var_72;

                    {
                      mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_25, &transform_hlds__pd_cost__Arity_29);
                    }
                    {
                      transform_hlds__pd_cost__InputArgs_30 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_29, (MR_Integer) 2);
                    }
                    {
                      transform_hlds__pd_cost__Var_69 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                    }
                    {
                      transform_hlds__pd_cost__Var_70 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                    }
                    transform_hlds__pd_cost__Var_68 = (transform_hlds__pd_cost__Var_69 + transform_hlds__pd_cost__Var_70);
                    {
                      transform_hlds__pd_cost__Var_72 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                    }
                    transform_hlds__pd_cost__Var_71 = (transform_hlds__pd_cost__Var_72 * transform_hlds__pd_cost__InputArgs_30);
                    *transform_hlds__pd_cost__Cost_4 = (transform_hlds__pd_cost__Var_68 + transform_hlds__pd_cost__Var_71);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer transform_hlds__pd_cost__Var_60;
                  MR_Integer transform_hlds__pd_cost__Var_61;
                  MR_Integer transform_hlds__pd_cost__Var_63;
                  MR_Integer transform_hlds__pd_cost__Var_64;
                  MR_Integer transform_hlds__pd_cost__Var_65;
                  MR_Integer transform_hlds__pd_cost__Cost0_80;
                  MR_Word transform_hlds__pd_cost__Args_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
                  MR_Integer transform_hlds__pd_cost__Arity_82;
                  MR_Word transform_hlds__pd_cost__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_cost__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_cost__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 4)));
                  MR_Word transform_hlds__pd_cost__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 5)));

                  {
                    mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_81, &transform_hlds__pd_cost__Arity_82);
                  }
                  {
                    transform_hlds__pd_cost__Var_61 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  }
                  transform_hlds__pd_cost__Var_60 = (transform_hlds__pd_cost__Var_61 * transform_hlds__pd_cost__Arity_82);
                  {
                    transform_hlds__pd_cost__Cost0_80 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Var_60, (MR_Integer) 2);
                  }
                  {
                    transform_hlds__pd_cost__Var_64 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  }
                  transform_hlds__pd_cost__Var_63 = (transform_hlds__pd_cost__Cost0_80 + transform_hlds__pd_cost__Var_64);
                  {
                    transform_hlds__pd_cost__Var_65 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                  }
                  *transform_hlds__pd_cost__Cost_4 = (transform_hlds__pd_cost__Var_63 + transform_hlds__pd_cost__Var_65);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__pd_cost__Attributes_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
                  MR_Integer transform_hlds__pd_cost__Var_56;
                  MR_Integer transform_hlds__pd_cost__Var_57;
                  MR_Integer transform_hlds__pd_cost__Var_58;
                  MR_Integer transform_hlds__pd_cost__Var_59;
                  MR_Integer transform_hlds__pd_cost__Cost1_83;
                  MR_Word transform_hlds__pd_cost__Args_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 4)));
                  MR_Integer transform_hlds__pd_cost__Arity_85;
                  MR_Integer transform_hlds__pd_cost__InputArgs_86;
                  MR_Word transform_hlds__pd_cost__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
                  MR_Integer transform_hlds__pd_cost__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_cost__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 5)));
                  MR_Word transform_hlds__pd_cost__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 6)));
                  MR_Word transform_hlds__pd_cost__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 7)));
                  MR_Word transform_hlds__pd_cost__Var_54;

                  {
                    transform_hlds__pd_cost__Var_54 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(transform_hlds__pd_cost__Attributes_44);
                  }
                  transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__Var_54 == (MR_Integer) 1);
                  if (transform_hlds__pd_cost__succeeded)
                    transform_hlds__pd_cost__Cost1_83 = (MR_Integer) 0;
                  else
                    {
                      transform_hlds__pd_cost__Cost1_83 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                    }
                  {
                    mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, transform_hlds__pd_cost__Args_84, &transform_hlds__pd_cost__Arity_85);
                  }
                  {
                    transform_hlds__pd_cost__InputArgs_86 = mercury__int__f_47_47_2_f_0(transform_hlds__pd_cost__Arity_85, (MR_Integer) 2);
                  }
                  {
                    transform_hlds__pd_cost__Var_57 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                  }
                  transform_hlds__pd_cost__Var_56 = (transform_hlds__pd_cost__Cost1_83 + transform_hlds__pd_cost__Var_57);
                  {
                    transform_hlds__pd_cost__Var_59 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  }
                  transform_hlds__pd_cost__Var_58 = (transform_hlds__pd_cost__Var_59 * transform_hlds__pd_cost__InputArgs_86);
                  *transform_hlds__pd_cost__Cost_4 = (transform_hlds__pd_cost__Var_56 + transform_hlds__pd_cost__Var_58);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word transform_hlds__pd_cost__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_cost__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));

                  {
                    transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_11, (MR_Integer) 0, transform_hlds__pd_cost__Cost_4);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer transform_hlds__pd_cost__Cost0_12;
                  MR_Integer transform_hlds__pd_cost__Var_76;
                  MR_Word transform_hlds__pd_cost__Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));

                  {
                    transform_hlds__pd_cost__goal_costs_3_p_0(transform_hlds__pd_cost__Goals_78, (MR_Integer) 0, &transform_hlds__pd_cost__Cost0_12);
                  }
                  {
                    transform_hlds__pd_cost__Var_76 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  }
                  *transform_hlds__pd_cost__Cost_4 = (transform_hlds__pd_cost__Cost0_12 + transform_hlds__pd_cost__Var_76);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word transform_hlds__pd_cost__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
                  MR_Integer transform_hlds__pd_cost__Var_74;
                  MR_Word transform_hlds__pd_cost__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_cost__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));

                  {
                    transform_hlds__pd_cost__Var_74 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                  }
                  {
                    transform_hlds__pd_cost__cases_cost_3_p_0(transform_hlds__pd_cost__Cases_15, transform_hlds__pd_cost__Var_74, transform_hlds__pd_cost__Cost_4);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__pd_cost__Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));
                  MR_Word transform_hlds__pd_cost__Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_cost__Var_66;
                  MR_Word transform_hlds__pd_cost__Var_33;

                  transform_hlds__pd_cost__succeeded = ((((MR_tag((MR_Word) transform_hlds__pd_cost__Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (transform_hlds__pd_cost__succeeded)
                    {
                      transform_hlds__pd_cost__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_32, (MR_Integer) 1)));
                      transform_hlds__pd_cost__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Reason_32, (MR_Integer) 2)));
                      transform_hlds__pd_cost__succeeded = (transform_hlds__pd_cost__Var_66 == (MR_Integer) 1);
                    }
                  if (transform_hlds__pd_cost__succeeded)
                    {
                      *transform_hlds__pd_cost__Cost_4 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__pd_cost__next_value_of_Goal_3 = transform_hlds__pd_cost__Goal_79;

                        transform_hlds__pd_cost__Goal_3 = transform_hlds__pd_cost__next_value_of_Goal_3;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word transform_hlds__pd_cost__Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 2)));
                  MR_Word transform_hlds__pd_cost__Then_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 3)));
                  MR_Word transform_hlds__pd_cost__Else_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 4)));
                  MR_Integer transform_hlds__pd_cost__Cost1_20;
                  MR_Integer transform_hlds__pd_cost__Cost2_21;
                  MR_Integer transform_hlds__pd_cost__Cost3_22;
                  MR_Integer transform_hlds__pd_cost__Var_73;
                  MR_Word transform_hlds__pd_cost__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__GoalExpr_5, (MR_Integer) 1)));

                  {
                    transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Cond_17, &transform_hlds__pd_cost__Cost1_20);
                  }
                  {
                    transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Then_18, &transform_hlds__pd_cost__Cost2_21);
                  }
                  {
                    transform_hlds__pd_cost__goal_cost_2_p_0(transform_hlds__pd_cost__Else_19, &transform_hlds__pd_cost__Cost3_22);
                  }
                  transform_hlds__pd_cost__Var_73 = (transform_hlds__pd_cost__Cost1_20 + transform_hlds__pd_cost__Cost2_21);
                  *transform_hlds__pd_cost__Cost_4 = (transform_hlds__pd_cost__Var_73 + transform_hlds__pd_cost__Cost3_22);
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.pd_cost", (MR_String) "predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", (MR_String) "shorthand");
                    return;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
  MR_Box transform_hlds__pd_cost__closure_arg,
  MR_Box transform_hlds__pd_cost__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;
    MR_Box transform_hlds__pd_cost__closure = transform_hlds__pd_cost__closure_arg;

    {
      transform_hlds__pd_cost__succeeded = transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__pd_cost__wrapper_arg_1));
    }
    return transform_hlds__pd_cost__succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
  MR_Word transform_hlds__pd_cost__NonLocals_4,
  MR_Word transform_hlds__pd_cost__Unification_5,
  MR_Integer * transform_hlds__pd_cost__Cost_6)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__pd_cost__Unification_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__pd_cost__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)));
          MR_Word transform_hlds__pd_cost__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 2)));
          MR_Word transform_hlds__pd_cost__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 1)));
          MR_Word transform_hlds__pd_cost__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 3)));
          MR_Word transform_hlds__pd_cost__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 4)));
          MR_Word transform_hlds__pd_cost__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 5)));
          MR_Word transform_hlds__pd_cost__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Unification_5, (MR_Integer) 6)));

          {
            transform_hlds__pd_cost__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__pd_cost__NonLocals_4, transform_hlds__pd_cost__Var_14);
          }
          if (transform_hlds__pd_cost__succeeded)
            {
              MR_Integer transform_hlds__pd_cost__Arity_21;
              MR_Integer transform_hlds__pd_cost__Var_36;

              {
                mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], transform_hlds__pd_cost__Args_16, &transform_hlds__pd_cost__Arity_21);
              }
              transform_hlds__pd_cost__Var_36 = (transform_hlds__pd_cost__Arity_21 * (MR_Integer) 2);
              *transform_hlds__pd_cost__Cost_6 = ((MR_Integer) 3 + transform_hlds__pd_cost__Var_36);
            }
          else
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__pd_cost__TypeInfo_43_43;
          MR_Word transform_hlds__pd_cost__CanFail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 4)));
          MR_Integer transform_hlds__pd_cost__Cost0_27;
          MR_Word transform_hlds__pd_cost__NonLocalArgs_28;
          MR_Integer transform_hlds__pd_cost__NumAssigns_29;
          MR_Word transform_hlds__pd_cost__Var_30;
          MR_Integer transform_hlds__pd_cost__Var_31;
          MR_Integer transform_hlds__pd_cost__Var_33;
          MR_Word transform_hlds__pd_cost__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 2)));
          MR_Word transform_hlds__pd_cost__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)));
          MR_Word transform_hlds__pd_cost__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 1)));
          MR_Word transform_hlds__pd_cost__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 3)));
          MR_Word transform_hlds__pd_cost__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__pd_cost__Unification_5, (MR_Integer) 5)));

          switch (transform_hlds__pd_cost__CanFail_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              transform_hlds__pd_cost__Cost0_27 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              transform_hlds__pd_cost__Cost0_27 = (MR_Integer) 0;
              break;
          }
          {
            transform_hlds__pd_cost__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_30, 0) = ((MR_Box) (&transform_hlds__pd_cost_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_30, 1) = ((MR_Box) (transform_hlds__pd_cost__unify_cost_3_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__pd_cost__Var_30, 3) = ((MR_Box) (transform_hlds__pd_cost__NonLocals_4));
          }
          transform_hlds__pd_cost__TypeInfo_43_43 = (MR_Word) &transform_hlds__pd_cost_scalar_common_1[0];
          {
            mercury__list__filter_3_p_0(transform_hlds__pd_cost__TypeInfo_43_43, transform_hlds__pd_cost__Var_30, transform_hlds__pd_cost__Args_38, &transform_hlds__pd_cost__NonLocalArgs_28);
          }
          {
            mercury__list__length_2_p_0(transform_hlds__pd_cost__TypeInfo_43_43, transform_hlds__pd_cost__NonLocalArgs_28, &transform_hlds__pd_cost__NumAssigns_29);
          }
          transform_hlds__pd_cost__Var_31 = (transform_hlds__pd_cost__Cost0_27 + (MR_Integer) 3);
          transform_hlds__pd_cost__Var_33 = (transform_hlds__pd_cost__NumAssigns_29 * (MR_Integer) 2);
          *transform_hlds__pd_cost__Cost_6 = (transform_hlds__pd_cost__Var_31 + transform_hlds__pd_cost__Var_33);
        }
        break;
      case (MR_Integer) 2:
        *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__pd_cost__Unification_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            *transform_hlds__pd_cost__Cost_6 = (MR_Integer) 5;
            break;
        }
        break;
    }
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 8;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_call_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_builtin_call_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_stack_flush_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 5;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_simple_test_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_reg_assign_0_f_0(void)
{
  {
    MR_bool transform_hlds__pd_cost__succeeded;

    return (MR_Integer) 1;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_cost__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.pd_cost. */
