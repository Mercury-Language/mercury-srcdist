/*
** Automatically generated from `goal_contains.m'
** by the Mercury compiler,
** version rotd-2025-11-07
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


// :- module hlds.goal_contains.
// :- implementation.

/*
INIT mercury__hlds__goal_contains__init
ENDINIT
*/

#include "hlds.goal_contains.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s {
  MR_Word * hlds__goal_contains__goal_contains_goal_2_p_0_env_0__ContainedGoal_4;
  MR_Cont hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont;
  void * hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont_env_ptr;
  MR_Word hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7;
  MR_Box hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv0_DirectSubGoal_7;
  MR_Box hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv1_DirectSubGoal_7;
  MR_Word hlds__goal_contains__goal_contains_goal_2_p_0_env_0__Case_13;
  MR_Box hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv3_Case_13;
  MR_Box hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv2_DirectSubGoal_7;
};


static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__goal_contains__cases_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__goal_contains__goals_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);







#include "array.mh"


static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  hlds__goal_contains__goal_contains_goal_2_p_0((env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7, (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__ContainedGoal_4, (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont, (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv0_DirectSubGoal_7));
  hlds__goal_contains__goal_contains_goal_2_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv1_DirectSubGoal_7));
  hlds__goal_contains__goal_contains_goal_2_p_0_1(env_ptr);
}

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_6(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__Case_13 = ((MR_Word) ((env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv3_Case_13));
  hlds__goal_contains__goal_contains_goal_2_p_0_5(env_ptr);
}

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_5(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_14;
    MR_Word Var_15;

    (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__Case_13, 2))));
    hlds__goal_contains__goal_contains_goal_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s * env_ptr = (struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((env_ptr)->hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv2_DirectSubGoal_7));
  hlds__goal_contains__goal_contains_goal_2_p_0_1(env_ptr);
}

void MR_CALL 
hlds__goal_contains__goal_contains_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * ContainedGoal_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct hlds__goal_contains__goal_contains_goal_2_p_0_env_0_s env;

  (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__ContainedGoal_4 = ContainedGoal_4;
  (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont = cont;
  (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  *((env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__ContainedGoal_4) = Goal_3;
  ((env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont)((env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__cont_env_ptr);
  {
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
    MR_Word Var_6;

    switch (MR_tag((MR_Word) GoalExpr_5)) {
      case (MR_Integer) 0:
        {
          (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = (MR_Word) ((MR_Word) (GoalExpr_5));
          hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
          case (MR_Integer) 2:
            {
              MR_Word DirectSubGoals_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word Var_8;

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv0_DirectSubGoal_7, DirectSubGoals_9, hlds__goal_contains__goal_contains_goal_2_p_0_2, &env);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DirectSubGoals_59 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv1_DirectSubGoal_7, DirectSubGoals_59, hlds__goal_contains__goal_contains_goal_2_p_0_3, &env);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));
              MR_Word Var_10;
              MR_Word Var_11;

              mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), &(env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv3_Case_13, Cases_12, hlds__goal_contains__goal_contains_goal_2_p_0_6, &env);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_20;

              (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word Then_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));
              MR_Word Else_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 4))));
              MR_Word Var_16;

              (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = Cond_17;
              hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
              (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = Then_18;
              hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
              (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = Else_19;
              hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              switch (MR_tag((MR_Word) Shorthand_44)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubGoalA_45 = ((MR_Word) ((MR_hl_field(0, Shorthand_44, 0))));
                    MR_Word SubGoalB_46 = ((MR_Word) ((MR_hl_field(0, Shorthand_44, 1))));

                    (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = SubGoalA_45;
                    hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
                    (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = SubGoalB_46;
                    hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_51 = ((MR_Word) ((MR_hl_field(1, Shorthand_44, 4))));
                    MR_Word OrElseGoals_52 = ((MR_Word) ((MR_hl_field(1, Shorthand_44, 5))));
                    MR_Word Var_47;
                    MR_Word Var_48;
                    MR_Word Var_49;
                    MR_Word Var_50;
                    MR_Word Var_53;

                    (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = MainGoal_51;
                    hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
                    mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__conv2_DirectSubGoal_7, OrElseGoals_52, hlds__goal_contains__goal_contains_goal_2_p_0_4, &env);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_54;
                    MR_Word Var_55;

                    (env).hlds__goal_contains__goal_contains_goal_2_p_0_env_0__DirectSubGoal_7 = ((MR_Word) ((MR_hl_field(2, Shorthand_44, 2))));
                    hlds__goal_contains__goal_contains_goal_2_p_0_1(&env);
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
hlds__goal_contains__goal_contains_reconstruction_2_p_0(
  MR_Word Goal_3,
  MR_Word * ContainsReconstruction_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_5 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_17 = (MR_Word) ((MR_Word) (GoalExpr_5));
          MR_Word next_value_of_Goal_3 = SubGoal_17;

          // direct tailcall eliminated
          ;
          Goal_3 = next_value_of_Goal_3;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unify_24 = ((MR_Word) ((MR_hl_field(1, GoalExpr_5, 3))));
          MR_Word HowToConstruct_30;

          succeeded = ((MR_tag((MR_Word) Unify_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            HowToConstruct_30 = ((MR_Word) ((MR_hl_field(0, Unify_24, 4))));
            succeeded = ((MR_tag((MR_Word) HowToConstruct_30)) == (MR_Integer) 1);
          }
          if (succeeded)
            *ContainsReconstruction_4 = (MR_Integer) 1;
          else
            *ContainsReconstruction_4 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        *ContainsReconstruction_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *ContainsReconstruction_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));

              hlds__goal_contains__goals_contain_reconstruction_2_p_0(Conjuncts_8, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              hlds__goal_contains__goals_contain_reconstruction_2_p_0(Disjuncts_9, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_12 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 3))));

              hlds__goal_contains__cases_contain_reconstruction_2_p_0(Cases_12, ContainsReconstruction_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 2))));
              MR_Word FGT_20;

              succeeded = ((((MR_tag((MR_Word) Reason_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_18, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_20 = ((MR_Unsigned) ((MR_hl_field(3, Reason_18, 2))) & (MR_Integer) 3);
                switch (FGT_20) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *ContainsReconstruction_4 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_Goal_3 = SubGoal_71;

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

              {
                MR_Word Var_73;

                hlds__goal_contains__goal_contains_reconstruction_2_p_0(Cond_14, &Var_73);
                succeeded = ((MR_Integer) 1 == Var_73);
              }
              if (!(succeeded))
              {
                {
                  MR_Word Var_74;

                  hlds__goal_contains__goal_contains_reconstruction_2_p_0(Then_15, &Var_74);
                  succeeded = ((MR_Integer) 1 == Var_74);
                }
                if (!(succeeded))
                {
                  MR_Word Var_75;

                  hlds__goal_contains__goal_contains_reconstruction_2_p_0(Else_16, &Var_75);
                  succeeded = ((MR_Integer) 1 == Var_75);
                }
              }
              if (succeeded)
                *ContainsReconstruction_4 = (MR_Integer) 1;
              else
                *ContainsReconstruction_4 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_5, 1))));

              switch (MR_tag((MR_Word) Shorthand_52)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalA_53 = ((MR_Word) ((MR_hl_field(0, Shorthand_52, 0))));
                    MR_Word GoalB_54 = ((MR_Word) ((MR_hl_field(0, Shorthand_52, 1))));
                    MR_Word Var_68;
                    MR_Word Var_76;
                    MR_Word Var_77;

                    hlds__goal_contains__goal_contains_reconstruction_2_p_0(GoalA_53, &Var_76);
                    succeeded = ((MR_Integer) 1 == Var_76);
                    if (succeeded)
                    {
                      Var_68 = (MR_Integer) 1;
                      hlds__goal_contains__goal_contains_reconstruction_2_p_0(GoalB_54, &Var_77);
                      succeeded = (Var_68 == Var_77);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(1, Shorthand_52, 4))));
                    MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(1, Shorthand_52, 5))));
                    MR_Word Var_70;
                    MR_Word Var_78;
                    MR_Word Var_79;

                    hlds__goal_contains__goal_contains_reconstruction_2_p_0(MainGoal_59, &Var_78);
                    succeeded = ((MR_Integer) 1 == Var_78);
                    if (succeeded)
                    {
                      Var_70 = (MR_Integer) 1;
                      hlds__goal_contains__goals_contain_reconstruction_2_p_0(OrElseGoals_60, &Var_79);
                      succeeded = (Var_70 == Var_79);
                    }
                    if (succeeded)
                      *ContainsReconstruction_4 = (MR_Integer) 1;
                    else
                      *ContainsReconstruction_4 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(2, Shorthand_52, 2))));
                    MR_Word next_value_of_Goal_3 = SubGoal_72;

                    // direct tailcall eliminated
                    ;
                    Goal_3 = next_value_of_Goal_3;
                    continue;
                  }
                  break;
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
hlds__goal_contains__cases_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Case_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CaseGoal_8 = ((MR_Word) ((MR_hl_field(0, Case_3, 2))));
      MR_Word HeadContainsReconstruction_9;

      hlds__goal_contains__goal_contains_reconstruction_2_p_0(CaseGoal_8, &HeadContainsReconstruction_9);
      switch (HeadContainsReconstruction_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Cases_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_contains__goals_contain_reconstruction_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word HeadContainsReconstruction_6;

      hlds__goal_contains__goal_contains_reconstruction_2_p_0(Goal_3, &HeadContainsReconstruction_6);
      switch (HeadContainsReconstruction_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Goals_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

void mercury__hlds__goal_contains__init(void)
{
}

void mercury__hlds__goal_contains__init_type_tables(void)
{
}

void mercury__hlds__goal_contains__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_contains__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_contains.
