/*
** Automatically generated from `closure_gen.m'
** by the Mercury compiler,
** version rotd-2023-02-02
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
#include "digraph.mih"
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
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "ll_backend.stack_layout.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
  MR_Word STATE_VARIABLE_CI_0_58,
  MR_Word * STATE_VARIABLE_CI_59,
  MR_Word STATE_VARIABLE_CLD_0_60,
  MR_Word * STATE_VARIABLE_CLD_61);

static void MR_CALL 
ll_backend__closure_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTable_2,
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

static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_2[7][1];




static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__closure_gen_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[0])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[1])))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[3])))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_2[7][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "build new closure from old closure"))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
  /* row   6 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



void MR_CALL 
ll_backend__closure_gen__construct_closure_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_45,
  MR_Word * STATE_VARIABLE_CI_46,
  MR_Word STATE_VARIABLE_CLD_0_47,
  MR_Word * STATE_VARIABLE_CLD_48)
{
  ll_backend__closure_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(PredId_12, ProcId_13, Var_15, Args_16, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_45, STATE_VARIABLE_CI_46, STATE_VARIABLE_CLD_0_47, STATE_VARIABLE_CLD_48);
}

void MR_CALL 
ll_backend__closure_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_108_111_115_117_114_101_95_95_91_51_93_95_48_11_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Var_15,
  MR_Word Args_16,
  MR_Word GoalInfo_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_45,
  MR_Word * STATE_VARIABLE_CI_46,
  MR_Word STATE_VARIABLE_CLD_0_47,
  MR_Word * STATE_VARIABLE_CLD_48)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_21;
  MR_Word PredInfo_22;
  MR_Word Procs_23;
  MR_Word ProcInfo_24;
  MR_Word ProcInfoGoal_25;
  MR_Word CodeModel_26;
  MR_Word ProcHeadVars_27;
  MR_Box conv0_ProcInfo_24;
  MR_Word CallPred_28;
  MR_Word CallArgs_29;
  MR_Word TypeInfo_58_58;
  MR_Word TypeInfo_59_59;
  MR_Word ProcPred_30;
  MR_Word ProcArgs_31;
  MR_Word CallDeterminism_37;
  MR_Word CallCodeModel_39;
  MR_Word Globals_40;
  MR_Word Deep_41;
  MR_Word UseFloatRegs_42;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_Word Var_57;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_45, &ModuleInfo_21);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_21, PredId_12, &PredInfo_22);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_22, &Procs_23);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_23, ((MR_Box) (ProcId_13)), &conv0_ProcInfo_24);
  ProcInfo_24 = ((MR_Word) (conv0_ProcInfo_24));
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_24, &ProcInfoGoal_25);
  CodeModel_26 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_24);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_24, &ProcHeadVars_27);
  succeeded = (Args_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    CallPred_28 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 0))));
    CallArgs_29 = ((MR_Word) ((MR_hl_field(1, Args_16, (MR_Integer) 1))));
    succeeded = (ProcHeadVars_27 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcPred_30 = ((MR_Word) ((MR_hl_field(1, ProcHeadVars_27, (MR_Integer) 0))));
      ProcArgs_31 = ((MR_Word) ((MR_hl_field(1, ProcHeadVars_27, (MR_Integer) 1))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, ProcInfoGoal_25, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_49)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_49, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_50 = ((MR_Word) ((MR_hl_field(3, Var_49, (MR_Integer) 1))));
        Var_56 = ((MR_Word) ((MR_hl_field(3, Var_49, (MR_Integer) 2))));
        CallDeterminism_37 = ((MR_Unsigned) ((MR_hl_field(3, Var_49, (MR_Integer) 5))) & (MR_Integer) 7);
        TypeInfo_58_58 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ProcArgs_31)), ((MR_Box) (Var_56)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_57 = ((MR_Word) ((MR_hl_field(0, Var_50, (MR_Integer) 0))));
            TypeInfo_59_59 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ProcPred_30)), ((MR_Box) (Var_57)));
            if (succeeded)
            {
              hlds__code_model__determinism_to_code_model_2_p_0(CallDeterminism_37, &CallCodeModel_39);
              succeeded = (CodeModel_26 == CallCodeModel_39);
              if (!(succeeded))
              {
                succeeded = (CodeModel_26 == (MR_Integer) 2);
                if (succeeded)
                  succeeded = (CallCodeModel_39 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_21, &Globals_40);
                Var_51 = (MR_Integer) 244;
                libs__globals__lookup_bool_option_3_p_0(Globals_40, Var_51, &Deep_41);
                succeeded = (Deep_41 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_52 = (MR_Integer) 307;
                  libs__globals__lookup_bool_option_3_p_0(Globals_40, Var_52, &UseFloatRegs_42);
                  succeeded = (UseFloatRegs_42 == (MR_Integer) 0);
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
    if ((CallArgs_29 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_15, CallPred_28, STATE_VARIABLE_CLD_0_47, STATE_VARIABLE_CLD_48);
      *Code_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_46 = STATE_VARIABLE_CI_0_45;
    }
    else
      ll_backend__closure_gen__generate_new_closure_from_old_9_p_0(Var_15, CallPred_28, CallArgs_29, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_45, STATE_VARIABLE_CI_46, STATE_VARIABLE_CLD_0_47, STATE_VARIABLE_CLD_48);
  else
    ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(ModuleInfo_21, PredId_12, ProcId_13, PredInfo_22, ProcInfo_24, Var_15, Args_16, GoalInfo_17, Code_18, STATE_VARIABLE_CI_0_45, STATE_VARIABLE_CI_46, STATE_VARIABLE_CLD_0_47, STATE_VARIABLE_CLD_48);
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
  MR_Word STATE_VARIABLE_CI_0_58,
  MR_Word * STATE_VARIABLE_CI_59,
  MR_Word STATE_VARIABLE_CLD_0_60,
  MR_Word * STATE_VARIABLE_CLD_61)
{
  MR_Word CodeAddr_25;
  MR_Word ProcLabel_26;
  MR_Word CodeAddrRval_27;
  MR_Word ClosureInfo_28;
  MR_Word ModuleName_29;
  MR_Word Context_30;
  MR_String FileName_31;
  MR_Integer LineNumber_32;
  MR_Integer GoalIdNum_33;
  MR_String GoalIdStr_34;
  MR_Word CallerProcLabel_35;
  MR_Integer SeqNo_36;
  MR_Word StaticCellInfo0_37;
  MR_Word PredOrigin_38;
  MR_Word StaticCellInfo_39;
  MR_Word ClosureLayoutTypedRvals_40;
  MR_Word Data_41;
  MR_Word ClosureDataAddr_42;
  MR_Word ClosureLayoutRval_43;
  MR_Word ArgInfo_44;
  MR_Word VarTable_45;
  MR_Word MayUseAtomic0_46;
  MR_Word ArgsR_47;
  MR_Word ArgsF_48;
  MR_Word MayUseAtomic_49;
  MR_Integer NumArgsR_50;
  MR_Integer NumArgsF_51;
  MR_Integer NumArgsRF_52;
  MR_Word ArgsRF_53;
  MR_Word CellArgs_54;
  MR_Word MaybeAllocId_57;
  MR_Word Var_63;
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

  CodeAddr_25 = ll_backend__code_info__make_proc_entry_label_5_f_0(STATE_VARIABLE_CI_0_58, ModuleInfo_14, PredId_15, ProcId_16, (MR_Integer) 1);
  ProcLabel_26 = ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(CodeAddr_25);
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (CodeAddr_25));
  }
  {
    CodeAddrRval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CodeAddrRval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, CodeAddrRval_27, 1) = ((MR_Box) (Var_63));
  }
  ll_backend__continuation_info__generate_closure_layout_4_p_0(ModuleInfo_14, PredId_15, ProcId_16, &ClosureInfo_28);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_14, &ModuleName_29);
  Context_30 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_21);
  FileName_31 = mercury__term_context__context_file_1_f_0(Context_30);
  LineNumber_32 = mercury__term_context__context_line_1_f_0(Context_30);
  Var_64 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_21);
  GoalIdNum_33 = (MR_Integer) (Var_64);
  GoalIdStr_34 = mercury__string__int_to_string_1_f_0(GoalIdNum_33);
  ll_backend__code_info__get_proc_label_2_p_0(STATE_VARIABLE_CI_0_58, &CallerProcLabel_35);
  ll_backend__code_info__get_next_closure_seq_no_3_p_0(&SeqNo_36, STATE_VARIABLE_CI_0_58, &STATE_VARIABLE_CI_65_65);
  ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_65_65, &StaticCellInfo0_37);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_17, &PredOrigin_38);
  ll_backend__stack_layout__construct_closure_layout_13_p_0(CallerProcLabel_35, SeqNo_36, ClosureInfo_28, ProcLabel_26, ModuleName_29, FileName_31, LineNumber_32, PredOrigin_38, GoalIdStr_34, StaticCellInfo0_37, &StaticCellInfo_39, &ClosureLayoutTypedRvals_40, &Data_41);
  ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_39, STATE_VARIABLE_CI_65_65, &STATE_VARIABLE_CI_66_66);
  ll_backend__code_info__add_closure_layout_3_p_0(Data_41, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_67_67);
  ll_backend__code_info__add_scalar_static_cell_4_p_0(ClosureLayoutTypedRvals_40, &ClosureDataAddr_42, STATE_VARIABLE_CI_67_67, &STATE_VARIABLE_CI_68_68);
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (ClosureDataAddr_42));
    MR_hl_field(3, Var_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ClosureLayoutRval_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ClosureLayoutRval_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ClosureLayoutRval_43, 1) = ((MR_Box) (Var_69));
  }
  hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_18, &ArgInfo_44);
  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_68_68, &VarTable_45);
  ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_68_68, &MayUseAtomic0_46);
  ll_backend__closure_gen__generate_pred_args_8_p_0(STATE_VARIABLE_CI_68_68, VarTable_45, Args_20, ArgInfo_44, &ArgsR_47, &ArgsF_48, MayUseAtomic0_46, &MayUseAtomic_49);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_47, &NumArgsR_50);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsF_48, &NumArgsF_51);
  NumArgsRF_52 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumArgsR_50, NumArgsF_51);
  mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_47, ArgsF_48, &ArgsRF_53);
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (ClosureLayoutRval_43));
    MR_hl_field(1, Var_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (CodeAddrRval_27));
    MR_hl_field(1, Var_74, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (NumArgsRF_52));
  }
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (ArgsRF_53));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
  }
  {
    CellArgs_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CellArgs_54, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, CellArgs_54, 1) = ((MR_Box) (Var_73));
  }
  Var_82 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), CellArgs_54);
  ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_30, (MR_String) "closure", Var_82, &MaybeAllocId_57, STATE_VARIABLE_CI_68_68, &STATE_VARIABLE_CI_83_83);
  ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_19, (MR_Integer) 0, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), CellArgs_54, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeAllocId_57, MayUseAtomic_49, Code_22, STATE_VARIABLE_CI_83_83, STATE_VARIABLE_CI_59, STATE_VARIABLE_CLD_0_60, STATE_VARIABLE_CLD_61);
}

static void MR_CALL 
ll_backend__closure_gen__generate_pred_args_8_p_0(
  MR_Word CI_1,
  MR_Word VarTable_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_MayUseAtomic_0_7,
  MR_Word * STATE_VARIABLE_MayUseAtomic_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_MayUseAtomic_8 = STATE_VARIABLE_MayUseAtomic_0_7;
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.closure_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
        return;
      }
    else
    {
      MR_Word ArgInfo_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word ArgInfos_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word RegType_35;
      MR_Word ArgMode_37 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_30, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word Entry_38;
      MR_Word Type_40;
      MR_Word IsDummy_41;
      MR_Word CellArg_43;
      MR_Word ModuleInfo_44;
      MR_Word ArgsR0_45;
      MR_Word ArgsF0_46;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, ArgInfo_30, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MayUseAtomic_53_53;

      RegType_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_49, (MR_Integer) 0))) & (MR_Integer) 1);
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_2, Var_55, &Entry_38);
      Type_40 = ((MR_Word) ((MR_hl_field(0, Entry_38, (MR_Integer) 1))));
      IsDummy_41 = ((MR_Unsigned) ((MR_hl_field(0, Entry_38, (MR_Integer) 2))) & (MR_Integer) 1);
      switch (ArgMode_37) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_42;

            switch (IsDummy_41) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Rval_42 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[2]));
                break;
              case (MR_Integer) 1:
                {
                  Rval_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Rval_42, 0) = ((MR_Box) (Var_55));
                }
                break;
            }
            {
              CellArg_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CellArg_43, 0) = ((MR_Box) (Rval_42));
              MR_hl_field(1, CellArg_43, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          CellArg_43 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      ll_backend__code_info__get_module_info_2_p_0(CI_1, &ModuleInfo_44);
      check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_44, Type_40, STATE_VARIABLE_MayUseAtomic_0_7, &STATE_VARIABLE_MayUseAtomic_53_53);
      ll_backend__closure_gen__generate_pred_args_8_p_0(CI_1, VarTable_2, Var_54, ArgInfos_31, &ArgsR0_45, &ArgsF0_46, STATE_VARIABLE_MayUseAtomic_53_53, STATE_VARIABLE_MayUseAtomic_8);
      switch (RegType_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *HeadVar__5_5 = ArgsR0_45;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CellArg_43));
              MR_hl_field(1, base, 1) = ((MR_Box) (ArgsF0_46));
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CellArg_43));
              MR_hl_field(1, base, 1) = ((MR_Box) (ArgsR0_45));
            }
            *HeadVar__6_6 = ArgsF0_46;
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
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_126;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_160;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_168;
  MR_Word Var_169;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Word Var_176;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Word Var_188;
  MR_Word STATE_VARIABLE_CLD_191_191;
  MR_Word STATE_VARIABLE_CLD_192_192;
  MR_Word STATE_VARIABLE_CLD_193_193;
  MR_Word STATE_VARIABLE_CLD_194_194;
  MR_Word Var_196;
  MR_Word Var_197;

  ll_backend__code_info__get_next_label_3_p_0(&LoopStart_17, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_42_42);
  ll_backend__code_info__get_next_label_3_p_0(&LoopTest_18, STATE_VARIABLE_CI_42_42, &STATE_VARIABLE_CI_43_43);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoopCounter_19, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_45_45);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumOldArgs_20, STATE_VARIABLE_CLD_45_45, &STATE_VARIABLE_CLD_47_47);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NewClosure_21, STATE_VARIABLE_CLD_47_47, &STATE_VARIABLE_CLD_49_49);
  Zero_22 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[2]));
  One_23 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[3]));
  Two_24 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[4]));
  Three_25 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[5]));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]), CallArgs_12, &NumNewArgs_26);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (NumNewArgs_26));
  }
  {
    NumNewArgs_Rval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NumNewArgs_Rval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, NumNewArgs_Rval_27, 1) = ((MR_Box) (Var_58));
  }
  NumNewArgsPlusThree_28 = (MR_Integer) ((MR_Unsigned) NumNewArgs_26 + (MR_Unsigned) 3);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (NumNewArgsPlusThree_28));
  }
  {
    NumNewArgsPlusThree_Rval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NumNewArgsPlusThree_Rval_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, NumNewArgsPlusThree_Rval_29, 1) = ((MR_Box) (Var_60));
  }
  ll_backend__code_loc_dep__produce_variable_5_p_0(CallPred_11, &OldClosureCode_30, &OldClosure_31, STATE_VARIABLE_CLD_49_49, &STATE_VARIABLE_CLD_61_61);
  Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
  ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_32, (MR_String) "closure", NumNewArgsPlusThree_28, &MaybeAllocId_33, STATE_VARIABLE_CI_43_43, STATE_VARIABLE_CI_39);
  Var_74 = (MR_Word) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[5]));
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_73, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_73, 3) = ((MR_Box) (Two_24));
  }
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
  }
  {
    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (NumOldArgs_20));
    MR_hl_field(3, Var_71, 2) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
  }
  Var_84 = (MR_Word) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[6]));
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (NumOldArgs_20));
  }
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_83, 3) = ((MR_Box) (NumNewArgsPlusThree_Rval_29));
  }
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) (NewClosure_21));
    MR_hl_field(3, Var_80, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_80, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_80, 4) = ((MR_Box) (Var_83));
    MR_hl_field(3, Var_80, 5) = ((MR_Box) (MaybeAllocId_33));
    MR_hl_field(3, Var_80, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_80, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_80, 8) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) ((MR_String) "allocate new closure"));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (NewClosure_21));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_93, 3) = ((MR_Box) (Zero_22));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_99, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_99, 3) = ((MR_Box) (Zero_22));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
  }
  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
    MR_hl_field(3, Var_92, 2) = ((MR_Box) (Var_98));
  }
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(0, Var_91, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
  }
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_107, 2) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_107, 3) = ((MR_Box) (One_23));
  }
  {
    Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_113, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_113, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_113, 3) = ((MR_Box) (One_23));
  }
  {
    Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_112, 0) = ((MR_Box) (Var_113));
  }
  {
    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_106, 1) = ((MR_Box) (Var_107));
    MR_hl_field(3, Var_106, 2) = ((MR_Box) (Var_112));
  }
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(0, Var_105, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
  }
  {
    Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_121, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_121, 2) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_121, 3) = ((MR_Box) (Two_24));
  }
  {
    Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_126, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_126, 2) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_126, 3) = ((MR_Box) (NumNewArgs_Rval_27));
  }
  {
    Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
    MR_hl_field(3, Var_120, 2) = ((MR_Box) (Var_126));
  }
  {
    Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(0, Var_119, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
  }
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_134, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_134, 2) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_134, 3) = ((MR_Box) (Three_25));
  }
  {
    Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_133, 1) = ((MR_Box) (NumOldArgs_20));
    MR_hl_field(3, Var_133, 2) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_132, 0) = ((MR_Box) (Var_133));
    MR_hl_field(0, Var_132, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
  }
  {
    Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_141, 1) = ((MR_Box) (LoopCounter_19));
    MR_hl_field(3, Var_141, 2) = ((MR_Box) (Three_25));
  }
  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
    MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (LoopTest_18));
  }
  {
    Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_145, 1) = ((MR_Box) (Var_146));
  }
  {
    Var_144 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_144, 0) = ((MR_Box) (Var_145));
    MR_hl_field(0, Var_144, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
  }
  {
    Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_150, 1) = ((MR_Box) (LoopStart_17));
  }
  {
    Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_149, 0) = ((MR_Box) (Var_150));
    MR_hl_field(0, Var_149, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
  }
  {
    Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_160, 0) = ((MR_Box) (LoopCounter_19));
  }
  {
    Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_155, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_155, 2) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_155, 3) = ((MR_Box) (Var_160));
  }
  {
    Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_162, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_162, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_162, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_162, 3) = ((MR_Box) (Var_160));
  }
  {
    Var_161 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_161, 0) = ((MR_Box) (Var_162));
  }
  {
    Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_154, 1) = ((MR_Box) (Var_155));
    MR_hl_field(3, Var_154, 2) = ((MR_Box) (Var_161));
  }
  {
    Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_153, 0) = ((MR_Box) (Var_154));
    MR_hl_field(0, Var_153, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
  }
  {
    Var_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_171, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_171, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_171, 2) = ((MR_Box) (Var_160));
    MR_hl_field(3, Var_171, 3) = ((MR_Box) (One_23));
  }
  {
    Var_170 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_170, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_170, 1) = ((MR_Box) (LoopCounter_19));
    MR_hl_field(3, Var_170, 2) = ((MR_Box) (Var_171));
  }
  {
    Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_169, 0) = ((MR_Box) (Var_170));
    MR_hl_field(0, Var_169, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
  }
  {
    Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_178, 1) = ((MR_Box) (LoopTest_18));
  }
  {
    Var_177 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_177, 0) = ((MR_Box) (Var_178));
    MR_hl_field(0, Var_177, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
  }
  {
    Var_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_183, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_183, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[7])));
    MR_hl_field(3, Var_183, 2) = ((MR_Box) (Var_160));
    MR_hl_field(3, Var_183, 3) = ((MR_Box) (Var_86));
  }
  {
    Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_188, 0) = ((MR_Box) (LoopStart_17));
  }
  {
    Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_182, 1) = ((MR_Box) (Var_183));
    MR_hl_field(3, Var_182, 2) = ((MR_Box) (Var_188));
  }
  {
    Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_181, 0) = ((MR_Box) (Var_182));
    MR_hl_field(0, Var_181, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
  }
  {
    Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
    MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_176, 0) = ((MR_Box) (Var_177));
    MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_180));
  }
  {
    Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
    MR_hl_field(1, Var_168, 1) = ((MR_Box) (Var_176));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_168));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_152));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (Var_144));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_148));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (&ll_backend__closure_gen_scalar_common_1[6]));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_69));
  }
  NewClosureCode_35 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_64);
  ll_backend__closure_gen__generate_extra_closure_args_7_p_0(CallArgs_12, LoopCounter_19, NewClosure_21, &ExtraArgsCode_36, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_61_61, &STATE_VARIABLE_CLD_191_191);
  ll_backend__code_loc_dep__release_reg_3_p_0(LoopCounter_19, STATE_VARIABLE_CLD_191_191, &STATE_VARIABLE_CLD_192_192);
  ll_backend__code_loc_dep__release_reg_3_p_0(NumOldArgs_20, STATE_VARIABLE_CLD_192_192, &STATE_VARIABLE_CLD_193_193);
  ll_backend__code_loc_dep__release_reg_3_p_0(NewClosure_21, STATE_VARIABLE_CLD_193_193, &STATE_VARIABLE_CLD_194_194);
  ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_10, NewClosure_21, &AssignCode_37, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_194_194, STATE_VARIABLE_CLD_41);
  Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExtraArgsCode_36, AssignCode_37);
  Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NewClosureCode_35, Var_197);
  *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), OldClosureCode_30, Var_196);
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_7 = STATE_VARIABLE_CLD_0_6;
  }
  else
  {
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FieldLval_21;
    MR_Word VarTable_22;
    MR_Word Entry_23;
    MR_Word IsDummy_24;
    MR_Word ProduceAssignCode_25;
    MR_Word IncrCode_29;
    MR_Word VarCode_30;
    MR_Word VarsCode_31;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (NewClosure_3));
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (LoopCounter_2));
    }
    {
      FieldLval_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FieldLval_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, FieldLval_21, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[5])));
      MR_hl_field(3, FieldLval_21, 2) = ((MR_Box) (Var_37));
      MR_hl_field(3, FieldLval_21, 3) = ((MR_Box) (Var_38));
    }
    ll_backend__code_info__get_var_table_2_p_0(HeadVar__5_5, &VarTable_22);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_22, Var_14, &Entry_23);
    IsDummy_24 = ((MR_Unsigned) ((MR_hl_field(0, Entry_23, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (IsDummy_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_40, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(3, Var_40, 2) = ((MR_Box) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[2])));
          }
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(0, Var_39, 1) = ((MR_Box) ((MR_String) "set new argument field (dummy type)"));
          }
          ProduceAssignCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_39)));
          STATE_VARIABLE_CLD_45_45 = STATE_VARIABLE_CLD_0_6;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProduceCode_26;
          MR_Word Value_27;
          MR_Word AssignCode_28;
          MR_Word Var_46;
          MR_Word Var_47;

          ll_backend__code_loc_dep__produce_variable_5_p_0(Var_14, &ProduceCode_26, &Value_27, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_45_45);
          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_47, 1) = ((MR_Box) (FieldLval_21));
            MR_hl_field(3, Var_47, 2) = ((MR_Box) (Value_27));
          }
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
            MR_hl_field(0, Var_46, 1) = ((MR_Box) ((MR_String) "set new argument field"));
          }
          AssignCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
          ProduceAssignCode_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceCode_26, AssignCode_28);
        }
        break;
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[6])));
      MR_hl_field(3, Var_51, 2) = ((MR_Box) (Var_38));
      MR_hl_field(3, Var_51, 3) = ((MR_Box) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[3])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (LoopCounter_2));
      MR_hl_field(3, Var_50, 2) = ((MR_Box) (Var_51));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) ((MR_String) "increment argument counter"));
    }
    IncrCode_29 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_49)));
    VarCode_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceAssignCode_25, IncrCode_29);
    ll_backend__closure_gen__generate_extra_closure_args_7_p_0(Vars_15, LoopCounter_2, NewClosure_3, &VarsCode_31, HeadVar__5_5, STATE_VARIABLE_CLD_45_45, STATE_VARIABLE_CLD_7);
    *HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_30, VarsCode_31);
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
