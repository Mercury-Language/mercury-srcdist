/*
** Automatically generated from `closure_gen.m'
** by the Mercury compiler,
** version rotd-2018-06-03
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


// :- module ll_backend.closure_gen.
// :- implementation.

/*
INIT mercury__ll_backend__closure_gen__init
ENDINIT
*/

#include "ll_backend.closure_gen.mih"


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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
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




static void MR_CALL 
ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word Args_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61,
  MR_Word * STATE_VARIABLE_CLD_62);

static void MR_CALL 
ll_backend__closure_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * STATE_VARIABLE_MayUseAtomic_8);

static void MR_CALL 
ll_backend__closure_gen__generate_new_closure_from_old_9_p_0(
  MR_Word Var_10,
  MR_Word CallPred_11,
  MR_Word CallArgs_12,
  MR_Word GoalInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static void MR_CALL 
ll_backend__closure_gen__generate_extra_closure_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LoopCounter_2,
  MR_Word NewClosure_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);


static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_1[8][2];

static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_2[6][1];




static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__closure_gen_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_2[6][1] = {
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
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "build new closure from old closure"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
ll_backend__closure_gen__generate_closure_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49)
{
  ll_backend__closure_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(PredId_12, ProcId_13, Var_15, Args_16, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
}

void MR_CALL 
ll_backend__closure_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_21;
    MR_Word Preds_22;
    MR_Word PredInfo_23;
    MR_Word Procs_24;
    MR_Word ProcInfo_25;
    MR_Word ProcInfoGoal_26;
    MR_Word CodeModel_27;
    MR_Word ProcHeadVars_28;
    MR_Box conv0_PredInfo_23;
    MR_Box conv1_ProcInfo_25;
    MR_Word CallPred_29;
    MR_Word CallArgs_30;
    MR_Word TypeInfo_66_66;
    MR_Word TypeInfo_67_67;
    MR_Word ProcPred_31;
    MR_Word ProcArgs_32;
    MR_Word CallDeterminism_38;
    MR_Word CallCodeModel_40;
    MR_Word Globals_41;
    MR_Word Deep_42;
    MR_Word UseFloatRegs_43;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_64;
    MR_Word Var_65;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_46, &ModuleInfo_21);
    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_21, &Preds_22);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_22, ((MR_Box) (PredId_12)), &conv0_PredInfo_23);
    PredInfo_23 = ((MR_Word) (conv0_PredInfo_23));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_23, &Procs_24);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_24, ((MR_Box) (ProcId_13)), &conv1_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) (conv1_ProcInfo_25));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_25, &ProcInfoGoal_26);
    CodeModel_27 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_25);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_25, &ProcHeadVars_28);
    succeeded = ((MR_tag((MR_Word) Args_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      CallPred_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 0))));
      CallArgs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_16, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) ProcHeadVars_28)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ProcPred_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcHeadVars_28, (MR_Integer) 0))));
        ProcArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcHeadVars_28, (MR_Integer) 1))));
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcInfoGoal_26, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_mktag((MR_Integer) 3)))) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))));
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2))));
          CallDeterminism_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 5))));
          TypeInfo_66_66 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ProcArgs_32)), ((MR_Box) (Var_64)));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
              TypeInfo_67_67 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_67_67, ((MR_Box) (ProcPred_31)), ((MR_Box) (Var_65)));
              if (succeeded)
              {
                hlds__code_model__determinism_to_code_model_2_p_0(CallDeterminism_38, &CallCodeModel_40);
                succeeded = (CodeModel_27 == CallCodeModel_40);
                if (!(succeeded))
                {
                  succeeded = (CodeModel_27 == (MR_Integer) 2);
                  if (succeeded)
                    succeeded = (CallCodeModel_40 == (MR_Integer) 0);
                }
                if (succeeded)
                {
                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_41);
                  Var_52 = (MR_Integer) 211;
                  libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_52, &Deep_42);
                  succeeded = (Deep_42 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_53 = (MR_Integer) 269;
                    libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_53, &UseFloatRegs_43);
                    succeeded = (UseFloatRegs_43 == (MR_Integer) 0);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      if ((CallArgs_30 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_15, CallPred_29, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
        *Code_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_47 = STATE_VARIABLE_CI_0_46;
      }
      else
        ll_backend__closure_gen__generate_new_closure_from_old_9_p_0(Var_15, CallPred_29, CallArgs_30, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
    else
      ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(ModuleInfo_21, PredId_12, ProcId_13, PredInfo_23, ProcInfo_25, Var_15, Args_16, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
  }
}

static void MR_CALL 
ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word Args_20,
  MR_Word GoalInfo_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_59,
  MR_Word * STATE_VARIABLE_CI_60,
  MR_Word STATE_VARIABLE_CLD_0_61,
  MR_Word * STATE_VARIABLE_CLD_62)
{
  {
    MR_Word CodeAddr_25;
    MR_Word ProcLabel_26;
    MR_Word CodeAddrRval_27;
    MR_Word ClosureInfo_28;
    MR_Word ModuleName_29;
    MR_Word Context_30;
    MR_String FileName_31;
    MR_Integer LineNumber_32;
    MR_Word GoalId_33;
    MR_Integer GoalIdNum_34;
    MR_String GoalIdStr_35;
    MR_Word CallerProcLabel_36;
    MR_Integer SeqNo_37;
    MR_Word StaticCellInfo0_38;
    MR_Word PredOrigin_39;
    MR_Word StaticCellInfo_40;
    MR_Word ClosureLayoutTypedRvals_41;
    MR_Word Data_42;
    MR_Word ClosureDataAddr_43;
    MR_Word ClosureLayoutRval_44;
    MR_Word ArgInfo_45;
    MR_Word VarTypes_46;
    MR_Word MayUseAtomic0_47;
    MR_Word ArgsR_48;
    MR_Word ArgsF_49;
    MR_Word MayUseAtomic_50;
    MR_Integer NumArgsR_51;
    MR_Integer NumArgsF_52;
    MR_Integer NumArgsRF_53;
    MR_Word ArgsRF_54;
    MR_Word Vector_55;
    MR_Word MaybeAllocId_58;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_CI_65_65;
    MR_Word STATE_VARIABLE_CI_66_66;
    MR_Word STATE_VARIABLE_CI_67_67;
    MR_Word STATE_VARIABLE_CI_68_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Integer Var_82;
    MR_Word STATE_VARIABLE_CI_83_83;

    CodeAddr_25 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_0_59, ModuleInfo_14, PredId_15, ProcId_16, (MR_Integer) 0);
    ProcLabel_26 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(CodeAddr_25);
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (CodeAddr_25));
    }
    {
      CodeAddrRval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CodeAddrRval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), CodeAddrRval_27, 1) = ((MR_Box) (Var_64));
    }
    ll_backend__continuation_info__generate_closure_layout_4_p_0(ModuleInfo_14, PredId_15, ProcId_16, &ClosureInfo_28);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_14, &ModuleName_29);
    Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
    mercury__term__context_file_2_p_0(Context_30, &FileName_31);
    mercury__term__context_line_2_p_0(Context_30, &LineNumber_32);
    GoalId_33 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_21);
    GoalIdNum_34 = (MR_Integer) (GoalId_33);
    GoalIdStr_35 = mercury__string__int_to_string_1_f_0(GoalIdNum_34);
    ll_backend__code_info__get_proc_label_2_p_0(STATE_VARIABLE_CI_0_59, &CallerProcLabel_36);
    ll_backend__code_info__get_next_closure_seq_no_3_p_0(&SeqNo_37, STATE_VARIABLE_CI_0_59, &STATE_VARIABLE_CI_65_65);
    ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_65_65, &StaticCellInfo0_38);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_17, &PredOrigin_39);
    ll_backend__stack_layout__construct_closure_layout_13_p_0(CallerProcLabel_36, SeqNo_37, ClosureInfo_28, ProcLabel_26, ModuleName_29, FileName_31, LineNumber_32, PredOrigin_39, GoalIdStr_35, StaticCellInfo0_38, &StaticCellInfo_40, &ClosureLayoutTypedRvals_41, &Data_42);
    ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_40, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_66_66);
    ll_backend__code_info__add_closure_layout_3_p_0(Data_42, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_67_67);
    ll_backend__code_info__add_scalar_static_cell_4_p_0(ClosureLayoutTypedRvals_41, &ClosureDataAddr_43, STATE_VARIABLE_CI_67_67, &STATE_VARIABLE_CI_68_68);
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (ClosureDataAddr_43));
      MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ClosureLayoutRval_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ClosureLayoutRval_44, 1) = ((MR_Box) (Var_69));
    }
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_18, &ArgInfo_45);
    ll_backend__code_info__get_vartypes_2_p_0(STATE_VARIABLE_CI_68_68, &VarTypes_46);
    ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_68_68, &MayUseAtomic0_47);
    ll_backend__closure_gen__generate_pred_args_8_p_0(STATE_VARIABLE_CI_68_68, VarTypes_46, Args_20, ArgInfo_45, &ArgsR_48, &ArgsF_49, MayUseAtomic0_47, &MayUseAtomic_50);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_48, &NumArgsR_51);
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsF_49, &NumArgsF_52);
    NumArgsRF_53 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumArgsR_51, NumArgsF_52);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_48, ArgsF_49, &ArgsRF_54);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ClosureLayoutRval_44));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (CodeAddrRval_27));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (NumArgsRF_53));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (ArgsRF_54));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Vector_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Vector_55, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Vector_55, 1) = ((MR_Box) (Var_73));
    }
    Var_82 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), Vector_55);
    ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_30, (MR_String) "closure", Var_82, &MaybeAllocId_58, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_83_83);
    ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_19, (MR_Integer) 0, (MR_Integer) 0, Vector_55, (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))), (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))), MaybeAllocId_58, MayUseAtomic_50, Code_22, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_60, STATE_VARIABLE_CLD_0_61, STATE_VARIABLE_CLD_62);
  }
}

static void MR_CALL 
ll_backend__closure_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTypes_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * STATE_VARIABLE_MayUseAtomic_8)
{
  if ((HeadVar__3_3 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *HeadVar__6_6 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    *STATE_VARIABLE_MayUseAtomic_8 = STATE_VARIABLE_MayUseAtomic_0_7;
  }
  else
  {
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.closure_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
        return;
      }
    }
    else
    {
      MR_Word ArgInfo_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgInfos_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word RegType_35;
      MR_Word ArgMode_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_30, (MR_Integer) 1))));
      MR_Word CellArg_40;
      MR_Word Type_41;
      MR_Word ModuleInfo_42;
      MR_Word ArgsR0_43;
      MR_Word ArgsF0_44;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_30, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MayUseAtomic_51_51;

      RegType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
      switch (ArgMode_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IsDummy_38;
            MR_Word Rval_39;

            IsDummy_38 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(CI_1, Var_54);
            switch (IsDummy_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_39 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[2]));
                break;
              case (MR_Integer) 1:
                {
                  Rval_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Rval_39, 0) = ((MR_Box) (Var_54));
                }
                break;
            }
            {
              CellArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CellArg_40, 0) = ((MR_Box) (Rval_39));
              MR_hl_field(MR_mktag(1), CellArg_40, 1) = ((MR_Box) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          CellArg_40 = (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          break;
      }
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_2, Var_54, &Type_41);
      ll_backend__code_info__get_module_info_2_p_0(CI_1, &ModuleInfo_42);
      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_42, Type_41, STATE_VARIABLE_MayUseAtomic_0_7, &STATE_VARIABLE_MayUseAtomic_51_51);
      ll_backend__closure_gen__generate_pred_args_8_p_0(CI_1, VarTypes_2, Var_53, ArgInfos_31, &ArgsR0_43, &ArgsF0_44, STATE_VARIABLE_MayUseAtomic_51_51, STATE_VARIABLE_MayUseAtomic_8);
      switch (RegType_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *HeadVar__5_5 = ArgsR0_43;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsF0_44));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CellArg_40));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsR0_43));
            }
            *HeadVar__6_6 = ArgsF0_44;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__closure_gen__generate_new_closure_from_old_9_p_0(
  MR_Word Var_10,
  MR_Word CallPred_11,
  MR_Word CallArgs_12,
  MR_Word GoalInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_38,
  MR_Word * STATE_VARIABLE_CI_39,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_Word LoopStart_17;
    MR_Word LoopTest_18;
    MR_Word LoopCounter_19;
    MR_Word NumOldArgs_20;
    MR_Word NewClosure_21;
    MR_Word Zero_22;
    MR_Word One_23;
    MR_Word Two_24;
    MR_Word Three_25;
    MR_Integer NumNewArgs_26;
    MR_Word NumNewArgs_Rval_27;
    MR_Integer NumNewArgsPlusThree_28;
    MR_Word NumNewArgsPlusThree_Rval_29;
    MR_Word OldClosureCode_30;
    MR_Word OldClosure_31;
    MR_Word Context_32;
    MR_Word MaybeAllocId_33;
    MR_Word NewClosureCode_35;
    MR_Word ExtraArgsCode_36;
    MR_Word AssignCode_37;
    MR_Word STATE_VARIABLE_CI_42_42;
    MR_Word STATE_VARIABLE_CI_43_43;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word STATE_VARIABLE_CLD_47_47;
    MR_Word STATE_VARIABLE_CLD_49_49;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_CLD_61_61;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_85;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_120;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_180;
    MR_Word STATE_VARIABLE_CLD_183_183;
    MR_Word STATE_VARIABLE_CLD_184_184;
    MR_Word STATE_VARIABLE_CLD_185_185;
    MR_Word STATE_VARIABLE_CLD_186_186;
    MR_Word Var_188;
    MR_Word Var_189;

    ll_backend__code_info__get_next_label_3_p_0(&LoopStart_17, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_42_42);
    ll_backend__code_info__get_next_label_3_p_0(&LoopTest_18, STATE_VARIABLE_CI_42_42, &STATE_VARIABLE_CI_43_43);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoopCounter_19, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_45_45);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumOldArgs_20, STATE_VARIABLE_CLD_45_45, &STATE_VARIABLE_CLD_47_47);
    ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NewClosure_21, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_49_49);
    Zero_22 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[2]));
    One_23 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[3]));
    Two_24 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[4]));
    Three_25 = (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[5]));
    mercury__list__length_2_p_0((MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]), CallArgs_12, &NumNewArgs_26);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (NumNewArgs_26));
    }
    {
      NumNewArgs_Rval_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumNewArgs_Rval_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), NumNewArgs_Rval_27, 1) = ((MR_Box) (Var_58));
    }
    NumNewArgsPlusThree_28 = (MR_Integer) ((MR_Unsigned) NumNewArgs_26 + (MR_Unsigned) (MR_Integer) 3);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (NumNewArgsPlusThree_28));
    }
    {
      NumNewArgsPlusThree_Rval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), NumNewArgsPlusThree_Rval_29, 1) = ((MR_Box) (Var_60));
    }
    ll_backend__code_loc_dep__produce_variable_6_p_0(CallPred_11, &OldClosureCode_30, &OldClosure_31, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CLD_49_49, &STATE_VARIABLE_CLD_61_61);
    Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
    ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_32, (MR_String) "closure", NumNewArgsPlusThree_28, &MaybeAllocId_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_39);
    Var_74 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[0]));
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_73, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_73, 3) = ((MR_Box) (Two_24));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (NumOldArgs_20));
      MR_hl_field(MR_mktag(3), Var_71, 2) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
    }
    Var_83 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[1]));
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (NumOldArgs_20));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_82, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_82, 3) = ((MR_Box) (NumNewArgsPlusThree_Rval_29));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (NewClosure_21));
      MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_79, 5) = ((MR_Box) (MaybeAllocId_33));
      MR_hl_field(MR_mktag(3), Var_79, 6) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_79, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_79, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (NewClosure_21));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (Zero_22));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_97, 3) = ((MR_Box) (Zero_22));
    }
    {
      Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (Var_96));
    }
    {
      Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
    }
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_104, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_104, 3) = ((MR_Box) (One_23));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_109, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_109, 3) = ((MR_Box) (One_23));
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Var_109));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(3), Var_103, 2) = ((MR_Box) (Var_108));
    }
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_116, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_116, 3) = ((MR_Box) (Two_24));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_120, 3) = ((MR_Box) (NumNewArgs_Rval_27));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(3), Var_115, 2) = ((MR_Box) (Var_120));
    }
    {
      Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_128, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), Var_128, 3) = ((MR_Box) (Three_25));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_127, 1) = ((MR_Box) (NumOldArgs_20));
      MR_hl_field(MR_mktag(3), Var_127, 2) = ((MR_Box) (Var_128));
    }
    {
      Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (LoopCounter_19));
      MR_hl_field(MR_mktag(3), Var_135, 2) = ((MR_Box) (Three_25));
    }
    {
      Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (Var_135));
      MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (LoopTest_18));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_144, 1) = ((MR_Box) (LoopStart_17));
    }
    {
      Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Var_144));
      MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
    }
    {
      Var_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (LoopCounter_19));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_149, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(3), Var_149, 3) = ((MR_Box) (Var_153));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(3), Var_155, 2) = ((MR_Box) (OldClosure_31));
      MR_hl_field(MR_mktag(3), Var_155, 3) = ((MR_Box) (Var_153));
    }
    {
      Var_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (Var_155));
    }
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(3), Var_148, 2) = ((MR_Box) (Var_154));
    }
    {
      Var_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (Var_148));
      MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
    }
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(3), Var_163, 2) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(3), Var_163, 3) = ((MR_Box) (One_23));
    }
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) (LoopCounter_19));
      MR_hl_field(MR_mktag(3), Var_162, 2) = ((MR_Box) (Var_163));
    }
    {
      Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (Var_162));
      MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
    }
    {
      Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_170, 1) = ((MR_Box) (LoopTest_18));
    }
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
    }
    {
      Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[7])));
      MR_hl_field(MR_mktag(3), Var_175, 2) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(3), Var_175, 3) = ((MR_Box) (Var_85));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (LoopStart_17));
    }
    {
      Var_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_174, 1) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(3), Var_174, 2) = ((MR_Box) (Var_180));
    }
    {
      Var_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_173, 0) = ((MR_Box) (Var_174));
      MR_hl_field(MR_mktag(0), Var_173, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
    }
    {
      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (Var_169));
      MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_172));
    }
    {
      Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (Var_161));
      MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_168));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_160));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_133));
    }
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_101));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_89));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (&ll_backend__closure_gen_scalar_common_1[6]));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_69));
    }
    NewClosureCode_35 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_64);
    ll_backend__closure_gen__generate_extra_closure_args_7_p_0(CallArgs_12, LoopCounter_19, NewClosure_21, &ExtraArgsCode_36, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_61_61, &STATE_VARIABLE_CLD_183_183);
    ll_backend__code_loc_dep__release_reg_3_p_0(LoopCounter_19, STATE_VARIABLE_CLD_183_183, &STATE_VARIABLE_CLD_184_184);
    ll_backend__code_loc_dep__release_reg_3_p_0(NumOldArgs_20, STATE_VARIABLE_CLD_184_184, &STATE_VARIABLE_CLD_185_185);
    ll_backend__code_loc_dep__release_reg_3_p_0(NewClosure_21, STATE_VARIABLE_CLD_185_185, &STATE_VARIABLE_CLD_186_186);
    ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_10, NewClosure_21, &AssignCode_37, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_186_186, STATE_VARIABLE_CLD_41);
    Var_189 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExtraArgsCode_36, AssignCode_37);
    Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NewClosureCode_35, Var_189);
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), OldClosureCode_30, Var_188);
  }
}

static void MR_CALL 
ll_backend__closure_gen__generate_extra_closure_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word LoopCounter_2,
  MR_Word NewClosure_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  if ((HeadVar__1_1 == (MR_Word) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FieldLval_21;
    MR_Word IsDummy_22;
    MR_Word ProduceCode_23;
    MR_Word AssignCode_24;
    MR_Word IncrCode_26;
    MR_Word VarsCode_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_CLD_34_34;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_55;
    MR_Word Var_56;

    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (NewClosure_3));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (LoopCounter_2));
    }
    {
      FieldLval_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FieldLval_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), FieldLval_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[0])));
      MR_hl_field(MR_mktag(3), FieldLval_21, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(3), FieldLval_21, 3) = ((MR_Box) (Var_33));
    }
    IsDummy_22 = ll_backend__code_info__variable_is_of_dummy_type_2_f_0(HeadVar__5_5, Var_14);
    switch (IsDummy_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_38;
          MR_Word Var_39;

          ProduceCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[2])));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
          }
          AssignCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_38)));
          STATE_VARIABLE_CLD_34_34 = STATE_VARIABLE_CLD_0_6;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Value_25;
          MR_Word Var_35;
          MR_Word Var_36;

          ll_backend__code_loc_dep__produce_variable_6_p_0(Var_14, &ProduceCode_23, &Value_25, HeadVar__5_5, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_34_34);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(MR_mktag(3), Var_36, 2) = ((MR_Box) (Value_25));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) ((MR_String) "set new argument field"));
          }
          AssignCode_24 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_35)));
        }
        break;
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__closure_gen_scalar_common_2[1])));
      MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__closure_gen_scalar_common_1[3])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (LoopCounter_2));
      MR_hl_field(MR_mktag(3), Var_45, 2) = ((MR_Box) (Var_46));
    }
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
    }
    IncrCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_44)));
    ll_backend__closure_gen__generate_extra_closure_args_7_p_0(Vars_15, LoopCounter_2, NewClosure_3, &VarsCode_27, HeadVar__5_5, STATE_VARIABLE_CLD_34_34, STATE_VARIABLE_CLD_7);
    Var_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), IncrCode_26, VarsCode_27);
    Var_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignCode_24, Var_56);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceCode_23, Var_55);
  }
}

void mercury__ll_backend__closure_gen__init(void)
{
}

void mercury__ll_backend__closure_gen__init_type_tables(void)
{
}

void mercury__ll_backend__closure_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__closure_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.closure_gen.
