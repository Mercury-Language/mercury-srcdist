/*
** Automatically generated from `pd_cost.m'
** by the Mercury compiler,
** version rotd-2020-05-15
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


// :- module transform_hlds.pd_cost.
// :- implementation.

/*
INIT mercury__transform_hlds__pd_cost__init
ENDINIT
*/

#include "transform_hlds.pd_cost.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "libs.globals.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




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
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(
  MR_Word NonLocals_4,
  MR_Word HeadVar__2_41)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, HeadVar__2_41);
    return succeeded;
  }
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_recursive_fold_0_f_0(void)
{
  return (MR_Integer) 25;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_fold_0_f_0(void)
{
  return (MR_Integer) 15;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_eliminate_switch_0_f_0(void)
{
  return (MR_Integer) 5;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_incr_0_f_0(void)
{
  return (MR_Integer) 3;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_heap_assign_0_f_0(void)
{
  return (MR_Integer) 2;
}

void MR_CALL 
transform_hlds__pd_cost__goal_cost_2_p_0(
  MR_Word Goal_3,
  MR_Integer * Cost_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_31 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = Goal_31;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_5, (MR_Integer) 3))));
          MR_Word NonLocals_43;

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
          transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_43, Unification_41, Cost_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 2))));
          MR_Word BuiltinState_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_5, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (BuiltinState_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Cost_4 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Arity_29;
                MR_Integer InputArgs_30;
                MR_Integer Var_67;
                MR_Integer Var_68;
                MR_Integer Var_69;
                MR_Integer Var_70;
                MR_Integer Var_71;

                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_25, &Arity_29);
                InputArgs_30 = mercury__int__f_47_47_2_f_0(Arity_29, (MR_Integer) 2);
                Var_68 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_69 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) Var_69);
                Var_71 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_70 = (MR_Integer) ((MR_Unsigned) Var_71 * (MR_Unsigned) InputArgs_30);
                *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_67 + (MR_Unsigned) Var_70);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_59;
              MR_Integer Var_60;
              MR_Integer Var_62;
              MR_Integer Var_63;
              MR_Integer Var_64;
              MR_Integer Cost0_79;
              MR_Word Args_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Integer Arity_81;

              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_80, &Arity_81);
              Var_60 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_59 = (MR_Integer) ((MR_Unsigned) Var_60 * (MR_Unsigned) Arity_81);
              Cost0_79 = mercury__int__f_47_47_2_f_0(Var_59, (MR_Integer) 2);
              Var_63 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              Var_62 = (MR_Integer) ((MR_Unsigned) Cost0_79 + (MR_Unsigned) Var_63);
              Var_64 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_62 + (MR_Unsigned) Var_64);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Integer Var_55;
              MR_Integer Var_56;
              MR_Integer Var_57;
              MR_Integer Var_58;
              MR_Integer Cost1_82;
              MR_Word Args_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Integer Arity_84;
              MR_Integer InputArgs_85;
              MR_Word Var_53;

              Var_53 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_44);
              succeeded = (Var_53 == (MR_Integer) 1);
              if (succeeded)
                Cost1_82 = (MR_Integer) 0;
              else
                Cost1_82 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_83, &Arity_84);
              InputArgs_85 = mercury__int__f_47_47_2_f_0(Arity_84, (MR_Integer) 2);
              Var_56 = transform_hlds__pd_cost__cost_of_call_0_f_0();
              Var_55 = (MR_Integer) ((MR_Unsigned) Cost1_82 + (MR_Unsigned) Var_56);
              Var_58 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 * (MR_Unsigned) InputArgs_85);
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) Var_57);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_11, (MR_Integer) 0, Cost_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Cost0_12;
              MR_Integer Var_75;
              MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_77, (MR_Integer) 0, &Cost0_12);
              Var_75 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Cost0_12 + (MR_Unsigned) Var_75);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Integer Var_73;

              Var_73 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
              transform_hlds__pd_cost__cases_cost_3_p_0(Cases_15, Var_73, Cost_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 1))));
              MR_Word Goal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Var_65;

              succeeded = ((((MR_tag((MR_Word) Reason_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_32, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_65 == (MR_Integer) 1);
              }
              if (succeeded)
                *Cost_4 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              else
              {
                MR_Word next_value_of_Goal_3 = Goal_78;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 2))));
              MR_Word Then_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 3))));
              MR_Word Else_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_5, (MR_Integer) 4))));
              MR_Integer Cost1_20;
              MR_Integer Cost2_21;
              MR_Integer Cost3_22;
              MR_Integer Var_72;

              transform_hlds__pd_cost__goal_cost_2_p_0(Cond_17, &Cost1_20);
              transform_hlds__pd_cost__goal_cost_2_p_0(Then_18, &Cost2_21);
              transform_hlds__pd_cost__goal_cost_2_p_0(Else_19, &Cost3_22);
              Var_72 = (MR_Integer) ((MR_Unsigned) Cost1_20 + (MR_Unsigned) Cost2_21);
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) Cost3_22);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", (MR_String) "shorthand");
              return;
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Cost_3 = HeadVar__2_2;
    else
    {
      MR_Word Goal_7;
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Cost1_11;
      MR_Integer Cost2_12;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      Goal_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2))));
      transform_hlds__pd_cost__goal_cost_2_p_0(Goal_7, &Cost1_11);
      Cost2_12 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Cost1_11);
      // direct tailcall eliminated
      ;
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Cost_3 = HeadVar__2_2;
    else
    {
      MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Cost1_9;
      MR_Integer Cost2_10;
      MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word GoalInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) GoalExpr_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_39 = (MR_Word) ((MR_Word) (GoalExpr_13));

            transform_hlds__pd_cost__goal_cost_2_p_0(Goal_39, &Cost1_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_13, (MR_Integer) 3))));
            MR_Word NonLocals_51;

            NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_14);
            transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_51, Unification_49, &Cost1_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 2))));
            MR_Word BuiltinState_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_13, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (BuiltinState_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost1_9 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Arity_37;
                  MR_Integer InputArgs_38;
                  MR_Integer Var_75;
                  MR_Integer Var_76;
                  MR_Integer Var_77;
                  MR_Integer Var_78;
                  MR_Integer Var_79;

                  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_33, &Arity_37);
                  InputArgs_38 = mercury__int__f_47_47_2_f_0(Arity_37, (MR_Integer) 2);
                  Var_76 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  Var_77 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                  Var_75 = (MR_Integer) ((MR_Unsigned) Var_76 + (MR_Unsigned) Var_77);
                  Var_79 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  Var_78 = (MR_Integer) ((MR_Unsigned) Var_79 * (MR_Unsigned) InputArgs_38);
                  Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) Var_78);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_67;
                MR_Integer Var_68;
                MR_Integer Var_70;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Cost0_87;
                MR_Word Args_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2))));
                MR_Integer Arity_89;

                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_88, &Arity_89);
                Var_68 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_67 = (MR_Integer) ((MR_Unsigned) Var_68 * (MR_Unsigned) Arity_89);
                Cost0_87 = mercury__int__f_47_47_2_f_0(Var_67, (MR_Integer) 2);
                Var_71 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_70 = (MR_Integer) ((MR_Unsigned) Cost0_87 + (MR_Unsigned) Var_71);
                Var_72 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_70 + (MR_Unsigned) Var_72);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1))));
                MR_Integer Var_63;
                MR_Integer Var_64;
                MR_Integer Var_65;
                MR_Integer Var_66;
                MR_Integer Cost1_90;
                MR_Word Args_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 4))));
                MR_Integer Arity_92;
                MR_Integer InputArgs_93;
                MR_Word Var_61;

                Var_61 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_52);
                succeeded = (Var_61 == (MR_Integer) 1);
                if (succeeded)
                  Cost1_90 = (MR_Integer) 0;
                else
                  Cost1_90 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_91, &Arity_92);
                InputArgs_93 = mercury__int__f_47_47_2_f_0(Arity_92, (MR_Integer) 2);
                Var_64 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_63 = (MR_Integer) ((MR_Unsigned) Cost1_90 + (MR_Unsigned) Var_64);
                Var_66 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_65 = (MR_Integer) ((MR_Unsigned) Var_66 * (MR_Unsigned) InputArgs_93);
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) Var_65);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_19, (MR_Integer) 0, &Cost1_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Cost0_20;
                MR_Integer Var_83;
                MR_Word Goals_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_85, (MR_Integer) 0, &Cost0_20);
                Var_83 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Cost0_20 + (MR_Unsigned) Var_83);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3))));
                MR_Integer Var_81;

                Var_81 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                transform_hlds__pd_cost__cases_cost_3_p_0(Cases_23, Var_81, &Cost1_9);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 1))));
                MR_Word Goal_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2))));
                MR_Word Var_73;

                succeeded = ((((MR_tag((MR_Word) Reason_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_40, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_73 == (MR_Integer) 1);
                }
                if (succeeded)
                  Cost1_9 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                else
                  transform_hlds__pd_cost__goal_cost_2_p_0(Goal_86, &Cost1_9);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 2))));
                MR_Word Then_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 3))));
                MR_Word Else_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_13, (MR_Integer) 4))));
                MR_Integer Cost1_28;
                MR_Integer Cost2_29;
                MR_Integer Cost3_30;
                MR_Integer Var_80;

                transform_hlds__pd_cost__goal_cost_2_p_0(Cond_25, &Cost1_28);
                transform_hlds__pd_cost__goal_cost_2_p_0(Then_26, &Cost2_29);
                transform_hlds__pd_cost__goal_cost_2_p_0(Else_27, &Cost3_30);
                Var_80 = (MR_Integer) ((MR_Unsigned) Cost1_28 + (MR_Unsigned) Cost2_29);
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_80 + (MR_Unsigned) Cost3_30);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.pd_cost.goal_expr_cost\'/3", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      Cost2_10 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) Cost1_9);
      // direct tailcall eliminated
      ;
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

    succeeded = transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__158__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
          MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 0))));
          MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_5, (MR_Integer) 2))));

          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, Var_14);
          if (succeeded)
          {
            MR_Integer Arity_21;
            MR_Integer Var_36;

            mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_16, &Arity_21);
            Var_36 = (MR_Integer) ((MR_Unsigned) Arity_21 * (MR_Unsigned) 2);
            *Cost_6 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) Var_36);
          }
          else
            *Cost_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CanFail_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
          MR_Integer Cost0_27;
          MR_Word NonLocalArgs_28;
          MR_Integer NumAssigns_29;
          MR_Word Var_30;
          MR_Integer Var_31;
          MR_Integer Var_33;
          MR_Word Args_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_5, (MR_Integer) 2))));

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
            Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__pd_cost_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__pd_cost__unify_cost_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (NonLocals_4));
          }
          mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Var_30, Args_38, &NonLocalArgs_28);
          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), NonLocalArgs_28, &NumAssigns_29);
          Var_31 = (MR_Integer) ((MR_Unsigned) Cost0_27 + (MR_Unsigned) 3);
          Var_33 = (MR_Integer) ((MR_Unsigned) NumAssigns_29 * (MR_Unsigned) 2);
          *Cost_6 = (MR_Integer) ((MR_Unsigned) Var_31 + (MR_Unsigned) Var_33);
        }
        break;
      case (MR_Integer) 2:
        *Cost_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_5, (MR_Integer) 0))))) {
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
  return (MR_Integer) 8;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_call_0_f_0(void)
{
  return (MR_Integer) 3;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_builtin_call_0_f_0(void)
{
  return (MR_Integer) 3;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_stack_flush_0_f_0(void)
{
  return (MR_Integer) 5;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_simple_test_0_f_0(void)
{
  return (MR_Integer) 3;
}

MR_Integer MR_CALL 
transform_hlds__pd_cost__cost_of_reg_assign_0_f_0(void)
{
  return (MR_Integer) 1;
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
