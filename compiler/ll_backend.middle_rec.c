/*
** Automatically generated from `middle_rec.m'
** by the Mercury compiler,
** version rotd-2018-01-26
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


// :- module ll_backend.middle_rec.
// :- implementation.

/*
INIT mercury__ll_backend__middle_rec__init
ENDINIT
*/

#include "ll_backend.middle_rec.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.unify_gen.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_bool MR_CALL 
ll_backend__middle_rec__middle_rec_generate_switch_10_p_0(
  MR_Word Var_11,
  MR_Word BaseConsId_12,
  MR_Word Base_13,
  MR_Word Recursive_14,
  MR_Word SwitchGoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_69,
  MR_Word * STATE_VARIABLE_CI_70,
  MR_Word STATE_VARIABLE_CLD_0_71,
  MR_Word * STATE_VARIABLE_CLD_72);

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
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16,
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[2])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
    MR_Word GoalExpr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 0)));
    MR_Word GoalInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_7, (MR_Integer) 1)));
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
    MR_Word Var_38;

    succeeded = ((((MR_tag((MR_Word) GoalExpr_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3)));
      succeeded = (Var_24 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Case1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
          Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Case2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
            succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              ConsId1_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 0)));
              Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 1)));
              Goal1_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case1_14, (MR_Integer) 2)));
              succeeded = (Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                ConsId2_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 0)));
                Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 1)));
                Goal2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case2_15, (MR_Integer) 2)));
                succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  Var_30 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Goal1_17);
                  succeeded = (Var_30 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    GoalExpr_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal2_19, (MR_Integer) 0)));
                    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal2_19, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) GoalExpr_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 1)));
                      Goals_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_37, (MR_Integer) 2)));
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
                    MR_Word Var_43;

                    Var_33 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Goal2_19);
                    succeeded = (Var_33 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_17, (MR_Integer) 0)));
                      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal1_17, (MR_Integer) 1)));
                      succeeded = ((((MR_tag((MR_Word) GoalExpr_42)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (succeeded)
                      {
                        Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 1)));
                        Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_42, (MR_Integer) 2)));
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
  MR_Word STATE_VARIABLE_CI_0_69,
  MR_Word * STATE_VARIABLE_CI_70,
  MR_Word STATE_VARIABLE_CLD_0_71,
  MR_Word * STATE_VARIABLE_CLD_72)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_248_248;
    MR_Word StackSlots_19;
    MR_Word VarSet_20;
    MR_String SlotsComment_21;
    MR_Word ModuleInfo_22;
    MR_Word PredId_23;
    MR_Integer ProcId_24;
    MR_Word EntryLabel_25;
    MR_Word VarType_26;
    MR_Word CheaperTagTest_27;
    MR_Word BaseLabel_28;
    MR_Word EntryTestCode_29;
    MR_Word EntryTestInstrs_30;
    MR_Word StoreMap_31;
    MR_Word BranchStart_32;
    MR_Word BaseGoalCode_33;
    MR_Word MaybeEnd1_34;
    MR_Word BaseSaveCode_35;
    MR_Word RecGoalCode_36;
    MR_Word MaybeEnd_37;
    MR_Word RecSaveCode_38;
    MR_Word ArgModes_39;
    MR_Word HeadVars_40;
    MR_Word Args_41;
    MR_Word LiveArgs_42;
    MR_Word EpilogCode_43;
    MR_Word BaseCode_44;
    MR_Word RecCode_45;
    MR_Word LiveValCode_46;
    MR_Word BaseInstrs_47;
    MR_Word RecInstrs_48;
    MR_Word AvoidInstrs_49;
    MR_Word AuxReg_50;
    MR_Word BeforeInstrs0_51;
    MR_Word AfterInstrs_52;
    MR_Word BeforeInstrs_53;
    MR_Word Loop1Label_54;
    MR_Word Loop2Label_55;
    MR_Integer FrameSize0_56;
    MR_Integer FrameSize_57;
    MR_Word Loop1Test_58;
    MR_Word MaybeIncrSp_59;
    MR_Word MaybeDecrSp_60;
    MR_Word InitAuxReg_61;
    MR_Word IncrAuxReg_62;
    MR_Word DecrAuxReg_63;
    MR_Word TestAuxReg_64;
    MR_Word STATE_VARIABLE_CLD_75_75;
    MR_Word STATE_VARIABLE_CI_77_77;
    MR_Word STATE_VARIABLE_CLD_78_78;
    MR_Word STATE_VARIABLE_CI_80_80;
    MR_Word STATE_VARIABLE_CLD_81_81;
    MR_Word STATE_VARIABLE_CLD_83_83;
    MR_Word STATE_VARIABLE_CI_85_85;
    MR_Word STATE_VARIABLE_CLD_86_86;
    MR_Word STATE_VARIABLE_CLD_87_87;
    MR_Word STATE_VARIABLE_CLD_88_88;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word STATE_VARIABLE_CI_96_96;

    ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_0_69, &StackSlots_19);
    ll_backend__code_info__get_varset_2_p_0(STATE_VARIABLE_CI_0_69, &VarSet_20);
    SlotsComment_21 = hlds__hlds_llds__explain_stack_slots_2_f_0(StackSlots_19, VarSet_20);
    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_69, &ModuleInfo_22);
    ll_backend__code_info__get_pred_id_2_p_0(STATE_VARIABLE_CI_0_69, &PredId_23);
    ll_backend__code_info__get_proc_id_2_p_0(STATE_VARIABLE_CI_0_69, &ProcId_24);
    EntryLabel_25 = ll_backend__code_util__make_local_entry_label_4_f_0(ModuleInfo_22, PredId_23, ProcId_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    ll_backend__code_loc_dep__pre_goal_update_4_p_0(SwitchGoalInfo_15, (MR_Integer) 0, STATE_VARIABLE_CLD_0_71, &STATE_VARIABLE_CLD_75_75);
    VarType_26 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_69, Var_11);
    CheaperTagTest_27 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_69, VarType_26);
    ll_backend__unify_gen__generate_tag_test_10_p_0(Var_11, BaseConsId_12, CheaperTagTest_27, (MR_Integer) 0, &BaseLabel_28, &EntryTestCode_29, STATE_VARIABLE_CI_0_69, &STATE_VARIABLE_CI_77_77, STATE_VARIABLE_CLD_75_75, &STATE_VARIABLE_CLD_78_78);
    TypeCtorInfo_248_248 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
    EntryTestInstrs_30 = mercury__cord__list_1_f_0(TypeCtorInfo_248_248, EntryTestCode_29);
    hlds__hlds_llds__goal_info_get_store_map_2_p_0(SwitchGoalInfo_15, &StoreMap_31);
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_78_78, &BranchStart_32);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Base_13, &BaseGoalCode_33, STATE_VARIABLE_CI_77_77, &STATE_VARIABLE_CI_80_80, STATE_VARIABLE_CLD_78_78, &STATE_VARIABLE_CLD_81_81);
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeEnd1_34, &BaseSaveCode_35, STATE_VARIABLE_CI_80_80, STATE_VARIABLE_CLD_81_81);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(BranchStart_32, STATE_VARIABLE_CI_80_80, &STATE_VARIABLE_CLD_83_83);
    ll_backend__code_gen__generate_goal_7_p_0((MR_Integer) 0, Recursive_14, &RecGoalCode_36, STATE_VARIABLE_CI_80_80, &STATE_VARIABLE_CI_85_85, STATE_VARIABLE_CLD_83_83, &STATE_VARIABLE_CLD_86_86);
    ll_backend__code_loc_dep__generate_branch_end_6_p_0(StoreMap_31, MaybeEnd1_34, &MaybeEnd_37, &RecSaveCode_38, STATE_VARIABLE_CI_85_85, STATE_VARIABLE_CLD_86_86);
    ll_backend__code_loc_dep__after_all_branches_4_p_0(StoreMap_31, MaybeEnd_37, STATE_VARIABLE_CI_85_85, &STATE_VARIABLE_CLD_87_87);
    ll_backend__code_loc_dep__post_goal_update_4_p_0(SwitchGoalInfo_15, STATE_VARIABLE_CI_85_85, STATE_VARIABLE_CLD_87_87, &STATE_VARIABLE_CLD_88_88);
    ArgModes_39 = ll_backend__code_info__get_arginfo_1_f_0(STATE_VARIABLE_CI_85_85);
    HeadVars_40 = ll_backend__code_info__get_headvars_1_f_0(STATE_VARIABLE_CI_85_85);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__middle_rec_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, HeadVars_40, ArgModes_39, &Args_41);
    ll_backend__code_loc_dep__setup_return_6_p_0(Args_41, &LiveArgs_42, &EpilogCode_43, STATE_VARIABLE_CI_85_85, STATE_VARIABLE_CLD_88_88, STATE_VARIABLE_CLD_72);
    Var_90 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, BaseSaveCode_35, EpilogCode_43);
    BaseCode_44 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, BaseGoalCode_33, Var_90);
    Var_91 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, RecSaveCode_38, EpilogCode_43);
    RecCode_45 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, RecGoalCode_36, Var_91);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_93, 0) = ((MR_Box) (LiveArgs_42));
    }
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) ((MR_String) ""));
    }
    LiveValCode_46 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_92)));
    BaseInstrs_47 = mercury__cord__list_1_f_0(TypeCtorInfo_248_248, BaseCode_44);
    RecInstrs_48 = mercury__cord__list_1_f_0(TypeCtorInfo_248_248, RecCode_45);
    Var_95 = ll_backend__opt_util__block_refers_to_stack_1_f_0(BaseInstrs_47);
    succeeded = (Var_95 == (MR_Integer) 0);
    if (succeeded)
    {
      AvoidInstrs_49 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_248_248, BaseInstrs_47, RecInstrs_48);
      ll_backend__middle_rec__find_unused_register_2_p_0(AvoidInstrs_49, &AuxReg_50);
      ll_backend__middle_rec__split_rec_code_3_p_0(RecInstrs_48, &BeforeInstrs0_51, &AfterInstrs_52);
      ll_backend__middle_rec__add_counter_to_livevals_3_p_0(BeforeInstrs0_51, AuxReg_50, &BeforeInstrs_53);
      ll_backend__code_info__get_next_label_3_p_0(&Loop1Label_54, STATE_VARIABLE_CI_85_85, &STATE_VARIABLE_CI_96_96);
      ll_backend__code_info__get_next_label_3_p_0(&Loop2Label_55, STATE_VARIABLE_CI_96_96, STATE_VARIABLE_CI_70);
      ll_backend__code_info__get_total_stackslot_count_2_p_0(*STATE_VARIABLE_CI_70, &FrameSize0_56);
      FrameSize_57 = ll_backend__code_info__round_det_stack_frame_size_2_f_0(*STATE_VARIABLE_CI_70, FrameSize0_56);
      ll_backend__middle_rec__generate_downloop_test_3_p_0(EntryTestInstrs_30, Loop1Label_54, &Loop1Test_58);
      succeeded = (FrameSize_57 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_124;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_Word Var_133;

        MaybeIncrSp_59 = mercury__cord__empty_0_f_0(TypeCtorInfo_248_248);
        MaybeDecrSp_60 = mercury__cord__empty_0_f_0(TypeCtorInfo_248_248);
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[1]);
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (AuxReg_50));
          MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_100));
        }
        {
          Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
        }
        InitAuxReg_61 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_98)));
        {
          Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (AuxReg_50));
        }
        Var_110 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[2]);
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__middle_rec_scalar_common_2[1])));
          MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(3), Var_106, 3) = ((MR_Box) (Var_110));
        }
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (AuxReg_50));
          MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (Var_106));
        }
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
        }
        IncrAuxReg_62 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_104)));
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__middle_rec_scalar_common_2[1])));
          MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (Var_110));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (AuxReg_50));
          MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (Var_116));
        }
        {
          Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "decrement loop counter"));
        }
        DecrAuxReg_63 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_114)));
        {
          Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3])));
          MR_hl_field(MR_mktag(3), Var_126, 2) = ((MR_Box) (Var_109));
          MR_hl_field(MR_mktag(3), Var_126, 3) = ((MR_Box) (Var_100));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Loop2Label_55));
        }
        {
          Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(3), Var_125, 2) = ((MR_Box) (Var_133));
        }
        {
          Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
        }
        TestAuxReg_64 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_124)));
      }
      else
      {
        MR_String PushMsg_65;
        MR_Word Var_135;
        MR_Word Var_136;
        MR_Word Var_139;
        MR_Word Var_140;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_144;
        MR_Word Var_147;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_154;
        MR_Word Var_155;

        PushMsg_65 = ll_backend__proc_gen__push_msg_3_f_0(ModuleInfo_22, PredId_23, ProcId_24);
        {
          Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
          MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (FrameSize_57));
          MR_hl_field(MR_mktag(3), Var_136, 2) = ((MR_Box) (PushMsg_65));
          MR_hl_field(MR_mktag(3), Var_136, 3) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) ((MR_String) ""));
        }
        MaybeIncrSp_59 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_135)));
        {
          Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
          MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (FrameSize_57));
        }
        {
          Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) ((MR_String) ""));
        }
        MaybeDecrSp_60 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_139)));
        Var_144 = (MR_Word) &ll_backend__middle_rec_scalar_common_2[3];
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (AuxReg_50));
          MR_hl_field(MR_mktag(3), Var_143, 2) = ((MR_Box) (Var_144));
        }
        {
          Var_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) ((MR_String) "initialize counter register"));
        }
        InitAuxReg_61 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_142)));
        IncrAuxReg_62 = mercury__cord__empty_0_f_0(TypeCtorInfo_248_248);
        DecrAuxReg_63 = mercury__cord__empty_0_f_0(TypeCtorInfo_248_248);
        {
          Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (AuxReg_50));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[3])));
          MR_hl_field(MR_mktag(3), Var_149, 2) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(3), Var_149, 3) = ((MR_Box) (Var_154));
        }
        {
          Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (Loop2Label_55));
        }
        {
          Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(3), Var_148, 2) = ((MR_Box) (Var_155));
        }
        {
          Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) ((MR_String) "test on upward loop"));
        }
        TestAuxReg_64 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_147)));
      }
      if ((AfterInstrs_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_214;
        MR_Word Var_215;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_224;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Word Var_227;
        MR_Word Var_228;
        MR_Word Var_229;
        MR_Word Var_231;
        MR_Word Var_232;
        MR_Word Var_233;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word Var_236;
        MR_Word Var_237;
        MR_Word Var_238;
        MR_Word Var_240;
        MR_Word Var_241;
        MR_Word Var_242;
        MR_Word Var_243;

        {
          Var_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_217, 1) = ((MR_Box) (EntryLabel_25));
        }
        {
          Var_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_216, 0) = ((MR_Box) (Var_217));
          MR_hl_field(MR_mktag(0), Var_216, 1) = ((MR_Box) ((MR_String) "Procedure entry point"));
        }
        {
          Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (SlotsComment_21));
        }
        {
          Var_220 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_220, 0) = ((MR_Box) (Var_221));
          MR_hl_field(MR_mktag(0), Var_220, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
          MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (Var_216));
          MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_219));
        }
        Var_214 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, Var_215);
        Var_225 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, EntryTestInstrs_30);
        {
          Var_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_229, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_229, 1) = ((MR_Box) (Loop1Label_54));
        }
        {
          Var_228 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_228, 0) = ((MR_Box) (Var_229));
          MR_hl_field(MR_mktag(0), Var_228, 1) = ((MR_Box) ((MR_String) "start of the down loop"));
        }
        Var_227 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_228)));
        Var_232 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, BeforeInstrs_53);
        Var_234 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, Loop1Test_58);
        {
          Var_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_238, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_238, 1) = ((MR_Box) (BaseLabel_28));
        }
        {
          Var_237 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_237, 0) = ((MR_Box) (Var_238));
          MR_hl_field(MR_mktag(0), Var_237, 1) = ((MR_Box) ((MR_String) "start of base case"));
        }
        Var_236 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_237)));
        Var_241 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, BaseInstrs_47);
        Var_243 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (&ll_backend__middle_rec_scalar_common_1[5])));
        Var_242 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, LiveValCode_46, Var_243);
        Var_240 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_241, Var_242);
        Var_235 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_236, Var_240);
        Var_233 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_234, Var_235);
        Var_231 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_232, Var_233);
        Var_226 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_227, Var_231);
        Var_224 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_225, Var_226);
        *Code_16 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_214, Var_224);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word BaseLabels_68;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_String Var_161;
        MR_Word Var_162;
        MR_Word Var_163;
        MR_Word Var_164;
        MR_String Var_165;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_168;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_172;
        MR_Word Var_173;
        MR_String Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_180;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_String Var_187;
        MR_Word Var_188;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_198;
        MR_Word Var_199;
        MR_String Var_200;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word Var_203;
        MR_String Var_204;
        MR_Word Var_205;
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_208;
        MR_Word Var_209;
        MR_Word Var_210;
        MR_String Var_213;

        ll_backend__middle_rec__find_labels_2_p_0(BaseInstrs_47, &BaseLabels_68);
        succeeded = (BaseLabels_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
        {
          Var_161 = (MR_String) "Procedure entry point";
          Var_165 = (MR_String) "";
          Var_166 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_160, 1) = ((MR_Box) (EntryLabel_25));
          }
          {
            Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Var_160));
            MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (Var_161));
          }
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (SlotsComment_21));
          }
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (Var_164));
            MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
            MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (Var_166));
          }
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
            MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_162));
          }
          Var_157 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, Var_158);
          Var_168 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, EntryTestInstrs_30);
          Var_174 = (MR_String) "start of the down loop";
          {
            Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (Loop1Label_54));
          }
          {
            Var_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (Var_173));
            MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (Var_174));
          }
          Var_171 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_172)));
          Var_178 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, BeforeInstrs_53);
          Var_180 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, Loop1Test_58);
          Var_182 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, BaseInstrs_47);
          Var_187 = (MR_String) "";
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_186, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_186, 1) = ((MR_Box) (Loop2Label_55));
          }
          {
            Var_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_185, 0) = ((MR_Box) (Var_186));
            MR_hl_field(MR_mktag(0), Var_185, 1) = ((MR_Box) (Var_187));
          }
          Var_184 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_185)));
          Var_189 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, AfterInstrs_52);
          Var_199 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_200 = (MR_String) "exit from recursive case";
          Var_204 = (MR_String) "start of base case";
          Var_205 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_198 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__middle_rec_scalar_common_1[4]);
          Var_197 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[6];
          {
            Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_203, 1) = ((MR_Box) (BaseLabel_28));
          }
          {
            Var_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_202, 0) = ((MR_Box) (Var_203));
            MR_hl_field(MR_mktag(0), Var_202, 1) = ((MR_Box) (Var_204));
          }
          {
            Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
            MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (Var_205));
          }
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Var_197));
            MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_201));
          }
          Var_195 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, Var_196);
          Var_207 = mercury__cord__from_list_1_f_0(TypeCtorInfo_248_248, BaseInstrs_47);
          Var_213 = (MR_String) "exit from base case";
          Var_210 = (MR_Word) &ll_backend__middle_rec_scalar_common_1[5];
          Var_209 = mercury__cord__singleton_1_f_0(TypeCtorInfo_248_248, ((MR_Box) (Var_210)));
          Var_208 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, LiveValCode_46, Var_209);
          Var_206 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_207, Var_208);
          Var_194 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_195, Var_206);
          Var_193 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, LiveValCode_46, Var_194);
          Var_192 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, TestAuxReg_64, Var_193);
          Var_191 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, DecrAuxReg_63, Var_192);
          Var_190 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, MaybeDecrSp_60, Var_191);
          Var_188 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_189, Var_190);
          Var_183 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_184, Var_188);
          Var_181 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_182, Var_183);
          Var_179 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_180, Var_181);
          Var_177 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_178, Var_179);
          Var_176 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, IncrAuxReg_62, Var_177);
          Var_175 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, MaybeIncrSp_59, Var_176);
          Var_170 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_171, Var_175);
          Var_169 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, InitAuxReg_61, Var_170);
          Var_167 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_168, Var_169);
          *Code_16 = mercury__cord__f_43_43_2_f_0(TypeCtorInfo_248_248, Var_157, Var_167);
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
  {
    ll_backend__middle_rec__find_labels_acc_3_p_0(Instrs_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Labels_4);
  }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Labels_3 = STATE_VARIABLE_Labels_0_2;
    else
    {
      MR_Word Instr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Labels_18_18;
      MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr_7, (MR_Integer) 1)));
      MR_Word Label_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Labels_0_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 1)));
        {
          STATE_VARIABLE_Labels_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_18_18, 0) = ((MR_Box) (Label_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Labels_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Labels_0_2));
        }
      }
      else
      {
        MR_Word Block_15;
        MR_Integer Var_13;
        MR_Integer Var_14;

        succeeded = ((((MR_tag((MR_Word) Uinstr_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 1)));
          Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 2)));
          Block_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_10, (MR_Integer) 3)));
          ll_backend__middle_rec__find_labels_acc_3_p_0(Block_15, STATE_VARIABLE_Labels_0_2, &STATE_VARIABLE_Labels_18_18);
        }
        else
          STATE_VARIABLE_Labels_18_18 = STATE_VARIABLE_Labels_0_2;
      }
      // direct tailcall eliminated
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
    MR_Word TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    MR_Word Used0_5;
    MR_Word Used1_6;
    MR_Word UsedList_7;

    mercury__set__init_1_p_0(TypeCtorInfo_9_9, &Used0_5);
    ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_3, Used0_5, &Used1_6);
    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_9_9, Used1_6, &UsedList_7);
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
        MR_Word LvalSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), Uinstr_4, (MR_Integer) 0)));
        MR_Word LvalList_29;

        mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, LvalSet_28, &LvalList_29);
        ll_backend__middle_rec__find_used_registers_lvals_3_p_0(LvalList_29, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));
            MR_Integer Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Integer Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_3_p_0(Instrs_32, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_Used_96_96;

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_33, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_96_96);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_34, STATE_VARIABLE_Used_96_96, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Rval_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
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
            MR_Word Rval_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_108, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_115, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_127, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_126, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeRegionRval_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 7)));
            MR_Word MaybeReuse_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 8)));
            MR_Word STATE_VARIABLE_Used_91_91;
            MR_Word STATE_VARIABLE_Used_92_92;
            MR_Word STATE_VARIABLE_Used_93_93;
            MR_Word Lval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Rval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 6)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_102, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_91_91);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_103, STATE_VARIABLE_Used_91_91, &STATE_VARIABLE_Used_92_92);
            if ((MaybeRegionRval_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_Used_93_93 = STATE_VARIABLE_Used_92_92;
            else
            {
              MR_Word RegionRval_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRegionRval_39, (MR_Integer) 0)));

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(RegionRval_41, STATE_VARIABLE_Used_92_92, &STATE_VARIABLE_Used_93_93);
            }
            if ((MaybeReuse_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_93_93;
            else
            {
              MR_Word ReuseRval_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_40, (MR_Integer) 0)));
              MR_Word MaybeFlagLval_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_40, (MR_Integer) 1)));
              MR_Word STATE_VARIABLE_Used_94_94;

              ll_backend__middle_rec__find_used_registers_rval_3_p_0(ReuseRval_42, STATE_VARIABLE_Used_93_93, &STATE_VARIABLE_Used_94_94);
              if ((MaybeFlagLval_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_94_94;
              else
              {
                MR_Word FlagLval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFlagLval_43, (MR_Integer) 0)));

                ll_backend__middle_rec__find_used_registers_lval_3_p_0(FlagLval_44, STATE_VARIABLE_Used_94_94, STATE_VARIABLE_Used_76);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_121, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_125, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_114, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 16:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));
            MR_Word NumLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4)));
            MR_Word AddrLval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5)));
            MR_Word STATE_VARIABLE_Used_88_88;
            MR_Word STATE_VARIABLE_Used_89_89;
            MR_Word _FillOp_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word _EmbeddedStackFrame_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(IdRval_46, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_88_88);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(NumLval_47, STATE_VARIABLE_Used_88_88, &STATE_VARIABLE_Used_89_89);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(AddrLval_48, STATE_VARIABLE_Used_89_89, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));
            MR_Word _SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word _EmbeddedStackFrame_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(ValueRval_50, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 19:
          *STATE_VARIABLE_Used_76 = STATE_VARIABLE_Used_0_75;
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_128, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word _Rsn_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_124, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_122, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

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
            MR_Word Components_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));
            MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 4)));
            MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 5)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 6)));
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 7)));
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 8)));
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 9)));
            MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 10)));

            ll_backend__middle_rec__find_used_registers_components_3_p_0(Components_52, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Integer Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Integer Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_116, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_109, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_117, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word LCLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Integer Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));

            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCLval_69, STATE_VARIABLE_Used_0_75, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word LCSLval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_Used_81_81;
            MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_70, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_81_81);
            ll_backend__middle_rec__find_used_registers_lval_3_p_0(LCSLval_71, STATE_VARIABLE_Used_81_81, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));
            MR_Word STATE_VARIABLE_Used_79_79;
            MR_Word LCRval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 3)));

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCRval_110, STATE_VARIABLE_Used_0_75, &STATE_VARIABLE_Used_79_79);
            ll_backend__middle_rec__find_used_registers_rval_3_p_0(LCSRval_73, STATE_VARIABLE_Used_79_79, STATE_VARIABLE_Used_76);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word STATE_VARIABLE_Used_77_77;
            MR_Word LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 1)));
            MR_Word LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_4, (MR_Integer) 2)));

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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Uinstr_7;
      MR_Word Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Used_14_14;
      MR_String Var_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
      ll_backend__middle_rec__find_used_registers_instr_3_p_0(Uinstr_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_14_14);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Lvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Used_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_7, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Comp_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Comps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
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
            MR_Word In_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Comp_7, (MR_Integer) 0)));

            ll_backend__middle_rec__insert_foreign_proc_input_registers_3_p_0(In_14, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Out_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), Comp_7, (MR_Integer) 0)));

            ll_backend__middle_rec__insert_foreign_proc_output_registers_3_p_0(Out_19, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_12_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Comp_7, (MR_Integer) 0)))) {
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Output_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Outputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Used_19_19;
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 1)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 2)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 3)));
      MR_String Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 4)));
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 5)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_7, (MR_Integer) 6)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_lval_3_p_0(Lval_10, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_19_19);
      // direct tailcall eliminated
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Used_3 = STATE_VARIABLE_Used_0_2;
    else
    {
      MR_Word Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 4)));
      MR_Word STATE_VARIABLE_Used_19_19;
      MR_String Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 0)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 1)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 2)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 3)));
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 5)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_7, (MR_Integer) 6)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Used_0_2;

      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_14, STATE_VARIABLE_Used_0_2, &STATE_VARIABLE_Used_19_19);
      // direct tailcall eliminated
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
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
    MR_Word tscc_output_1_STATE_VARIABLE_Used_13;

    // The code for TSCC PROC 1: pred ll_backend.middle_rec.find_used_registers_lval/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ll_backend.middle_rec.find_used_registers_lval/3-0
    // proc 2 in TSCC: pred ll_backend.middle_rec.find_used_registers_rval/3-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Lval_4 = tscc_proc_1_input_1_Lval_4;
      MR_Word STATE_VARIABLE_Used_0_12 = tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
      MR_Word STATE_VARIABLE_Used_13;
      MR_bool succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 1)));
      MR_Integer N_6;
      MR_Word Var_14;

      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0)));
        N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1)));
        succeeded = (Var_14 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer N1_7;
        MR_Box conv0_N1_7;

        mercury__builtin__copy_2_p_1(TypeCtorInfo_21_21, ((MR_Box) (N_6)), &conv0_N1_7);
        N1_7 = ((MR_Integer) conv0_N1_7);
        mercury__set__insert_3_p_0(TypeCtorInfo_21_21, ((MR_Box) (N1_7)), STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_13);
      }
      else
      {
        MR_Word Rval_9;
        MR_Word FieldNum_10;
        MR_Word Var_8;

        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
          Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2)));
          FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3)));
          {
            MR_Word STATE_VARIABLE_Used_16_16;
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_16_16);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_16_16;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word Var_11;

          succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
          if (succeeded)
          {
            Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
              return;
            }
          }
          else
          {
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
      MR_Word STATE_VARIABLE_Used_0_16 = tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
      MR_Word STATE_VARIABLE_Used_17;

      switch (MR_tag((MR_Word) Rval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Lval_4 = Lval_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = STATE_VARIABLE_Used_0_16;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Lval_4 = next_value_of_tscc_proc_1_input_1_Lval_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1)));
            MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval1_9;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_17 = STATE_VARIABLE_Used_0_16;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_17 = STATE_VARIABLE_Used_0_16;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval1_27;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_Used_19_19;
                MR_Word Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

                ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_28, STATE_VARIABLE_Used_0_16, &STATE_VARIABLE_Used_19_19);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_14;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_19_19;
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) MemRef_15)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_15, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_29;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                      // direct tailcall eliminated
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_15, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_34;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                      // direct tailcall eliminated
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval1_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 0)));
                      MR_Word Rval2_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 2)));
                      MR_Word STATE_VARIABLE_Used_20_45;
                      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_39, STATE_VARIABLE_Used_0_16, &STATE_VARIABLE_Used_20_45);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_41;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_20_45;
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_17;
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
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Used_13)
{
  {
    MR_Word tscc_proc_1_input_1_Lval_4;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
    MR_Word tscc_output_1_STATE_VARIABLE_Used_13;

    // The code for TSCC PROC 2: pred ll_backend.middle_rec.find_used_registers_rval/3-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ll_backend.middle_rec.find_used_registers_lval/3-0
    // proc 2 in TSCC: pred ll_backend.middle_rec.find_used_registers_rval/3-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Lval_4 = tscc_proc_1_input_1_Lval_4;
      MR_Word STATE_VARIABLE_Used_0_12 = tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
      MR_Word STATE_VARIABLE_Used_13;
      MR_bool succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 1)));
      MR_Integer N_6;
      MR_Word Var_14;

      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 0)));
        N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_4, (MR_Integer) 1)));
        succeeded = (Var_14 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer N1_7;
        MR_Box conv0_N1_7;

        mercury__builtin__copy_2_p_1(TypeCtorInfo_21_21, ((MR_Box) (N_6)), &conv0_N1_7);
        N1_7 = ((MR_Integer) conv0_N1_7);
        mercury__set__insert_3_p_0(TypeCtorInfo_21_21, ((MR_Box) (N1_7)), STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_13);
      }
      else
      {
        MR_Word Rval_9;
        MR_Word FieldNum_10;
        MR_Word Var_8;

        succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
          Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 2)));
          FieldNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 3)));
          {
            MR_Word STATE_VARIABLE_Used_16_16;
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

            ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval_9, STATE_VARIABLE_Used_0_12, &STATE_VARIABLE_Used_16_16);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Rval_4 = FieldNum_10;
            next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_16_16;
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
            goto top_of_proc_2;
          }
        }
        else
        {
          MR_Word Var_11;

          succeeded = ((((MR_tag((MR_Word) Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 0)))) == (MR_Integer) 12)));
          if (succeeded)
          {
            Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_4, (MR_Integer) 1)));
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_lval\'/3", (MR_String) "lvar");
              return;
            }
          }
          else
          {
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
      MR_Word STATE_VARIABLE_Used_0_16 = tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
      MR_Word STATE_VARIABLE_Used_17;

      switch (MR_tag((MR_Word) Rval_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Lval_4 = Lval_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = STATE_VARIABLE_Used_0_16;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Lval_4 = next_value_of_tscc_proc_1_input_1_Lval_4;
            tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_Used_0_12;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.find_used_registers_rval\'/3", (MR_String) "var");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 1)));
            MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval1_9;
            MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
            tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Used_17 = STATE_VARIABLE_Used_0_16;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Used_17 = STATE_VARIABLE_Used_0_16;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Rval1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval1_27;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3)));
                MR_Word STATE_VARIABLE_Used_19_19;
                MR_Word Rval1_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2)));
                MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

                ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_28, STATE_VARIABLE_Used_0_16, &STATE_VARIABLE_Used_19_19);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_14;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_19_19;
                tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MemRef_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) MemRef_15)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_15, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_29;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                      // direct tailcall eliminated
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_15, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4 = Rval_34;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_0_16;

                      // direct tailcall eliminated
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Rval1_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 0)));
                      MR_Word Rval2_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 2)));
                      MR_Word STATE_VARIABLE_Used_20_45;
                      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_15, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_2_input_1_Rval_4;
                      MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;

                      ll_backend__middle_rec__find_used_registers_rval_3_p_0(Rval1_39, STATE_VARIABLE_Used_0_16, &STATE_VARIABLE_Used_20_45);
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_2_input_1_Rval_4 = Rval2_41;
                      next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = STATE_VARIABLE_Used_20_45;
                      tscc_proc_2_input_1_Rval_4 = next_value_of_tscc_proc_2_input_1_Rval_4;
                      tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_Used_0_16;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Used_13 = STATE_VARIABLE_Used_17;
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_2));
      }
    }
    else
    {
      MR_Integer H_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      succeeded = (N_2 < H_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_2));
        }
      }
      else
      {
        MR_Integer N1_10 = (N_2 + (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = T_7;
        MR_Integer next_value_of_N_2 = N1_10;

        // direct tailcall eliminated
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Instr0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Instr_8;
      MR_Word Instrs_9;
      MR_Word Lives0_10;
      MR_String Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 1)));
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_5, (MR_Integer) 0)));

      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        Lives0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_13, (MR_Integer) 0)));
        {
          MR_Word Lives_12;
          MR_Word Var_14;

          mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (HeadVar__2_2)), Lives0_10, &Lives_12);
          {
            Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (Lives_12));
          }
          {
            Instr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "did not find call");
        return;
      }
    }
    else
    {
      MR_Word Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0)));
      MR_String Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 1)));
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 2)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 3)));
        Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 4)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 5)));
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 6)));
        {
          MR_Word Instrs3_22;
          MR_Word Instrs2_20;
          MR_Word Instr2_21;
          MR_Word Var_27;
          MR_String Var_24;
          MR_Word Var_23;

          ll_backend__opt_util__skip_comments_2_p_0(Instrs1_10, &Instrs2_20);
          succeeded = ((MR_tag((MR_Word) Instrs2_20)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Instr2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Instrs2_20, (MR_Integer) 0)));
            Instrs3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), Instrs2_20, (MR_Integer) 1)));
            Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr2_21, (MR_Integer) 0)));
            Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr2_21, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
              Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1)));
          }
          if (succeeded)
          {
            *Before_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *After_3 = Instrs3_22;
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.split_rec_code\'/3", (MR_String) "call not followed by label");
              return;
            }
          }
        }
      }
      else
      {
        MR_Word Before1_25;

        ll_backend__middle_rec__split_rec_code_3_p_0(Instrs1_10, &Before1_25, After_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Before_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Before1_25));
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word Instr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Test_13;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 0)));
      MR_String _Comment_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_9, (MR_Integer) 1)));
      MR_Word _OldTarget_14;

      succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Test_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 1)));
        _OldTarget_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_20, (MR_Integer) 2)));
        {
          MR_Word NewTest_18;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;

          if (!((Instrs0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "predicate \140ll_backend.middle_rec.generate_downloop_test\'/3", (MR_String) "if_val followed by other instructions");
              return;
            }
          }
          ll_backend__code_util__neg_rval_2_p_0(Test_13, &NewTest_18);
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Target_2));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (NewTest_18));
            MR_hl_field(MR_mktag(3), Var_25, 2) = ((MR_Box) (Var_26));
          }
          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) ((MR_String) "test on downward loop"));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Instrs_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        MR_Word Instrs1_19;

        ll_backend__middle_rec__generate_downloop_test_3_p_0(Instrs0_10, Target_2, &Instrs1_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Instrs_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_19));
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
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Goal_3;
    MR_Word Goals_4;
    MR_Word GoalExpr_6;
    MR_Word Var_7;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
      Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));
      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_17 = (MR_Word) MR_body(((MR_Word) GoalExpr_6), (MR_Integer) 0);
            MR_Word OnlyBuiltinsGoalExpr_206;
            MR_Word next_value_of_HeadVar__1_1;

            OnlyBuiltinsGoalExpr_206 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_17);
            succeeded = (OnlyBuiltinsGoalExpr_206 == (MR_Integer) 1);
            if (succeeded)
            {
              // direct tailcall eliminated
              next_value_of_HeadVar__1_1 = Goals_4;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3)));
            MR_Word OnlyBuiltinsGoalExpr_330;
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1)));
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 2)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 4)));
            MR_Word next_value_of_HeadVar__1_1;

            switch (MR_tag((MR_Word) Uni_34)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 6)));
                  MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 0)));
                  MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 1)));
                  MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 2)));
                  MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 3)));
                  MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 4)));
                  MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_34, (MR_Integer) 5)));

                  if ((SubInfo_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    OnlyBuiltinsGoalExpr_330 = (MR_Integer) 1;
                  else
                  {
                    MR_Word TakeAddressFields_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_46, (MR_Integer) 0)));
                    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_46, (MR_Integer) 1)));

                    if ((TakeAddressFields_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      OnlyBuiltinsGoalExpr_330 = (MR_Integer) 1;
                    else
                      OnlyBuiltinsGoalExpr_330 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                OnlyBuiltinsGoalExpr_330 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                OnlyBuiltinsGoalExpr_330 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_34, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_330 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_330 = (MR_Integer) 0;
                    break;
                }
                break;
            }
            succeeded = (OnlyBuiltinsGoalExpr_330 == (MR_Integer) 1);
            if (succeeded)
            {
              // direct tailcall eliminated
              next_value_of_HeadVar__1_1 = Goals_4;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0)));
            MR_Integer Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1)));
            MR_Word BuiltinState_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3)));
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 4)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 5)));

            switch (BuiltinState_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_219;
                  MR_Word PredId_226;
                  MR_Integer ProcId_227;

                  succeeded = (BuiltinState_28 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ll_backend__code_info__get_pred_id_2_p_0(CodeInfo_5, &PredId_226);
                    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_226, Var_25);
                    if (succeeded)
                    {
                      ll_backend__code_info__get_proc_id_2_p_0(CodeInfo_5, &ProcId_227);
                      succeeded = (ProcId_227 == Var_26);
                      if (succeeded)
                      {
                        Var_219 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_4);
                        succeeded = (Var_219 == (MR_Integer) 1);
                      }
                    }
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0)))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word OnlyBuiltinsGoalExpr_113;
                MR_Word next_value_of_HeadVar__1_1;

                switch (ConjType_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    OnlyBuiltinsGoalExpr_113 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    OnlyBuiltinsGoalExpr_113 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_13);
                    break;
                }
                succeeded = (OnlyBuiltinsGoalExpr_113 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word OnlyBuiltinsGoalExpr_144;
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_144 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_78);
                succeeded = (OnlyBuiltinsGoalExpr_144 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3)));
                MR_Word OnlyBuiltinsGoalExpr_299;
                MR_Word _Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word _CanFail_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word next_value_of_HeadVar__1_1;

                OnlyBuiltinsGoalExpr_299 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_16);
                succeeded = (OnlyBuiltinsGoalExpr_299 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word SubGoal_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word OnlyBuiltinsGoalExpr_268;
                MR_Word FGT_20;
                MR_Word Var_19;
                MR_Word next_value_of_HeadVar__1_1;

                succeeded = ((((MR_tag((MR_Word) Reason_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 1)));
                  FGT_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_18, (MR_Integer) 2)));
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
                  OnlyBuiltinsGoalExpr_268 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_268 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_79);
                succeeded = (OnlyBuiltinsGoalExpr_268 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word Then_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3)));
                MR_Word Else_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4)));
                MR_Word OnlyBuiltinsGoalExpr_175;
                MR_Word _Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word next_value_of_HeadVar__1_1;

                Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_22);
                succeeded = (Var_75 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_23);
                  succeeded = (Var_76 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_77 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_24);
                    succeeded = (Var_77 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                  OnlyBuiltinsGoalExpr_175 = (MR_Integer) 1;
                else
                  OnlyBuiltinsGoalExpr_175 = (MR_Integer) 0;
                succeeded = (OnlyBuiltinsGoalExpr_175 == (MR_Integer) 1);
                if (succeeded)
                {
                  // direct tailcall eliminated
                  next_value_of_HeadVar__1_1 = Goals_4;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
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
    MR_Word GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_12 = (MR_Word) MR_body(((MR_Word) GoalExpr_3), (MR_Integer) 0);
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_12;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Uni_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 3)));
          MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 0)));
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 1)));
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 2)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_3, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) Uni_29)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 6)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 0)));
                MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 1)));
                MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 2)));
                MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 3)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 4)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_29, (MR_Integer) 5)));

                if ((SubInfo_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  HeadVar__2_2 = (MR_Integer) 1;
                else
                {
                  MR_Word TakeAddressFields_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_41, (MR_Integer) 0)));
                  MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_41, (MR_Integer) 1)));

                  if ((TakeAddressFields_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_29, (MR_Integer) 0)))) {
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
          MR_Word BuiltinState_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 3)));
          MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 0)));
          MR_Integer Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 1)));
          MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 2)));
          MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 4)));
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_3, (MR_Integer) 5)));

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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));

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
              MR_Word Goals_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_73);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
              MR_Word _Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word _CanFail_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));

              HeadVar__2_2 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_11);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word SubGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
              MR_Word FGT_15;
              MR_Word Var_14;

              succeeded = ((((MR_tag((MR_Word) Reason_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 1)));
                FGT_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 2)));
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
                MR_Word next_value_of_HeadVar__1_1 = SubGoal_74;

                // direct tailcall eliminated
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
              MR_Word Then_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
              MR_Word Else_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4)));
              MR_Word _Vars_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;

              Var_70 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_17);
              succeeded = (Var_70 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_71 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_18);
                succeeded = (Var_71 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_72 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_19);
                  succeeded = (Var_72 == (MR_Integer) 1);
                }
              }
              if (succeeded)
                HeadVar__2_2 = (MR_Integer) 1;
              else
                HeadVar__2_2 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
            }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalExpr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_16 = (MR_Word) MR_body(((MR_Word) GoalExpr_7), (MR_Integer) 0);
            MR_Word OnlyBuiltinsGoal_82;

            OnlyBuiltinsGoal_82 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_16);
            switch (OnlyBuiltinsGoal_82) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 3)));
            MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 0)));
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 1)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 2)));
            MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_7, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) Uni_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 6)));
                  MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 0)));
                  MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 1)));
                  MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 2)));
                  MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 3)));
                  MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 4)));
                  MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_33, (MR_Integer) 5)));

                  if ((SubInfo_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_45, (MR_Integer) 0)));
                    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_45, (MR_Integer) 1)));

                    if ((TakeAddressFields_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
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
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_33, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
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
            MR_Word BuiltinState_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3)));
            MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 0)));
            MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 1)));
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 2)));
            MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 4)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 5)));

            switch (BuiltinState_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1)));
                MR_Word Goals_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2)));

                switch (ConjType_11) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_87;

                      OnlyBuiltinsGoal_87 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_12);
                      switch (OnlyBuiltinsGoal_87) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                            // direct tailcall eliminated
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
                MR_Word Goals_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1)));
                MR_Word OnlyBuiltinsGoal_80;

                OnlyBuiltinsGoal_80 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_77);
                switch (OnlyBuiltinsGoal_80) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3)));
                MR_Word OnlyBuiltinsGoal_85;
                MR_Word _Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1)));
                MR_Word _CanFail_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2)));

                OnlyBuiltinsGoal_85 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_15);
                switch (OnlyBuiltinsGoal_85) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1)));
                MR_Word SubGoal_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2)));
                MR_Word FGT_19;
                MR_Word Var_18;

                succeeded = ((((MR_tag((MR_Word) Reason_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_17, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_17, (MR_Integer) 1)));
                  FGT_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_17, (MR_Integer) 2)));
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
                        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                        // direct tailcall eliminated
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
                MR_Word Cond_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2)));
                MR_Word Then_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3)));
                MR_Word Else_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4)));
                MR_Word _Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1)));
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_76;

                Var_74 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_21);
                succeeded = (Var_74 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_75 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_22);
                  succeeded = (Var_75 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_76 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_23);
                    succeeded = (Var_76 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Goals_4;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                  HeadVar__2_2 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
              }
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
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word GoalExpr_10;
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
      MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
      MR_Word Var_11;

      Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
      GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0)));
      Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1)));
      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_19 = (MR_Word) MR_body(((MR_Word) GoalExpr_10), (MR_Integer) 0);
            MR_Word OnlyBuiltinsGoal_85;

            OnlyBuiltinsGoal_85 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_19);
            switch (OnlyBuiltinsGoal_85) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uni_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0)));
            MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1)));
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 2)));
            MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) Uni_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 6)));
                  MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 0)));
                  MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 1)));
                  MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 2)));
                  MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 3)));
                  MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 4)));
                  MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Uni_36, (MR_Integer) 5)));

                  if ((SubInfo_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  else
                  {
                    MR_Word TakeAddressFields_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_48, (MR_Integer) 0)));
                    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubInfo_48, (MR_Integer) 1)));

                    if ((TakeAddressFields_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
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
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uni_36, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
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
            MR_Word BuiltinState_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 3)));
            MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0)));
            MR_Integer Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1)));
            MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 2)));
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4)));
            MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 5)));

            switch (BuiltinState_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              HeadVar__2_2 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                switch (ConjType_14) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word OnlyBuiltinsGoal_90;

                      OnlyBuiltinsGoal_90 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_15);
                      switch (OnlyBuiltinsGoal_90) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          HeadVar__2_2 = (MR_Integer) 0;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                            // direct tailcall eliminated
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
                MR_Word Goals_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word OnlyBuiltinsGoal_83;

                OnlyBuiltinsGoal_83 = ll_backend__middle_rec__contains_only_builtins_list_1_f_0(Goals_80);
                switch (OnlyBuiltinsGoal_83) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word OnlyBuiltinsGoal_88;
                MR_Word _Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word _CanFail_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));

                OnlyBuiltinsGoal_88 = ll_backend__middle_rec__contains_only_builtins_cases_1_f_0(Cases_18);
                switch (OnlyBuiltinsGoal_88) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    HeadVar__2_2 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                      // direct tailcall eliminated
                      HeadVar__1_1 = next_value_of_HeadVar__1_1;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word SubGoal_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word FGT_22;
                MR_Word Var_21;

                succeeded = ((((MR_tag((MR_Word) Reason_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 1)));
                  FGT_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_20, (MR_Integer) 2)));
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
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                {
                  MR_Word OnlyBuiltinsGoal_95;

                  OnlyBuiltinsGoal_95 = ll_backend__middle_rec__contains_only_builtins_1_f_0(SubGoal_81);
                  switch (OnlyBuiltinsGoal_95) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      HeadVar__2_2 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                        // direct tailcall eliminated
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
                MR_Word Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2)));
                MR_Word Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3)));
                MR_Word Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4)));
                MR_Word _Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1)));
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_79;

                Var_77 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Cond_24);
                succeeded = (Var_77 == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_78 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Then_25);
                  succeeded = (Var_78 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_79 = ll_backend__middle_rec__contains_only_builtins_1_f_0(Else_26);
                    succeeded = (Var_79 == (MR_Integer) 1);
                  }
                }
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__1_1 = Cases_6;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
                else
                  HeadVar__2_2 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.middle_rec", (MR_String) "function \140ll_backend.middle_rec.contains_only_builtins_expr\'/1", (MR_String) "shorthand");
              }
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
