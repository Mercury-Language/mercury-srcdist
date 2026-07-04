/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2026-07-04
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


// :- module ll_backend.middle_rec.
// :- implementation.

/*
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#include "ll_backend.middle_rec.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "ll_backend.proc_gen.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_test.mih"
#include "ll_backend.var_locn.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word Var_11,
  MR_Word BaseConsId_12,
  MR_Word Base_13,
  MR_Word Recursive_14,
  MR_Word SwitchGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_73,
  MR_Word * STATE_VARIABLE_CI_74,
  MR_Word STATE_VARIABLE_CLD_0_75,
  MR_Word * STATE_VARIABLE_CLD_76);

static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
  MR_Word Instrs_3,
  MR_Word * Labels_4);

static void MR_CALL 
ll_backend__middle_rec__find_labels_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Labels_0_2,
  MR_Word * STATE_VARIABLE_Labels_3);

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
  MR_Word Instrs_3,
  MR_Word * UnusedReg_4);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
  MR_Word Uinstr_4,
  MR_Word STATE_VARIABLE_Used_0_76,
  MR_Word * STATE_VARIABLE_Used_77);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
  MR_Word tscc_proc_1_input_1_Lval_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13);

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
  MR_Word tscc_proc_2_input_1_Rval_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13);

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Before_2,
  MR_Word * After_3);

static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Target_2,
  MR_Word * Instrs_3);

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeInfo_5);

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeInfo_5);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_1[7][2];

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[5][1];




static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__middle_rec_scalar_common_2[0])))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__middle_rec_scalar_common_2[2])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 4U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[4]))),
    ((MR_Box) ((MR_String) "exit from base case"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[4]))),
    ((MR_Box) ((MR_String) "exit from recursive case"))
  },
};

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   3 */
  { (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 1U)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


MR_bool MR_CALL 
ll_backend__middle_rec__match_and_generate_6_p_0(
  MR_Word Goal_7,
  MR_Word * Instrs_8,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
  MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));
  MR_Word Var_13;
  MR_Word Case1_14;
  MR_Word Case2_15;
  MR_Word ConsId1_16;
  MR_Word Goal1_17;
  MR_Word ConsId2_18;
  MR_Word Goal2_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word GoalExpr_34;
  MR_Word GoalExpr_103;
  MR_Word Goals_105;
  MR_Word Var_106;

  succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0)))) == (MR_Integer) 4)));
  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
    Var_24 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, 2))) & (MR_Integer) 1);
    Var_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
    succeeded = (Var_24 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Case1_14 = ((MR_Word) ((MR_hl_field(1, Var_25, 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(1, Var_25, 1))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Case2_15 = ((MR_Word) ((MR_hl_field(1, Var_26, 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
          succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConsId1_16 = ((MR_Word) ((MR_hl_field(0, Case1_14, 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(0, Case1_14, 1))));
            Goal1_17 = ((MR_Word) ((MR_hl_field(0, Case1_14, 2))));
            succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsId2_18 = ((MR_Word) ((MR_hl_field(0, Case2_15, 0))));
              Var_29 = ((MR_Word) ((MR_hl_field(0, Case2_15, 1))));
              Goal2_19 = ((MR_Word) ((MR_hl_field(0, Case2_15, 2))));
              succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                GoalExpr_34 = ((MR_Word) ((MR_hl_field(0, Goal1_17, 0))));
                switch (MR_tag((MR_Word) GoalExpr_34)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word SubGoal_41 = (MR_Word) ((MR_Word) (GoalExpr_34));
                      MR_Word Var_133;

                      Var_133 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_41);
                      succeeded = (Var_133 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Uni_58 = ((MR_Word) ((MR_hl_field(1, GoalExpr_34, 3))));

                      switch (MR_tag((MR_Word) Uni_58)) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word SubInfo_70 = ((MR_Word) ((MR_hl_field(0, Uni_58, 6))));

                            if ((SubInfo_70 == (MR_Word) ((MR_Unsigned) 0U)))
                              succeeded = MR_TRUE;
                            else
                            {
                              MR_Word TakeAddressFields_71 = ((MR_Word) ((MR_hl_field(1, SubInfo_70, 0))));

                              succeeded = (TakeAddressFields_71 == (MR_Word) ((MR_Unsigned) 0U));
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 3:
                          switch (((MR_Integer) ((MR_hl_field(3, Uni_58, 0))))) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 0:
                              succeeded = MR_TRUE;
                              break;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word BuiltinState_52 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_34, 3))) & (MR_Integer) 1);

                      succeeded = (BuiltinState_52 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_34, 0))))) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ConjType_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_34, 1))) & (MR_Integer) 1);
                          MR_Word Goals_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 2))));
                          MR_Word Var_123;

                          succeeded = (ConjType_36 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_123 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_37);
                            succeeded = (Var_123 == (MR_Integer) 1);
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word Goals_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 1))));
                          MR_Word Var_126;

                          Var_126 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_101);
                          succeeded = (Var_126 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Cases_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 3))));
                          MR_Word Var_145;

                          Var_145 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_40);
                          succeeded = (Var_145 == (MR_Integer) 1);
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_Word Reason_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 1))));
                          MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 2))));
                          MR_Word FGT_44;

                          succeeded = ((((MR_tag((MR_Word) Reason_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_42, 0)))) == (MR_Integer) 6)));
                          if (succeeded)
                          {
                            FGT_44 = ((MR_Unsigned) ((MR_hl_field(3, Reason_42, 2))) & (MR_Integer) 3);
                            switch (FGT_44) {
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
                            succeeded = MR_TRUE;
                          else
                          {
                            MR_Word Var_142;

                            Var_142 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_102);
                            succeeded = (Var_142 == (MR_Integer) 1);
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Cond_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 2))));
                          MR_Word Then_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 3))));
                          MR_Word Else_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_34, 4))));
                          MR_Word Var_96;
                          MR_Word Var_97;
                          MR_Word Var_98;

                          Var_96 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_46);
                          succeeded = (Var_96 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_97 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_47);
                            succeeded = (Var_97 == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Var_98 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_48);
                              succeeded = (Var_98 == (MR_Integer) 1);
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
                if (succeeded)
                {
                  GoalExpr_103 = ((MR_Word) ((MR_hl_field(0, Goal2_19, 0))));
                  succeeded = ((((MR_tag((MR_Word) GoalExpr_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_103, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_106 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_103, 1))) & (MR_Integer) 1);
                    Goals_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr_103, 2))));
                    succeeded = (Var_106 == (MR_Integer) 0);
                    if (succeeded)
                      succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(Goals_105, STATE_VARIABLE_CI_0_20);
                  }
                }
                if (succeeded)
                  succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(Var_13, ConsId1_16, Goal1_17, Goal2_19, GoalInfo_12, Instrs_8, STATE_VARIABLE_CI_0_20, STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                else
                {
                  MR_Word Var_33;

                  Var_33 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Goal2_19);
                  succeeded = (Var_33 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = ll_backend__middle_rec__contains_simple_recursive_call_2_p_0(Goal1_17, STATE_VARIABLE_CI_0_20);
                    if (succeeded)
                      succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(Var_13, ConsId2_18, Goal2_19, Goal1_17, GoalInfo_12, Instrs_8, STATE_VARIABLE_CI_0_20, STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word Var_11,
  MR_Word BaseConsId_12,
  MR_Word Base_13,
  MR_Word Recursive_14,
  MR_Word SwitchGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_73,
  MR_Word * STATE_VARIABLE_CI_74,
  MR_Word STATE_VARIABLE_CLD_0_75,
  MR_Word * STATE_VARIABLE_CLD_76)
{
  MR_bool succeeded;
  MR_Word StackSlots_19;
  MR_Word VarTable_20;
  MR_String SlotsComment_21;
  MR_Word ModuleInfo_22;
  MR_Word PredId_23;
  MR_Integer ProcId_24;
  MR_Word EntryLabel_25;
  MR_Word VarCode_26;
  MR_Word VarRval_27;
  MR_Word VarEntry_28;
  MR_String VarName_29;
  MR_Word VarType_30;
  MR_Word CheaperTagTest_31;
  MR_Word BaseLabel_32;
  MR_Word TestCode_33;
  MR_Word EntryTestInstrs_34;
  MR_Word StoreMap_35;
  MR_Word BranchStart_36;
  MR_Word BaseGoalCode_37;
  MR_Word MaybeEnd1_38;
  MR_Word BaseSaveCode_39;
  MR_Word RecGoalCode_40;
  MR_Word MaybeEnd_41;
  MR_Word RecSaveCode_42;
  MR_Word ArgModes_43;
  MR_Word HeadVars_44;
  MR_Word Args_45;
  MR_Word LiveArgs_46;
  MR_Word EpilogCode_47;
  MR_Word BaseCode_48;
  MR_Word RecCode_49;
  MR_Word LiveValCode_50;
  MR_Word BaseInstrs_51;
  MR_Word RecInstrs_52;
  MR_Word AvoidInstrs_53;
  MR_Word AuxReg_54;
  MR_Word BeforeInstrs0_55;
  MR_Word AfterInstrs_56;
  MR_Word BeforeInstrs_57;
  MR_Word Loop1Label_58;
  MR_Word Loop2Label_59;
  MR_Integer FrameSize0_60;
  MR_Integer FrameSize_61;
  MR_Word Loop1Test_62;
  MR_Word MaybeIncrSp_63;
  MR_Word MaybeDecrSp_64;
  MR_Word InitAuxReg_65;
  MR_Word IncrAuxReg_66;
  MR_Word DecrAuxReg_67;
  MR_Word TestAuxReg_68;
  MR_Word STATE_VARIABLE_CLD_1_79;
  MR_Word STATE_VARIABLE_CLD_2_80;
  MR_Word STATE_VARIABLE_CI_1_82;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_CI_2_85;
  MR_Word STATE_VARIABLE_CLD_3_86;
  MR_Word STATE_VARIABLE_CLD_4_88;
  MR_Word STATE_VARIABLE_CI_3_90;
  MR_Word STATE_VARIABLE_CLD_5_91;
  MR_Word STATE_VARIABLE_CLD_6_92;
  MR_Word STATE_VARIABLE_CLD_7_93;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word STATE_VARIABLE_CI_4_101;

  ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_0_73, &StackSlots_19);
  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_0_73, &VarTable_20);
  SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(VarTable_20, StackSlots_19);
  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_73, &ModuleInfo_22);
  ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_0_73, &PredId_23);
  ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_0_73, &ProcId_24);
  EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_22, PredId_23, ProcId_24, (MR_Word) ((MR_Unsigned) 0U));
  ll_backend__code_loc_dep__pre_goal_update_4_p_0(SwitchGoalInfo_15, (MR_Integer) 0, STATE_VARIABLE_CLD_0_75, &STATE_VARIABLE_CLD_1_79);
  ll_backend__code_loc_dep__produce_variable_5_p_0(Var_11, &VarCode_26, &VarRval_27, STATE_VARIABLE_CLD_1_79, &STATE_VARIABLE_CLD_2_80);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_20, Var_11, &VarEntry_28);
  VarName_29 = parse_tree__var_table__var_entry_name_2_f_0(Var_11, VarEntry_28);
  VarType_30 = ((MR_Word) ((MR_hl_field(0, VarEntry_28, 1))));
  CheaperTagTest_31 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_73, VarType_30);
  ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(VarRval_27, VarName_29, BaseConsId_12, CheaperTagTest_31, (MR_Integer) 0, &BaseLabel_32, &TestCode_33, STATE_VARIABLE_CI_0_73, &STATE_VARIABLE_CI_1_82);
  Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_26, TestCode_33);
  EntryTestInstrs_34 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_83);
  hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_15, &StoreMap_35);
  ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_2_80, &BranchStart_36);
  ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Base_13, &BaseGoalCode_37, STATE_VARIABLE_CI_1_82, &STATE_VARIABLE_CI_2_85, STATE_VARIABLE_CLD_2_80, &STATE_VARIABLE_CLD_3_86);
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_35, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd1_38, &BaseSaveCode_39, STATE_VARIABLE_CLD_3_86);
  ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_36, STATE_VARIABLE_CI_2_85, &STATE_VARIABLE_CLD_4_88);
  ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Recursive_14, &RecGoalCode_40, STATE_VARIABLE_CI_2_85, &STATE_VARIABLE_CI_3_90, STATE_VARIABLE_CLD_4_88, &STATE_VARIABLE_CLD_5_91);
  ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_35, MaybeEnd1_38, &MaybeEnd_41, &RecSaveCode_42, STATE_VARIABLE_CLD_5_91);
  ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_35, MaybeEnd_41, STATE_VARIABLE_CI_3_90, &STATE_VARIABLE_CLD_6_92);
  ll_backend__code_loc_dep__post_goal_update_4_p_0(SwitchGoalInfo_15, STATE_VARIABLE_CI_3_90, STATE_VARIABLE_CLD_6_92, &STATE_VARIABLE_CLD_7_93);
  ArgModes_43 = ll_backend__code_info__get_arginfo_1_f_0(STATE_VARIABLE_CI_3_90);
  HeadVars_44 = ll_backend__code_info__get_headvars_1_f_0(STATE_VARIABLE_CI_3_90);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__middle_rec_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), HeadVars_44, ArgModes_43, &Args_45);
  ll_backend__code_loc_dep__setup_return_5_p_0(Args_45, &LiveArgs_46, &EpilogCode_47, STATE_VARIABLE_CLD_7_93, STATE_VARIABLE_CLD_76);
  Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseSaveCode_39, EpilogCode_47);
  BaseCode_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseGoalCode_37, Var_95);
  Var_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecSaveCode_42, EpilogCode_47);
  RecCode_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecGoalCode_40, Var_96);
  {
    Var_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_98, 0) = ((MR_Box) (LiveArgs_46));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_String) ""));
  }
  LiveValCode_50 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_97)));
  BaseInstrs_51 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseCode_48);
  RecInstrs_52 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecCode_49);
  Var_100 = ll_backend__opt_util__block_refers_to_stack_1_f_0(BaseInstrs_51);
  succeeded = (Var_100 == (MR_Integer) 0);
  if (succeeded)
  {
    AvoidInstrs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_51, RecInstrs_52);
    ll_backend__middle_rec__find_unused_register_2_p_0(AvoidInstrs_53, &AuxReg_54);
    ll_backend__middle_rec__split_rec_code_3_p_0(RecInstrs_52, &BeforeInstrs0_55, &AfterInstrs_56);
    ll_backend__middle_rec__add_counter_to_livevals_3_p_0(BeforeInstrs0_55, AuxReg_54, &BeforeInstrs_57);
    ll_backend__code_info__get_next_label_3_p_0(&Loop1Label_58, STATE_VARIABLE_CI_3_90, &STATE_VARIABLE_CI_4_101);
    ll_backend__code_info__get_next_label_3_p_0(&Loop2Label_59, STATE_VARIABLE_CI_4_101, STATE_VARIABLE_CI_74);
    ll_backend__code_info__get_total_stackslot_count_2_p_0(*STATE_VARIABLE_CI_74, &FrameSize0_60);
    FrameSize_61 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*STATE_VARIABLE_CI_74, FrameSize0_60);
    ll_backend__middle_rec__generate_downloop_test_3_p_0(EntryTestInstrs_34, Loop1Label_58, &Loop1Test_62);
    succeeded = (FrameSize_61 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_109;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_115;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_133;
      MR_Word Var_141;

      MaybeIncrSp_63 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      MaybeDecrSp_64 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      {
        Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_104, 1) = ((MR_Box) (AuxReg_54));
        MR_hl_field(3, Var_104, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[1])));
      }
      {
        Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_103, 0) = ((MR_Box) (Var_104));
        MR_hl_field(0, Var_103, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
      }
      InitAuxReg_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_103)));
      {
        Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_115, 0) = ((MR_Box) (AuxReg_54));
      }
      {
        Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_111, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_111, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__middle_rec_scalar_common_2[1])));
        MR_hl_field(3, Var_111, 2) = ((MR_Box) (Var_115));
        MR_hl_field(3, Var_111, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[2])));
      }
      {
        Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_110, 1) = ((MR_Box) (AuxReg_54));
        MR_hl_field(3, Var_110, 2) = ((MR_Box) (Var_111));
      }
      {
        Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_109, 0) = ((MR_Box) (Var_110));
        MR_hl_field(0, Var_109, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
      }
      IncrAuxReg_66 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_109)));
      {
        Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_122, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__middle_rec_scalar_common_2[3])));
        MR_hl_field(3, Var_122, 2) = ((MR_Box) (Var_115));
        MR_hl_field(3, Var_122, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[2])));
      }
      {
        Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_121, 1) = ((MR_Box) (AuxReg_54));
        MR_hl_field(3, Var_121, 2) = ((MR_Box) (Var_122));
      }
      {
        Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_120, 0) = ((MR_Box) (Var_121));
        MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
      }
      DecrAuxReg_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_120)));
      {
        Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_133, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[3])));
        MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_115));
        MR_hl_field(3, Var_133, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[1])));
      }
      {
        Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_141, 0) = ((MR_Box) (Loop2Label_59));
      }
      {
        Var_132 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_132, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_132, 1) = ((MR_Box) (Var_133));
        MR_hl_field(3, Var_132, 2) = ((MR_Box) (Var_141));
      }
      {
        Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_131, 0) = ((MR_Box) (Var_132));
        MR_hl_field(0, Var_131, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
      }
      TestAuxReg_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_131)));
    }
    else
    {
      MR_String PushMsg_69;
      MR_Word Var_143;
      MR_Word Var_144;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_155;
      MR_Word Var_156;
      MR_Word Var_157;
      MR_Word Var_163;
      MR_Word Var_164;

      PushMsg_69 = ll_backend__proc_gen__push_msg_3_f_0(ModuleInfo_22, PredId_23, ProcId_24);
      {
        Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_144, 0) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(3, Var_144, 1) = ((MR_Box) (FrameSize_61));
        MR_hl_field(3, Var_144, 2) = ((MR_Box) (PushMsg_69));
        MR_hl_field(3, Var_144, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_143, 0) = ((MR_Box) (Var_144));
        MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_String) ""));
      }
      MaybeIncrSp_63 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_143)));
      {
        Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 25U));
        MR_hl_field(3, Var_148, 1) = ((MR_Box) (FrameSize_61));
      }
      {
        Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_147, 0) = ((MR_Box) (Var_148));
        MR_hl_field(0, Var_147, 1) = ((MR_Box) ((MR_String) ""));
      }
      MaybeDecrSp_64 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_147)));
      {
        Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_151, 1) = ((MR_Box) (AuxReg_54));
        MR_hl_field(3, Var_151, 2) = ((MR_Box) (&ll_backend__middle_rec_scalar_common_2[4]));
      }
      {
        Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(0, Var_150, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
      }
      InitAuxReg_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_150)));
      IncrAuxReg_66 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      DecrAuxReg_67 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      {
        Var_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_163, 0) = ((MR_Box) (AuxReg_54));
      }
      {
        Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_157, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__middle_rec_scalar_common_1[3])));
        MR_hl_field(3, Var_157, 2) = ((MR_Box) (&ll_backend__middle_rec_scalar_common_2[4]));
        MR_hl_field(3, Var_157, 3) = ((MR_Box) (Var_163));
      }
      {
        Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_164, 0) = ((MR_Box) (Loop2Label_59));
      }
      {
        Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_156, 1) = ((MR_Box) (Var_157));
        MR_hl_field(3, Var_156, 2) = ((MR_Box) (Var_164));
      }
      {
        Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
        MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
      }
      TestAuxReg_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_155)));
    }
    if ((AfterInstrs_56 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_180;
      MR_Word Var_181;
      MR_Word Var_183;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Word Var_186;
      MR_Word Var_187;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Word Var_190;
      MR_Word Var_192;
      MR_Word Var_193;
      MR_Word Var_194;
      MR_Word Var_195;

      {
        Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_169, 1) = ((MR_Box) (EntryLabel_25));
      }
      {
        Var_168 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_168, 0) = ((MR_Box) (Var_169));
        MR_hl_field(0, Var_168, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
      }
      {
        Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_173, 0) = ((MR_Box) (SlotsComment_21));
      }
      {
        Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
        MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
        MR_hl_field(1, Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
        MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_171));
      }
      Var_166 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_167);
      Var_177 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryTestInstrs_34);
      {
        Var_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_181, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_181, 1) = ((MR_Box) (Loop1Label_58));
      }
      {
        Var_180 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_180, 0) = ((MR_Box) (Var_181));
        MR_hl_field(0, Var_180, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
      }
      Var_179 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_180)));
      Var_184 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeInstrs_57);
      Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Loop1Test_62);
      {
        Var_190 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_190, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_190, 1) = ((MR_Box) (BaseLabel_32));
      }
      {
        Var_189 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_189, 0) = ((MR_Box) (Var_190));
        MR_hl_field(0, Var_189, 1) = ((MR_Box) ((MR_String) "start of base case"));
      }
      Var_188 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_189)));
      Var_193 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_51);
      Var_195 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[5])));
      Var_194 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_50, Var_195);
      Var_192 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_193, Var_194);
      Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_188, Var_192);
      Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_186, Var_187);
      Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_184, Var_185);
      Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_179, Var_183);
      Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_177, Var_178);
      *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_166, Var_176);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word BaseLabels_72;
      MR_Word Var_200;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_String Var_204;
      MR_Word Var_205;
      MR_Word Var_206;
      MR_Word Var_207;
      MR_String Var_208;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word Var_213;
      MR_Word Var_214;
      MR_Word Var_215;
      MR_Word Var_216;
      MR_String Var_217;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_224;
      MR_Word Var_225;
      MR_Word Var_226;
      MR_Word Var_227;
      MR_Word Var_228;
      MR_Word Var_229;
      MR_String Var_230;
      MR_Word Var_231;
      MR_Word Var_232;
      MR_Word Var_233;
      MR_Word Var_234;
      MR_Word Var_235;
      MR_Word Var_236;
      MR_Word Var_237;
      MR_Word Var_238;
      MR_Word Var_239;
      MR_Word Var_240;
      MR_Word Var_244;
      MR_Word Var_245;
      MR_Word Var_246;
      MR_String Var_247;
      MR_Word Var_248;
      MR_Word Var_249;
      MR_Word Var_250;
      MR_Word Var_251;
      MR_Word Var_252;
      MR_Word Var_253;

      ll_backend__middle_rec__find_labels_2_p_0(BaseInstrs_51, &BaseLabels_72);
      succeeded = (BaseLabels_72 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_204 = (MR_String) "Procedure entry point";
        Var_208 = (MR_String) "";
        {
          Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_203, 1) = ((MR_Box) (EntryLabel_25));
        }
        {
          Var_202 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_202, 0) = ((MR_Box) (Var_203));
          MR_hl_field(0, Var_202, 1) = ((MR_Box) (Var_204));
        }
        {
          Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_207, 0) = ((MR_Box) (SlotsComment_21));
        }
        {
          Var_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_206, 0) = ((MR_Box) (Var_207));
          MR_hl_field(0, Var_206, 1) = ((MR_Box) (Var_208));
        }
        {
          Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
          MR_hl_field(1, Var_205, 1) = ((MR_Box) (BaseLabels_72));
        }
        {
          Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_201, 0) = ((MR_Box) (Var_202));
          MR_hl_field(1, Var_201, 1) = ((MR_Box) (Var_205));
        }
        Var_200 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_201);
        Var_211 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryTestInstrs_34);
        Var_217 = (MR_String) "start of the down loop";
        {
          Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_216, 1) = ((MR_Box) (Loop1Label_58));
        }
        {
          Var_215 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_215, 0) = ((MR_Box) (Var_216));
          MR_hl_field(0, Var_215, 1) = ((MR_Box) (Var_217));
        }
        Var_214 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_215)));
        Var_221 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeInstrs_57);
        Var_223 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Loop1Test_62);
        Var_225 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_51);
        Var_230 = (MR_String) "";
        {
          Var_229 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_229, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_229, 1) = ((MR_Box) (Loop2Label_59));
        }
        {
          Var_228 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_228, 0) = ((MR_Box) (Var_229));
          MR_hl_field(0, Var_228, 1) = ((MR_Box) (Var_230));
        }
        Var_227 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_228)));
        Var_232 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterInstrs_56);
        Var_240 = (MR_Word) (&ll_backend__middle_rec_scalar_common_1[6]);
        Var_247 = (MR_String) "start of base case";
        Var_248 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_246 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_246, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(3, Var_246, 1) = ((MR_Box) (BaseLabel_32));
        }
        {
          Var_245 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_245, 0) = ((MR_Box) (Var_246));
          MR_hl_field(0, Var_245, 1) = ((MR_Box) (Var_247));
        }
        {
          Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_244, 0) = ((MR_Box) (Var_245));
          MR_hl_field(1, Var_244, 1) = ((MR_Box) (Var_248));
        }
        {
          Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_239, 0) = ((MR_Box) (Var_240));
          MR_hl_field(1, Var_239, 1) = ((MR_Box) (Var_244));
        }
        Var_238 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_239);
        Var_250 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_51);
        Var_253 = (MR_Word) (&ll_backend__middle_rec_scalar_common_1[5]);
        Var_252 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_253)));
        Var_251 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_50, Var_252);
        Var_249 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_250, Var_251);
        Var_237 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_238, Var_249);
        Var_236 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_50, Var_237);
        Var_235 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestAuxReg_68, Var_236);
        Var_234 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DecrAuxReg_67, Var_235);
        Var_233 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaybeDecrSp_64, Var_234);
        Var_231 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_232, Var_233);
        Var_226 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_227, Var_231);
        Var_224 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_225, Var_226);
        Var_222 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_223, Var_224);
        Var_220 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_221, Var_222);
        Var_219 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IncrAuxReg_66, Var_220);
        Var_218 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaybeIncrSp_63, Var_219);
        Var_213 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_214, Var_218);
        Var_212 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InitAuxReg_65, Var_213);
        Var_210 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_211, Var_212);
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_200, Var_210);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__middle_rec__find_labels_2_p_0(
  MR_Word Instrs_3,
  MR_Word * Labels_4)
{
  ll_backend__middle_rec__find_labels_acc_3_p_0(Instrs_3, (MR_Word) ((MR_Unsigned) 0U), Labels_4);
}

static void MR_CALL 
ll_backend__middle_rec__find_labels_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Labels_0_2,
  MR_Word * STATE_VARIABLE_Labels_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Labels_3 = STATE_VARIABLE_Labels_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Uinstr_10 = ((MR_Word) ((MR_hl_field(0, Instr_7, 0))));
      MR_Word STATE_VARIABLE_Labels_1_18;
      MR_Word Label_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Labels_0_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_10, 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_12 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, 1))));
        {
          STATE_VARIABLE_Labels_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Labels_1_18, 0) = ((MR_Box) (Label_12));
          MR_hl_field(1, STATE_VARIABLE_Labels_1_18, 1) = ((MR_Box) (STATE_VARIABLE_Labels_0_2));
        }
      }
      else
      {
        MR_Word Block_15;

        succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_10, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Block_15 = ((MR_Word) ((MR_hl_field(3, Uinstr_10, 3))));
          ll_backend__middle_rec__find_labels_acc_3_p_0(Block_15, STATE_VARIABLE_Labels_0_2, &STATE_VARIABLE_Labels_1_18);
        }
        else
          STATE_VARIABLE_Labels_1_18 = STATE_VARIABLE_Labels_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_8;
      next_value_of_STATE_VARIABLE_Labels_0_2 = STATE_VARIABLE_Labels_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Labels_0_2 = next_value_of_STATE_VARIABLE_Labels_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_2_p_0(
  MR_Word Instrs_3,
  MR_Word * UnusedReg_4)
{
  MR_Word Used0_5;
  MR_Word Used1_6;
  MR_Word UsedList_7;

  mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &Used0_5);
  ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_3, Used0_5, &Used1_6);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Used1_6, &UsedList_7);
  ll_backend__middle_rec__find_unused_register_acc_3_p_0(UsedList_7, (MR_Integer) 1, UnusedReg_4);
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
  MR_Word Uinstr_4,
  MR_Word STATE_VARIABLE_Used_0_76,
  MR_Word * STATE_VARIABLE_Used_77)
{
  switch (MR_tag((MR_Word) Uinstr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
      break;
    case (MR_Integer) 2:
      {
        MR_Word LvalSet_28 = ((MR_Word) ((MR_hl_field(2, Uinstr_4, 0))));
        MR_Word LvalList_29;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_28, &LvalList_29);
        ll_backend__middle_rec__find_used_registers_lvals_3_p_0(LvalList_29, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Uinstr_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_32 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

            ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_32, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_33 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word Rval_34 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word STATE_VARIABLE_Used_3_80;

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_33, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_3_80);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_34, STATE_VARIABLE_Used_3_80, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_115 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word Rval_116 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word STATE_VARIABLE_Used_3_117;

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_115, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_3_117);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_116, STATE_VARIABLE_Used_3_117, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_109 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_109, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_119 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_119, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_128 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_128, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_127 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_127, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_39 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 7))));
            MR_Word MaybeReuse_40 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 8))));
            MR_Word STATE_VARIABLE_Used_5_82;
            MR_Word STATE_VARIABLE_Used_6_83;
            MR_Word STATE_VARIABLE_Used_7_84;
            MR_Word Lval_103 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word Rval_104 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 4))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_103, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_5_82);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_104, STATE_VARIABLE_Used_5_82, &STATE_VARIABLE_Used_6_83);
            if ((MaybeRegionRval_39 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Used_7_84 = STATE_VARIABLE_Used_6_83;
            else
            {
              MR_Word RegionRval_41 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_39, 0))));

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(RegionRval_41, STATE_VARIABLE_Used_6_83, &STATE_VARIABLE_Used_7_84);
            }
            if ((MaybeReuse_40 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_7_84;
            else
            {
              MR_Word ReuseRval_42 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_40, 0))));
              MR_Word MaybeFlagLval_43 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_40, 1))));
              MR_Word STATE_VARIABLE_Used_8_85;

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ReuseRval_42, STATE_VARIABLE_Used_7_84, &STATE_VARIABLE_Used_8_85);
              if ((MaybeFlagLval_43 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_8_85;
              else
              {
                MR_Word FlagLval_44 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_43, 0))));

                ll_backend__middle_rec__find_used_registers_lval_3_p_0(FlagLval_44, STATE_VARIABLE_Used_8_85, STATE_VARIABLE_Used_77);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_125 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_125, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_122 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_122, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_118 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_118, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_46 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));
            MR_Word NumLval_47 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 4))));
            MR_Word AddrLval_48 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 5))));
            MR_Word STATE_VARIABLE_Used_10_87;
            MR_Word STATE_VARIABLE_Used_11_88;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(IdRval_46, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_10_87);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(NumLval_47, STATE_VARIABLE_Used_10_87, &STATE_VARIABLE_Used_11_88);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(AddrLval_48, STATE_VARIABLE_Used_11_88, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_50 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 3))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ValueRval_50, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_129 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_129, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_121 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_121, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_126 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_126, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_120 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_120, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 24:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 25:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 26:
          *STATE_VARIABLE_Used_77 = STATE_VARIABLE_Used_0_76;
          break;
        case (MR_Integer) 27:
          {
            MR_Word Components_52 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            ll_backend__middle_rec__find_used_registers_components_3_p_0(Components_52, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_123 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_123, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_110 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_110, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_124 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_124, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word LCLval_70 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCLval_70, STATE_VARIABLE_Used_0_76, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_71 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word LCSLval_72 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word STATE_VARIABLE_Used_18_95;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_71, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_18_95);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCSLval_72, STATE_VARIABLE_Used_18_95, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_74 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));
            MR_Word STATE_VARIABLE_Used_20_97;
            MR_Word LCRval_111 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_111, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_20_97);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCSRval_74, STATE_VARIABLE_Used_20_97, STATE_VARIABLE_Used_77);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word STATE_VARIABLE_Used_22_99;
            MR_Word LCRval_112 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 1))));
            MR_Word LCSRval_113 = ((MR_Word) ((MR_hl_field(3, Uinstr_4, 2))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_112, STATE_VARIABLE_Used_0_76, &STATE_VARIABLE_Used_22_99);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCSRval_113, STATE_VARIABLE_Used_22_99, STATE_VARIABLE_Used_77);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Uinstr_7;
      MR_Word Instrs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_Used_1_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      Uinstr_7 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
      ll_backend__middle_rec__find_used_registers_instr_3_p_0(Uinstr_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_9;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Used_0_2 = next_value_of_STATE_VARIABLE_Used_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Lvals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Used_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lvals_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Used_0_2 = next_value_of_STATE_VARIABLE_Used_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_components_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Comp_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Comps_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Used_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      switch (MR_tag((MR_Word) Comp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Used_1_12 = STATE_VARIABLE_Used_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word In_13 = ((MR_Word) ((MR_hl_field(1, Comp_7, 0))));

            ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(In_13, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Out_16 = ((MR_Word) ((MR_hl_field(2, Comp_7, 0))));

            ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(Out_16, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Comp_7, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_1_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_1_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Used_1_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Used_1_12 = STATE_VARIABLE_Used_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Comps_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Used_0_2 = next_value_of_STATE_VARIABLE_Used_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Output_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Outputs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(0, Output_7, 0))));
      MR_Word STATE_VARIABLE_Used_1_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_10, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Outputs_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Used_0_2 = next_value_of_STATE_VARIABLE_Used_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Used_0_2,
  MR_Word * STATE_VARIABLE_Used_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Input_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Inputs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(0, Input_7, 4))));
      MR_Word STATE_VARIABLE_Used_1_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_14, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Used_0_2 = next_value_of_STATE_VARIABLE_Used_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_lval_3_p_0(
  MR_Word tscc_proc_1_input_1_Lval_4,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13)
{
  MR_Word tscc_proc_2_input_1_Rval_4;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
  MR_Word tscc_output_1_STATE_VARIABLE_Used_13;

  // The code for TSCC PROC 1: pred ll_backend.middle_rec.find_used_registers_lval/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.middle_rec.find_used_registers_lval/3-0
  ;
  // proc 2 in TSCC: pred ll_backend.middle_rec.find_used_registers_rval/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Lval_4 = tscc_proc_1_input_1_Lval_4;
    MR_Word STATE_VARIABLE_Used_0_12 = tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
    MR_Word STATE_VARIABLE_Used_13;
    MR_bool succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 1);
    MR_Integer N_6;
    MR_Word Var_14;

    if (succeeded)
    {
      Var_14 = ((MR_Unsigned) ((MR_hl_field(1, Lval_4, 0))) & (MR_Integer) 1);
      N_6 = ((MR_Integer) ((MR_hl_field(1, Lval_4, 1))));
      succeeded = (Var_14 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Integer N1_7;
      MR_Box conv0_N1_7;

      mercury__builtin__copy_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (N_6)), &conv0_N1_7);
      N1_7 = ((MR_Integer) (conv0_N1_7));
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (N1_7)), STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_13);
    }
    else
    {
      MR_Word Rval_9;
      MR_Word FieldNum_10;

      succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_4, 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Rval_9 = ((MR_Word) ((MR_hl_field(3, Lval_4, 2))));
        FieldNum_10 = ((MR_Word) ((MR_hl_field(3, Lval_4, 3))));
        {
          MR_Word STATE_VARIABLE_Used_2_16;
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

          ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_2_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_2_16;
          tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
          goto top_of_proc_2;
        }
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_4, 0)))) == (MR_Integer) 12)));
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
            return;
          }
        STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_0_12;
      }
    }
    tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Rval_4 = tscc_proc_2_input_1_Rval_4;
    MR_Word STATE_VARIABLE_Used_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
    MR_Word STATE_VARIABLE_Used_19;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(0, Rval_4, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Lval_4 = Lval_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = STATE_VARIABLE_Used_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Lval_4 = next_value_of_tscc_proc_1_input_1_Lval_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_25 = ((MR_Word) ((MR_hl_field(2, Rval_4, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_25;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_11 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_11;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_26 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_26;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_Used_3_24;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(SubRvalA_15, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_3_24);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_4 = SubRvalB_16;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_3_24;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_17 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));

              switch (MR_tag((MR_Word) MemRef_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(0, MemRef_17, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_27;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(1, MemRef_17, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_30;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval1_33 = ((MR_Word) ((MR_hl_field(2, MemRef_17, 0))));
                    MR_Word Rval2_35 = ((MR_Word) ((MR_hl_field(2, MemRef_17, 2))));
                    MR_Word STATE_VARIABLE_Used_1_38;
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_33, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_1_38);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_35;
                    next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_1_38;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_19;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Used_13 = tscc_output_1_STATE_VARIABLE_Used_13;
  return;
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
  MR_Word tscc_proc_2_input_1_Rval_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13)
{
  MR_Word tscc_proc_1_input_1_Lval_4;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
  MR_Word tscc_output_1_STATE_VARIABLE_Used_13;

  // The code for TSCC PROC 2: pred ll_backend.middle_rec.find_used_registers_rval/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.middle_rec.find_used_registers_lval/3-0
  ;
  // proc 2 in TSCC: pred ll_backend.middle_rec.find_used_registers_rval/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Lval_4 = tscc_proc_1_input_1_Lval_4;
    MR_Word STATE_VARIABLE_Used_0_12 = tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
    MR_Word STATE_VARIABLE_Used_13;
    MR_bool succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 1);
    MR_Integer N_6;
    MR_Word Var_14;

    if (succeeded)
    {
      Var_14 = ((MR_Unsigned) ((MR_hl_field(1, Lval_4, 0))) & (MR_Integer) 1);
      N_6 = ((MR_Integer) ((MR_hl_field(1, Lval_4, 1))));
      succeeded = (Var_14 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Integer N1_7;
      MR_Box conv0_N1_7;

      mercury__builtin__copy_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (N_6)), &conv0_N1_7);
      N1_7 = ((MR_Integer) (conv0_N1_7));
      mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (N1_7)), STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_13);
    }
    else
    {
      MR_Word Rval_9;
      MR_Word FieldNum_10;

      succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_4, 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Rval_9 = ((MR_Word) ((MR_hl_field(3, Lval_4, 2))));
        FieldNum_10 = ((MR_Word) ((MR_hl_field(3, Lval_4, 3))));
        {
          MR_Word STATE_VARIABLE_Used_2_16;
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

          ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_2_16);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
          next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_2_16;
          tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
          goto top_of_proc_2;
        }
      }
      else
      {
        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_4, 0)))) == (MR_Integer) 12)));
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
            return;
          }
        STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_0_12;
      }
    }
    tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Rval_4 = tscc_proc_2_input_1_Rval_4;
    MR_Word STATE_VARIABLE_Used_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
    MR_Word STATE_VARIABLE_Used_19;

    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(0, Rval_4, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Lval_4 = Lval_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = STATE_VARIABLE_Used_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Lval_4 = next_value_of_tscc_proc_1_input_1_Lval_4;
          tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_25 = ((MR_Word) ((MR_hl_field(2, Rval_4, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_25;
          MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
          tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_11 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_11;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_26 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_26;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
              MR_Word STATE_VARIABLE_Used_3_24;
              MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(SubRvalA_15, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_3_24);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Rval_4 = SubRvalB_16;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_3_24;
              tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
              tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_17 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));

              switch (MR_tag((MR_Word) MemRef_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(0, MemRef_17, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_27;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(1, MemRef_17, 0))));
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_30;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval1_33 = ((MR_Word) ((MR_hl_field(2, MemRef_17, 0))));
                    MR_Word Rval2_35 = ((MR_Word) ((MR_hl_field(2, MemRef_17, 2))));
                    MR_Word STATE_VARIABLE_Used_1_38;
                    MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                    MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                    ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_33, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_1_38);
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_35;
                    next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_1_38;
                    tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                    tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                    goto top_of_proc_2;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_19;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Used_13 = tscc_output_1_STATE_VARIABLE_Used_13;
  return;
}

static void MR_CALL 
ll_backend__middle_rec__find_unused_register_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(1, base, 1) = ((MR_Box) (N_2));
      }
    else
    {
      MR_Integer H_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (N_2 < H_6);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(1, base, 1) = ((MR_Box) (N_2));
        }
      else
      {
        MR_Integer N1_10 = (MR_Integer) ((MR_Unsigned) N_2 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = T_7;
        MR_Integer next_value_of_N_2 = N1_10;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        N_2 = next_value_of_N_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__middle_rec__add_counter_to_livevals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Instr_8;
    MR_Word Instrs_9;
    MR_Word Lives0_10;
    MR_String Comment_11 = ((MR_String) ((MR_hl_field(0, Instr0_5, 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Instr0_5, 0))));

    succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
    if (succeeded)
    {
      Lives0_10 = ((MR_Word) ((MR_hl_field(2, Var_13, 0))));
      {
        MR_Word Lives_12;
        MR_Word Var_14;

        mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (HeadVar__2_2)), Lives0_10, &Lives_12);
        {
          Var_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_14, 0) = ((MR_Box) (Lives_12));
        }
        {
          Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Instr_8, 0) = ((MR_Box) (Var_14));
          MR_hl_field(0, Instr_8, 1) = ((MR_Box) (Comment_11));
        }
      }
    }
    else
      Instr_8 = Instr0_5;
    ll_backend__middle_rec__add_counter_to_livevals_3_p_0(Instrs0_6, HeadVar__2_2, &Instrs_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Instr_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Instrs_9));
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Before_2,
  MR_Word * After_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
      return;
    }
  else
  {
    MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Instr0_8, 0))));

    succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      MR_Word Instrs3_21;
      MR_Word Instrs2_19;
      MR_Word Instr2_20;
      MR_Word Var_26;

      ll_backend__opt_util__skip_comments_2_p_0(Instrs1_9, &Instrs2_19);
      succeeded = (Instrs2_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Instr2_20 = ((MR_Word) ((MR_hl_field(1, Instrs2_19, 0))));
        Instrs3_21 = ((MR_Word) ((MR_hl_field(1, Instrs2_19, 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(0, Instr2_20, 0))));
        succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, 0)))) == (MR_Integer) 5)));
      }
      if (succeeded)
      {
        *Before_2 = (MR_Word) ((MR_Unsigned) 0U);
        *After_3 = Instrs3_21;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
          return;
        }
    }
    else
    {
      MR_Word Before1_24;

      ll_backend__middle_rec__split_rec_code_3_p_0(Instrs1_9, &Before1_24, After_3);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Before_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (Before1_24));
      }
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__generate_downloop_test_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Target_2,
  MR_Word * Instrs_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
      return;
    }
  else
  {
    MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Test_12;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Instr0_8, 0))));

    succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_19, 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      Test_12 = ((MR_Word) ((MR_hl_field(3, Var_19, 1))));
      {
        MR_Word NegTest_17;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;

        if (!((Instrs0_9 == (MR_Word) ((MR_Unsigned) 0U))))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
            return;
          }
        ll_backend__code_util__negate_rval_2_p_0(Test_12, &NegTest_17);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Target_2));
        }
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (NegTest_17));
          MR_hl_field(3, Var_23, 2) = ((MR_Box) (Var_24));
        }
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_23));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Instrs_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Word Instrs1_18;

      ll_backend__middle_rec__generate_downloop_test_3_p_0(Instrs0_9, Target_2, &Instrs1_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Instrs_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_8));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_18));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeInfo_5)
{
  MR_bool succeeded;
  MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Goals_6;
  MR_Word Var_7;

  succeeded = ((((MR_tag((MR_Word) GoalExpr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_7 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, 1))) & (MR_Integer) 1);
    Goals_6 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
    succeeded = (Var_7 == (MR_Integer) 0);
    if (succeeded)
      succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(Goals_6, CodeInfo_5);
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CodeInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Goal_3;
    MR_Word Goals_4;
    MR_Word GoalExpr_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));
      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word OnlyBuiltinsGoalExpr_201;
            MR_Word next_value_of_HeadVar__1_1;

            OnlyBuiltinsGoalExpr_201 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_15);
            succeeded = (OnlyBuiltinsGoalExpr_201 == (MR_Integer) 1);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Goals_4;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_32 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
            MR_Word OnlyBuiltinsGoalExpr_325;
            MR_Word next_value_of_HeadVar__1_1;

            switch (MR_tag((MR_Word) Uni_32)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_44 = ((MR_Word) ((MR_hl_field(0, Uni_32, 6))));

                  if ((SubInfo_44 == (MR_Word) ((MR_Unsigned) 0U)))
                    OnlyBuiltinsGoalExpr_325 = (MR_Integer) 1;
                  else
                  {
                    MR_Word TakeAddressFields_45 = ((MR_Word) ((MR_hl_field(1, SubInfo_44, 0))));

                    if ((TakeAddressFields_45 == (MR_Word) ((MR_Unsigned) 0U)))
                      OnlyBuiltinsGoalExpr_325 = (MR_Integer) 1;
                    else
                      OnlyBuiltinsGoalExpr_325 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                OnlyBuiltinsGoalExpr_325 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                OnlyBuiltinsGoalExpr_325 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_32, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_325 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_325 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            succeeded = (OnlyBuiltinsGoalExpr_325 == (MR_Integer) 1);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Goals_4;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 0))));
            MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, 1))));
            MR_Word BuiltinState_26 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_6, 3))) & (MR_Integer) 1);

            switch (BuiltinState_26) {
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
                {
                  MR_Word Var_214;
                  MR_Word PredId_221;
                  MR_Integer ProcId_222;

                  ll_backend__code_info__get_pred_id_2_p_0(CodeInfo_5, &PredId_221);
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_221, Var_23);
                  if (succeeded)
                  {
                    ll_backend__code_info__get_proc_id_2_p_0(CodeInfo_5, &ProcId_222);
                    succeeded = (ProcId_222 == Var_24);
                    if (succeeded)
                    {
                      Var_214 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_4);
                      succeeded = (Var_214 == (MR_Integer) 1);
                    }
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_6, 1))) & (MR_Integer) 1);
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
                MR_Word OnlyBuiltinsGoalExpr_108;
                MR_Word next_value_of_HeadVar__1_1;

                switch (ConjType_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_108 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_108 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_11);
                    break;
                }
                succeeded = (OnlyBuiltinsGoalExpr_108 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
                MR_Word OnlyBuiltinsGoalExpr_139;
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_139 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_75);
                succeeded = (OnlyBuiltinsGoalExpr_139 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
                MR_Word OnlyBuiltinsGoalExpr_294;
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_294 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_14);
                succeeded = (OnlyBuiltinsGoalExpr_294 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
                MR_Word SubGoal_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
                MR_Word OnlyBuiltinsGoalExpr_263;
                MR_Word FGT_18;
                MR_Word next_value_of_HeadVar__1_1;

                succeeded = ((((MR_tag((MR_Word) Reason_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_16, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_18 = ((MR_Unsigned) ((MR_hl_field(3, Reason_16, 2))) & (MR_Integer) 3);
                  switch (FGT_18) {
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
                  OnlyBuiltinsGoalExpr_263 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_263 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_76);
                succeeded = (OnlyBuiltinsGoalExpr_263 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
                MR_Word Then_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
                MR_Word Else_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
                MR_Word OnlyBuiltinsGoalExpr_170;
                MR_Word Var_70;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word next_value_of_HeadVar__1_1;

                Var_70 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_20);
                succeeded = (Var_70 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_71 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_21);
                  succeeded = (Var_71 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_72 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_22);
                    succeeded = (Var_72 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  OnlyBuiltinsGoalExpr_170 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_170 = (MR_Integer) 0;
                succeeded = (OnlyBuiltinsGoalExpr_170 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_10 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_10;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_27 = ((MR_Word) ((MR_hl_field(1, GoalExpr_3, 3))));

          switch (MR_tag((MR_Word) Uni_27)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubInfo_39 = ((MR_Word) ((MR_hl_field(0, Uni_27, 6))));

                if ((SubInfo_39 == (MR_Word) ((MR_Unsigned) 0U)))
                  HeadVar__2_2 = (MR_Integer) 1;
                else
                {
                  MR_Word TakeAddressFields_40 = ((MR_Word) ((MR_hl_field(1, SubInfo_39, 0))));

                  if ((TakeAddressFields_40 == (MR_Word) ((MR_Unsigned) 0U)))
                    HeadVar__2_2 = (MR_Integer) 1;
                  else
                    HeadVar__2_2 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Uni_27, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  HeadVar__2_2 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_Integer) 0;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinState_21 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_3, 3))) & (MR_Integer) 1);

          switch (BuiltinState_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HeadVar__2_2 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_5 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_3, 1))) & (MR_Integer) 1);
              MR_Word Goals_6 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));

              switch (ConjType_5) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_6);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_70);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_9 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_9);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word FGT_13;

              succeeded = ((((MR_tag((MR_Word) Reason_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_11, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_13 = ((MR_Unsigned) ((MR_hl_field(3, Reason_11, 2))) & (MR_Integer) 3);
                switch (FGT_13) {
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
                HeadVar__2_2 = (MR_Integer) 1;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_71;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word Then_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));
              MR_Word Else_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 4))));
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_67;

              Var_65 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_15);
              succeeded = (Var_65 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_66 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_16);
                succeeded = (Var_66 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_67 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_17);
                  succeeded = (Var_67 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                HeadVar__2_2 = (MR_Integer) 1;
              else
                HeadVar__2_2 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
            break;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_14 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word OnlyBuiltinsGoal_79;

            OnlyBuiltinsGoal_79 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_14);
            switch (OnlyBuiltinsGoal_79) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_31 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 3))));

            switch (MR_tag((MR_Word) Uni_31)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_43 = ((MR_Word) ((MR_hl_field(0, Uni_31, 6))));

                  if ((SubInfo_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_44 = ((MR_Word) ((MR_hl_field(1, SubInfo_43, 0))));

                    if ((TakeAddressFields_44 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    else
                      HeadVar__2_2 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_31, 0))))) {
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
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinState_25 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_7, 3))) & (MR_Integer) 1);

            switch (BuiltinState_25) {
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
                HeadVar__2_2 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_9 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, 1))) & (MR_Integer) 1);
                MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));

                switch (ConjType_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_84;

                      OnlyBuiltinsGoal_84 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_10);
                      switch (OnlyBuiltinsGoal_84) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                            // direct tailcall eliminated
                            ;
                            HeadVar__1_1 = next_value_of_HeadVar__1_1;
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
                MR_Word OnlyBuiltinsGoal_77;

                OnlyBuiltinsGoal_77 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_74);
                switch (OnlyBuiltinsGoal_77) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
                MR_Word OnlyBuiltinsGoal_82;

                OnlyBuiltinsGoal_82 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_13);
                switch (OnlyBuiltinsGoal_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
                MR_Word SubGoal_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
                MR_Word FGT_17;

                succeeded = ((((MR_tag((MR_Word) Reason_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_15, 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_17 = ((MR_Unsigned) ((MR_hl_field(3, Reason_15, 2))) & (MR_Integer) 3);
                  switch (FGT_17) {
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
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                {
                  MR_Word OnlyBuiltinsGoal_89;

                  OnlyBuiltinsGoal_89 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_75);
                  switch (OnlyBuiltinsGoal_89) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                        // direct tailcall eliminated
                        ;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        continue;
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
                MR_Word Then_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 3))));
                MR_Word Else_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 4))));
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;

                Var_69 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_19);
                succeeded = (Var_69 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_70 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_20);
                  succeeded = (Var_70 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_71 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_21);
                    succeeded = (Var_71 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                  HeadVar__2_2 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
              break;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GoalExpr_10;

      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_9, 2))));
      GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_17 = (MR_Word) ((MR_Word) (GoalExpr_10));
            MR_Word OnlyBuiltinsGoal_82;

            OnlyBuiltinsGoal_82 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_17);
            switch (OnlyBuiltinsGoal_82) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_34 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 3))));

            switch (MR_tag((MR_Word) Uni_34)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_46 = ((MR_Word) ((MR_hl_field(0, Uni_34, 6))));

                  if ((SubInfo_46 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_47 = ((MR_Word) ((MR_hl_field(1, SubInfo_46, 0))));

                    if ((TakeAddressFields_47 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    else
                      HeadVar__2_2 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Uni_34, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BuiltinState_28 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_10, 3))) & (MR_Integer) 1);

            switch (BuiltinState_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, 1))) & (MR_Integer) 1);
                MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

                switch (ConjType_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_87;

                      OnlyBuiltinsGoal_87 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_13);
                      switch (OnlyBuiltinsGoal_87) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                            // direct tailcall eliminated
                            ;
                            HeadVar__1_1 = next_value_of_HeadVar__1_1;
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
                MR_Word OnlyBuiltinsGoal_80;

                OnlyBuiltinsGoal_80 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_77);
                switch (OnlyBuiltinsGoal_80) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
                MR_Word OnlyBuiltinsGoal_85;

                OnlyBuiltinsGoal_85 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_16);
                switch (OnlyBuiltinsGoal_85) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      ;
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
                MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
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
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                {
                  MR_Word OnlyBuiltinsGoal_92;

                  OnlyBuiltinsGoal_92 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_78);
                  switch (OnlyBuiltinsGoal_92) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                        // direct tailcall eliminated
                        ;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        continue;
                      }
                      break;
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
                MR_Word Then_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
                MR_Word Else_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;

                Var_72 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_22);
                succeeded = (Var_72 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_73 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_23);
                  succeeded = (Var_73 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_74 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_24);
                    succeeded = (Var_74 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                  HeadVar__2_2 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
              break;
          }
          break;
      }
    }
    return HeadVar__2_2;
    break;
  }
}

void mercury__ll_backend__middle_rec__init(void)
{
}

void mercury__ll_backend__middle_rec__init_type_tables(void)
{
}

void mercury__ll_backend__middle_rec__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__middle_rec__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.middle_rec.
