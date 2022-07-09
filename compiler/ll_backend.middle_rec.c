/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version 22.01.3
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
#include "check_hlds.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word Var_11,
  MR_Word BaseConsId_12,
  MR_Word Base_13,
  MR_Word Recursive_14,
  MR_Word SwitchGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73,
  MR_Word STATE_VARIABLE_CLD_0_74,
  MR_Word * STATE_VARIABLE_CLD_75);

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
  MR_Word STATE_VARIABLE_Used_0_75,
  MR_Word * STATE_VARIABLE_Used_76);

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

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[4][1];




static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[2])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[4]))),
    ((MR_Box) ((MR_String) "exit from base case"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[4]))),
    ((MR_Box) ((MR_String) "exit from recursive case"))
  },
};

static /* final */ const MR_Box ll_backend__middle_rec_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



MR_bool MR_CALL 
ll_backend__middle_rec__match_and_generate_6_p_0(
  MR_Word Goal_7,
  MR_Word * Instrs_8,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1))));
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
    MR_Word Var_30;
    MR_Word GoalExpr_37;
    MR_Word Goals_39;
    MR_Word Var_40;

    succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
      Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))) & (MR_Integer) 1);
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
      succeeded = (Var_24 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Case1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
          succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Case2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
            succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsId1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 0))));
              Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 1))));
              Goal1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 2))));
              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ConsId2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 0))));
                Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 1))));
                Goal2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 2))));
                succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_30 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Goal1_17);
                  succeeded = (Var_30 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    GoalExpr_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal2_19, (MR_Integer) 0))));
                    succeeded = ((((MR_tag((MR_Word) GoalExpr_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 1))) & (MR_Integer) 1);
                      Goals_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 2))));
                      succeeded = (Var_40 == (MR_Integer) 0);
                      if (succeeded)
                        succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(Goals_39, STATE_VARIABLE_CI_0_20);
                    }
                  }
                  if (succeeded)
                    succeeded = ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(Var_13, ConsId1_16, Goal1_17, Goal2_19, GoalInfo_12, Instrs_8, STATE_VARIABLE_CI_0_20, STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_0_22, STATE_VARIABLE_CLD_23);
                  else
                  {
                    MR_Word Var_33;
                    MR_Word GoalExpr_42;
                    MR_Word Goals_44;
                    MR_Word Var_45;

                    Var_33 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Goal2_19);
                    succeeded = (Var_33 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      GoalExpr_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_17, (MR_Integer) 0))));
                      succeeded = ((((MR_tag((MR_Word) GoalExpr_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 1))) & (MR_Integer) 1);
                        Goals_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 2))));
                        succeeded = (Var_45 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = ll_backend__middle_rec__contains_simple_recursive_call_conj_2_p_0(Goals_44, STATE_VARIABLE_CI_0_20);
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
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word Var_11,
  MR_Word BaseConsId_12,
  MR_Word Base_13,
  MR_Word Recursive_14,
  MR_Word SwitchGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_72,
  MR_Word * STATE_VARIABLE_CI_73,
  MR_Word STATE_VARIABLE_CLD_0_74,
  MR_Word * STATE_VARIABLE_CLD_75)
{
  {
    MR_bool succeeded;
    MR_Word StackSlots_19;
    MR_Word VarSet_20;
    MR_String SlotsComment_21;
    MR_Word ModuleInfo_22;
    MR_Word PredId_23;
    MR_Integer ProcId_24;
    MR_Word EntryLabel_25;
    MR_Word VarCode_26;
    MR_Word VarRval_27;
    MR_String VarName_28;
    MR_Word VarType_29;
    MR_Word CheaperTagTest_30;
    MR_Word BaseLabel_31;
    MR_Word TestCode_32;
    MR_Word EntryTestInstrs_33;
    MR_Word StoreMap_34;
    MR_Word BranchStart_35;
    MR_Word BaseGoalCode_36;
    MR_Word MaybeEnd1_37;
    MR_Word BaseSaveCode_38;
    MR_Word RecGoalCode_39;
    MR_Word MaybeEnd_40;
    MR_Word RecSaveCode_41;
    MR_Word ArgModes_42;
    MR_Word HeadVars_43;
    MR_Word Args_44;
    MR_Word LiveArgs_45;
    MR_Word EpilogCode_46;
    MR_Word BaseCode_47;
    MR_Word RecCode_48;
    MR_Word LiveValCode_49;
    MR_Word BaseInstrs_50;
    MR_Word RecInstrs_51;
    MR_Word AvoidInstrs_52;
    MR_Word AuxReg_53;
    MR_Word BeforeInstrs0_54;
    MR_Word AfterInstrs_55;
    MR_Word BeforeInstrs_56;
    MR_Word Loop1Label_57;
    MR_Word Loop2Label_58;
    MR_Integer FrameSize0_59;
    MR_Integer FrameSize_60;
    MR_Word Loop1Test_61;
    MR_Word MaybeIncrSp_62;
    MR_Word MaybeDecrSp_63;
    MR_Word InitAuxReg_64;
    MR_Word IncrAuxReg_65;
    MR_Word DecrAuxReg_66;
    MR_Word TestAuxReg_67;
    MR_Word STATE_VARIABLE_CLD_78_78;
    MR_Word STATE_VARIABLE_CLD_79_79;
    MR_Word STATE_VARIABLE_CI_81_81;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_CI_84_84;
    MR_Word STATE_VARIABLE_CLD_85_85;
    MR_Word STATE_VARIABLE_CLD_87_87;
    MR_Word STATE_VARIABLE_CI_89_89;
    MR_Word STATE_VARIABLE_CLD_90_90;
    MR_Word STATE_VARIABLE_CLD_91_91;
    MR_Word STATE_VARIABLE_CLD_92_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word STATE_VARIABLE_CI_100_100;

    ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_0_72, &StackSlots_19);
    ll_backend__code_info__get_varset_2_p_0(STATE_VARIABLE_CI_0_72, &VarSet_20);
    SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(StackSlots_19, VarSet_20);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_72, &ModuleInfo_22);
    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_0_72, &PredId_23);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_0_72, &ProcId_24);
    EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_22, PredId_23, ProcId_24, (MR_Word) ((MR_Unsigned) 0U));
    ll_backend__code_loc_dep__pre_goal_update_4_p_0(SwitchGoalInfo_15, (MR_Integer) 0, STATE_VARIABLE_CLD_0_74, &STATE_VARIABLE_CLD_78_78);
    ll_backend__code_loc_dep__produce_variable_5_p_0(Var_11, &VarCode_26, &VarRval_27, STATE_VARIABLE_CLD_78_78, &STATE_VARIABLE_CLD_79_79);
    VarName_28 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_0_72, Var_11);
    VarType_29 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_72, Var_11);
    CheaperTagTest_30 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_72, VarType_29);
    ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(VarRval_27, VarName_28, BaseConsId_12, CheaperTagTest_30, (MR_Integer) 0, &BaseLabel_31, &TestCode_32, STATE_VARIABLE_CI_0_72, &STATE_VARIABLE_CI_81_81);
    Var_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_26, TestCode_32);
    EntryTestInstrs_33 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_82);
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_15, &StoreMap_34);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_79_79, &BranchStart_35);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Base_13, &BaseGoalCode_36, STATE_VARIABLE_CI_81_81, &STATE_VARIABLE_CI_84_84, STATE_VARIABLE_CLD_79_79, &STATE_VARIABLE_CLD_85_85);
    ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_34, (MR_Word) ((MR_Unsigned) 0U), &MaybeEnd1_37, &BaseSaveCode_38, STATE_VARIABLE_CLD_85_85);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_35, STATE_VARIABLE_CI_84_84, &STATE_VARIABLE_CLD_87_87);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Recursive_14, &RecGoalCode_39, STATE_VARIABLE_CI_84_84, &STATE_VARIABLE_CI_89_89, STATE_VARIABLE_CLD_87_87, &STATE_VARIABLE_CLD_90_90);
    ll_backend__code_loc_dep__generate_branch_end_5_p_0(StoreMap_34, MaybeEnd1_37, &MaybeEnd_40, &RecSaveCode_41, STATE_VARIABLE_CLD_90_90);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_34, MaybeEnd_40, STATE_VARIABLE_CI_89_89, &STATE_VARIABLE_CLD_91_91);
    ll_backend__code_loc_dep__post_goal_update_4_p_0(SwitchGoalInfo_15, STATE_VARIABLE_CI_89_89, STATE_VARIABLE_CLD_91_91, &STATE_VARIABLE_CLD_92_92);
    ArgModes_42 = ll_backend__code_info__get_arginfo_1_f_0(STATE_VARIABLE_CI_89_89);
    HeadVars_43 = ll_backend__code_info__get_headvars_1_f_0(STATE_VARIABLE_CI_89_89);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__middle_rec_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), HeadVars_43, ArgModes_42, &Args_44);
    ll_backend__code_loc_dep__setup_return_5_p_0(Args_44, &LiveArgs_45, &EpilogCode_46, STATE_VARIABLE_CLD_92_92, STATE_VARIABLE_CLD_75);
    Var_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseSaveCode_38, EpilogCode_46);
    BaseCode_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseGoalCode_36, Var_94);
    Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecSaveCode_41, EpilogCode_46);
    RecCode_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecGoalCode_39, Var_95);
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (LiveArgs_45));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) ((MR_String) ""));
    }
    LiveValCode_49 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_96)));
    BaseInstrs_50 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseCode_47);
    RecInstrs_51 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RecCode_48);
    Var_99 = ll_backend__opt_util__block_refers_to_stack_1_f_0(BaseInstrs_50);
    succeeded = (Var_99 == (MR_Integer) 0);
    if (succeeded)
    {
      AvoidInstrs_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_50, RecInstrs_51);
      ll_backend__middle_rec__find_unused_register_2_p_0(AvoidInstrs_52, &AuxReg_53);
      ll_backend__middle_rec__split_rec_code_3_p_0(RecInstrs_51, &BeforeInstrs0_54, &AfterInstrs_55);
      ll_backend__middle_rec__add_counter_to_livevals_3_p_0(BeforeInstrs0_54, AuxReg_53, &BeforeInstrs_56);
      ll_backend__code_info__get_next_label_3_p_0(&Loop1Label_57, STATE_VARIABLE_CI_89_89, &STATE_VARIABLE_CI_100_100);
      ll_backend__code_info__get_next_label_3_p_0(&Loop2Label_58, STATE_VARIABLE_CI_100_100, STATE_VARIABLE_CI_73);
      ll_backend__code_info__get_total_stackslot_count_2_p_0(*STATE_VARIABLE_CI_73, &FrameSize0_59);
      FrameSize_60 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*STATE_VARIABLE_CI_73, FrameSize0_59);
      ll_backend__middle_rec__generate_downloop_test_3_p_0(EntryTestInstrs_33, Loop1Label_57, &Loop1Test_61);
      succeeded = (FrameSize_60 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_113;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_137;

        MaybeIncrSp_62 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeDecrSp_63 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (AuxReg_53));
          MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1])));
        }
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
          MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
        }
        InitAuxReg_64 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_102)));
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (AuxReg_53));
        }
        {
          Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[1])));
          MR_hl_field(MR_mktag(3), Var_110, 2) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(3), Var_110, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2])));
        }
        {
          Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (AuxReg_53));
          MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (Var_110));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
        }
        IncrAuxReg_65 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_108)));
        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__middle_rec_scalar_common_2[1])));
          MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(3), Var_120, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2])));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (AuxReg_53));
          MR_hl_field(MR_mktag(3), Var_119, 2) = ((MR_Box) (Var_120));
        }
        {
          Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
        }
        DecrAuxReg_66 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_118)));
        {
          Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3])));
          MR_hl_field(MR_mktag(3), Var_130, 2) = ((MR_Box) (Var_113));
          MR_hl_field(MR_mktag(3), Var_130, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1])));
        }
        {
          Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Loop2Label_58));
        }
        {
          Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (Var_130));
          MR_hl_field(MR_mktag(3), Var_129, 2) = ((MR_Box) (Var_137));
        }
        {
          Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Var_129));
          MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
        }
        TestAuxReg_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_128)));
      }
      else
      {
        MR_String PushMsg_68;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_146;
        MR_Word Var_147;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_158;
        MR_Word Var_159;

        PushMsg_68 = ll_backend__proc_gen__push_msg_3_f_0(ModuleInfo_22, PredId_23, ProcId_24);
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (FrameSize_60));
          MR_hl_field(MR_mktag(3), Var_140, 2) = ((MR_Box) (PushMsg_68));
          MR_hl_field(MR_mktag(3), Var_140, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        {
          Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) ((MR_String) ""));
        }
        MaybeIncrSp_62 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_139)));
        {
          Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) ((MR_Unsigned) 25U));
          MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (FrameSize_60));
        }
        {
          Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) ((MR_String) ""));
        }
        MaybeDecrSp_63 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_143)));
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) (AuxReg_53));
          MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) (&ll_backend__middle_rec_scalar_common_2[3]));
        }
        {
          Var_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), Var_146, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
        }
        InitAuxReg_64 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_146)));
        IncrAuxReg_65 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        DecrAuxReg_66 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          Var_158 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (AuxReg_53));
        }
        {
          Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Var_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3])));
          MR_hl_field(MR_mktag(3), Var_153, 2) = ((MR_Box) (&ll_backend__middle_rec_scalar_common_2[3]));
          MR_hl_field(MR_mktag(3), Var_153, 3) = ((MR_Box) (Var_158));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Loop2Label_58));
        }
        {
          Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(3), Var_152, 2) = ((MR_Box) (Var_159));
        }
        {
          Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
        }
        TestAuxReg_67 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_151)));
      }
      if ((AfterInstrs_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_218;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_223;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_233;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_242;
        MR_Word Var_244;
        MR_Word Var_245;
        MR_Word Var_246;
        MR_Word Var_247;

        {
          Var_221 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_221, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_221, 1) = ((MR_Box) (EntryLabel_25));
        }
        {
          Var_220 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
        }
        {
          Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (SlotsComment_21));
        }
        {
          Var_224 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (Var_225));
          MR_hl_field(MR_mktag(0), Var_224, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Var_224));
          MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
          MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_223));
        }
        Var_218 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_219);
        Var_229 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryTestInstrs_33);
        {
          Var_233 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_233, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_233, 1) = ((MR_Box) (Loop1Label_57));
        }
        {
          Var_232 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_232, 0) = ((MR_Box) (Var_233));
          MR_hl_field(MR_mktag(0), Var_232, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
        }
        Var_231 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_232)));
        Var_236 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeInstrs_56);
        Var_238 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Loop1Test_61);
        {
          Var_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_242, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_242, 1) = ((MR_Box) (BaseLabel_31));
        }
        {
          Var_241 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_241, 0) = ((MR_Box) (Var_242));
          MR_hl_field(MR_mktag(0), Var_241, 1) = ((MR_Box) ((MR_String) "start of base case"));
        }
        Var_240 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_241)));
        Var_245 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_50);
        Var_247 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[5])));
        Var_246 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_49, Var_247);
        Var_244 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_245, Var_246);
        Var_239 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_240, Var_244);
        Var_237 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_238, Var_239);
        Var_235 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_236, Var_237);
        Var_230 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_231, Var_235);
        Var_228 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_229, Var_230);
        *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_218, Var_228);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word BaseLabels_71;
        MR_Word Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_String Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_String Var_169;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_String Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_Word Var_187;
        MR_Word Var_188;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_String Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_201;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_String Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_214;

        ll_backend__middle_rec__find_labels_2_p_0(BaseInstrs_50, &BaseLabels_71);
        succeeded = (BaseLabels_71 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_165 = (MR_String) "Procedure entry point";
          Var_169 = (MR_String) "";
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (EntryLabel_25));
          }
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (SlotsComment_21));
          }
          {
            Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (Var_168));
            MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Var_169));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
            MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (BaseLabels_71));
          }
          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_166));
          }
          Var_161 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_162);
          Var_172 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EntryTestInstrs_33);
          Var_178 = (MR_String) "start of the down loop";
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_177, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_177, 1) = ((MR_Box) (Loop1Label_57));
          }
          {
            Var_176 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (Var_177));
            MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (Var_178));
          }
          Var_175 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_176)));
          Var_182 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BeforeInstrs_56);
          Var_184 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Loop1Test_61);
          Var_186 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_50);
          Var_191 = (MR_String) "";
          {
            Var_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_190, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_190, 1) = ((MR_Box) (Loop2Label_58));
          }
          {
            Var_189 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_189, 0) = ((MR_Box) (Var_190));
            MR_hl_field(MR_mktag(0), Var_189, 1) = ((MR_Box) (Var_191));
          }
          Var_188 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_189)));
          Var_193 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AfterInstrs_55);
          Var_201 = (MR_Word) (&ll_backend__middle_rec_scalar_common_1[6]);
          Var_208 = (MR_String) "start of base case";
          Var_209 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_207, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_207, 1) = ((MR_Box) (BaseLabel_31));
          }
          {
            Var_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (Var_207));
            MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (Var_208));
          }
          {
            Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Var_206));
            MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) (Var_209));
          }
          {
            Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Var_201));
            MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_205));
          }
          Var_199 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_200);
          Var_211 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), BaseInstrs_50);
          Var_214 = (MR_Word) (&ll_backend__middle_rec_scalar_common_1[5]);
          Var_213 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_214)));
          Var_212 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_49, Var_213);
          Var_210 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_211, Var_212);
          Var_198 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_199, Var_210);
          Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LiveValCode_49, Var_198);
          Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestAuxReg_67, Var_197);
          Var_195 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DecrAuxReg_66, Var_196);
          Var_194 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaybeDecrSp_63, Var_195);
          Var_192 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_193, Var_194);
          Var_187 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_188, Var_192);
          Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_186, Var_187);
          Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_184, Var_185);
          Var_181 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_182, Var_183);
          Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IncrAuxReg_65, Var_181);
          Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaybeIncrSp_62, Var_180);
          Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_175, Var_179);
          Var_173 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), InitAuxReg_64, Var_174);
          Var_171 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_172, Var_173);
          *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_161, Var_171);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
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
      MR_Word Instr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Uinstr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Labels_18_18;
      MR_Word Label_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Labels_0_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 1))));
        {
          STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (Label_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Labels_0_2));
        }
      }
      else
      {
        MR_Word Block_15;

        succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Block_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 3))));
          ll_backend__middle_rec__find_labels_acc_3_p_0(Block_15, STATE_VARIABLE_Labels_0_2, &STATE_VARIABLE_Labels_18_18);
        }
        else
          STATE_VARIABLE_Labels_18_18 = STATE_VARIABLE_Labels_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_8;
      next_value_of_STATE_VARIABLE_Labels_0_2 = STATE_VARIABLE_Labels_18_18;
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
  {
    MR_Word Used0_5;
    MR_Word Used1_6;
    MR_Word UsedList_7;

    mercury__set__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &Used0_5);
    ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_3, Used0_5, &Used1_6);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Used1_6, &UsedList_7);
    ll_backend__middle_rec__find_unused_register_acc_3_p_0(UsedList_7, (MR_Integer) 1, UnusedReg_4);
  }
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_instr_3_p_0(
  MR_Word Uinstr_4,
  MR_Word STATE_VARIABLE_Used_0_75,
  MR_Word * STATE_VARIABLE_Used_76)
{
  switch (MR_tag((MR_Word) Uinstr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Uinstr_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
      break;
    case (MR_Integer) 2:
      {
        MR_Word LvalSet_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Uinstr_4, (MR_Integer) 0))));
        MR_Word LvalList_29;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_28, &LvalList_29);
        ll_backend__middle_rec__find_used_registers_lvals_3_p_0(LvalList_29, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

            ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_32, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word Rval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Used_96_96;

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_33, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_96_96);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_34, STATE_VARIABLE_Used_96_96, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word Rval_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Used_96_120;

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_118, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_96_120);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_119, STATE_VARIABLE_Used_96_120, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_108 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_108, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_115, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_127, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_126, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 7))));
            MR_Word MaybeReuse_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 8))));
            MR_Word STATE_VARIABLE_Used_91_91;
            MR_Word STATE_VARIABLE_Used_92_92;
            MR_Word STATE_VARIABLE_Used_93_93;
            MR_Word Lval_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word Rval_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_102, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_91_91);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_103, STATE_VARIABLE_Used_91_91, &STATE_VARIABLE_Used_92_92);
            if ((MaybeRegionRval_39 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Used_93_93 = STATE_VARIABLE_Used_92_92;
            else
            {
              MR_Word RegionRval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionRval_39, (MR_Integer) 0))));

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(RegionRval_41, STATE_VARIABLE_Used_92_92, &STATE_VARIABLE_Used_93_93);
            }
            if ((MaybeReuse_40 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_93_93;
            else
            {
              MR_Word ReuseRval_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_40, (MR_Integer) 0))));
              MR_Word MaybeFlagLval_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReuse_40, (MR_Integer) 1))));
              MR_Word STATE_VARIABLE_Used_94_94;

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ReuseRval_42, STATE_VARIABLE_Used_93_93, &STATE_VARIABLE_Used_94_94);
              if ((MaybeFlagLval_43 == (MR_Word) ((MR_Unsigned) 0U)))
                *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_94_94;
              else
              {
                MR_Word FlagLval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFlagLval_43, (MR_Integer) 0))));

                ll_backend__middle_rec__find_used_registers_lval_3_p_0(FlagLval_44, STATE_VARIABLE_Used_94_94, STATE_VARIABLE_Used_76);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_121, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_125, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_114 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_114, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));
            MR_Word NumLval_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4))));
            MR_Word AddrLval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5))));
            MR_Word STATE_VARIABLE_Used_88_88;
            MR_Word STATE_VARIABLE_Used_89_89;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(IdRval_46, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_88_88);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(NumLval_47, STATE_VARIABLE_Used_88_88, &STATE_VARIABLE_Used_89_89);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(AddrLval_48, STATE_VARIABLE_Used_89_89, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ValueRval_50, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_128, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_124, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_122, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_123, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 24:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 25:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 26:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 27:
          {
            MR_Word Components_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            ll_backend__middle_rec__find_used_registers_components_3_p_0(Components_52, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_116, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_109, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_117, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word LCLval_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCLval_69, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word LCSLval_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Used_81_81;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_70, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_81_81);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCSLval_71, STATE_VARIABLE_Used_81_81, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));
            MR_Word STATE_VARIABLE_Used_79_79;
            MR_Word LCRval_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_110, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_79_79);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCSRval_73, STATE_VARIABLE_Used_79_79, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word STATE_VARIABLE_Used_77_77;
            MR_Word LCRval_111 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1))));
            MR_Word LCSRval_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2))));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_111, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_77_77);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCSRval_112, STATE_VARIABLE_Used_77_77, STATE_VARIABLE_Used_76);
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
      MR_Word Instrs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Used_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      Uinstr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      ll_backend__middle_rec__find_used_registers_instr_3_p_0(Uinstr_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Instrs_9;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_14_14;
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
      MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lvals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Used_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lvals_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_12_12;
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
      MR_Word Comp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Comps_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Used_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      switch (MR_tag((MR_Word) Comp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Used_12_12 = STATE_VARIABLE_Used_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word In_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Comp_7, (MR_Integer) 0))));

            ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(In_14, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Out_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Comp_7, (MR_Integer) 0))));

            ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(Out_19, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Comp_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_12_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_12_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Used_12_12 = STATE_VARIABLE_Used_0_2;
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Used_12_12 = STATE_VARIABLE_Used_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Comps_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_12_12;
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
      MR_Word Output_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Outputs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Used_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_10, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Outputs_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_19_19;
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
      MR_Word Input_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Inputs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_Used_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_14, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Inputs_8;
      next_value_of_STATE_VARIABLE_Used_0_2 = STATE_VARIABLE_Used_19_19;
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
        Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0))) & (MR_Integer) 1);
        N_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1))));
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

        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));
          FieldNum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3))));
          {
            MR_Word STATE_VARIABLE_Used_16_16;
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_16_16);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_16_16;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
            goto top_of_proc_2;
          }
        }
        else
        {
          succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
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
            MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0))));
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
            MR_Word SubRval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_27;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
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
                MR_Word SubRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_28;
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
                MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
                MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Used_21_21;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                ll_backend__middle_rec__find_used_registers_rval_3_p_0(SubRvalA_15, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_21_21);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_4 = SubRvalB_16;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_21_21;
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_17, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_29;
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
                      MR_Word Rval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_17, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_34;
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
                      MR_Word Rval1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 0))));
                      MR_Word Rval2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 2))));
                      MR_Word STATE_VARIABLE_Used_20_45;
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_39, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_20_45);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_41;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_20_45;
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
}

static void MR_CALL 
ll_backend__middle_rec__find_used_registers_rval_3_p_0(
  MR_Word tscc_proc_2_input_1_Rval_4,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13)
{
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
        Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0))) & (MR_Integer) 1);
        N_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1))));
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

        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Rval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2))));
          FieldNum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3))));
          {
            MR_Word STATE_VARIABLE_Used_16_16;
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_16_16);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_16_16;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
            goto top_of_proc_2;
          }
        }
        else
        {
          succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
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
            MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0))));
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
            MR_Word SubRval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_27;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_19 = STATE_VARIABLE_Used_0_18;
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
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
                MR_Word SubRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = SubRval_28;
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
                MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
                MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Used_21_21;
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                ll_backend__middle_rec__find_used_registers_rval_3_p_0(SubRvalA_15, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_21_21);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Rval_4 = SubRvalB_16;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_21_21;
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MemRef_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_17, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_29;
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
                      MR_Word Rval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_17, (MR_Integer) 0))));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_34;
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
                      MR_Word Rval1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 0))));
                      MR_Word Rval2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 2))));
                      MR_Word STATE_VARIABLE_Used_20_45;
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18;

                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_39, STATE_VARIABLE_Used_0_18, &STATE_VARIABLE_Used_20_45);
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_41;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_18 = STATE_VARIABLE_Used_20_45;
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_2));
      }
    else
    {
      MR_Integer H_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (N_2 < H_6);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_2));
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Instr0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Instr_8;
      MR_Word Instrs_9;
      MR_Word Lives0_10;
      MR_String Comment_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0))));

      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        Lives0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_13, (MR_Integer) 0))));
        {
          MR_Word Lives_12;
          MR_Word Var_14;

          mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (HeadVar__2_2)), Lives0_10, &Lives_12);
          {
            Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (Lives_12));
          }
          {
            Instr_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Instr_8, 0) = ((MR_Box) (Var_14));
            MR_hl_field(MR_mktag(0), Instr_8, 1) = ((MR_Box) (Comment_11));
          }
        }
      }
      else
        Instr_8 = Instr0_5;
      ll_backend__middle_rec__add_counter_to_livevals_3_p_0(Instrs0_6, HeadVar__2_2, &Instrs_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs_9));
      }
    }
  }
}

static void MR_CALL 
ll_backend__middle_rec__split_rec_code_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Before_2,
  MR_Word * After_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
        return;
      }
    else
    {
      MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_25, (MR_Integer) 0)))) == (MR_Integer) 3)));
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
          Instr2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs2_19, (MR_Integer) 0))));
          Instrs3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Instrs2_19, (MR_Integer) 1))));
          Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr2_20, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
          }
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Before_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Before1_24));
        }
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
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
        return;
      }
    else
    {
      MR_Word Instr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Instrs0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Test_12;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instr0_8, (MR_Integer) 0))));

      succeeded = ((((MR_tag((MR_Word) Var_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Test_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_19, (MR_Integer) 1))));
        {
          MR_Word NewTest_17;
          MR_Word Var_22;
          MR_Word Var_23;
          MR_Word Var_24;

          if (!((Instrs0_9 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
              return;
            }
          ll_backend__code_util__neg_rval_2_p_0(Test_12, &NewTest_17);
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Target_2));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (NewTest_17));
            MR_hl_field(MR_mktag(3), Var_23, 2) = ((MR_Box) (Var_24));
          }
          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Instrs_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      else
      {
        MR_Word Instrs1_18;

        ll_backend__middle_rec__generate_downloop_test_3_p_0(Instrs0_9, Target_2, &Instrs1_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Instrs_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_18));
        }
      }
    }
  }
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
      Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      GoalExpr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_17 = (MR_Word) ((MR_Word) (GoalExpr_6));
            MR_Word OnlyBuiltinsGoalExpr_205;
            MR_Word next_value_of_HeadVar__1_1;

            OnlyBuiltinsGoalExpr_205 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_17);
            succeeded = (OnlyBuiltinsGoalExpr_205 == (MR_Integer) 1);
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
            MR_Word Uni_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3))));
            MR_Word OnlyBuiltinsGoalExpr_329;
            MR_Word next_value_of_HeadVar__1_1;

            switch (MR_tag((MR_Word) Uni_34)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 6))));

                  if ((SubInfo_46 == (MR_Word) ((MR_Unsigned) 0U)))
                    OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                  else
                  {
                    MR_Word TakeAddressFields_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_46, (MR_Integer) 0))));

                    if ((TakeAddressFields_47 == (MR_Word) ((MR_Unsigned) 0U)))
                      OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                    else
                      OnlyBuiltinsGoalExpr_329 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_34, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_329 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_329 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            succeeded = (OnlyBuiltinsGoalExpr_329 == (MR_Integer) 1);
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
            MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0))));
            MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1))));
            MR_Word BuiltinState_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (BuiltinState_28) {
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
                  MR_Word Var_218;
                  MR_Word PredId_225;
                  MR_Integer ProcId_226;

                  succeeded = (BuiltinState_28 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ll_backend__code_info__get_pred_id_2_p_0(CodeInfo_5, &PredId_225);
                    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_225, Var_25);
                    if (succeeded)
                    {
                      ll_backend__code_info__get_proc_id_2_p_0(CodeInfo_5, &ProcId_226);
                      succeeded = (ProcId_226 == Var_26);
                      if (succeeded)
                      {
                        Var_218 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_4);
                        succeeded = (Var_218 == (MR_Integer) 1);
                      }
                    }
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word OnlyBuiltinsGoalExpr_112;
                MR_Word next_value_of_HeadVar__1_1;

                switch (ConjType_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_112 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_112 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_13);
                    break;
                }
                succeeded = (OnlyBuiltinsGoalExpr_112 == (MR_Integer) 1);
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
                MR_Word Goals_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word OnlyBuiltinsGoalExpr_143;
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_143 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_77);
                succeeded = (OnlyBuiltinsGoalExpr_143 == (MR_Integer) 1);
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
                MR_Word Cases_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word OnlyBuiltinsGoalExpr_298;
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_298 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_16);
                succeeded = (OnlyBuiltinsGoalExpr_298 == (MR_Integer) 1);
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
                MR_Word Reason_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1))));
                MR_Word SubGoal_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word OnlyBuiltinsGoalExpr_267;
                MR_Word FGT_20;
                MR_Word next_value_of_HeadVar__1_1;

                succeeded = ((((MR_tag((MR_Word) Reason_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 2))) & (MR_Integer) 3);
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
                  OnlyBuiltinsGoalExpr_267 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_267 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_78);
                succeeded = (OnlyBuiltinsGoalExpr_267 == (MR_Integer) 1);
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
                MR_Word Cond_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2))));
                MR_Word Then_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3))));
                MR_Word Else_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4))));
                MR_Word OnlyBuiltinsGoalExpr_174;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word next_value_of_HeadVar__1_1;

                Var_74 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_22);
                succeeded = (Var_74 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_23);
                  succeeded = (Var_75 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_24);
                    succeeded = (Var_76 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  OnlyBuiltinsGoalExpr_174 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_174 = (MR_Integer) 0;
                succeeded = (OnlyBuiltinsGoalExpr_174 == (MR_Integer) 1);
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
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_12 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_12;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 3))));

          switch (MR_tag((MR_Word) Uni_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 6))));

                if ((SubInfo_41 == (MR_Word) ((MR_Unsigned) 0U)))
                  HeadVar__2_2 = (MR_Integer) 1;
                else
                {
                  MR_Word TakeAddressFields_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_41, (MR_Integer) 0))));

                  if ((TakeAddressFields_42 == (MR_Word) ((MR_Unsigned) 0U)))
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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_29, (MR_Integer) 0))))) {
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
          MR_Word BuiltinState_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (BuiltinState_23) {
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));

              switch (ConjType_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__2_2 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_8);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_72);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1))));
              MR_Word SubGoal_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word FGT_15;

              succeeded = ((((MR_tag((MR_Word) Reason_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_15) {
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_73;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2))));
              MR_Word Then_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3))));
              MR_Word Else_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4))));
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_71;

              Var_69 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_17);
              succeeded = (Var_69 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_70 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_18);
                succeeded = (Var_70 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_71 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_19);
                  succeeded = (Var_71 == (MR_Integer) 1);
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
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_16 = (MR_Word) ((MR_Word) (GoalExpr_7));
            MR_Word OnlyBuiltinsGoal_81;

            OnlyBuiltinsGoal_81 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_16);
            switch (OnlyBuiltinsGoal_81) {
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
            MR_Word Uni_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 6))));

                  if ((SubInfo_45 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_45, (MR_Integer) 0))));

                    if ((TakeAddressFields_46 == (MR_Word) ((MR_Unsigned) 0U)))
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_33, (MR_Integer) 0))))) {
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
            MR_Word BuiltinState_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (BuiltinState_27) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

                switch (ConjType_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_86;

                      OnlyBuiltinsGoal_86 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_12);
                      switch (OnlyBuiltinsGoal_86) {
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
                MR_Word Goals_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                MR_Word OnlyBuiltinsGoal_79;

                OnlyBuiltinsGoal_79 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_76);
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
            case (MR_Integer) 4:
              {
                MR_Word Cases_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                MR_Word OnlyBuiltinsGoal_84;

                OnlyBuiltinsGoal_84 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_15);
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
            case (MR_Integer) 5:
              {
                MR_Word Reason_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
                MR_Word SubGoal_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word FGT_19;

                succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_17, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_19) {
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
                  MR_Word OnlyBuiltinsGoal_91;

                  OnlyBuiltinsGoal_91 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_77);
                  switch (OnlyBuiltinsGoal_91) {
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
                MR_Word Cond_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
                MR_Word Then_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
                MR_Word Else_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;

                Var_73 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_21);
                succeeded = (Var_73 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_74 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_22);
                  succeeded = (Var_74 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_23);
                    succeeded = (Var_75 == (MR_Integer) 1);
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
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word GoalExpr_10;

      Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
      GoalExpr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_19 = (MR_Word) ((MR_Word) (GoalExpr_10));
            MR_Word OnlyBuiltinsGoal_84;

            OnlyBuiltinsGoal_84 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_19);
            switch (OnlyBuiltinsGoal_84) {
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
            MR_Word Uni_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Uni_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 6))));

                  if ((SubInfo_48 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubInfo_48, (MR_Integer) 0))));

                    if ((TakeAddressFields_49 == (MR_Word) ((MR_Unsigned) 0U)))
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Uni_36, (MR_Integer) 0))))) {
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
            MR_Word BuiltinState_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3))) & (MR_Integer) 1);

            switch (BuiltinState_30) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                switch (ConjType_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_89;

                      OnlyBuiltinsGoal_89 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_15);
                      switch (OnlyBuiltinsGoal_89) {
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
                MR_Word Goals_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word OnlyBuiltinsGoal_82;

                OnlyBuiltinsGoal_82 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_79);
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
            case (MR_Integer) 4:
              {
                MR_Word Cases_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word OnlyBuiltinsGoal_87;

                OnlyBuiltinsGoal_87 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_18);
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
            case (MR_Integer) 5:
              {
                MR_Word Reason_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word SubGoal_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word FGT_22;

                succeeded = ((((MR_tag((MR_Word) Reason_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  FGT_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2))) & (MR_Integer) 3);
                  switch (FGT_22) {
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
                  MR_Word OnlyBuiltinsGoal_94;

                  OnlyBuiltinsGoal_94 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_80);
                  switch (OnlyBuiltinsGoal_94) {
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
                MR_Word Cond_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word Var_78;

                Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_24);
                succeeded = (Var_76 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_77 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_25);
                  succeeded = (Var_77 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_78 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_26);
                    succeeded = (Var_78 == (MR_Integer) 1);
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
