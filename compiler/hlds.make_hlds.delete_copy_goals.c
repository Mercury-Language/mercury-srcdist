/*
** Automatically generated from `delete_copy_goals.m'
** by the Mercury compiler,
** version rotd-2026-09-02
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


// :- module hlds.make_hlds.delete_copy_goals.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__delete_copy_goals__init
ENDINIT
*/

#include "hlds.make_hlds.delete_copy_goals.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_proc_id.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__delete_copy_goals__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static MR_bool MR_CALL 
hlds__make_hlds__delete_copy_goals__IntroducedFrom__pred__delete_unneeded_copy_goals__233__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118);

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4);

static MR_bool MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8);


static /* final */ const MR_Box hlds__make_hlds__delete_copy_goals_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__make_hlds__delete_copy_goals_scalar_common_2[1][5];




static /* final */ const MR_Box hlds__make_hlds__delete_copy_goals_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__delete_copy_goals_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__delete_copy_goals__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__make_hlds__delete_copy_goals__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__delete_copy_goals__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0) }
};

static MR_bool MR_CALL 
hlds__make_hlds__delete_copy_goals__IntroducedFrom__pred__delete_unneeded_copy_goals__233__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__delete_copy_goals_scalar_common_1[0]), ((MR_Box) (OrElseInners_91)), ((MR_Box) (HeadVar__2_118)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_in_clause_3_p_0(
  MR_Word HeadUnificationsGoal_4,
  MR_Word Goal0_5,
  MR_Word * Goal_6)
{
  MR_Word SeenLater0_8;
  MR_Word _SeenLater_9;

  hlds__goal_vars__vars_in_goal_2_p_0(HeadUnificationsGoal_4, &SeenLater0_8);
  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Goal0_5, Goal_6, SeenLater0_8, &_SeenLater_9);
}

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_8;
    MR_Word Cases_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_6, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_6, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_6, 2))));
    MR_Word Goal_16;

    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Goal0_15, &Goal_16, SeenAfter_3, &SeenBefore_11);
    {
      Case_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_8, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_8, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_8, 2) = ((MR_Box) (Goal_16));
    }
    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_switch_4_p_0(Cases0_7, &Cases_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Disjunct0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Disjuncts0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Disjunct_8;
    MR_Word Disjuncts_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;

    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Disjunct0_6, &Disjunct_8, SeenAfter_3, &SeenBefore_11);
    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_7, &Disjuncts_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *SeenBefore_4 = SeenAfter_3;
  }
  else
  {
    MR_Word RevConjunct0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RevConjuncts0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word RevConjunct_9;
    MR_Word RevConjuncts_10;
    MR_Word SeenBetween_13;

    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(RevConjunct0_7, &RevConjunct_9, SeenAfter_3, &SeenBetween_13);
    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_8, &RevConjuncts_10, SeenBetween_13, SeenBefore_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RevConjunct_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevConjuncts_10));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__delete_copy_goals__IntroducedFrom__pred__delete_unneeded_copy_goals__233__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_60;
        MR_Word GoalExpr_135;

        hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_59, &SubGoal_60, SeenAfter_7, SeenBefore_8);
        GoalExpr_135 = (MR_Word) ((MR_Word) (SubGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_135));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, 0))));
        MR_Word GoalVars0_16;
        MR_Word TypeCtorInfo_159_159;

        hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_16);
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 16);
        if (succeeded)
        {
          TypeCtorInfo_159_159 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_159_159, SeenAfter_7, LHSVar_11);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Var_109;

          Var_109 = hlds__make_goal__true_goal_expr_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
          }
          *SeenBefore_8 = SeenAfter_7;
        }
        else
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_16, SeenAfter_7, SeenBefore_8);
          *Goal_6 = Goal0_5;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalVars0_129;

        hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_129);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
        *Goal_6 = Goal0_5;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word GoalVars0_129;

            hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_129);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
            *Goal_6 = Goal0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjKind_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word RevConjuncts0_37;
            MR_Word RevConjuncts_38;
            MR_Word Conjuncts_39;
            MR_Word GoalExpr_40;

            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_36, &RevConjuncts0_37);
            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_37, &RevConjuncts_38, SeenAfter_7, SeenBefore_8);
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevConjuncts_38, &Conjuncts_39);
            {
              GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_40, 1) = (MR_Box) ((MR_Unsigned) (ConjKind_35));
              MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (Conjuncts_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Disjuncts_42;
            MR_Word SeenBefores_43;
            MR_Word GoalExpr_130;

            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_41, &Disjuncts_42, SeenAfter_7, &SeenBefores_43);
            {
              GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Disjuncts_42));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_43, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_130));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word CanFail_45 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 2))) & (MR_Integer) 1);
            MR_Word Cases0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Cases_47;
            MR_Word SeenBefore0_48;
            MR_Word GoalExpr_131;
            MR_Word SeenBefores_132;

            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_switch_4_p_0(Cases0_46, &Cases_47, SeenAfter_7, &SeenBefores_132);
            {
              GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (SwitchVar_44));
              MR_hl_field(3, GoalExpr_131, 2) = (MR_Box) ((MR_Unsigned) (CanFail_45));
              MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Cases_47));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_132, &SeenBefore0_48);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_44, SeenBefore0_48, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_131));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word GoalExpr_140;
            MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word SubGoal_143;

            switch (MR_tag((MR_Word) Reason_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ScopeVars_69 = ((MR_Word) ((MR_hl_field(0, Reason_61, 0))));
                  MR_Word SeenBefore0_138;

                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_138);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_69, SeenBefore0_138, SeenBefore_8);
                }
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ScopeVars_174 = ((MR_Word) ((MR_hl_field(2, Reason_61, 0))));
                  MR_Word SeenBefore0_175;

                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_175);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_174, SeenBefore0_175, SeenBefore_8);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_61, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ScopeVar_64 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word SeenBefore0_136;

                      hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_136);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_64, SeenBefore0_136, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ScopeVar_180 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word SeenBefore0_181;

                      hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_181);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_180, SeenBefore0_181, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_62 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));

                      SubGoal_143 = SubGoal0_142;
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_62, SeenAfter_7, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ScopeVars_177 = ((MR_Word) ((MR_hl_field(3, Reason_61, 5))));
                      MR_Word SeenBefore0_178;

                      hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_178);
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_177, SeenBefore0_178, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_66 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word LCSVar_67 = ((MR_Word) ((MR_hl_field(3, Reason_61, 2))));
                      MR_Word Var_110;
                      MR_Word Var_111;
                      MR_Word SeenBefore0_137;

                      hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_137);
                      {
                        Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_111, 0) = ((MR_Box) (LCSVar_67));
                        MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_110, 0) = ((MR_Box) (LCVar_66));
                        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_110, SeenBefore0_137, SeenBefore_8);
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (SubGoal_143));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ITEVars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 4))));
            MR_Word Else_53;
            MR_Word SeenBeforeElse_54;
            MR_Word Then_55;
            MR_Word SeenAfterThen_56;
            MR_Word Cond_57;
            MR_Word SeenBeforeCond_58;
            MR_Word GoalExpr_133;
            MR_Word SeenBefore0_134;

            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Else0_52, &Else_53, SeenAfter_7, &SeenBeforeElse_54);
            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Then0_51, &Then_55, SeenAfter_7, &SeenAfterThen_56);
            hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Cond0_50, &Cond_57, SeenAfterThen_56, &SeenBeforeCond_58);
            {
              GoalExpr_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_133, 1) = ((MR_Box) (ITEVars_49));
              MR_hl_field(3, GoalExpr_133, 2) = ((MR_Box) (Cond_57));
              MR_hl_field(3, GoalExpr_133, 3) = ((MR_Box) (Then_55));
              MR_hl_field(3, GoalExpr_133, 4) = ((MR_Box) (Else_53));
            }
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeCond_58, SeenBeforeElse_54, &SeenBefore0_134);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITEVars_49, SeenBefore0_134, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_133));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word ShortHand_94;
            MR_Word GoalExpr_158;

            switch (MR_tag((MR_Word) ShortHand0_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_102 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, 0))));
                  MR_Word RightGoal0_103 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, 1))));
                  MR_Word LeftGoal_104;
                  MR_Word SeenBeforeLeft_105;
                  MR_Word RightGoal_106;
                  MR_Word SeenBeforeRight_107;

                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(LeftGoal0_102, &LeftGoal_104, SeenAfter_7, &SeenBeforeLeft_105);
                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(RightGoal0_103, &RightGoal_106, SeenAfter_7, &SeenBeforeRight_107);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeLeft_105, SeenBeforeRight_107, SeenBefore_8);
                  {
                    ShortHand_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_94, 0) = ((MR_Box) (LeftGoal_104));
                    MR_hl_field(0, ShortHand_94, 1) = ((MR_Box) (RightGoal_106));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicType_83 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_82, 0))) & (MR_Integer) 3);
                  MR_Word OuterInitVar_84;
                  MR_Word OuterFinalVar_85;
                  MR_Word InnerInitVar_86;
                  MR_Word InnerFinalVar_87;
                  MR_Word MaybeOutputVars_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 3))));
                  MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 6))));
                  MR_Word MainGoal_92;
                  MR_Word OrElseGoals_93;
                  MR_Word SeenBefore1_95;
                  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 1))));
                  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 2))));
                  MR_Word Var_115;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_125;
                  MR_Word Var_126;
                  MR_Word SeenBefores_146;
                  MR_Word SeenBefore0_147;
                  MR_Word Disjunct0_184 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 4))));
                  MR_Word Disjuncts0_185 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 5))));
                  MR_Word SeenBefore_189;
                  MR_Word SeenBefores_190;

                  OuterInitVar_84 = ((MR_Word) ((MR_hl_field(0, Var_113, 0))));
                  OuterFinalVar_85 = ((MR_Word) ((MR_hl_field(0, Var_113, 1))));
                  InnerInitVar_86 = ((MR_Word) ((MR_hl_field(0, Var_114, 0))));
                  InnerFinalVar_87 = ((MR_Word) ((MR_hl_field(0, Var_114, 1))));
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_115, 0) = ((MR_Box) (&hlds__make_hlds__delete_copy_goals_scalar_common_2[0]));
                    MR_hl_field(0, Var_115, 1) = ((MR_Box) (hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0_1));
                    MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_115, 3) = ((MR_Box) (OrElseInners_91));
                    MR_hl_field(0, Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140hlds.make_hlds.delete_copy_goals.delete_unneeded_copy_goals\'/4", (MR_String) "OrElseInners != []");
                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(Disjunct0_184, &MainGoal_92, SeenAfter_7, &SeenBefore_189);
                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_185, &OrElseGoals_93, SeenAfter_7, &SeenBefores_190);
                  {
                    SeenBefores_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SeenBefores_146, 0) = ((MR_Box) (SeenBefore_189));
                    MR_hl_field(1, SeenBefores_146, 1) = ((MR_Box) (SeenBefores_190));
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_94, 0) = (MR_Box) ((MR_Unsigned) (AtomicType_83));
                    MR_hl_field(1, ShortHand_94, 1) = ((MR_Box) (Var_113));
                    MR_hl_field(1, ShortHand_94, 2) = ((MR_Box) (Var_114));
                    MR_hl_field(1, ShortHand_94, 3) = ((MR_Box) (MaybeOutputVars_88));
                    MR_hl_field(1, ShortHand_94, 4) = ((MR_Box) (MainGoal_92));
                    MR_hl_field(1, ShortHand_94, 5) = ((MR_Box) (OrElseGoals_93));
                    MR_hl_field(1, ShortHand_94, 6) = ((MR_Box) (OrElseInners_91));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_146, &SeenBefore0_147);
                  {
                    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_126, 0) = ((MR_Box) (InnerFinalVar_87));
                    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_125, 0) = ((MR_Box) (InnerInitVar_86));
                    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
                  }
                  {
                    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_124, 0) = ((MR_Box) (OuterFinalVar_85));
                    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
                  }
                  {
                    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_123, 0) = ((MR_Box) (OuterInitVar_84));
                    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_124));
                  }
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_123, SeenBefore0_147, &SeenBefore1_95);
                  if ((MaybeOutputVars_88 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_95;
                  else
                  {
                    MR_Word OutputVars_96 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_88, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_96, SeenBefore1_95, SeenBefore_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOStateVars_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 0))));
                  MR_Word ResultVar_98 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 1))));
                  MR_Word SeenBefore0_148;
                  MR_Word SubGoal0_149 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 2))));
                  MR_Word SubGoal_150;
                  MR_Word SeenBefore1_151;

                  hlds__make_hlds__delete_copy_goals__delete_unneeded_copy_goals_4_p_0(SubGoal0_149, &SubGoal_150, SeenAfter_7, &SeenBefore0_148);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_98, SeenBefore0_148, &SeenBefore1_151);
                  if ((MaybeIOStateVars_97 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_151;
                  else
                  {
                    MR_Word InitVar_99;
                    MR_Word FinalVar_100;
                    MR_Word SeenBefore2_101;
                    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, MaybeIOStateVars_97, 0))));

                    InitVar_99 = ((MR_Word) ((MR_hl_field(0, Var_128, 0))));
                    FinalVar_100 = ((MR_Word) ((MR_hl_field(0, Var_128, 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InitVar_99, SeenBefore1_151, &SeenBefore2_101);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_100, SeenBefore2_101, SeenBefore_8);
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_94, 0) = ((MR_Box) (MaybeIOStateVars_97));
                    MR_hl_field(2, ShortHand_94, 1) = ((MR_Box) (ResultVar_98));
                    MR_hl_field(2, ShortHand_94, 2) = ((MR_Box) (SubGoal_150));
                  }
                }
                break;
            }
            {
              GoalExpr_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_158, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_158, 1) = ((MR_Box) (ShortHand_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_158));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
      }
      break;
  }
}

void mercury__hlds__make_hlds__delete_copy_goals__init(void)
{
}

void mercury__hlds__make_hlds__delete_copy_goals__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__delete_copy_goals__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__delete_copy_goals__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.delete_copy_goals.
