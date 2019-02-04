/*
** Automatically generated from `pd_cost.m'
** by the Mercury compiler,
** version rotd-2017-09-23
** configured for x86_64-pc-linux-gnu.
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


// :- module transform_hlds.pd_cost.
// :- implementation.

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
  MR_Word NonLocals_4,
  MR_Word HeadVar__2_41);

static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * Cost_3);

static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * Cost_3);

static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
  MR_Word NonLocals_4,
  MR_Word Unification_5,
  MR_Integer * Cost_6);


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
  MR_Word NonLocals_4,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_4, HeadVar__2_41);
    return succeeded;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0(void)
{
  {
    return (MR_Integer) 25;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_fold_0_f_0(void)
{
  {
    return (MR_Integer) 15;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0(void)
{
  {
    return (MR_Integer) 5;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_incr_0_f_0(void)
{
  {
    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_assign_0_f_0(void)
{
  {
    return (MR_Integer) 2;
  }
}

void MR_CALL 
transform_hlds__pd_cost__goal_cost_2_p_0(
  MR_Word Goal_3,
  MR_Integer * Cost_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
    MR_Word GoalInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_31 = (MR_Word) MR_body(((MR_Word) GoalExpr_5), (MR_Integer) 0);
          MR_Word next_value_of_Goal_3 = Goal_31;

          // direct tailcall eliminated
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 3)));
          MR_Word NonLocals_43;
          MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 0)));
          MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 1)));
          MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 2)));
          MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 4)));

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
          transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_43, Unification_41, Cost_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 2)));
          MR_Word BuiltinState_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 3)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 0)));
          MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 1)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 4)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 5)));

          switch (BuiltinState_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Cost_4 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Arity_29;
                MR_Integer InputArgs_30;
                MR_Integer Var_68;
                MR_Integer Var_69;
                MR_Integer Var_70;
                MR_Integer Var_71;
                MR_Integer Var_72;

                mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], Args_25, &Arity_29);
                InputArgs_30 = mercury__int__f_47_47_2_f_0(Arity_29, (MR_Integer) 2);
                Var_69 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_70 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_68 = (Var_69 + Var_70);
                Var_72 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_71 = (Var_72 * InputArgs_30);
                *Cost_4 = (Var_68 + Var_71);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_60;
              MR_Integer Var_61;
              MR_Integer Var_63;
              MR_Integer Var_64;
              MR_Integer Var_65;
              MR_Integer Cost0_80;
              MR_Word Args_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Integer Arity_82;
              MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));
              MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3)));
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4)));
              MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 5)));

              mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], Args_81, &Arity_82);
              Var_61 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_60 = (Var_61 * Arity_82);
              Cost0_80 = mercury__int__f_47_47_2_f_0(Var_60, (MR_Integer) 2);
              Var_64 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              Var_63 = (Cost0_80 + Var_64);
              Var_65 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
              *Cost_4 = (Var_63 + Var_65);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));
              MR_Integer Var_56;
              MR_Integer Var_57;
              MR_Integer Var_58;
              MR_Integer Var_59;
              MR_Integer Cost1_83;
              MR_Word Args_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4)));
              MR_Integer Arity_85;
              MR_Integer InputArgs_86;
              MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Integer Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3)));
              MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 5)));
              MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 6)));
              MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 7)));
              MR_Word Var_54;

              Var_54 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_44);
              succeeded = (Var_54 == (MR_Integer) 1);
              if (succeeded)
                Cost1_83 = (MR_Integer) 0;
              else
                Cost1_83 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, Args_84, &Arity_85);
              InputArgs_86 = mercury__int__f_47_47_2_f_0(Arity_85, (MR_Integer) 2);
              Var_57 = transform_hlds__pd_cost__cost_of_call_0_f_0();
              Var_56 = (Cost1_83 + Var_57);
              Var_59 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_58 = (Var_59 * InputArgs_86);
              *Cost_4 = (Var_56 + Var_58);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_11, (MR_Integer) 0, Cost_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Cost0_12;
              MR_Integer Var_76;
              MR_Word Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_78, (MR_Integer) 0, &Cost0_12);
              Var_76 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              *Cost_4 = (Cost0_12 + Var_76);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3)));
              MR_Integer Var_74;
              MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));
              MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));

              Var_74 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
              transform_hlds__pd_cost__cases_cost_3_p_0(Cases_15, Var_74, Cost_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));
              MR_Word Goal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Word Var_66;
              MR_Word Var_33;

              succeeded = ((((MR_tag((MR_Word) Reason_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 1)));
                Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 2)));
                succeeded = (Var_66 == (MR_Integer) 1);
              }
              if (succeeded)
                *Cost_4 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              else
              {
                MR_Word next_value_of_Goal_3 = Goal_79;

                // direct tailcall eliminated
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2)));
              MR_Word Then_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3)));
              MR_Word Else_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4)));
              MR_Integer Cost1_20;
              MR_Integer Cost2_21;
              MR_Integer Cost3_22;
              MR_Integer Var_73;
              MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1)));

              transform_hlds__pd_cost__goal_cost_2_p_0(Cond_17, &Cost1_20);
              transform_hlds__pd_cost__goal_cost_2_p_0(Then_18, &Cost2_21);
              transform_hlds__pd_cost__goal_cost_2_p_0(Else_19, &Cost3_22);
              Var_73 = (Cost1_20 + Cost2_21);
              *Cost_4 = (Var_73 + Cost3_22);
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
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_cost__cases_cost_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * Cost_3)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Cost_3 = HeadVar__2_2;
    else
    {
      MR_Word Goal_7;
      MR_Word Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer Cost1_11;
      MR_Integer Cost2_12;
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
      transform_hlds__pd_cost__goal_cost_2_p_0(Goal_7, &Cost1_11);
      Cost2_12 = (HeadVar__2_2 + Cost1_11);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_HeadVar__2_2 = Cost2_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__pd_cost__goal_costs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer * Cost_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Cost_3 = HeadVar__2_2;
    else
    {
      MR_Word Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer Cost1_9;
      MR_Integer Cost2_10;
      MR_Word GoalExpr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0)));
      MR_Word GoalInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) GoalExpr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_39 = (MR_Word) MR_body(((MR_Word) GoalExpr_13), (MR_Integer) 0);

            transform_hlds__pd_cost__goal_cost_2_p_0(Goal_39, &Cost1_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 3)));
            MR_Word NonLocals_51;
            MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 0)));
            MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 1)));
            MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 2)));
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 4)));

            NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_14);
            transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_51, Unification_49, &Cost1_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 2)));
            MR_Word BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 3)));
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 0)));
            MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 1)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 4)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 5)));

            switch (BuiltinState_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost1_9 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Arity_37;
                  MR_Integer InputArgs_38;
                  MR_Integer Var_76;
                  MR_Integer Var_77;
                  MR_Integer Var_78;
                  MR_Integer Var_79;
                  MR_Integer Var_80;

                  mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], Args_33, &Arity_37);
                  InputArgs_38 = mercury__int__f_47_47_2_f_0(Arity_37, (MR_Integer) 2);
                  Var_77 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  Var_78 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                  Var_76 = (Var_77 + Var_78);
                  Var_80 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  Var_79 = (Var_80 * InputArgs_38);
                  Cost1_9 = (Var_76 + Var_79);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_68;
                MR_Integer Var_69;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Var_73;
                MR_Integer Cost0_88;
                MR_Word Args_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));
                MR_Integer Arity_90;
                MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));
                MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3)));
                MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 4)));
                MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 5)));

                mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], Args_89, &Arity_90);
                Var_69 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_68 = (Var_69 * Arity_90);
                Cost0_88 = mercury__int__f_47_47_2_f_0(Var_68, (MR_Integer) 2);
                Var_72 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_71 = (Cost0_88 + Var_72);
                Var_73 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                Cost1_9 = (Var_71 + Var_73);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));
                MR_Integer Var_64;
                MR_Integer Var_65;
                MR_Integer Var_66;
                MR_Integer Var_67;
                MR_Integer Cost1_91;
                MR_Word Args_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 4)));
                MR_Integer Arity_93;
                MR_Integer InputArgs_94;
                MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));
                MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3)));
                MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 5)));
                MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 6)));
                MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 7)));
                MR_Word Var_62;

                Var_62 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_52);
                succeeded = (Var_62 == (MR_Integer) 1);
                if (succeeded)
                  Cost1_91 = (MR_Integer) 0;
                else
                  Cost1_91 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                mercury__list__length_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, Args_92, &Arity_93);
                InputArgs_94 = mercury__int__f_47_47_2_f_0(Arity_93, (MR_Integer) 2);
                Var_65 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_64 = (Cost1_91 + Var_65);
                Var_67 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_66 = (Var_67 * InputArgs_94);
                Cost1_9 = (Var_64 + Var_66);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_19, (MR_Integer) 0, &Cost1_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Cost0_20;
                MR_Integer Var_84;
                MR_Word Goals_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_86, (MR_Integer) 0, &Cost0_20);
                Var_84 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Cost1_9 = (Cost0_20 + Var_84);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3)));
                MR_Integer Var_82;
                MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));
                MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));

                Var_82 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                transform_hlds__pd_cost__cases_cost_3_p_0(Cases_23, Var_82, &Cost1_9);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));
                MR_Word Goal_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));
                MR_Word Var_74;
                MR_Word Var_41;

                succeeded = ((((MR_tag((MR_Word) Reason_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 1)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 2)));
                  succeeded = (Var_74 == (MR_Integer) 1);
                }
                if (succeeded)
                  Cost1_9 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                else
                  transform_hlds__pd_cost__goal_cost_2_p_0(Goal_87, &Cost1_9);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2)));
                MR_Word Then_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3)));
                MR_Word Else_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 4)));
                MR_Integer Cost1_28;
                MR_Integer Cost2_29;
                MR_Integer Cost3_30;
                MR_Integer Var_81;
                MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1)));

                transform_hlds__pd_cost__goal_cost_2_p_0(Cond_25, &Cost1_28);
                transform_hlds__pd_cost__goal_cost_2_p_0(Then_26, &Cost2_29);
                transform_hlds__pd_cost__goal_cost_2_p_0(Else_27, &Cost3_30);
                Var_81 = (Cost1_28 + Cost2_29);
                Cost1_9 = (Var_81 + Cost3_30);
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
      Cost2_10 = (HeadVar__2_2 + Cost1_9);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals_6;
      next_value_of_HeadVar__2_2 = Cost2_10;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
  MR_Word NonLocals_4,
  MR_Word Unification_5,
  MR_Integer * Cost_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 0)));
          MR_Word Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 2)));
          MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 1)));
          MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 3)));
          MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 4)));
          MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 5)));
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 6)));

          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_4, Var_14);
          if (succeeded)
          {
            MR_Integer Arity_21;
            MR_Integer Var_36;

            mercury__list__length_2_p_0((MR_Word) &transform_hlds__pd_cost_scalar_common_1[0], Args_16, &Arity_21);
            Var_36 = (Arity_21 * (MR_Integer) 2);
            *Cost_6 = ((MR_Integer) 3 + Var_36);
          }
          else
            *Cost_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_43_43;
          MR_Word CanFail_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 4)));
          MR_Integer Cost0_27;
          MR_Word NonLocalArgs_28;
          MR_Integer NumAssigns_29;
          MR_Word Var_30;
          MR_Integer Var_31;
          MR_Integer Var_33;
          MR_Word Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 2)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 0)));
          MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 1)));
          MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 3)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 5)));

          switch (CanFail_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Cost0_27 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              Cost0_27 = (MR_Integer) 0;
              break;
          }
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__pd_cost_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__pd_cost__unify_cost_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (NonLocals_4));
          }
          TypeInfo_43_43 = (MR_Word) &transform_hlds__pd_cost_scalar_common_1[0];
          mercury__list__filter_3_p_0(TypeInfo_43_43, Var_30, Args_38, &NonLocalArgs_28);
          mercury__list__length_2_p_0(TypeInfo_43_43, NonLocalArgs_28, &NumAssigns_29);
          Var_31 = (Cost0_27 + (MR_Integer) 3);
          Var_33 = (NumAssigns_29 * (MR_Integer) 2);
          *Cost_6 = (Var_31 + Var_33);
        }
        break;
      case (MR_Integer) 2:
        *Cost_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Cost_6 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            *Cost_6 = (MR_Integer) 5;
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
    return (MR_Integer) 8;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_call_0_f_0(void)
{
  {
    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_builtin_call_0_f_0(void)
{
  {
    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_stack_flush_0_f_0(void)
{
  {
    return (MR_Integer) 5;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_simple_test_0_f_0(void)
{
  {
    return (MR_Integer) 3;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_reg_assign_0_f_0(void)
{
  {
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

// :- end_module transform_hlds.pd_cost.
