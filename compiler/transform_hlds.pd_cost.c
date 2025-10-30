/*
** Automatically generated from `pd_cost.m'
** by the Mercury compiler,
** version rotd-2025-10-30
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.instmap.mih"
#include "libs.file_util.mih"
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
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__159__1_2_p_0(
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
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__pd_cost_scalar_common_2[1][5] = {
  /* row   0 */
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__pd_cost__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__pd_cost__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static MR_bool MR_CALL 
transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__159__1_2_p_0(
  MR_Word NonLocals_4,
  MR_Word HeadVar__2_41)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, HeadVar__2_41);
  return succeeded;
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
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
    MR_Word GoalInfo_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Goal_28 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = Goal_28;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_38 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, 3))));
          MR_Word NonLocals_40;

          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
          transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_40, Unification_38, Cost_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr_5, 2))));
          MR_Word BuiltinState_23 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_5, 3))) & (MR_Integer) 1);

          switch (BuiltinState_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Cost_4 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Arity_26;
                MR_Integer InputArgs_27;
                MR_Integer Var_54;
                MR_Integer Var_55;
                MR_Integer Var_56;
                MR_Integer Var_57;
                MR_Integer Var_58;

                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_22, &Arity_26);
                InputArgs_27 = mercury__int__f_47_47_2_f_0(Arity_26, (MR_Integer) 2);
                Var_55 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_56 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_54 = (MR_Integer) ((MR_Unsigned) Var_55 + (MR_Unsigned) Var_56);
                Var_58 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 * (MR_Unsigned) InputArgs_27);
                *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_54 + (MR_Unsigned) Var_57);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_60;
              MR_Integer Var_61;
              MR_Integer Var_63;
              MR_Integer Var_64;
              MR_Integer Var_65;
              MR_Integer Cost0_76;
              MR_Word Args_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Integer Arity_78;

              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_77, &Arity_78);
              Var_61 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 * (MR_Unsigned) Arity_78);
              Cost0_76 = mercury__int__f_47_47_2_f_0(Var_60, (MR_Integer) 2);
              Var_64 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              Var_63 = (MR_Integer) ((MR_Unsigned) Cost0_76 + (MR_Unsigned) Var_64);
              Var_65 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) Var_65);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));
              MR_Integer Var_68;
              MR_Integer Var_69;
              MR_Integer Var_70;
              MR_Integer Var_71;
              MR_Integer Cost1_79;
              MR_Word Args_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 4))));
              MR_Integer Arity_81;
              MR_Integer InputArgs_82;
              MR_Word Var_66;

              Var_66 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_41);
              succeeded = (Var_66 == (MR_Integer) 1);
              if (succeeded)
                Cost1_79 = (MR_Integer) 0;
              else
                Cost1_79 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_80, &Arity_81);
              InputArgs_82 = mercury__int__f_47_47_2_f_0(Arity_81, (MR_Integer) 2);
              Var_69 = transform_hlds__pd_cost__cost_of_call_0_f_0();
              Var_68 = (MR_Integer) ((MR_Unsigned) Cost1_79 + (MR_Unsigned) Var_69);
              Var_71 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              Var_70 = (MR_Integer) ((MR_Unsigned) Var_71 * (MR_Unsigned) InputArgs_82);
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_68 + (MR_Unsigned) Var_70);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_8, (MR_Integer) 0, Cost_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer Cost0_9;
              MR_Integer Var_50;
              MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              transform_hlds__pd_cost__goal_costs_3_p_0(Goals_74, (MR_Integer) 0, &Cost0_9);
              Var_50 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Cost0_9 + (MR_Unsigned) Var_50);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));
              MR_Integer Var_51;

              Var_51 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
              transform_hlds__pd_cost__cases_cost_3_p_0(Cases_12, Var_51, Cost_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));
              MR_Word Goal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word Var_59;

              succeeded = ((((MR_tag((MR_Word) Reason_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_29, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_59 = ((MR_Unsigned) ((MR_hl_field(3, Reason_29, 2))) & (MR_Integer) 3);
                succeeded = (Var_59 == (MR_Integer) 1);
              }
              if (succeeded)
                *Cost_4 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
              else
              {
                MR_Word next_value_of_Goal_3 = Goal_75;

                // direct tailcall eliminated
                ;
                Goal_3 = next_value_of_Goal_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word Then_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));
              MR_Word Else_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 4))));
              MR_Integer Cost1_17;
              MR_Integer Cost2_18;
              MR_Integer Cost3_19;
              MR_Integer Var_52;

              transform_hlds__pd_cost__goal_cost_2_p_0(Cond_14, &Cost1_17);
              transform_hlds__pd_cost__goal_cost_2_p_0(Then_15, &Cost2_18);
              transform_hlds__pd_cost__goal_cost_2_p_0(Else_16, &Cost3_19);
              Var_52 = (MR_Integer) ((MR_Unsigned) Cost1_17 + (MR_Unsigned) Cost2_18);
              *Cost_4 = (MR_Integer) ((MR_Unsigned) Var_52 + (MR_Unsigned) Cost3_19);
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
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Cost_3 = HeadVar__2_2;
    else
    {
      MR_Word Goal_7;
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Cost1_11;
      MR_Integer Cost2_12;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GoalExpr_14;
      MR_Word GoalInfo_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      Goal_7 = ((MR_Word) ((MR_hl_field(0, Var_13, 2))));
      GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
      GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));
      switch (MR_tag((MR_Word) GoalExpr_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_37 = (MR_Word) ((MR_Word) (GoalExpr_14));

            transform_hlds__pd_cost__goal_cost_2_p_0(Goal_37, &Cost1_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_47 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, 3))));
            MR_Word NonLocals_49;

            NonLocals_49 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_15);
            transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_49, Unification_47, &Cost1_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_31 = ((MR_Word) ((MR_hl_field(2, GoalExpr_14, 2))));
            MR_Word BuiltinState_32 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_14, 3))) & (MR_Integer) 1);

            switch (BuiltinState_32) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost1_11 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Arity_35;
                  MR_Integer InputArgs_36;
                  MR_Integer Var_63;
                  MR_Integer Var_64;
                  MR_Integer Var_65;
                  MR_Integer Var_66;
                  MR_Integer Var_67;

                  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_31, &Arity_35);
                  InputArgs_36 = mercury__int__f_47_47_2_f_0(Arity_35, (MR_Integer) 2);
                  Var_64 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  Var_65 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                  Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 + (MR_Unsigned) Var_65);
                  Var_67 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 * (MR_Unsigned) InputArgs_36);
                  Cost1_11 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) Var_66);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_69;
                MR_Integer Var_70;
                MR_Integer Var_72;
                MR_Integer Var_73;
                MR_Integer Var_74;
                MR_Integer Cost0_85;
                MR_Word Args_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
                MR_Integer Arity_87;

                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_86, &Arity_87);
                Var_70 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_69 = (MR_Integer) ((MR_Unsigned) Var_70 * (MR_Unsigned) Arity_87);
                Cost0_85 = mercury__int__f_47_47_2_f_0(Var_69, (MR_Integer) 2);
                Var_73 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_72 = (MR_Integer) ((MR_Unsigned) Cost0_85 + (MR_Unsigned) Var_73);
                Var_74 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                Cost1_11 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) Var_74);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
                MR_Integer Var_77;
                MR_Integer Var_78;
                MR_Integer Var_79;
                MR_Integer Var_80;
                MR_Integer Cost1_88;
                MR_Word Args_89 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 4))));
                MR_Integer Arity_90;
                MR_Integer InputArgs_91;
                MR_Word Var_75;

                Var_75 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_50);
                succeeded = (Var_75 == (MR_Integer) 1);
                if (succeeded)
                  Cost1_88 = (MR_Integer) 0;
                else
                  Cost1_88 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_89, &Arity_90);
                InputArgs_91 = mercury__int__f_47_47_2_f_0(Arity_90, (MR_Integer) 2);
                Var_78 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_77 = (MR_Integer) ((MR_Unsigned) Cost1_88 + (MR_Unsigned) Var_78);
                Var_80 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_79 = (MR_Integer) ((MR_Unsigned) Var_80 * (MR_Unsigned) InputArgs_91);
                Cost1_11 = (MR_Integer) ((MR_Unsigned) Var_77 + (MR_Unsigned) Var_79);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_17, (MR_Integer) 0, &Cost1_11);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Cost0_18;
                MR_Integer Var_59;
                MR_Word Goals_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_83, (MR_Integer) 0, &Cost0_18);
                Var_59 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Cost1_11 = (MR_Integer) ((MR_Unsigned) Cost0_18 + (MR_Unsigned) Var_59);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
                MR_Integer Var_60;

                Var_60 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                transform_hlds__pd_cost__cases_cost_3_p_0(Cases_21, Var_60, &Cost1_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
                MR_Word Goal_84 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
                MR_Word Var_68;

                succeeded = ((((MR_tag((MR_Word) Reason_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_38, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_68 = ((MR_Unsigned) ((MR_hl_field(3, Reason_38, 2))) & (MR_Integer) 3);
                  succeeded = (Var_68 == (MR_Integer) 1);
                }
                if (succeeded)
                  Cost1_11 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                else
                  transform_hlds__pd_cost__goal_cost_2_p_0(Goal_84, &Cost1_11);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
                MR_Word Then_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
                MR_Word Else_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 4))));
                MR_Integer Cost1_26;
                MR_Integer Cost2_27;
                MR_Integer Cost3_28;
                MR_Integer Var_61;

                transform_hlds__pd_cost__goal_cost_2_p_0(Cond_23, &Cost1_26);
                transform_hlds__pd_cost__goal_cost_2_p_0(Then_24, &Cost2_27);
                transform_hlds__pd_cost__goal_cost_2_p_0(Else_25, &Cost3_28);
                Var_61 = (MR_Integer) ((MR_Unsigned) Cost1_26 + (MR_Unsigned) Cost2_27);
                Cost1_11 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) Cost3_28);
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
      MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Cost1_9;
      MR_Integer Cost2_10;
      MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
      MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      switch (MR_tag((MR_Word) GoalExpr_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Goal_34 = (MR_Word) ((MR_Word) (GoalExpr_11));

            transform_hlds__pd_cost__goal_cost_2_p_0(Goal_34, &Cost1_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Unification_44 = ((MR_Word) ((MR_hl_field(1, GoalExpr_11, 3))));
            MR_Word NonLocals_46;

            NonLocals_46 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_12);
            transform_hlds__pd_cost__unify_cost_3_p_0(NonLocals_46, Unification_44, &Cost1_9);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_11, 2))));
            MR_Word BuiltinState_29 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_11, 3))) & (MR_Integer) 1);

            switch (BuiltinState_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cost1_9 = transform_hlds__pd_cost__cost_of_builtin_call_0_f_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Arity_32;
                  MR_Integer InputArgs_33;
                  MR_Integer Var_60;
                  MR_Integer Var_61;
                  MR_Integer Var_62;
                  MR_Integer Var_63;
                  MR_Integer Var_64;

                  mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_28, &Arity_32);
                  InputArgs_33 = mercury__int__f_47_47_2_f_0(Arity_32, (MR_Integer) 2);
                  Var_61 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                  Var_62 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                  Var_60 = (MR_Integer) ((MR_Unsigned) Var_61 + (MR_Unsigned) Var_62);
                  Var_64 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                  Var_63 = (MR_Integer) ((MR_Unsigned) Var_64 * (MR_Unsigned) InputArgs_33);
                  Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_60 + (MR_Unsigned) Var_63);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_66;
                MR_Integer Var_67;
                MR_Integer Var_69;
                MR_Integer Var_70;
                MR_Integer Var_71;
                MR_Integer Cost0_82;
                MR_Word Args_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Integer Arity_84;

                mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_83, &Arity_84);
                Var_67 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_66 = (MR_Integer) ((MR_Unsigned) Var_67 * (MR_Unsigned) Arity_84);
                Cost0_82 = mercury__int__f_47_47_2_f_0(Var_66, (MR_Integer) 2);
                Var_70 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Var_69 = (MR_Integer) ((MR_Unsigned) Cost0_82 + (MR_Unsigned) Var_70);
                Var_71 = transform_hlds__pd_cost__cost_of_higher_order_call_0_f_0();
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_69 + (MR_Unsigned) Var_71);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attributes_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
                MR_Integer Var_74;
                MR_Integer Var_75;
                MR_Integer Var_76;
                MR_Integer Var_77;
                MR_Integer Cost1_85;
                MR_Word Args_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
                MR_Integer Arity_87;
                MR_Integer InputArgs_88;
                MR_Word Var_72;

                Var_72 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(Attributes_47);
                succeeded = (Var_72 == (MR_Integer) 1);
                if (succeeded)
                  Cost1_85 = (MR_Integer) 0;
                else
                  Cost1_85 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Args_86, &Arity_87);
                InputArgs_88 = mercury__int__f_47_47_2_f_0(Arity_87, (MR_Integer) 2);
                Var_75 = transform_hlds__pd_cost__cost_of_call_0_f_0();
                Var_74 = (MR_Integer) ((MR_Unsigned) Cost1_85 + (MR_Unsigned) Var_75);
                Var_77 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                Var_76 = (MR_Integer) ((MR_Unsigned) Var_77 * (MR_Unsigned) InputArgs_88);
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_74 + (MR_Unsigned) Var_76);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_14, (MR_Integer) 0, &Cost1_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer Cost0_15;
                MR_Integer Var_56;
                MR_Word Goals_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));

                transform_hlds__pd_cost__goal_costs_3_p_0(Goals_80, (MR_Integer) 0, &Cost0_15);
                Var_56 = transform_hlds__pd_cost__cost_of_stack_flush_0_f_0();
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Cost0_15 + (MR_Unsigned) Var_56);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
                MR_Integer Var_57;

                Var_57 = transform_hlds__pd_cost__cost_of_simple_test_0_f_0();
                transform_hlds__pd_cost__cases_cost_3_p_0(Cases_18, Var_57, &Cost1_9);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
                MR_Word Goal_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Word Var_65;

                succeeded = ((((MR_tag((MR_Word) Reason_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_35, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_65 = ((MR_Unsigned) ((MR_hl_field(3, Reason_35, 2))) & (MR_Integer) 3);
                  succeeded = (Var_65 == (MR_Integer) 1);
                }
                if (succeeded)
                  Cost1_9 = transform_hlds__pd_cost__cost_of_reg_assign_0_f_0();
                else
                  transform_hlds__pd_cost__goal_cost_2_p_0(Goal_81, &Cost1_9);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Word Then_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
                MR_Word Else_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
                MR_Integer Cost1_23;
                MR_Integer Cost2_24;
                MR_Integer Cost3_25;
                MR_Integer Var_58;

                transform_hlds__pd_cost__goal_cost_2_p_0(Cond_20, &Cost1_23);
                transform_hlds__pd_cost__goal_cost_2_p_0(Then_21, &Cost2_24);
                transform_hlds__pd_cost__goal_cost_2_p_0(Else_22, &Cost3_25);
                Var_58 = (MR_Integer) ((MR_Unsigned) Cost1_23 + (MR_Unsigned) Cost2_24);
                Cost1_9 = (MR_Integer) ((MR_Unsigned) Var_58 + (MR_Unsigned) Cost3_25);
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__pd_cost__IntroducedFrom__pred__unify_cost__159__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__pd_cost__unify_cost_3_p_0(
  MR_Word NonLocals_4,
  MR_Word Unification_5,
  MR_Integer * Cost_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Unification_5, 0))));
        MR_Word Args_16 = ((MR_Word) ((MR_hl_field(0, Unification_5, 2))));

        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, Var_14);
        if (succeeded)
        {
          MR_Integer Arity_21;
          MR_Integer Var_31;

          mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Args_16, &Arity_21);
          Var_31 = (MR_Integer) ((MR_Unsigned) Arity_21 * (MR_Unsigned) 2);
          *Cost_6 = (MR_Integer) ((MR_Unsigned) 3 + (MR_Unsigned) Var_31);
        }
        else
          *Cost_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CanFail_25 = ((((MR_Unsigned) ((MR_hl_field(1, Unification_5, 4))) >> 1)) & (MR_Integer) 1);
        MR_Integer Cost0_27;
        MR_Word NonLocalArgs_28;
        MR_Integer NumAssigns_29;
        MR_Word Var_33;
        MR_Integer Var_34;
        MR_Integer Var_36;
        MR_Word Args_38 = ((MR_Word) ((MR_hl_field(1, Unification_5, 2))));

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
          Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&transform_hlds__pd_cost_scalar_common_2[0]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (transform_hlds__pd_cost__unify_cost_3_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (NonLocals_4));
        }
        mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), Var_33, Args_38, &NonLocalArgs_28);
        mercury__list__length_2_p_0((MR_Word) (&transform_hlds__pd_cost_scalar_common_1[0]), NonLocalArgs_28, &NumAssigns_29);
        Var_34 = (MR_Integer) ((MR_Unsigned) Cost0_27 + (MR_Unsigned) 3);
        Var_36 = (MR_Integer) ((MR_Unsigned) NumAssigns_29 * (MR_Unsigned) 2);
        *Cost_6 = (MR_Integer) ((MR_Unsigned) Var_34 + (MR_Unsigned) Var_36);
      }
      break;
    case (MR_Integer) 2:
      *Cost_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_5, 0))))) {
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
