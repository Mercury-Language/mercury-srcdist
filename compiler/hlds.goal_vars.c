/*
** Automatically generated from `goal_vars.m'
** by the Mercury compiler,
** version rotd-2025-08-31
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


// :- module hlds.goal_vars.
// :- implementation.

/*
INIT mercury__hlds__goal_vars__init
ENDINIT
*/

#include "hlds.goal_vars.mih"


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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Box MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Set_0_100,
  MR_Word * STATE_VARIABLE_Set_101);

static void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_cases_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);

static void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);

static MR_Box MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100);

static void MR_CALL 
hlds__goal_vars__vars_in_rhs_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100);

static void MR_CALL 
hlds__goal_vars__vars_in_cases_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);

static void MR_CALL 
hlds__goal_vars__vars_in_goals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3);


static /* final */ const MR_Box hlds__goal_vars_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__goal_vars_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__goal_vars_scalar_common_3[4][3];




static /* final */ const MR_Box hlds__goal_vars_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_vars_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__goal_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__goal_vars_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__goal_vars_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_vars__vars_in_goal_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__goal_vars_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_vars__vars_in_goal_acc_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__goal_vars_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__goal_vars_scalar_common_2[0])),
    ((MR_Box) (hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__goal_vars__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  MR_Word STATE_VARIABLE_Set_1_6;

  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_Set_1_6);
  hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(Goal_3, STATE_VARIABLE_Set_1_6, STATE_VARIABLE_Set_5);
}

static MR_Box MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Set_0_100,
  MR_Word * STATE_VARIABLE_Set_101)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));
    MR_Word GoalInfo_7 = ((MR_Word) ((MR_hl_field(0, Goal_4, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_146 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_146;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_Word GoalFeatures_13;

          GoalFeatures_13 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_7);
          succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_goal_feature_0), GoalFeatures_13, ((MR_Box) ((MR_Integer) 15)));
          if (succeeded)
            *STATE_VARIABLE_Set_101 = STATE_VARIABLE_Set_0_100;
          else
          {
            MR_Word STATE_VARIABLE_Set_1_103;
            MR_Word STATE_VARIABLE_Set_2_105;

            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_1_103);
            switch (MR_tag((MR_Word) Unif_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellToReuse_18 = ((MR_Word) ((MR_hl_field(0, Unif_11, 4))));
                  MR_Word TypeInfo_173_173;
                  MR_Word Var_104;
                  MR_Word Var_169;

                  succeeded = ((MR_tag((MR_Word) CellToReuse_18)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_104 = (MR_Word) (MR_body((MR_Word) (CellToReuse_18), (MR_Integer) 1));
                    Var_169 = ((MR_Word) ((MR_hl_field(0, Var_104, 0))));
                    TypeInfo_173_173 = (MR_Word) (&hlds__goal_vars_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_173_173, ((MR_Box) (Var_8)), ((MR_Box) (Var_169)));
                  }
                  if (succeeded)
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_1_103, &STATE_VARIABLE_Set_2_105);
                  else
                    STATE_VARIABLE_Set_2_105 = STATE_VARIABLE_Set_1_103;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Set_2_105 = STATE_VARIABLE_Set_1_103;
                break;
              case (MR_Integer) 2:
                STATE_VARIABLE_Set_2_105 = STATE_VARIABLE_Set_1_103;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Unif_11, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_Set_2_105 = STATE_VARIABLE_Set_1_103;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_Set_2_105 = STATE_VARIABLE_Set_1_103;
                    break;
                }
                break;
            }
            hlds__goal_vars__vars_in_rhs_acc_3_p_0(RHS_9, STATE_VARIABLE_Set_2_105, STATE_VARIABLE_Set_101);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_139 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_139, STATE_VARIABLE_Set_0_100, STATE_VARIABLE_Set_101);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word ArgVars_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word GenericCallVars_41;
              MR_Word STATE_VARIABLE_Set_4_107;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_36, &GenericCallVars_41);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_41, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_4_107);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_37, STATE_VARIABLE_Set_4_107, STATE_VARIABLE_Set_101);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word ExtraArgs_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
              MR_Word ExtraVars_82;
              MR_Word STATE_VARIABLE_Set_22_127;
              MR_Word ArgVars_148;

              ArgVars_148 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[2]), Args_78);
              ExtraVars_82 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[3]), ExtraArgs_79);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_148, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_22_127);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_82, STATE_VARIABLE_Set_22_127, STATE_VARIABLE_Set_101);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              hlds__goal_vars__non_svar_copy_vars_in_goals_acc_3_p_0(Goals_48, STATE_VARIABLE_Set_0_100, STATE_VARIABLE_Set_101);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_170 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              hlds__goal_vars__non_svar_copy_vars_in_goals_acc_3_p_0(Goals_170, STATE_VARIABLE_Set_0_100, STATE_VARIABLE_Set_101);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word STATE_VARIABLE_Set_8_111;
              MR_Word Var_140 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_8_111);
              hlds__goal_vars__non_svar_copy_vars_in_cases_acc_3_p_0(Cases_50, STATE_VARIABLE_Set_8_111, STATE_VARIABLE_Set_101);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word STATE_VARIABLE_Set_10_113;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_Set_0_100;

              switch (MR_tag((MR_Word) Reason_51)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_53 = ((MR_Word) ((MR_hl_field(0, Reason_51, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_53, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_10_113);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_141 = ((MR_Word) ((MR_hl_field(2, Reason_51, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_141, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_10_113);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_51, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_143 = ((MR_Word) ((MR_hl_field(3, Reason_51, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_143, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_10_113);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_171 = ((MR_Word) ((MR_hl_field(3, Reason_51, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_171, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_10_113);
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_142 = ((MR_Word) ((MR_hl_field(3, Reason_51, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_142, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_10_113);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_Set_10_113 = STATE_VARIABLE_Set_0_100;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_58 = ((MR_Word) ((MR_hl_field(3, Reason_51, 1))));
                        MR_Word LCSVar_59 = ((MR_Word) ((MR_hl_field(3, Reason_51, 2))));
                        MR_Word STATE_VARIABLE_Set_14_117;

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_58, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_14_117);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_59, STATE_VARIABLE_Set_14_117, &STATE_VARIABLE_Set_10_113);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = SubGoal_52;
              next_value_of_STATE_VARIABLE_Set_0_100 = STATE_VARIABLE_Set_10_113;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_Set_0_100 = next_value_of_STATE_VARIABLE_Set_0_100;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_Set_18_121;
              MR_Word STATE_VARIABLE_Set_19_122;
              MR_Word STATE_VARIABLE_Set_20_123;
              MR_Word Vars_147 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_Set_0_100;

              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_147, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_18_121);
              hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(Cond_72, STATE_VARIABLE_Set_18_121, &STATE_VARIABLE_Set_19_122);
              hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(Then_73, STATE_VARIABLE_Set_19_122, &STATE_VARIABLE_Set_20_123);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_74;
              next_value_of_STATE_VARIABLE_Set_0_100 = STATE_VARIABLE_Set_20_123;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_Set_0_100 = next_value_of_STATE_VARIABLE_Set_0_100;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_83)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_98 = ((MR_Word) ((MR_hl_field(0, Shorthand_83, 0))));
                    MR_Word RightGoal_99 = ((MR_Word) ((MR_hl_field(0, Shorthand_83, 1))));
                    MR_Word STATE_VARIABLE_Set_32_137;
                    MR_Word next_value_of_Goal_4;
                    MR_Word next_value_of_STATE_VARIABLE_Set_0_100;

                    hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(LeftGoal_98, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_32_137);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Goal_4 = RightGoal_99;
                    next_value_of_STATE_VARIABLE_Set_0_100 = STATE_VARIABLE_Set_32_137;
                    Goal_4 = next_value_of_Goal_4;
                    STATE_VARIABLE_Set_0_100 = next_value_of_STATE_VARIABLE_Set_0_100;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_85 = ((MR_Word) ((MR_hl_field(1, Shorthand_83, 1))));
                    MR_Word Inner_86 = ((MR_Word) ((MR_hl_field(1, Shorthand_83, 2))));
                    MR_Word MaybeOutputVars_87 = ((MR_Word) ((MR_hl_field(1, Shorthand_83, 3))));
                    MR_Word MainGoal_88 = ((MR_Word) ((MR_hl_field(1, Shorthand_83, 4))));
                    MR_Word OrElseGoals_89 = ((MR_Word) ((MR_hl_field(1, Shorthand_83, 5))));
                    MR_Word OuterDI_91 = ((MR_Word) ((MR_hl_field(0, Outer_85, 0))));
                    MR_Word OuterUO_92 = ((MR_Word) ((MR_hl_field(0, Outer_85, 1))));
                    MR_Word InnerDI_93;
                    MR_Word InnerUO_94;
                    MR_Word STATE_VARIABLE_Set_24_129;
                    MR_Word STATE_VARIABLE_Set_25_130;
                    MR_Word STATE_VARIABLE_Set_26_131;
                    MR_Word STATE_VARIABLE_Set_27_132;
                    MR_Word STATE_VARIABLE_Set_28_133;
                    MR_Word STATE_VARIABLE_Set_29_134;

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_91, STATE_VARIABLE_Set_0_100, &STATE_VARIABLE_Set_24_129);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_92, STATE_VARIABLE_Set_24_129, &STATE_VARIABLE_Set_25_130);
                    InnerDI_93 = ((MR_Word) ((MR_hl_field(0, Inner_86, 0))));
                    InnerUO_94 = ((MR_Word) ((MR_hl_field(0, Inner_86, 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_93, STATE_VARIABLE_Set_25_130, &STATE_VARIABLE_Set_26_131);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_94, STATE_VARIABLE_Set_26_131, &STATE_VARIABLE_Set_27_132);
                    if ((MaybeOutputVars_87 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_Set_28_133 = STATE_VARIABLE_Set_27_132;
                    else
                    {
                      MR_Word OutputVars_95 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_87, 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_95, STATE_VARIABLE_Set_27_132, &STATE_VARIABLE_Set_28_133);
                    }
                    hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(MainGoal_88, STATE_VARIABLE_Set_28_133, &STATE_VARIABLE_Set_29_134);
                    hlds__goal_vars__non_svar_copy_vars_in_goals_acc_3_p_0(OrElseGoals_89, STATE_VARIABLE_Set_29_134, STATE_VARIABLE_Set_101);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_149 = ((MR_Word) ((MR_hl_field(2, Shorthand_83, 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_149;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
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
hlds__goal_vars__non_svar_copy_vars_in_cases_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_9;
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Set_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Goal_9 = ((MR_Word) ((MR_hl_field(0, Var_14, 2))));
      hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(Goal_9, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_vars__non_svar_copy_vars_in_goals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Set_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      hlds__goal_vars__non_svar_copy_vars_in_goal_acc_3_p_0(Goal_7, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_vars__vars_in_goals_2_p_0(
  MR_Word Goals_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  MR_Word STATE_VARIABLE_Set_1_6;

  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_Set_1_6);
  hlds__goal_vars__vars_in_goals_acc_3_p_0(Goals_3, STATE_VARIABLE_Set_1_6, STATE_VARIABLE_Set_5);
}

void MR_CALL 
hlds__goal_vars__vars_in_goal_2_p_0(
  MR_Word Goal_3,
  MR_Word * STATE_VARIABLE_Set_5)
{
  MR_Word STATE_VARIABLE_Set_1_6;

  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_Set_1_6);
  hlds__goal_vars__vars_in_goal_acc_3_p_0(Goal_3, STATE_VARIABLE_Set_1_6, STATE_VARIABLE_Set_5);
}

static MR_Box MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__goal_vars__vars_in_goal_acc_3_p_0(
  MR_Word tscc_proc_1_input_1_Goal_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100)
{
  MR_Word tscc_proc_2_input_1_RHS_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;
  MR_Word tscc_output_1_STATE_VARIABLE_Set_100;

  // The code for TSCC PROC 1: pred hlds.goal_vars.vars_in_goal_acc/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.goal_vars.vars_in_goal_acc/3-0
  ;
  // proc 2 in TSCC: pred hlds.goal_vars.vars_in_rhs_acc/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_Set_0_99 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
    MR_Word STATE_VARIABLE_Set_100;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_144 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_144;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_Word STATE_VARIABLE_Set_1_101;
          MR_Word STATE_VARIABLE_Set_2_103;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_1_101);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, 4))));
                MR_Word TypeInfo_170_170;
                MR_Word Var_102;
                MR_Word Var_166;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_102 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  Var_166 = ((MR_Word) ((MR_hl_field(0, Var_102, 0))));
                  TypeInfo_170_170 = (MR_Word) (&hlds__goal_vars_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (Var_8)), ((MR_Box) (Var_166)));
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_1_101, &STATE_VARIABLE_Set_2_103);
                else
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17 = STATE_VARIABLE_Set_2_103;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_137 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_137, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word GenericCallVars_40;
              MR_Word STATE_VARIABLE_Set_4_105;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_35, &GenericCallVars_40);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_4_105);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_4_105, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word ExtraArgs_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
              MR_Word ExtraVars_81;
              MR_Word STATE_VARIABLE_Set_22_125;
              MR_Word ArgVars_146;

              ArgVars_146 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[0]), Args_77);
              ExtraVars_81 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[1]), ExtraArgs_78);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_146, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_22_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_81, STATE_VARIABLE_Set_22_125, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              hlds__goal_vars__vars_in_goals_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_167 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              hlds__goal_vars__vars_in_goals_acc_3_p_0(Goals_167, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word STATE_VARIABLE_Set_8_109;
              MR_Word Var_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_138, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_8_109);
              hlds__goal_vars__vars_in_cases_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_8_109, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word STATE_VARIABLE_Set_10_111;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              switch (MR_tag((MR_Word) Reason_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(0, Reason_50, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_139 = ((MR_Word) ((MR_hl_field(2, Reason_50, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_139, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_50, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_141, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_57 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));
                        MR_Word LCSVar_58 = ((MR_Word) ((MR_hl_field(3, Reason_50, 2))));
                        MR_Word STATE_VARIABLE_Set_14_115;

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_57, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_14_115);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_58, STATE_VARIABLE_Set_14_115, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_10_111;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_Set_18_119;
              MR_Word STATE_VARIABLE_Set_19_120;
              MR_Word STATE_VARIABLE_Set_20_121;
              MR_Word Vars_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_145, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_18_119);
              hlds__goal_vars__vars_in_goal_acc_3_p_0(Cond_71, STATE_VARIABLE_Set_18_119, &STATE_VARIABLE_Set_19_120);
              hlds__goal_vars__vars_in_goal_acc_3_p_0(Then_72, STATE_VARIABLE_Set_19_120, &STATE_VARIABLE_Set_20_121);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_73;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_20_121;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_97 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, 0))));
                    MR_Word RightGoal_98 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, 1))));
                    MR_Word STATE_VARIABLE_Set_32_135;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

                    hlds__goal_vars__vars_in_goal_acc_3_p_0(LeftGoal_97, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_32_135);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_98;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_32_135;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_84 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 1))));
                    MR_Word Inner_85 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 2))));
                    MR_Word MaybeOutputVars_86 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 3))));
                    MR_Word MainGoal_87 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 4))));
                    MR_Word OrElseGoals_88 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 5))));
                    MR_Word OuterDI_90 = ((MR_Word) ((MR_hl_field(0, Outer_84, 0))));
                    MR_Word OuterUO_91 = ((MR_Word) ((MR_hl_field(0, Outer_84, 1))));
                    MR_Word InnerDI_92;
                    MR_Word InnerUO_93;
                    MR_Word STATE_VARIABLE_Set_24_127;
                    MR_Word STATE_VARIABLE_Set_25_128;
                    MR_Word STATE_VARIABLE_Set_26_129;
                    MR_Word STATE_VARIABLE_Set_27_130;
                    MR_Word STATE_VARIABLE_Set_28_131;
                    MR_Word STATE_VARIABLE_Set_29_132;

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_90, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_24_127);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_91, STATE_VARIABLE_Set_24_127, &STATE_VARIABLE_Set_25_128);
                    InnerDI_92 = ((MR_Word) ((MR_hl_field(0, Inner_85, 0))));
                    InnerUO_93 = ((MR_Word) ((MR_hl_field(0, Inner_85, 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_92, STATE_VARIABLE_Set_25_128, &STATE_VARIABLE_Set_26_129);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_93, STATE_VARIABLE_Set_26_129, &STATE_VARIABLE_Set_27_130);
                    if ((MaybeOutputVars_86 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_Set_28_131 = STATE_VARIABLE_Set_27_130;
                    else
                    {
                      MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_86, 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_94, STATE_VARIABLE_Set_27_130, &STATE_VARIABLE_Set_28_131);
                    }
                    hlds__goal_vars__vars_in_goal_acc_3_p_0(MainGoal_87, STATE_VARIABLE_Set_28_131, &STATE_VARIABLE_Set_29_132);
                    hlds__goal_vars__vars_in_goals_acc_3_p_0(OrElseGoals_88, STATE_VARIABLE_Set_29_132, &STATE_VARIABLE_Set_100);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_147 = ((MR_Word) ((MR_hl_field(2, Shorthand_82, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_147;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_100;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_Set_0_17 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;
    MR_Word STATE_VARIABLE_Set_18;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word X_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, 0))));

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_13 = ((MR_Word) ((MR_hl_field(2, RHS_4, 1))));
          MR_Word ArgVarsModes_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, 2))));
          MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(2, RHS_4, 4))));
          MR_Word STATE_VARIABLE_Set_3_21;
          MR_Word STATE_VARIABLE_Set_4_22;
          MR_Word ArgVars_24;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_14, &ArgVars_24);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_3_21);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_24, STATE_VARIABLE_Set_3_21, &STATE_VARIABLE_Set_4_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_16;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_4_22;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Set_100 = tscc_output_1_STATE_VARIABLE_Set_100;
  return;
}

static void MR_CALL 
hlds__goal_vars__vars_in_rhs_acc_3_p_0(
  MR_Word tscc_proc_2_input_1_RHS_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Set_100)
{
  MR_Word tscc_proc_1_input_1_Goal_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
  MR_Word tscc_output_1_STATE_VARIABLE_Set_100;

  // The code for TSCC PROC 2: pred hlds.goal_vars.vars_in_rhs_acc/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.goal_vars.vars_in_goal_acc/3-0
  ;
  // proc 2 in TSCC: pred hlds.goal_vars.vars_in_rhs_acc/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_4 = tscc_proc_1_input_1_Goal_4;
    MR_Word STATE_VARIABLE_Set_0_99 = tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
    MR_Word STATE_VARIABLE_Set_100;
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_144 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_144;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 0))));
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unif_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_Word STATE_VARIABLE_Set_1_101;
          MR_Word STATE_VARIABLE_Set_2_103;
          MR_Word next_value_of_tscc_proc_2_input_1_RHS_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_1_101);
          switch (MR_tag((MR_Word) Unif_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellToReuse_17 = ((MR_Word) ((MR_hl_field(0, Unif_11, 4))));
                MR_Word TypeInfo_170_170;
                MR_Word Var_102;
                MR_Word Var_166;

                succeeded = ((MR_tag((MR_Word) CellToReuse_17)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_102 = (MR_Word) (MR_body((MR_Word) (CellToReuse_17), (MR_Integer) 1));
                  Var_166 = ((MR_Word) ((MR_hl_field(0, Var_102, 0))));
                  TypeInfo_170_170 = (MR_Word) (&hlds__goal_vars_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_170_170, ((MR_Box) (Var_8)), ((MR_Box) (Var_166)));
                }
                if (succeeded)
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, STATE_VARIABLE_Set_1_101, &STATE_VARIABLE_Set_2_103);
                else
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unif_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_2_103 = STATE_VARIABLE_Set_1_101;
                  break;
              }
              break;
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_RHS_4 = RHS_9;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17 = STATE_VARIABLE_Set_2_103;
          tscc_proc_2_input_1_RHS_4 = next_value_of_tscc_proc_2_input_1_RHS_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVars_137 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_137, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word ArgVars_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word GenericCallVars_40;
              MR_Word STATE_VARIABLE_Set_4_105;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_35, &GenericCallVars_40);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GenericCallVars_40, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_4_105);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_36, STATE_VARIABLE_Set_4_105, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Args_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word ExtraArgs_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 5))));
              MR_Word ExtraVars_81;
              MR_Word STATE_VARIABLE_Set_22_125;
              MR_Word ArgVars_146;

              ArgVars_146 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[0]), Args_77);
              ExtraVars_81 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&hlds__goal_vars_scalar_common_3[1]), ExtraArgs_78);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_146, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_22_125);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ExtraVars_81, STATE_VARIABLE_Set_22_125, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              hlds__goal_vars__vars_in_goals_acc_3_p_0(Goals_47, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_167 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              hlds__goal_vars__vars_in_goals_acc_3_p_0(Goals_167, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word STATE_VARIABLE_Set_8_109;
              MR_Word Var_138 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_138, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_8_109);
              hlds__goal_vars__vars_in_cases_acc_3_p_0(Cases_49, STATE_VARIABLE_Set_8_109, &STATE_VARIABLE_Set_100);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word STATE_VARIABLE_Set_10_111;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              switch (MR_tag((MR_Word) Reason_50)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Vars_52 = ((MR_Word) ((MR_hl_field(0, Reason_50, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_52, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Vars_139 = ((MR_Word) ((MR_hl_field(2, Reason_50, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_139, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Reason_50, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_141 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_141, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_168, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 4:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 5:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_140 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_140, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                    case (MR_Integer) 7:
                      STATE_VARIABLE_Set_10_111 = STATE_VARIABLE_Set_0_99;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word LCVar_57 = ((MR_Word) ((MR_hl_field(3, Reason_50, 1))));
                        MR_Word LCSVar_58 = ((MR_Word) ((MR_hl_field(3, Reason_50, 2))));
                        MR_Word STATE_VARIABLE_Set_14_115;

                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCVar_57, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_14_115);
                        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LCSVar_58, STATE_VARIABLE_Set_14_115, &STATE_VARIABLE_Set_10_111);
                      }
                      break;
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_51;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_10_111;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_Set_18_119;
              MR_Word STATE_VARIABLE_Set_19_120;
              MR_Word STATE_VARIABLE_Set_20_121;
              MR_Word Vars_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_145, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_18_119);
              hlds__goal_vars__vars_in_goal_acc_3_p_0(Cond_71, STATE_VARIABLE_Set_18_119, &STATE_VARIABLE_Set_19_120);
              hlds__goal_vars__vars_in_goal_acc_3_p_0(Then_72, STATE_VARIABLE_Set_19_120, &STATE_VARIABLE_Set_20_121);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_4 = Else_73;
              next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_20_121;
              tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
              tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_82)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word LeftGoal_97 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, 0))));
                    MR_Word RightGoal_98 = ((MR_Word) ((MR_hl_field(0, Shorthand_82, 1))));
                    MR_Word STATE_VARIABLE_Set_32_135;
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

                    hlds__goal_vars__vars_in_goal_acc_3_p_0(LeftGoal_97, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_32_135);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Goal_4 = RightGoal_98;
                    next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_32_135;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Outer_84 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 1))));
                    MR_Word Inner_85 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 2))));
                    MR_Word MaybeOutputVars_86 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 3))));
                    MR_Word MainGoal_87 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 4))));
                    MR_Word OrElseGoals_88 = ((MR_Word) ((MR_hl_field(1, Shorthand_82, 5))));
                    MR_Word OuterDI_90 = ((MR_Word) ((MR_hl_field(0, Outer_84, 0))));
                    MR_Word OuterUO_91 = ((MR_Word) ((MR_hl_field(0, Outer_84, 1))));
                    MR_Word InnerDI_92;
                    MR_Word InnerUO_93;
                    MR_Word STATE_VARIABLE_Set_24_127;
                    MR_Word STATE_VARIABLE_Set_25_128;
                    MR_Word STATE_VARIABLE_Set_26_129;
                    MR_Word STATE_VARIABLE_Set_27_130;
                    MR_Word STATE_VARIABLE_Set_28_131;
                    MR_Word STATE_VARIABLE_Set_29_132;

                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterDI_90, STATE_VARIABLE_Set_0_99, &STATE_VARIABLE_Set_24_127);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OuterUO_91, STATE_VARIABLE_Set_24_127, &STATE_VARIABLE_Set_25_128);
                    InnerDI_92 = ((MR_Word) ((MR_hl_field(0, Inner_85, 0))));
                    InnerUO_93 = ((MR_Word) ((MR_hl_field(0, Inner_85, 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerDI_92, STATE_VARIABLE_Set_25_128, &STATE_VARIABLE_Set_26_129);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InnerUO_93, STATE_VARIABLE_Set_26_129, &STATE_VARIABLE_Set_27_130);
                    if ((MaybeOutputVars_86 == (MR_Word) ((MR_Unsigned) 0U)))
                      STATE_VARIABLE_Set_28_131 = STATE_VARIABLE_Set_27_130;
                    else
                    {
                      MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_86, 0))));

                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_94, STATE_VARIABLE_Set_27_130, &STATE_VARIABLE_Set_28_131);
                    }
                    hlds__goal_vars__vars_in_goal_acc_3_p_0(MainGoal_87, STATE_VARIABLE_Set_28_131, &STATE_VARIABLE_Set_29_132);
                    hlds__goal_vars__vars_in_goals_acc_3_p_0(OrElseGoals_88, STATE_VARIABLE_Set_29_132, &STATE_VARIABLE_Set_100);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_147 = ((MR_Word) ((MR_hl_field(2, Shorthand_82, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_4 = SubGoal_147;
                    MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_0_99;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
                    tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_100;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word RHS_4 = tscc_proc_2_input_1_RHS_4;
    MR_Word STATE_VARIABLE_Set_0_17 = tscc_proc_2_input_2_STATE_VARIABLE_Set_0_17;
    MR_Word STATE_VARIABLE_Set_18;

    switch (MR_tag((MR_Word) RHS_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word X_6 = ((MR_Word) ((MR_hl_field(0, RHS_4, 0))));

          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), X_6, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgVars_9 = ((MR_Word) ((MR_hl_field(1, RHS_4, 2))));

          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_9, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word NonLocals_13 = ((MR_Word) ((MR_hl_field(2, RHS_4, 1))));
          MR_Word ArgVarsModes_14 = ((MR_Word) ((MR_hl_field(2, RHS_4, 2))));
          MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(2, RHS_4, 4))));
          MR_Word STATE_VARIABLE_Set_3_21;
          MR_Word STATE_VARIABLE_Set_4_22;
          MR_Word ArgVars_24;
          MR_Word next_value_of_tscc_proc_1_input_1_Goal_4;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__goal_vars_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_14, &ArgVars_24);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, STATE_VARIABLE_Set_0_17, &STATE_VARIABLE_Set_3_21);
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_24, STATE_VARIABLE_Set_3_21, &STATE_VARIABLE_Set_4_22);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Goal_4 = Goal_16;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = STATE_VARIABLE_Set_4_22;
          tscc_proc_1_input_1_Goal_4 = next_value_of_tscc_proc_1_input_1_Goal_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Set_0_99;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Set_100 = STATE_VARIABLE_Set_18;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Set_100 = tscc_output_1_STATE_VARIABLE_Set_100;
  return;
}

static void MR_CALL 
hlds__goal_vars__vars_in_cases_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_9;
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Set_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Goal_9 = ((MR_Word) ((MR_hl_field(0, Var_14, 2))));
      hlds__goal_vars__vars_in_goal_acc_3_p_0(Goal_9, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__goal_vars__vars_in_goals_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Set_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      hlds__goal_vars__vars_in_goal_acc_3_p_0(Goal_7, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__goal_vars__vars_in_generic_call_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_3));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_9));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void mercury__hlds__goal_vars__init(void)
{
}

void mercury__hlds__goal_vars__init_type_tables(void)
{
}

void mercury__hlds__goal_vars__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__goal_vars__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.goal_vars.
