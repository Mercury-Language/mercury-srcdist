/*
** Automatically generated from `dupproc.m'
** by the Mercury compiler,
** version rotd-2026-03-02
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


// :- module ll_backend.dupproc.
// :- implementation.

/*
INIT mercury__ll_backend__dupproc__init
ENDINIT
*/

#include "ll_backend.dupproc.mih"


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
#include "int.mih"
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
#include "hlds.hlds_data.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DupProcMap_0_4,
  MR_Word * STATE_VARIABLE_DupProcMap_5);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_proc_3_p_0(
  MR_Word CProc_4,
  MR_Word * StdCProc_5,
  MR_Word DupProcMap_6);

static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Id_9,
  MR_Word Proc_10,
  MR_Word DupProcMap_11,
  MR_Word * MatchingId_12);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_instr_3_p_0(
  MR_Word Instr_4,
  MR_Word * StdInstr_5,
  MR_Word DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word DupProcMap_3);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word * StdRval_5,
  MR_Word DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_maybe_code_addr_3_p_0(
  MR_Word MaybeCodeAddr_4,
  MR_Word * MaybeStdCodeAddr_5,
  MR_Word DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word * StdCodeAddr_5,
  MR_Word DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(
  MR_Word Label_4,
  MR_Word * StdLabel_5,
  MR_Word DupProcMap_6);


static /* final */ const MR_Box ll_backend__dupproc_scalar_common_1[2][3];

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__dupproc_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__dupproc_scalar_common_3[0])),
    ((MR_Box) (ll_backend__dupproc__eliminate_dup_procs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "array.mh"


static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Instr_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  if (((((MR_tag((MR_Word) Instr_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Instr_2, 0)))) == (MR_Integer) 9))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) Instr_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Instr_2, 0)))) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  return succeeded;
}

void MR_CALL 
ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(
  MR_Word IdProcs_5,
  MR_Word * Procs_6,
  MR_Word STATE_VARIABLE_DupProcMap_0_18,
  MR_Word * STATE_VARIABLE_DupProcMap_19)
{
  if ((IdProcs_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Procs_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DupProcMap_19 = STATE_VARIABLE_DupProcMap_0_18;
  }
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, IdProcs_5, 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, IdProcs_5, 0))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_31, 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_31, 0))));

    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Procs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_DupProcMap_19 = STATE_VARIABLE_DupProcMap_0_18;
    }
    else
    {
      MR_Word StdProc1_15;
      MR_Word FinalIdProcsTail_16;
      MR_Word FinalProcsTail_17;
      MR_Word Var_24;
      MR_Word Var_26;
      MR_Word Instrs_34 = ((MR_Word) ((MR_hl_field(0, Var_32, 6))));
      MR_Word StdInstrs_35;
      MR_Word Var_46;
      MR_String Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Unsigned packed_word_1;

      ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(Instrs_34, &StdInstrs_35, STATE_VARIABLE_DupProcMap_0_18);
      Var_46 = ((MR_Unsigned) ((MR_hl_field(0, Var_32, 0))) & (MR_Integer) 1);
      Var_47 = ((MR_String) ((MR_hl_field(0, Var_32, 1))));
      Var_48 = ((MR_Word) ((MR_hl_field(0, Var_32, 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, Var_32, 3))));
      Var_50 = ((MR_Word) ((MR_hl_field(0, Var_32, 4))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_32, 5)));
      Var_54 = ((MR_Word) ((MR_hl_field(0, Var_32, 7))));
      Var_55 = ((MR_Unsigned) ((MR_hl_field(0, Var_32, 8))) & (MR_Integer) 1);
      Var_56 = ((MR_Word) ((MR_hl_field(0, Var_32, 9))));
      {
        StdProc1_15 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, StdProc1_15, 0) = (MR_Box) ((MR_Unsigned) (Var_46));
        MR_hl_field(0, StdProc1_15, 1) = ((MR_Box) (Var_47));
        MR_hl_field(0, StdProc1_15, 2) = ((MR_Box) (Var_48));
        MR_hl_field(0, StdProc1_15, 3) = ((MR_Box) (Var_49));
        MR_hl_field(0, StdProc1_15, 4) = ((MR_Box) (Var_50));
        MR_hl_field(0, StdProc1_15, 5) = (MR_Box) (packed_word_1);
        MR_hl_field(0, StdProc1_15, 6) = ((MR_Box) (StdInstrs_35));
        MR_hl_field(0, StdProc1_15, 7) = ((MR_Box) (Var_54));
        MR_hl_field(0, StdProc1_15, 8) = (MR_Box) ((MR_Unsigned) (Var_55));
        MR_hl_field(0, StdProc1_15, 9) = ((MR_Box) (Var_56));
      }
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_33));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (StdProc1_15));
      }
      {
        Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_26));
        MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ll_backend__dupproc__eliminate_dup_procs_5_p_0(Var_24, Var_30, &FinalIdProcsTail_16, STATE_VARIABLE_DupProcMap_0_18, STATE_VARIABLE_DupProcMap_19);
      mercury__assoc_list__values_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), FinalIdProcsTail_16, &FinalProcsTail_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Procs_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (FinalProcsTail_17));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__dupproc__disallowed_instr_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_DupProcMap_0_4,
  MR_Word * STATE_VARIABLE_DupProcMap_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DupProcMap_5 = STATE_VARIABLE_DupProcMap_0_4;
  }
  else
  {
    MR_Word Id_11;
    MR_Word Proc0_12;
    MR_Word IdProcs0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Proc_14;
    MR_Word IdProcs_15;
    MR_Word ModelStdProcs_20;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_DupProcMap_1_27;
    MR_Word MatchingId_17;
    MR_Word ProcPrime_19;
    MR_Word TypeCtorInfo_47_82;
    MR_Word MaybeProc_18;
    MR_Word Var_26;
    MR_Word Instrs0_43;
    MR_Word LabelInstr_44;
    MR_Word LaterInstrs_46;
    MR_Word TargetLabel_47;
    MR_Word Redirect_48;
    MR_Word DisallowedInstrs_49;
    MR_Integer NumLaterInstrs_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word _Comments_45;
    MR_Integer Var_58;

    Id_11 = ((MR_Word) ((MR_hl_field(0, Var_24, 0))));
    Proc0_12 = ((MR_Word) ((MR_hl_field(0, Var_24, 1))));
    Var_26 = ((MR_Unsigned) ((MR_hl_field(0, Proc0_12, 8))) & (MR_Integer) 1);
    succeeded = (Var_26 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ll_backend__dupproc__find_matching_model_proc_5_p_0(HeadVar__1_1, Id_11, Proc0_12, STATE_VARIABLE_DupProcMap_0_4, &MatchingId_17);
      if (succeeded)
      {
        Instrs0_43 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 6))));
        ll_backend__opt_util__get_prologue_4_p_0(Instrs0_43, &LabelInstr_44, &_Comments_45, &LaterInstrs_46);
        Var_53 = (MR_Integer) 1;
        Var_56 = (MR_String) "Redirect to procedure with identical body";
        Var_57 = (MR_Word) (&ll_backend__dupproc_scalar_common_1[1]);
        TypeCtorInfo_47_82 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0);
        {
          TargetLabel_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TargetLabel_47, 0) = (MR_Box) ((MR_Unsigned) (Var_53));
          MR_hl_field(1, TargetLabel_47, 1) = ((MR_Box) (MatchingId_17));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (TargetLabel_47));
        }
        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
        }
        {
          Redirect_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Redirect_48, 0) = ((MR_Box) (Var_54));
          MR_hl_field(0, Redirect_48, 1) = ((MR_Box) (Var_56));
        }
        mercury__list__filter_3_p_0(TypeCtorInfo_47_82, Var_57, LaterInstrs_46, &DisallowedInstrs_49);
        mercury__list__length_2_p_0(TypeCtorInfo_47_82, LaterInstrs_46, &NumLaterInstrs_50);
        succeeded = (DisallowedInstrs_49 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_58 = (MR_Integer) 6;
          succeeded = (NumLaterInstrs_50 < Var_58);
        }
        if (succeeded)
          MaybeProc_18 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Instrs_51;
          MR_Word Proc_52;
          MR_Word Var_59;
          MR_Word Var_71;
          MR_String Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Unsigned packed_word_2;

          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (Redirect_48));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Instrs_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Instrs_51, 0) = ((MR_Box) (LabelInstr_44));
            MR_hl_field(1, Instrs_51, 1) = ((MR_Box) (Var_59));
          }
          Var_71 = ((MR_Unsigned) ((MR_hl_field(0, Proc0_12, 0))) & (MR_Integer) 1);
          Var_72 = ((MR_String) ((MR_hl_field(0, Proc0_12, 1))));
          Var_73 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 2))));
          Var_74 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 3))));
          Var_75 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 4))));
          packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Proc0_12, 5)));
          Var_79 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 7))));
          Var_80 = ((MR_Unsigned) ((MR_hl_field(0, Proc0_12, 8))) & (MR_Integer) 1);
          Var_81 = ((MR_Word) ((MR_hl_field(0, Proc0_12, 9))));
          {
            Proc_52 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Proc_52, 0) = (MR_Box) ((MR_Unsigned) (Var_71));
            MR_hl_field(0, Proc_52, 1) = ((MR_Box) (Var_72));
            MR_hl_field(0, Proc_52, 2) = ((MR_Box) (Var_73));
            MR_hl_field(0, Proc_52, 3) = ((MR_Box) (Var_74));
            MR_hl_field(0, Proc_52, 4) = ((MR_Box) (Var_75));
            MR_hl_field(0, Proc_52, 5) = (MR_Box) (packed_word_2);
            MR_hl_field(0, Proc_52, 6) = ((MR_Box) (Instrs_51));
            MR_hl_field(0, Proc_52, 7) = ((MR_Box) (Var_79));
            MR_hl_field(0, Proc_52, 8) = (MR_Box) ((MR_Unsigned) (Var_80));
            MR_hl_field(0, Proc_52, 9) = ((MR_Box) (Var_81));
          }
          {
            MaybeProc_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeProc_18, 0) = ((MR_Box) (Proc_52));
          }
        }
        succeeded = (MaybeProc_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          ProcPrime_19 = ((MR_Word) ((MR_hl_field(1, MaybeProc_18, 0))));
      }
    }
    if (succeeded)
    {
      Proc_14 = ProcPrime_19;
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), ((MR_Box) (Id_11)), ((MR_Box) (MatchingId_17)), STATE_VARIABLE_DupProcMap_0_4, &STATE_VARIABLE_DupProcMap_1_27);
      ModelStdProcs_20 = HeadVar__1_1;
    }
    else
    {
      MR_Word StdProc0_21;
      MR_Word Var_28;
      MR_Word Var_29;

      Proc_14 = Proc0_12;
      ll_backend__dupproc__apply_dup_proc_map_in_proc_3_p_0(Proc0_12, &StdProc0_21, STATE_VARIABLE_DupProcMap_0_4);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (Id_11));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (StdProc0_21));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&ll_backend__dupproc_scalar_common_1[0]), HeadVar__1_1, Var_28, &ModelStdProcs_20);
      STATE_VARIABLE_DupProcMap_1_27 = STATE_VARIABLE_DupProcMap_0_4;
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (Id_11));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (Proc_14));
    }
    ll_backend__dupproc__eliminate_dup_procs_5_p_0(ModelStdProcs_20, IdProcs0_13, &IdProcs_15, STATE_VARIABLE_DupProcMap_1_27, STATE_VARIABLE_DupProcMap_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (IdProcs_15));
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_proc_3_p_0(
  MR_Word CProc_4,
  MR_Word * StdCProc_5,
  MR_Word DupProcMap_6)
{
  MR_Word Instrs_7 = ((MR_Word) ((MR_hl_field(0, CProc_4, 6))));
  MR_Word StdInstrs_8;
  MR_Word Var_19;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Unsigned packed_word_1;

  ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(Instrs_7, &StdInstrs_8, DupProcMap_6);
  Var_19 = ((MR_Unsigned) ((MR_hl_field(0, CProc_4, 0))) & (MR_Integer) 1);
  Var_20 = ((MR_String) ((MR_hl_field(0, CProc_4, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, CProc_4, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, CProc_4, 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, CProc_4, 4))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, CProc_4, 5)));
  Var_27 = ((MR_Word) ((MR_hl_field(0, CProc_4, 7))));
  Var_28 = ((MR_Unsigned) ((MR_hl_field(0, CProc_4, 8))) & (MR_Integer) 1);
  Var_29 = ((MR_Word) ((MR_hl_field(0, CProc_4, 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *StdCProc_5 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = (MR_Box) (packed_word_1);
    MR_hl_field(0, base, 6) = ((MR_Box) (StdInstrs_8));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 8) = (MR_Box) ((MR_Unsigned) (Var_28));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_29));
  }
}

static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Id_9,
  MR_Word Proc_10,
  MR_Word DupProcMap_11,
  MR_Word * MatchingId_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeCtorInfo_38_38;
    MR_Word ModelId_6;
    MR_Word ModelStdProc_7;
    MR_Word ModelIdProcs_8;
    MR_Word AugDupProcMap_13;
    MR_Word StdInstrs_15;
    MR_Word ModelStdInstrs_16;
    MR_Word Var_17;
    MR_Word Instrs_40;
    MR_Word TypeInfo_39_39;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      ModelIdProcs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      ModelId_6 = ((MR_Word) ((MR_hl_field(0, Var_17, 0))));
      ModelStdProc_7 = ((MR_Word) ((MR_hl_field(0, Var_17, 1))));
      TypeCtorInfo_38_38 = (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0);
      mercury__map__det_insert_4_p_0(TypeCtorInfo_38_38, TypeCtorInfo_38_38, ((MR_Box) (Id_9)), ((MR_Box) (ModelId_6)), DupProcMap_11, &AugDupProcMap_13);
      Instrs_40 = ((MR_Word) ((MR_hl_field(0, Proc_10, 6))));
      ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(Instrs_40, &StdInstrs_15, AugDupProcMap_13);
      ModelStdInstrs_16 = ((MR_Word) ((MR_hl_field(0, ModelStdProc_7, 6))));
      TypeInfo_39_39 = (MR_Word) (&ll_backend__dupproc_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (StdInstrs_15)), ((MR_Box) (ModelStdInstrs_16)));
      if (succeeded)
      {
        *MatchingId_12 = ModelId_6;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ModelIdProcs_8;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_instr_3_p_0(
  MR_Word Instr_4,
  MR_Word * StdInstr_5,
  MR_Word DupProcMap_6)
{
  switch (MR_tag((MR_Word) Instr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *StdInstr_5 = Instr_4;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Instr_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer NumIntTemps_7 = ((MR_Integer) ((MR_hl_field(3, Instr_4, 1))));
            MR_Integer NumFloatTemps_8 = ((MR_Integer) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word Instrs_9 = ((MR_Word) ((MR_hl_field(3, Instr_4, 3))));
            MR_Word StdInstrs_10;

            ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(Instrs_9, &StdInstrs_10, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NumIntTemps_7));
              MR_hl_field(3, base, 2) = ((MR_Box) (NumFloatTemps_8));
              MR_hl_field(3, base, 3) = ((MR_Box) (StdInstrs_10));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_11 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdRval_13;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(Rval_12, &StdRval_13, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_11));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdRval_13));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_96 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word Rval_97 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdRval_98;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(Rval_97, &StdRval_98, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_96));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdRval_98));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Target_14 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word Cont_15 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word LiveInfo_16 = ((MR_Word) ((MR_hl_field(3, Instr_4, 3))));
            MR_Word Context_17 = ((MR_Word) ((MR_hl_field(3, Instr_4, 4))));
            MR_Word GoalPath_18 = ((MR_Word) ((MR_hl_field(3, Instr_4, 5))));
            MR_Word Model_19 = ((MR_Word) ((MR_hl_field(3, Instr_4, 6))));
            MR_Word StdTarget_20;
            MR_Word StdCont_21;

            ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(Target_14, &StdTarget_20, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(Cont_15, &StdCont_21, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdTarget_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdCont_21));
              MR_hl_field(3, base, 3) = ((MR_Box) (LiveInfo_16));
              MR_hl_field(3, base, 4) = ((MR_Box) (Context_17));
              MR_hl_field(3, base, 5) = ((MR_Box) (GoalPath_18));
              MR_hl_field(3, base, 6) = ((MR_Box) (Model_19));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word FrameInfo_22 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word MaybeCodeAddr_23 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdFrameInfo_25;
            MR_Word MaybeStdCodeAddr_28;

            if (((MR_tag((MR_Word) FrameInfo_22)) == (MR_Integer) 1))
            {
              MR_Integer NumSlots_27 = ((MR_Integer) ((MR_hl_field(1, FrameInfo_22, 1))));

              {
                StdFrameInfo_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, StdFrameInfo_25, 0) = ((MR_Box) ((MR_String) ""));
                MR_hl_field(1, StdFrameInfo_25, 1) = ((MR_Box) (NumSlots_27));
              }
            }
            else
              StdFrameInfo_25 = FrameInfo_22;
            ll_backend__dupproc__apply_dup_proc_map_in_maybe_code_addr_3_p_0(MaybeCodeAddr_23, &MaybeStdCodeAddr_28, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdFrameInfo_25));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeStdCodeAddr_28));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_29 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word StdLabel_30;

            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_29, &StdLabel_30, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdLabel_30));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Target_99 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word StdTarget_100;

            ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(Target_99, &StdTarget_100, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdTarget_100));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeMaxIndex_31 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word Targets_32 = ((MR_Word) ((MR_hl_field(3, Instr_4, 3))));
            MR_Word StdTargets_33;
            MR_Word Rval_101 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));

            ll_backend__dupproc__apply_dup_proc_map_in_maybe_labels_3_p_0(Targets_32, &StdTargets_33, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_101));
              MR_hl_field(3, base, 2) = ((MR_Box) (MaybeMaxIndex_31));
              MR_hl_field(3, base, 3) = ((MR_Box) (StdTargets_33));
            }
          }
          break;
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
        case (MR_Integer) 17:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
        case (MR_Integer) 21:
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 28:
        case (MR_Integer) 31:
          *StdInstr_5 = Instr_4;
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_102 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word StdRval_103;
            MR_Word Target_104 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdTarget_105;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(Rval_102, &StdRval_103, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(Target_104, &StdTarget_105, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdRval_103));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdTarget_105));
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word Kind_35 = ((MR_Unsigned) ((MR_hl_field(3, Instr_4, 3))) & (MR_Integer) 1);
            MR_Integer NumSlots_106 = ((MR_Integer) ((MR_hl_field(3, Instr_4, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NumSlots_106));
              MR_hl_field(3, base, 2) = ((MR_Box) ((MR_String) ""));
              MR_hl_field(3, base, 3) = (MR_Box) ((MR_Unsigned) (Kind_35));
            }
          }
          break;
        case (MR_Integer) 27:
          *StdInstr_5 = Instr_4;
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_36 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdChild_37;
            MR_Word Lval_107 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));

            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Child_36, &StdChild_37, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 29U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_107));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdChild_37));
            }
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_108 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word Label_109 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdLabel_110;

            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_109, &StdLabel_110, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 30U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Lval_108));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdLabel_110));
            }
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Lval_111 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word Rval_112 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word StdRval_113;
            MR_Word Label_114 = ((MR_Word) ((MR_hl_field(3, Instr_4, 3))));
            MR_Word StdLabel_115;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(Rval_112, &StdRval_113, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_114, &StdLabel_115, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 32U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdRval_113));
              MR_hl_field(3, base, 2) = ((MR_Box) (Lval_111));
              MR_hl_field(3, base, 3) = ((MR_Box) (StdLabel_115));
            }
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval_48 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word LCSRval_49 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdLCRval_50;
            MR_Word StdLCSRval_51;
            MR_Word Label_116 = ((MR_Word) ((MR_hl_field(3, Instr_4, 3))));
            MR_Word StdLabel_117;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(LCRval_48, &StdLCRval_50, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(LCSRval_49, &StdLCSRval_51, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_116, &StdLabel_117, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 33U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdLCRval_50));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdLCSRval_51));
              MR_hl_field(3, base, 3) = ((MR_Box) (StdLabel_117));
            }
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_118 = ((MR_Word) ((MR_hl_field(3, Instr_4, 1))));
            MR_Word LCSRval_119 = ((MR_Word) ((MR_hl_field(3, Instr_4, 2))));
            MR_Word StdLCRval_120;
            MR_Word StdLCSRval_121;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(LCRval_118, &StdLCRval_120, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(LCSRval_119, &StdLCSRval_121, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdInstr_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 34U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdLCRval_120));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdLCSRval_121));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word DupProcMap_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Instr_5;
    MR_Word Instrs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word StdInstr_8;
    MR_Word StdInstrs_9;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_12;

    Instr_5 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    ll_backend__dupproc__apply_dup_proc_map_in_instr_3_p_0(Instr_5, &StdInstr_8, DupProcMap_3);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (StdInstr_8));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) ((MR_String) ""));
    }
    ll_backend__dupproc__apply_dup_proc_map_in_instrs_3_p_0(Instrs_7, &StdInstrs_9, DupProcMap_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (StdInstrs_9));
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(
  MR_Word Rval_4,
  MR_Word * StdRval_5,
  MR_Word DupProcMap_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      *StdRval_5 = Rval_4;
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.dupproc.apply_dup_proc_map_in_rval\'/3", (MR_String) "var");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval_4, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
          *StdRval_5 = Rval_4;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
            MR_Word StdConst_14;

            switch (MR_tag((MR_Word) Const_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                StdConst_14 = Const_13;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Const_13, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                  case (MR_Integer) 10:
                  case (MR_Integer) 11:
                  case (MR_Integer) 13:
                  case (MR_Integer) 14:
                    StdConst_14 = Const_13;
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word CodeAddr_46 = ((MR_Word) ((MR_hl_field(3, Const_13, 1))));
                      MR_Word StdCodeAddr_47;

                      switch (MR_tag((MR_Word) CodeAddr_46)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 3:
                          StdCodeAddr_47 = CodeAddr_46;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word Label_48 = ((MR_Word) ((MR_hl_field(1, CodeAddr_46, 0))));
                            MR_Word StdLabel_49;

                            ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_48, &StdLabel_49, DupProcMap_6);
                            {
                              StdCodeAddr_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, StdCodeAddr_47, 0) = ((MR_Box) (StdLabel_49));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word ProcLabel_50 = ((MR_Word) ((MR_hl_field(2, CodeAddr_46, 0))));
                            MR_Word StdProcLabel_51;
                            MR_Word FoundProcLabel_55;
                            MR_Box conv0_FoundProcLabel_55;

                            succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), DupProcMap_6, ((MR_Box) (ProcLabel_50)), &conv0_FoundProcLabel_55);
                            if (succeeded)
                            {
                              FoundProcLabel_55 = ((MR_Word) (conv0_FoundProcLabel_55));
                              succeeded = MR_TRUE;
                            }
                            if (succeeded)
                              StdProcLabel_51 = FoundProcLabel_55;
                            else
                              StdProcLabel_51 = ProcLabel_50;
                            {
                              StdCodeAddr_47 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, StdCodeAddr_47, 0) = ((MR_Box) (StdProcLabel_51));
                            }
                          }
                          break;
                      }
                      {
                        StdConst_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, StdConst_14, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                        MR_hl_field(3, StdConst_14, 1) = ((MR_Box) (StdCodeAddr_47));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *StdRval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (StdConst_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
            MR_Word RvalL_16 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
            MR_Word StdRvalL_17;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(RvalL_16, &StdRvalL_17, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdRval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_15));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdRvalL_17));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_18 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
            MR_Word RvalL_24 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
            MR_Word StdRvalL_25;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(RvalL_24, &StdRvalL_25, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *StdRval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Unop_18));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdRvalL_25));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_19 = ((MR_Word) ((MR_hl_field(3, Rval_4, 1))));
            MR_Word RvalR_20 = ((MR_Word) ((MR_hl_field(3, Rval_4, 3))));
            MR_Word StdRvalR_21;
            MR_Word RvalL_26 = ((MR_Word) ((MR_hl_field(3, Rval_4, 2))));
            MR_Word StdRvalL_27;

            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(RvalL_26, &StdRvalL_27, DupProcMap_6);
            ll_backend__dupproc__apply_dup_proc_map_in_rval_3_p_0(RvalR_20, &StdRvalR_21, DupProcMap_6);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *StdRval_5 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Binop_19));
              MR_hl_field(3, base, 2) = ((MR_Box) (StdRvalL_27));
              MR_hl_field(3, base, 3) = ((MR_Box) (StdRvalR_21));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_maybe_code_addr_3_p_0(
  MR_Word MaybeCodeAddr_4,
  MR_Word * MaybeStdCodeAddr_5,
  MR_Word DupProcMap_6)
{
  MR_bool succeeded;

  if ((MaybeCodeAddr_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeStdCodeAddr_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CodeAddr_7 = ((MR_Word) ((MR_hl_field(1, MaybeCodeAddr_4, 0))));
    MR_Word StdCodeAddr_8;

    switch (MR_tag((MR_Word) CodeAddr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        StdCodeAddr_8 = CodeAddr_7;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Label_9 = ((MR_Word) ((MR_hl_field(1, CodeAddr_7, 0))));
          MR_Word StdLabel_10;

          ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_9, &StdLabel_10, DupProcMap_6);
          {
            StdCodeAddr_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, StdCodeAddr_8, 0) = ((MR_Box) (StdLabel_10));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(2, CodeAddr_7, 0))));
          MR_Word StdProcLabel_12;
          MR_Word FoundProcLabel_16;
          MR_Box conv0_FoundProcLabel_16;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), DupProcMap_6, ((MR_Box) (ProcLabel_11)), &conv0_FoundProcLabel_16);
          if (succeeded)
          {
            FoundProcLabel_16 = ((MR_Word) (conv0_FoundProcLabel_16));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            StdProcLabel_12 = FoundProcLabel_16;
          else
            StdProcLabel_12 = ProcLabel_11;
          {
            StdCodeAddr_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, StdCodeAddr_8, 0) = ((MR_Box) (StdProcLabel_12));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeStdCodeAddr_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdCodeAddr_8));
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_code_addr_3_p_0(
  MR_Word CodeAddr_4,
  MR_Word * StdCodeAddr_5,
  MR_Word DupProcMap_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) CodeAddr_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 3:
      *StdCodeAddr_5 = CodeAddr_4;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Label_7 = ((MR_Word) ((MR_hl_field(1, CodeAddr_4, 0))));
        MR_Word StdLabel_8;

        ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_7, &StdLabel_8, DupProcMap_6);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *StdCodeAddr_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (StdLabel_8));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_9 = ((MR_Word) ((MR_hl_field(2, CodeAddr_4, 0))));
        MR_Word StdProcLabel_10;
        MR_Word FoundProcLabel_14;
        MR_Box conv0_FoundProcLabel_14;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), DupProcMap_6, ((MR_Box) (ProcLabel_9)), &conv0_FoundProcLabel_14);
        if (succeeded)
        {
          FoundProcLabel_14 = ((MR_Word) (conv0_FoundProcLabel_14));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          StdProcLabel_10 = FoundProcLabel_14;
        else
          StdProcLabel_10 = ProcLabel_9;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *StdCodeAddr_5 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (StdProcLabel_10));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_maybe_labels_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MaybeLabel_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaybeLabels_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word StdMaybeLabel_7;
    MR_Word StdMaybeLabels_8;

    if ((MaybeLabel_5 == (MR_Word) ((MR_Unsigned) 0U)))
      StdMaybeLabel_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Label_10 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_5, 0))));
      MR_Word StdLabel_11;

      ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(Label_10, &StdLabel_11, HeadVar__3_3);
      {
        StdMaybeLabel_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, StdMaybeLabel_7, 0) = ((MR_Box) (StdLabel_11));
      }
    }
    ll_backend__dupproc__apply_dup_proc_map_in_maybe_labels_3_p_0(MaybeLabels_6, &StdMaybeLabels_8, HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (StdMaybeLabel_7));
      MR_hl_field(1, base, 1) = ((MR_Box) (StdMaybeLabels_8));
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__apply_dup_proc_map_in_label_3_p_0(
  MR_Word Label_4,
  MR_Word * StdLabel_5,
  MR_Word DupProcMap_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Label_4)) == (MR_Integer) 1))
  {
    MR_Word Type_10 = ((MR_Unsigned) ((MR_hl_field(1, Label_4, 0))) & (MR_Integer) 3);
    MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(1, Label_4, 1))));
    MR_Word StdProcLabel_12;
    MR_Word FoundProcLabel_13;
    MR_Box conv0_FoundProcLabel_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), DupProcMap_6, ((MR_Box) (ProcLabel_11)), &conv0_FoundProcLabel_13);
    if (succeeded)
    {
      FoundProcLabel_13 = ((MR_Word) (conv0_FoundProcLabel_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      StdProcLabel_12 = FoundProcLabel_13;
    else
      StdProcLabel_12 = ProcLabel_11;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *StdLabel_5 = base;
      MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Type_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (StdProcLabel_12));
    }
  }
  else
  {
    MR_Integer Num_7 = ((MR_Integer) ((MR_hl_field(0, Label_4, 0))));
    MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(0, Label_4, 1))));
    MR_Word StdProcLabel_9;
    MR_Word FoundProcLabel_15;
    MR_Box conv1_FoundProcLabel_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), DupProcMap_6, ((MR_Box) (ProcLabel_8)), &conv1_FoundProcLabel_15);
    if (succeeded)
    {
      FoundProcLabel_15 = ((MR_Word) (conv1_FoundProcLabel_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      StdProcLabel_9 = FoundProcLabel_15;
    else
      StdProcLabel_9 = ProcLabel_8;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *StdLabel_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Num_7));
      MR_hl_field(0, base, 1) = ((MR_Box) (StdProcLabel_9));
    }
  }
}

void mercury__ll_backend__dupproc__init(void)
{
}

void mercury__ll_backend__dupproc__init_type_tables(void)
{
}

void mercury__ll_backend__dupproc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dupproc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.dupproc.
