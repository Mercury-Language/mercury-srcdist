/*
** Automatically generated from `closure_gen.m'
** by the Mercury compiler,
** version rotd-2026-08-25
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
#include "integer.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_classify.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "ll_backend.var_locn.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
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
  MR_Word CallPredVar_11,
  MR_Word CallArgVars_12,
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) (((((MR_Unsigned) 0U << 3)) | (MR_Unsigned) 2U))
  },
};

static /* final */ const MR_Box ll_backend__closure_gen_scalar_common_2[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 3)) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "build new closure from old closure")) },
  /* row   5 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row   6 */
  { (MR_Box) (((MR_Unsigned) 0U << 3)) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


void MR_CALL 
ll_backend__closure_gen__construct_closure_10_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word Var_13,
  MR_Word ArgVars_14,
  MR_Word GoalInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_46,
  MR_Word * STATE_VARIABLE_CI_47,
  MR_Word STATE_VARIABLE_CLD_0_48,
  MR_Word * STATE_VARIABLE_CLD_49)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_19;
  MR_Word PredInfo_20;
  MR_Word Procs_21;
  MR_Word ProcInfo_22;
  MR_Word ProcInfoGoal_23;
  MR_Word CodeModel_24;
  MR_Word ProcHeadVars_25;
  MR_Box conv0_ProcInfo_22;
  MR_Word CallPredVar_26;
  MR_Word CallArgVars_27;
  MR_Word TypeInfo_57_57;
  MR_Word TypeInfo_58_58;
  MR_Word HOVar_28;
  MR_Word ProcArgVars_29;
  MR_Word GoalExpr_30;
  MR_Word GenericCall_32;
  MR_Word CallDeterminism_35;
  MR_Word CallCodeModel_40;
  MR_Word Globals_41;
  MR_Word Deep_42;
  MR_Word UseFloatRegs_43;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_55;
  MR_Word Var_56;

  ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_46, &ModuleInfo_19);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_19, PredId_11, &PredInfo_20);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_20, &Procs_21);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), Procs_21, ((MR_Box) (ProcId_12)), &conv0_ProcInfo_22);
  ProcInfo_22 = ((MR_Word) (conv0_ProcInfo_22));
  hlds__hlds_proc__proc_info_get_goal_2_p_0(ProcInfo_22, &ProcInfoGoal_23);
  CodeModel_24 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_22);
  hlds__hlds_proc__proc_info_get_headvars_2_p_0(ProcInfo_22, &ProcHeadVars_25);
  succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    CallPredVar_26 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 0))));
    CallArgVars_27 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 1))));
    succeeded = (ProcHeadVars_25 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HOVar_28 = ((MR_Word) ((MR_hl_field(1, ProcHeadVars_25, 0))));
      ProcArgVars_29 = ((MR_Word) ((MR_hl_field(1, ProcHeadVars_25, 1))));
      GoalExpr_30 = ((MR_Word) ((MR_hl_field(0, ProcInfoGoal_23, 0))));
      succeeded = ((((MR_tag((MR_Word) GoalExpr_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_30, 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        GenericCall_32 = ((MR_Word) ((MR_hl_field(3, GoalExpr_30, 1))));
        Var_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_30, 2))));
        CallDeterminism_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_30, 5))) & (MR_Integer) 7);
        TypeInfo_57_57 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ProcArgVars_29)), ((MR_Box) (Var_55)));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) GenericCall_32)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_56 = ((MR_Word) ((MR_hl_field(0, GenericCall_32, 0))));
            TypeInfo_58_58 = (MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (HOVar_28)), ((MR_Box) (Var_56)));
            if (succeeded)
            {
              hlds__code_model__determinism_to_code_model_2_p_0(CallDeterminism_35, &CallCodeModel_40);
              succeeded = (CodeModel_24 == CallCodeModel_40);
              if (!(succeeded))
              {
                succeeded = (CodeModel_24 == (MR_Integer) 2);
                if (succeeded)
                  succeeded = (CallCodeModel_40 == (MR_Integer) 0);
              }
              if (succeeded)
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_41);
                Var_50 = (MR_Integer) 67;
                libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_50, &Deep_42);
                succeeded = (Deep_42 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_51 = (MR_Integer) 54;
                  libs__globals__lookup_bool_option_3_p_0(Globals_41, Var_51, &UseFloatRegs_43);
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
    if ((CallArgVars_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ll_backend__code_loc_dep__assign_var_to_var_4_p_0(Var_13, CallPredVar_26, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
      *Code_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CI_47 = STATE_VARIABLE_CI_0_46;
    }
    else
      ll_backend__closure_gen__generate_new_closure_from_old_9_p_0(Var_13, CallPredVar_26, CallArgVars_27, GoalInfo_15, Code_16, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
  else
    ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(ModuleInfo_19, PredId_11, ProcId_12, PredInfo_20, ProcInfo_22, Var_13, ArgVars_14, GoalInfo_15, Code_16, STATE_VARIABLE_CI_0_46, STATE_VARIABLE_CI_47, STATE_VARIABLE_CLD_0_48, STATE_VARIABLE_CLD_49);
}

static void MR_CALL 
ll_backend__closure_gen__generate_closure_from_scratch_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word ProcInfo_18,
  MR_Word Var_19,
  MR_Word ArgVars_20,
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
  MR_Unsigned GoalIdNum_33;
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
  MR_Word STATE_VARIABLE_CI_1_65;
  MR_Word STATE_VARIABLE_CI_2_66;
  MR_Word STATE_VARIABLE_CI_3_67;
  MR_Word STATE_VARIABLE_CI_4_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Integer Var_81;
  MR_Word STATE_VARIABLE_CI_5_82;

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
  GoalIdNum_33 = (MR_Unsigned) (Var_64);
  GoalIdStr_34 = mercury__string__uint_to_string_1_f_0(GoalIdNum_33);
  ll_backend__code_info__get_proc_label_2_p_0(STATE_VARIABLE_CI_0_58, &CallerProcLabel_35);
  ll_backend__code_info__get_next_closure_seq_no_3_p_0(&SeqNo_36, STATE_VARIABLE_CI_0_58, &STATE_VARIABLE_CI_1_65);
  ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_1_65, &StaticCellInfo0_37);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_17, &PredOrigin_38);
  ll_backend__stack_layout__construct_closure_layout_13_p_0(CallerProcLabel_35, SeqNo_36, ClosureInfo_28, ProcLabel_26, ModuleName_29, FileName_31, LineNumber_32, PredOrigin_38, GoalIdStr_34, StaticCellInfo0_37, &StaticCellInfo_39, &ClosureLayoutTypedRvals_40, &Data_41);
  ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_39, STATE_VARIABLE_CI_1_65, &STATE_VARIABLE_CI_2_66);
  ll_backend__code_info__add_closure_layout_3_p_0(Data_41, STATE_VARIABLE_CI_2_66, &STATE_VARIABLE_CI_3_67);
  ll_backend__code_info__add_scalar_static_cell_4_p_0(ClosureLayoutTypedRvals_40, &ClosureDataAddr_42, STATE_VARIABLE_CI_3_67, &STATE_VARIABLE_CI_4_68);
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (ClosureDataAddr_42));
  }
  {
    ClosureLayoutRval_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ClosureLayoutRval_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ClosureLayoutRval_43, 1) = ((MR_Box) (Var_69));
  }
  hlds__hlds_proc_util__proc_info_arg_info_2_p_0(ProcInfo_18, &ArgInfo_44);
  ll_backend__code_info__get_var_table_2_p_0(STATE_VARIABLE_CI_4_68, &VarTable_45);
  ll_backend__code_info__get_may_use_atomic_alloc_2_p_0(STATE_VARIABLE_CI_4_68, &MayUseAtomic0_46);
  ll_backend__closure_gen__generate_pred_args_8_p_0(STATE_VARIABLE_CI_4_68, VarTable_45, ArgVars_20, ArgInfo_44, &ArgsR_47, &ArgsF_48, MayUseAtomic0_46, &MayUseAtomic_49);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_47, &NumArgsR_50);
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsF_48, &NumArgsF_51);
  NumArgsRF_52 = ll_backend__code_util__encode_num_generic_call_vars_2_f_0(NumArgsR_50, NumArgsF_51);
  mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), ArgsR_47, ArgsF_48, &ArgsRF_53);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (ClosureLayoutRval_43));
    MR_hl_field(1, Var_70, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (CodeAddrRval_27));
    MR_hl_field(1, Var_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (NumArgsRF_52));
  }
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (ArgsRF_53));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
  }
  {
    CellArgs_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CellArgs_54, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, CellArgs_54, 1) = ((MR_Box) (Var_72));
  }
  Var_81 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), CellArgs_54);
  ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_30, (MR_String) "closure", Var_81, &MaybeAllocId_57, STATE_VARIABLE_CI_4_68, &STATE_VARIABLE_CI_5_82);
  ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(Var_19, (MR_Integer) 0, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), CellArgs_54, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MaybeAllocId_57, MayUseAtomic_49, Code_22, STATE_VARIABLE_CI_5_82, STATE_VARIABLE_CI_59, STATE_VARIABLE_CLD_0_60, STATE_VARIABLE_CLD_61);
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
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.closure_gen.generate_pred_args\'/8", (MR_String) "insufficient args");
        return;
      }
    else
    {
      MR_Word ArgInfo_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ArgInfos_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word RegType_35;
      MR_Word ArgMode_37 = ((MR_Unsigned) ((MR_hl_field(0, ArgInfo_30, 1))) & (MR_Integer) 3);
      MR_Word Entry_38;
      MR_Word Type_40;
      MR_Word IsDummy_41;
      MR_Word CellArg_43;
      MR_Word ModuleInfo_44;
      MR_Word ArgsR0_45;
      MR_Word ArgsF0_46;
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, ArgInfo_30, 0))));
      MR_Word STATE_VARIABLE_MayUseAtomic_1_53;

      RegType_35 = ((MR_Unsigned) ((MR_hl_field(0, Var_49, 0))) & (MR_Integer) 1);
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_2, Var_55, &Entry_38);
      Type_40 = ((MR_Word) ((MR_hl_field(0, Entry_38, 1))));
      IsDummy_41 = ((MR_Unsigned) ((MR_hl_field(0, Entry_38, 2))) & (MR_Integer) 1);
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
      hlds__type_classify__update_type_may_use_atomic_alloc_4_p_0(ModuleInfo_44, Type_40, STATE_VARIABLE_MayUseAtomic_0_7, &STATE_VARIABLE_MayUseAtomic_1_53);
      ll_backend__closure_gen__generate_pred_args_8_p_0(CI_1, VarTable_2, Var_54, ArgInfos_31, &ArgsR0_45, &ArgsF0_46, STATE_VARIABLE_MayUseAtomic_1_53, STATE_VARIABLE_MayUseAtomic_8);
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
  MR_Word CallPredVar_11,
  MR_Word CallArgVars_12,
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
  MR_Word NumOldArgVars_20;
  MR_Word NewClosure_21;
  MR_Word Zero_22;
  MR_Word One_23;
  MR_Word Two_24;
  MR_Word Three_25;
  MR_Integer NumNewArgVars_26;
  MR_Word NumNewArgVars_Rval_27;
  MR_Integer NumNewArgVarsPlusThree_28;
  MR_Word NumNewArgVarsPlusThree_Rval_29;
  MR_Word OldClosureCode_30;
  MR_Word OldClosure_31;
  MR_Word Context_32;
  MR_Word MaybeAllocId_33;
  MR_Word NewClosureCode_35;
  MR_Word ExtraArgVarsCode_36;
  MR_Word AssignCode_37;
  MR_Word STATE_VARIABLE_CI_1_42;
  MR_Word STATE_VARIABLE_CI_2_43;
  MR_Word STATE_VARIABLE_CLD_1_45;
  MR_Word STATE_VARIABLE_CLD_2_47;
  MR_Word STATE_VARIABLE_CLD_3_49;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_CLD_4_61;
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
  MR_Word Var_87;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_121;
  MR_Word Var_122;
  MR_Word Var_127;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_163;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_173;
  MR_Word Var_174;
  MR_Word Var_180;
  MR_Word Var_181;
  MR_Word Var_182;
  MR_Word Var_184;
  MR_Word Var_185;
  MR_Word Var_186;
  MR_Word Var_187;
  MR_Word Var_193;
  MR_Word STATE_VARIABLE_CLD_5_196;
  MR_Word STATE_VARIABLE_CLD_6_197;
  MR_Word STATE_VARIABLE_CLD_7_198;
  MR_Word STATE_VARIABLE_CLD_8_199;
  MR_Word Var_201;
  MR_Word Var_202;

  ll_backend__code_info__get_next_label_3_p_0(&LoopStart_17, STATE_VARIABLE_CI_0_38, &STATE_VARIABLE_CI_1_42);
  ll_backend__code_info__get_next_label_3_p_0(&LoopTest_18, STATE_VARIABLE_CI_1_42, &STATE_VARIABLE_CI_2_43);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &LoopCounter_19, STATE_VARIABLE_CLD_0_40, &STATE_VARIABLE_CLD_1_45);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumOldArgVars_20, STATE_VARIABLE_CLD_1_45, &STATE_VARIABLE_CLD_2_47);
  ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NewClosure_21, STATE_VARIABLE_CLD_2_47, &STATE_VARIABLE_CLD_3_49);
  Zero_22 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[2]));
  One_23 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[3]));
  Two_24 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[4]));
  Three_25 = (MR_Word) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[5]));
  mercury__list__length_2_p_0((MR_Word) (&ll_backend__closure_gen_scalar_common_1[0]), CallArgVars_12, &NumNewArgVars_26);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (NumNewArgVars_26));
  }
  {
    NumNewArgVars_Rval_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NumNewArgVars_Rval_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, NumNewArgVars_Rval_27, 1) = ((MR_Box) (Var_58));
  }
  NumNewArgVarsPlusThree_28 = (MR_Integer) ((MR_Unsigned) NumNewArgVars_26 + (MR_Unsigned) 3);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (NumNewArgVarsPlusThree_28));
  }
  {
    NumNewArgVarsPlusThree_Rval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NumNewArgVarsPlusThree_Rval_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, NumNewArgVarsPlusThree_Rval_29, 1) = ((MR_Box) (Var_60));
  }
  ll_backend__code_loc_dep__produce_variable_5_p_0(CallPredVar_11, &OldClosureCode_30, &OldClosure_31, STATE_VARIABLE_CLD_3_49, &STATE_VARIABLE_CLD_4_61);
  Context_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
  ll_backend__code_info__maybe_add_alloc_site_info_6_p_0(Context_32, (MR_String) "closure", NumNewArgVarsPlusThree_28, &MaybeAllocId_33, STATE_VARIABLE_CI_2_43, STATE_VARIABLE_CI_39);
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
    MR_hl_field(3, Var_71, 1) = ((MR_Box) (NumOldArgVars_20));
    MR_hl_field(3, Var_71, 2) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) ((MR_String) "get number of arguments"));
  }
  Var_84 = (MR_Word) (MR_mkword(1, &ll_backend__closure_gen_scalar_common_2[6]));
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (NumOldArgVars_20));
  }
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_83, 2) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_83, 3) = ((MR_Box) (NumNewArgVarsPlusThree_Rval_29));
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
    Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (NewClosure_21));
  }
  {
    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_94, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_94, 2) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_94, 3) = ((MR_Box) (Zero_22));
  }
  {
    Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_100, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_100, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_100, 3) = ((MR_Box) (Zero_22));
  }
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (Var_100));
  }
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_94));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (Var_99));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_String) "set closure layout structure"));
  }
  {
    Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_108, 2) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_108, 3) = ((MR_Box) (One_23));
  }
  {
    Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_114, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_114, 3) = ((MR_Box) (One_23));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
  }
  {
    Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_107, 1) = ((MR_Box) (Var_108));
    MR_hl_field(3, Var_107, 2) = ((MR_Box) (Var_113));
  }
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) ((MR_String) "set closure code pointer"));
  }
  {
    Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_122, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_122, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_122, 2) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_122, 3) = ((MR_Box) (Two_24));
  }
  {
    Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_127, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_127, 2) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_127, 3) = ((MR_Box) (NumNewArgVars_Rval_27));
  }
  {
    Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_121, 1) = ((MR_Box) (Var_122));
    MR_hl_field(3, Var_121, 2) = ((MR_Box) (Var_127));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) (Var_121));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) ((MR_String) "set new number of arguments"));
  }
  {
    Var_136 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_136, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_136, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_136, 2) = ((MR_Box) (Var_87));
    MR_hl_field(3, Var_136, 3) = ((MR_Box) (Three_25));
  }
  {
    Var_135 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_135, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_135, 1) = ((MR_Box) (NumOldArgVars_20));
    MR_hl_field(3, Var_135, 2) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_134, 0) = ((MR_Box) (Var_135));
    MR_hl_field(0, Var_134, 1) = ((MR_Box) ((MR_String) "set up loop limit"));
  }
  {
    Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_144, 1) = ((MR_Box) (LoopCounter_19));
    MR_hl_field(3, Var_144, 2) = ((MR_Box) (Three_25));
  }
  {
    Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_143, 0) = ((MR_Box) (Var_144));
    MR_hl_field(0, Var_143, 1) = ((MR_Box) ((MR_String) "initialize loop counter"));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (LoopTest_18));
  }
  {
    Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_148, 1) = ((MR_Box) (Var_149));
  }
  {
    Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_147, 0) = ((MR_Box) (Var_148));
    MR_hl_field(0, Var_147, 1) = ((MR_Box) ((MR_String) "enter the copy loop at the conceptual top"));
  }
  {
    Var_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_153, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_153, 1) = ((MR_Box) (LoopStart_17));
  }
  {
    Var_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_152, 0) = ((MR_Box) (Var_153));
    MR_hl_field(0, Var_152, 1) = ((MR_Box) ((MR_String) "start of loop, nofulljump"));
  }
  {
    Var_163 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_163, 0) = ((MR_Box) (LoopCounter_19));
  }
  {
    Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_158, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_158, 2) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_158, 3) = ((MR_Box) (Var_163));
  }
  {
    Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_165, 1) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_165, 2) = ((MR_Box) (OldClosure_31));
    MR_hl_field(3, Var_165, 3) = ((MR_Box) (Var_163));
  }
  {
    Var_164 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_164, 0) = ((MR_Box) (Var_165));
  }
  {
    Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_157, 1) = ((MR_Box) (Var_158));
    MR_hl_field(3, Var_157, 2) = ((MR_Box) (Var_164));
  }
  {
    Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_156, 0) = ((MR_Box) (Var_157));
    MR_hl_field(0, Var_156, 1) = ((MR_Box) ((MR_String) "copy old hidden argument"));
  }
  {
    Var_174 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_174, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_174, 1) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_174, 2) = ((MR_Box) (Var_163));
    MR_hl_field(3, Var_174, 3) = ((MR_Box) (One_23));
  }
  {
    Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_173, 1) = ((MR_Box) (LoopCounter_19));
    MR_hl_field(3, Var_173, 2) = ((MR_Box) (Var_174));
  }
  {
    Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
    MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_String) "increment loop counter"));
  }
  {
    Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_182, 1) = ((MR_Box) (LoopTest_18));
  }
  {
    Var_181 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_181, 0) = ((MR_Box) (Var_182));
    MR_hl_field(0, Var_181, 1) = ((MR_Box) ((MR_String) "do we have more old arguments to copy\? nofulljump"));
  }
  {
    Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_187, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__closure_gen_scalar_common_1[7])));
    MR_hl_field(3, Var_187, 2) = ((MR_Box) (Var_163));
    MR_hl_field(3, Var_187, 3) = ((MR_Box) (Var_87));
  }
  {
    Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_193, 0) = ((MR_Box) (LoopStart_17));
  }
  {
    Var_186 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_186, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_186, 1) = ((MR_Box) (Var_187));
    MR_hl_field(3, Var_186, 2) = ((MR_Box) (Var_193));
  }
  {
    Var_185 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_185, 0) = ((MR_Box) (Var_186));
    MR_hl_field(0, Var_185, 1) = ((MR_Box) ((MR_String) "repeat the loop\?"));
  }
  {
    Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_184, 0) = ((MR_Box) (Var_185));
    MR_hl_field(1, Var_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
    MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_184));
  }
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_180));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_171));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_155));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (Var_147));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_146));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_91));
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
  ll_backend__closure_gen__generate_extra_closure_args_7_p_0(CallArgVars_12, LoopCounter_19, NewClosure_21, &ExtraArgVarsCode_36, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_4_61, &STATE_VARIABLE_CLD_5_196);
  ll_backend__code_loc_dep__release_reg_3_p_0(LoopCounter_19, STATE_VARIABLE_CLD_5_196, &STATE_VARIABLE_CLD_6_197);
  ll_backend__code_loc_dep__release_reg_3_p_0(NumOldArgVars_20, STATE_VARIABLE_CLD_6_197, &STATE_VARIABLE_CLD_7_198);
  ll_backend__code_loc_dep__release_reg_3_p_0(NewClosure_21, STATE_VARIABLE_CLD_7_198, &STATE_VARIABLE_CLD_8_199);
  ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(Var_10, NewClosure_21, &AssignCode_37, *STATE_VARIABLE_CI_39, STATE_VARIABLE_CLD_8_199, STATE_VARIABLE_CLD_41);
  Var_202 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExtraArgVarsCode_36, AssignCode_37);
  Var_201 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), NewClosureCode_35, Var_202);
  *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), OldClosureCode_30, Var_201);
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
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Vars_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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
    MR_Word STATE_VARIABLE_CLD_1_45;
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
    IsDummy_24 = ((MR_Unsigned) ((MR_hl_field(0, Entry_23, 2))) & (MR_Integer) 1);
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
          STATE_VARIABLE_CLD_1_45 = STATE_VARIABLE_CLD_0_6;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProduceCode_26;
          MR_Word Value_27;
          MR_Word AssignCode_28;
          MR_Word Var_46;
          MR_Word Var_47;

          ll_backend__code_loc_dep__produce_variable_5_p_0(Var_14, &ProduceCode_26, &Value_27, STATE_VARIABLE_CLD_0_6, &STATE_VARIABLE_CLD_1_45);
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
    ll_backend__closure_gen__generate_extra_closure_args_7_p_0(Vars_15, LoopCounter_2, NewClosure_3, &VarsCode_31, HeadVar__5_5, STATE_VARIABLE_CLD_1_45, STATE_VARIABLE_CLD_7);
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
