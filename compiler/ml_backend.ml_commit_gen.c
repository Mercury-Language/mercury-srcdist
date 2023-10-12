/*
** Automatically generated from `ml_commit_gen.m'
** by the Mercury compiler,
** version rotd-2023-10-12
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


// :- module ml_backend.ml_commit_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_commit_gen__init
ENDINIT
*/

#include "ml_backend.ml_commit_gen.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static MR_Word MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(
  MR_Word Context_4,
  MR_Word VarName_5);

static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_5_p_0(
  MR_Word GoalInfo_6,
  MR_Word * LocalVarDecls_7,
  MR_Word * CopyLocalsToOutputArgs_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_9_p_0(
  MR_Word LocalVarDefn0_10,
  MR_Word FuncDefn0_11,
  MR_Word TryCommitStmts_12,
  MR_Word Context_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);


static /* final */ const MR_Box ml_backend__ml_commit_gen_scalar_common_1[6][2];




static /* final */ const MR_Box ml_backend__ml_commit_gen_scalar_common_1[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_commit_gen_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};



#include "array.mh"


void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_8_p_0(
  MR_Word Goal_9,
  MR_Word CodeModel_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefns_12,
  MR_Word * FuncDefns_13,
  MR_Word * Stmts_14,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  MR_bool succeeded;
  MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal_9, (MR_Integer) 1))));
  MR_Word GoalCodeModel_18;
  MR_Word GoalContext_19;

  GoalCodeModel_18 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_17);
  GoalContext_19 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
  succeeded = (GoalCodeModel_18 == (MR_Integer) 2);
  if (succeeded)
    succeeded = (CodeModel_10 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word OrigVarLvalMap_20;
    MR_Word OutputArgLocalVarDefns_21;
    MR_Word CopyLocalsToOutputArgs_22;
    MR_Word SuccessFuncLabel_23;
    MR_Word SuccessFuncLabelRval_24;
    MR_Word CommitRef_25;
    MR_Word CommitRefLval_26;
    MR_Word CommitRefDefn_27;
    MR_Word DoCommitStmt_28;
    MR_Word SuccessFuncDefn_29;
    MR_Word EnvPtrRval_30;
    MR_Word SuccessCont_31;
    MR_Word GoalLocalVarDefns_32;
    MR_Word GoalFuncDefns_33;
    MR_Word GoalStmts_34;
    MR_Word GoalStmt_35;
    MR_Word SetSuccessFalse_36;
    MR_Word SetSuccessTrue_37;
    MR_Word TryCommitStmt_38;
    MR_Word CommitFuncLocalVarDefns_39;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Info_45_45;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word Var_58;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word STATE_VARIABLE_Info_60_60;
    MR_Word STATE_VARIABLE_Info_62_62;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word STATE_VARIABLE_Info_80_80;

    ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(STATE_VARIABLE_Info_0_41, &OrigVarLvalMap_20);
    ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_5_p_0(GoalInfo_17, &OutputArgLocalVarDefns_21, &CopyLocalsToOutputArgs_22, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_43_43);
    ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &SuccessFuncLabel_23, &SuccessFuncLabelRval_24, STATE_VARIABLE_Info_43_43, &STATE_VARIABLE_Info_45_45);
    ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 0, &CommitRef_25, STATE_VARIABLE_Info_45_45, &STATE_VARIABLE_Info_47_47);
    {
      CommitRefLval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CommitRefLval_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, CommitRefLval_26, 1) = ((MR_Box) (CommitRef_25));
      MR_hl_field(3, CommitRefLval_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    CommitRefDefn_27 = ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(Context_11, CommitRef_25);
    {
      Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_49, 0) = ((MR_Box) (CommitRefLval_26));
    }
    {
      DoCommitStmt_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, DoCommitStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, DoCommitStmt_28, 1) = ((MR_Box) (Var_49));
      MR_hl_field(3, DoCommitStmt_28, 2) = ((MR_Box) (Context_11));
    }
    ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(STATE_VARIABLE_Info_47_47, SuccessFuncLabel_23, Context_11, DoCommitStmt_28, &SuccessFuncDefn_29);
    ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_30);
    {
      SuccessCont_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SuccessCont_31, 0) = ((MR_Box) (SuccessFuncLabelRval_24));
      MR_hl_field(0, SuccessCont_31, 1) = ((MR_Box) (EnvPtrRval_30));
      MR_hl_field(0, SuccessCont_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_31, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_51_51);
    Var_52 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_commit_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_commit_gen_scalar_common_1[1]));
    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_52, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_54_54);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 2, Goal_9, &GoalLocalVarDefns_32, &GoalFuncDefns_33, &GoalStmts_34, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_56_56);
    GoalStmt_35 = ml_backend__ml_code_util__ml_gen_block_4_f_0(GoalLocalVarDefns_32, GoalFuncDefns_33, GoalStmts_34, GoalContext_19);
    ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_57_57);
    Var_58 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_commit_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_commit_gen_scalar_common_1[1]));
    ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_58, STATE_VARIABLE_Info_57_57, &STATE_VARIABLE_Info_59_59);
    ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_60_60);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_commit_gen_scalar_common_1[2])), Context_11, &SetSuccessFalse_36, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_62_62);
    ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(3, &ml_backend__ml_commit_gen_scalar_common_1[3])), Context_11, &SetSuccessTrue_37, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_65_65);
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (SetSuccessFalse_36));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (GoalStmt_35));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
    }
    Var_67 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_70, Context_11);
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (SetSuccessTrue_37));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), CopyLocalsToOutputArgs_22, Var_77);
    Var_73 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_76, Context_11);
    {
      TryCommitStmt_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, TryCommitStmt_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, TryCommitStmt_38, 1) = ((MR_Box) (CommitRefLval_26));
      MR_hl_field(3, TryCommitStmt_38, 2) = ((MR_Box) (Var_67));
      MR_hl_field(3, TryCommitStmt_38, 3) = ((MR_Box) (Var_73));
      MR_hl_field(3, TryCommitStmt_38, 4) = ((MR_Box) (Context_11));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (TryCommitStmt_38));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_9_p_0(CommitRefDefn_27, SuccessFuncDefn_29, Var_79, Context_11, &CommitFuncLocalVarDefns_39, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_65_65, &STATE_VARIABLE_Info_80_80);
    *LocalVarDefns_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), OutputArgLocalVarDefns_21, CommitFuncLocalVarDefns_39);
    ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(OrigVarLvalMap_20, STATE_VARIABLE_Info_80_80, STATE_VARIABLE_Info_42);
  }
  else
  {
    succeeded = (GoalCodeModel_18 == (MR_Integer) 2);
    if (succeeded)
      succeeded = (CodeModel_10 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Info_83_83;
      MR_Word STATE_VARIABLE_Info_85_85;
      MR_Word STATE_VARIABLE_Info_87_87;
      MR_Word Var_89;
      MR_Word STATE_VARIABLE_Info_91_91;
      MR_Word STATE_VARIABLE_Info_92_92;
      MR_Word STATE_VARIABLE_Info_94_94;
      MR_Word STATE_VARIABLE_Info_95_95;
      MR_Word STATE_VARIABLE_Info_96_96;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word STATE_VARIABLE_Info_101_101;
      MR_Word OrigVarLvalMap_105;
      MR_Word OutputArgLocalVarDefns_106;
      MR_Word CopyLocalsToOutputArgs_107;
      MR_Word SuccessFuncLabel_108;
      MR_Word SuccessFuncLabelRval_109;
      MR_Word CommitRef_110;
      MR_Word CommitRefLval_111;
      MR_Word CommitRefDefn_112;
      MR_Word DoCommitStmt_113;
      MR_Word SuccessFuncDefn_114;
      MR_Word EnvPtrRval_115;
      MR_Word SuccessCont_116;
      MR_Word GoalLocalVarDefns_117;
      MR_Word GoalFuncDefns_118;
      MR_Word GoalStmts_119;
      MR_Word GoalStmt_120;
      MR_Word TryCommitStmt_121;
      MR_Word CommitFuncLocalVarDefns_122;

      ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(STATE_VARIABLE_Info_0_41, &OrigVarLvalMap_105);
      ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_5_p_0(GoalInfo_17, &OutputArgLocalVarDefns_106, &CopyLocalsToOutputArgs_107, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_83_83);
      ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &SuccessFuncLabel_108, &SuccessFuncLabelRval_109, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_85_85);
      ml_backend__ml_gen_info__ml_gen_info_new_aux_var_name_4_p_0((MR_Integer) 0, &CommitRef_110, STATE_VARIABLE_Info_85_85, &STATE_VARIABLE_Info_87_87);
      {
        CommitRefLval_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CommitRefLval_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, CommitRefLval_111, 1) = ((MR_Box) (CommitRef_110));
        MR_hl_field(3, CommitRefLval_111, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      CommitRefDefn_112 = ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(Context_11, CommitRef_110);
      {
        Var_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_89, 0) = ((MR_Box) (CommitRefLval_111));
      }
      {
        DoCommitStmt_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, DoCommitStmt_113, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, DoCommitStmt_113, 1) = ((MR_Box) (Var_89));
        MR_hl_field(3, DoCommitStmt_113, 2) = ((MR_Box) (Context_11));
      }
      ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(STATE_VARIABLE_Info_87_87, SuccessFuncLabel_108, Context_11, DoCommitStmt_113, &SuccessFuncDefn_114);
      ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_115);
      {
        SuccessCont_116 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SuccessCont_116, 0) = ((MR_Box) (SuccessFuncLabelRval_109));
        MR_hl_field(0, SuccessCont_116, 1) = ((MR_Box) (EnvPtrRval_115));
        MR_hl_field(0, SuccessCont_116, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_116, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_91_91);
      ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_92_92);
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 2, Goal_9, &GoalLocalVarDefns_117, &GoalFuncDefns_118, &GoalStmts_119, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_94_94);
      ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_94_94, &STATE_VARIABLE_Info_95_95);
      GoalStmt_120 = ml_backend__ml_code_util__ml_gen_block_4_f_0(GoalLocalVarDefns_117, GoalFuncDefns_118, GoalStmts_119, GoalContext_19);
      ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_96_96);
      Var_97 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), CopyLocalsToOutputArgs_107, Context_11);
      {
        TryCommitStmt_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, TryCommitStmt_121, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, TryCommitStmt_121, 1) = ((MR_Box) (CommitRefLval_111));
        MR_hl_field(3, TryCommitStmt_121, 2) = ((MR_Box) (GoalStmt_120));
        MR_hl_field(3, TryCommitStmt_121, 3) = ((MR_Box) (Var_97));
        MR_hl_field(3, TryCommitStmt_121, 4) = ((MR_Box) (Context_11));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (TryCommitStmt_121));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_9_p_0(CommitRefDefn_112, SuccessFuncDefn_114, Var_100, Context_11, &CommitFuncLocalVarDefns_122, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_96_96, &STATE_VARIABLE_Info_101_101);
      *LocalVarDefns_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), OutputArgLocalVarDefns_106, CommitFuncLocalVarDefns_122);
      ml_backend__ml_gen_info__ml_gen_info_set_var_lvals_3_p_0(OrigVarLvalMap_105, STATE_VARIABLE_Info_101_101, STATE_VARIABLE_Info_42);
    }
    else
      ml_backend__ml_code_gen__ml_gen_goal_7_p_0(CodeModel_10, Goal_9, LocalVarDefns_12, FuncDefns_13, Stmts_14, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_commit_gen__ml_gen_commit_var_decl_2_f_0(
  MR_Word Context_4,
  MR_Word VarName_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(VarName_5, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_4);
  return HeadVar__3_3;
}

static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_maybe_make_locals_for_output_args_5_p_0(
  MR_Word GoalInfo_6,
  MR_Word * LocalVarDecls_7,
  MR_Word * CopyLocalsToOutputArgs_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word NondetCopyOut_10;

  ml_backend__ml_gen_info__ml_gen_info_get_nondet_copy_out_2_p_0(STATE_VARIABLE_Info_0_15, &NondetCopyOut_10);
  switch (NondetCopyOut_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *LocalVarDecls_7 = (MR_Word) ((MR_Unsigned) 0U);
        *CopyLocalsToOutputArgs_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_11;
        MR_Word NonLocals_12;
        MR_Word ByRefOutputVars_13;
        MR_Word VarsToCopy_14;
        MR_Word Var_17;

        Context_11 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_6);
        NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_6);
        ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(STATE_VARIABLE_Info_0_15, &ByRefOutputVars_13);
        VarsToCopy_14 = parse_tree__set_of_var__intersect_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_13, NonLocals_12);
        Var_17 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsToCopy_14);
        ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(Var_17, Context_11, LocalVarDecls_7, CopyLocalsToOutputArgs_8, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word LocalDefnsTail_17;
    MR_Word AssignsTail_18;
    MR_Word VarTable_19;
    MR_Word Entry_20;
    MR_Word IsDummy_21;
    MR_Word STATE_VARIABLE_Info_26_26;

    ml_backend__ml_commit_gen__ml_gen_make_locals_for_output_args_6_p_0(Vars_12, Context_2, &LocalDefnsTail_17, &AssignsTail_18, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
    ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(STATE_VARIABLE_Info_26_26, &VarTable_19);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_19, Var_11, &Entry_20);
    IsDummy_21 = ((MR_Unsigned) ((MR_hl_field(0, Entry_20, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (IsDummy_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__3_3 = LocalDefnsTail_17;
          *HeadVar__4_4 = AssignsTail_18;
          *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_26_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadLocalDefn_22;
          MR_Word HeadAssign_23;
          MR_Word OutputVarName_29;
          MR_String OutputVarNameStr_30;
          MR_Integer MaybeNum_31;
          MR_Word LocalVarName_32;
          MR_Word Type_33;
          MR_Word MLDS_Type_34;
          MR_Word GCStmt_35;
          MR_Word OutputVarLval_36;
          MR_Word LocalVarLval_37;
          MR_Word STATE_VARIABLE_Info_25_38;
          MR_Word Var_39;

          OutputVarName_29 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(Var_11, Entry_20);
          OutputVarNameStr_30 = ((MR_String) ((MR_hl_field(1, OutputVarName_29, (MR_Integer) 0))));
          MaybeNum_31 = ((MR_Integer) ((MR_hl_field(1, OutputVarName_29, (MR_Integer) 1))));
          {
            LocalVarName_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, LocalVarName_32, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, LocalVarName_32, 1) = ((MR_Box) (OutputVarNameStr_30));
            MR_hl_field(3, LocalVarName_32, 2) = ((MR_Box) (MaybeNum_31));
          }
          Type_33 = ((MR_Word) ((MR_hl_field(0, Entry_20, (MR_Integer) 1))));
          ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(STATE_VARIABLE_Info_26_26, Type_33, &MLDS_Type_34);
          ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(LocalVarName_32, Type_33, Context_2, &GCStmt_35, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_25_38);
          HeadLocalDefn_22 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LocalVarName_32, MLDS_Type_34, GCStmt_35, Context_2);
          ml_backend__ml_code_util__ml_gen_var_4_p_0(STATE_VARIABLE_Info_25_38, Var_11, Entry_20, &OutputVarLval_36);
          {
            LocalVarLval_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, LocalVarLval_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, LocalVarLval_37, 1) = ((MR_Box) (LocalVarName_32));
            MR_hl_field(3, LocalVarLval_37, 2) = ((MR_Box) (MLDS_Type_34));
          }
          {
            Var_39 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_39, 0) = ((MR_Box) (LocalVarLval_37));
          }
          HeadAssign_23 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(OutputVarLval_36, Var_39, Context_2);
          ml_backend__ml_gen_info__ml_gen_info_set_var_lval_4_p_0(Var_11, LocalVarLval_37, STATE_VARIABLE_Info_25_38, STATE_VARIABLE_Info_6);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadLocalDefn_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (LocalDefnsTail_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadAssign_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (AssignsTail_18));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_commit_gen__maybe_put_commit_in_own_func_9_p_0(
  MR_Word LocalVarDefn0_10,
  MR_Word FuncDefn0_11,
  MR_Word TryCommitStmts_12,
  MR_Word Context_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_Word PutCommitInOwnFunc_18;

  ml_backend__ml_gen_info__ml_gen_info_put_commit_in_own_func_2_p_0(STATE_VARIABLE_Info_0_30, &PutCommitInOwnFunc_18);
  switch (PutCommitInOwnFunc_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *LocalVarDefns_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LocalVarDefn0_10));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *FuncDefns_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FuncDefn0_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Stmts_16 = TryCommitStmts_12;
        *STATE_VARIABLE_Info_31 = STATE_VARIABLE_Info_0_30;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CommitFuncLabel_19;
        MR_Word CommitFuncLabelRval_20;
        MR_Word CommitFuncBody_21;
        MR_Word CommitFuncDefn_22;
        MR_Word EnvPtrRval_23;
        MR_Word ArgRvals_24;
        MR_Word CallStmt_29;
        MR_Word Var_34;
        MR_Word Var_36;

        ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &CommitFuncLabel_19, &CommitFuncLabelRval_20, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (LocalVarDefn0_10));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (FuncDefn0_11));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        CommitFuncBody_21 = ml_backend__ml_code_util__ml_gen_block_4_f_0(Var_34, Var_36, TryCommitStmts_12, Context_13);
        ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(*STATE_VARIABLE_Info_31, CommitFuncLabel_19, Context_13, CommitFuncBody_21, &CommitFuncDefn_22);
        ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(&EnvPtrRval_23);
        {
          ArgRvals_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgRvals_24, 0) = ((MR_Box) (EnvPtrRval_23));
          MR_hl_field(1, ArgRvals_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CallStmt_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CallStmt_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, CallStmt_29, 1) = ((MR_Box) (&ml_backend__ml_commit_gen_scalar_common_1[5]));
          MR_hl_field(3, CallStmt_29, 2) = ((MR_Box) (CommitFuncLabelRval_20));
          MR_hl_field(3, CallStmt_29, 3) = ((MR_Box) (ArgRvals_24));
          MR_hl_field(3, CallStmt_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, CallStmt_29, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          MR_hl_field(3, CallStmt_29, 6) = ((MR_Box) (Context_13));
        }
        *LocalVarDefns_14 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *FuncDefns_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CommitFuncDefn_22));
          MR_hl_field(1, base, 1) = ((MR_Box) (*LocalVarDefns_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CallStmt_29));
          MR_hl_field(1, base, 1) = ((MR_Box) (*LocalVarDefns_14));
        }
      }
      break;
  }
}

void mercury__ml_backend__ml_commit_gen__init(void)
{
}

void mercury__ml_backend__ml_commit_gen__init_type_tables(void)
{
}

void mercury__ml_backend__ml_commit_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_commit_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_commit_gen.
