/*
** Automatically generated from `mode_util.m'
** by the Mercury compiler,
** version rotd-2022-10-12
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


// :- module check_hlds.mode_util.
// :- implementation.

/*
INIT mercury__check_hlds__mode_util__init
ENDINIT
*/

#include "check_hlds.mode_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgInst_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inst_2,
  MR_Word * HeadVar__3_3);







#include "array.mh"



void MR_CALL 
check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Uniq_7, TypeCtor_8, Constructors_9, BoundInsts_10);
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_11, 0) = (MR_Box) ((MR_Unsigned) (Uniq_7));
    MR_hl_field(2, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_8, Constructors_9, Var_11, BoundInsts_10);
}

void MR_CALL 
check_hlds__mode_util__constructors_to_bound_insts_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(Uniq_7, TypeCtor_8, Constructors_9, BoundInsts_10);
}

void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word Uniq_7,
  MR_Word TypeCtor_8,
  MR_Word Constructors_9,
  MR_Word * BoundInsts_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_11, 1) = (MR_Box) ((MR_Unsigned) (Uniq_7));
    MR_hl_field(3, Var_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_8, Constructors_9, Var_11, BoundInsts_10);
}

static void MR_CALL 
check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(
  MR_Word TypeCtor_3,
  MR_Word HeadVar__4_4,
  MR_Word ArgInst_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word BoundInst_17;
    MR_Word BoundInsts_18;
    MR_Word Name_21 = ((MR_Word) ((MR_hl_field(0, Ctor_14, (MR_Integer) 2))));
    MR_Word Args_22 = ((MR_Word) ((MR_hl_field(0, Ctor_14, (MR_Integer) 3))));
    MR_Word Insts_25;
    MR_Integer Arity_26;
    MR_Word Var_27;

    check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(Args_22, ArgInst_5, &Insts_25);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_25, &Arity_26);
    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_27, 1) = ((MR_Box) (Name_21));
      MR_hl_field(3, Var_27, 2) = ((MR_Box) (Arity_26));
      MR_hl_field(3, Var_27, 3) = ((MR_Box) (TypeCtor_3));
    }
    {
      BoundInst_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundInst_17, 0) = ((MR_Box) (Var_27));
      MR_hl_field(0, BoundInst_17, 1) = ((MR_Box) (Insts_25));
    }
    check_hlds__mode_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_108_111_111_112_95_111_118_101_114_95_99_116_111_114_115_95_95_91_49_44_32_50_93_95_48_6_p_0(TypeCtor_3, Ctors_15, ArgInst_5, &BoundInsts_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_18));
    }
  }
}

static void MR_CALL 
check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Inst_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Args_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Insts_8;

    check_hlds__mode_util__ctor_arg_list_to_inst_list_3_p_0(Args_6, Inst_2, &Insts_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_2));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_8));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__get_arg_lives_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mode_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word IsLive_8;
    MR_Word IsLives_9;
    MR_Word FinalInst_11;
    MR_Word FinalInstPrime_13;
    MR_Word InitInstPrime_12;

    succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, Mode_6, &InitInstPrime_12, &FinalInstPrime_13);
    if (succeeded)
      FinalInst_11 = FinalInstPrime_13;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
        return;
      }
    succeeded = check_hlds__inst_test__inst_is_clobbered_2_p_0(ModuleInfo_1, FinalInst_11);
    if (succeeded)
      IsLive_8 = (MR_Integer) 1;
    else
      IsLive_8 = (MR_Integer) 0;
    check_hlds__mode_util__get_arg_lives_3_p_0(ModuleInfo_1, Modes_7, &IsLives_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IsLive_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (IsLives_9));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.from_to_insts_to_unify_modes\'/3", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word FromToInstsY_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FromToInstsYs_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word UnifyMode_18;
      MR_Word UnifyModes_19;
      MR_Word InitInstX_22 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      MR_Word FinalInstX_23 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
      MR_Word InitInstY_24 = ((MR_Word) ((MR_hl_field(0, FromToInstsY_16, (MR_Integer) 0))));
      MR_Word FinalInstY_25 = ((MR_Word) ((MR_hl_field(0, FromToInstsY_16, (MR_Integer) 1))));

      {
        UnifyMode_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, UnifyMode_18, 0) = ((MR_Box) (InitInstX_22));
        MR_hl_field(0, UnifyMode_18, 1) = ((MR_Box) (FinalInstX_23));
        MR_hl_field(0, UnifyMode_18, 2) = ((MR_Box) (InitInstY_24));
        MR_hl_field(0, UnifyMode_18, 3) = ((MR_Box) (FinalInstY_25));
      }
      check_hlds__mode_util__from_to_insts_to_unify_modes_3_p_0(Var_20, FromToInstsYs_17, &UnifyModes_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (UnifyMode_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (UnifyModes_19));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_modes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
        return;
      }
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.modes_to_unify_modes\'/4", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word ModeY_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ModeYs_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word UnifyMode_23;
      MR_Word UnifyModes_24;

      check_hlds__mode_util__modes_to_unify_mode_4_p_0(HeadVar__1_1, Var_26, ModeY_21, &UnifyMode_23);
      check_hlds__mode_util__modes_to_unify_modes_4_p_0(HeadVar__1_1, Var_25, ModeYs_22, &UnifyModes_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (UnifyMode_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (UnifyModes_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_util__from_to_insts_to_unify_mode_3_p_0(
  MR_Word FromToInstsX_4,
  MR_Word FromToInstsY_5,
  MR_Word * UnifyMode_6)
{
  MR_Word InitInstX_7 = ((MR_Word) ((MR_hl_field(0, FromToInstsX_4, (MR_Integer) 0))));
  MR_Word FinalInstX_8 = ((MR_Word) ((MR_hl_field(0, FromToInstsX_4, (MR_Integer) 1))));
  MR_Word InitInstY_9 = ((MR_Word) ((MR_hl_field(0, FromToInstsY_5, (MR_Integer) 0))));
  MR_Word FinalInstY_10 = ((MR_Word) ((MR_hl_field(0, FromToInstsY_5, (MR_Integer) 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *UnifyMode_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitInstX_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalInstX_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (InitInstY_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (FinalInstY_10));
  }
}

void MR_CALL 
check_hlds__mode_util__modes_to_unify_mode_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ModeX_6,
  MR_Word ModeY_7,
  MR_Word * UnifyMode_8)
{
  MR_bool succeeded;
  MR_Word InitialX_9;
  MR_Word FinalX_10;
  MR_Word InitialY_11;
  MR_Word FinalY_12;
  MR_Word InitInstPrime_13;
  MR_Word FinalInstPrime_14;
  MR_Word InitInstPrime_17;
  MR_Word FinalInstPrime_18;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, ModeX_6, &InitInstPrime_13, &FinalInstPrime_14);
  if (succeeded)
  {
    InitialX_9 = InitInstPrime_13;
    FinalX_10 = FinalInstPrime_14;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
      return;
    }
  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, ModeY_7, &InitInstPrime_17, &FinalInstPrime_18);
  if (succeeded)
  {
    InitialY_11 = InitInstPrime_17;
    FinalY_12 = FinalInstPrime_18;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *UnifyMode_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitialX_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalX_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (InitialY_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (FinalY_12));
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_mode_to_rhs_from_to_insts_1_f_0(
  MR_Word UnifyMode_3)
{
  MR_Word RHSFromToInsts_4;
  MR_Word RHSInitInst_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 2))));
  MR_Word RHSFinalInst_8 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 3))));

  {
    RHSFromToInsts_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSFromToInsts_4, 0) = ((MR_Box) (RHSInitInst_7));
    MR_hl_field(0, RHSFromToInsts_4, 1) = ((MR_Box) (RHSFinalInst_8));
  }
  return RHSFromToInsts_4;
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_mode_to_lhs_from_to_insts_1_f_0(
  MR_Word UnifyMode_3)
{
  MR_Word LHSFromToInsts_4;
  MR_Word LHSInitInst_5 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 0))));
  MR_Word LHSFinalInst_6 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 1))));

  {
    LHSFromToInsts_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSFromToInsts_4, 0) = ((MR_Box) (LHSInitInst_5));
    MR_hl_field(0, LHSFromToInsts_4, 1) = ((MR_Box) (LHSFinalInst_6));
  }
  return LHSFromToInsts_4;
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_mode_to_rhs_mode_1_f_0(
  MR_Word UnifyMode_3)
{
  MR_Word RHSMode_4;
  MR_Word RHSInitInst_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 2))));
  MR_Word RHSFinalInst_8 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 3))));

  {
    RHSMode_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, RHSMode_4, 0) = ((MR_Box) (RHSInitInst_7));
    MR_hl_field(0, RHSMode_4, 1) = ((MR_Box) (RHSFinalInst_8));
  }
  return RHSMode_4;
}

MR_Word MR_CALL 
check_hlds__mode_util__unify_mode_to_lhs_mode_1_f_0(
  MR_Word UnifyMode_3)
{
  MR_Word LHSMode_4;
  MR_Word LHSInitInst_5 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 0))));
  MR_Word LHSFinalInst_6 = ((MR_Word) ((MR_hl_field(0, UnifyMode_3, (MR_Integer) 1))));

  {
    LHSMode_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHSMode_4, 0) = ((MR_Box) (LHSInitInst_5));
    MR_hl_field(0, LHSMode_4, 1) = ((MR_Box) (LHSFinalInst_6));
  }
  return LHSMode_4;
}

void MR_CALL 
check_hlds__mode_util__unify_mode_to_lhs_rhs_from_to_insts_3_p_0(
  MR_Word UnifyMode_4,
  MR_Word * LHSInsts_5,
  MR_Word * RHSInsts_6)
{
  MR_Word LHSInitInst_7 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 0))));
  MR_Word LHSFinalInst_8 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 1))));
  MR_Word RHSInitInst_9 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 2))));
  MR_Word RHSFinalInst_10 = ((MR_Word) ((MR_hl_field(0, UnifyMode_4, (MR_Integer) 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LHSInsts_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LHSInitInst_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (LHSFinalInst_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *RHSInsts_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (RHSInitInst_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (RHSFinalInst_10));
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_to_from_to_insts_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  MR_bool succeeded;
  MR_Word FromToInsts_6;
  MR_Word Init_7;
  MR_Word Final_8;
  MR_Word InitInstPrime_9;
  MR_Word FinalInstPrime_10;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_4, Mode_5, &InitInstPrime_9, &FinalInstPrime_10);
  if (succeeded)
  {
    Init_7 = InitInstPrime_9;
    Final_8 = FinalInstPrime_10;
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
  {
    FromToInsts_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FromToInsts_6, 0) = ((MR_Box) (Init_7));
    MR_hl_field(0, FromToInsts_6, 1) = ((MR_Box) (Final_8));
  }
  return FromToInsts_6;
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_mode_1_f_0(
  MR_Word FromToInsts_3)
{
  MR_Word Mode_4;
  MR_Word Init_5 = ((MR_Word) ((MR_hl_field(0, FromToInsts_3, (MR_Integer) 0))));
  MR_Word Final_6 = ((MR_Word) ((MR_hl_field(0, FromToInsts_3, (MR_Integer) 1))));

  {
    Mode_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Mode_4, 0) = ((MR_Box) (Init_5));
    MR_hl_field(0, Mode_4, 1) = ((MR_Box) (Final_6));
  }
  return Mode_4;
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_final_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mode_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_8;
    MR_Word Insts_9;
    MR_Word FinalInstPrime_12;
    MR_Word InitInstPrime_11;

    succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(HeadVar__1_1, Mode_6, &InitInstPrime_11, &FinalInstPrime_12);
    if (succeeded)
      Inst_8 = FinalInstPrime_12;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
        return;
      }
    check_hlds__mode_util__mode_list_get_final_insts_3_p_0(HeadVar__1_1, Modes_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

void MR_CALL 
check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mode_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Modes_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Inst_8;
    MR_Word Insts_9;
    MR_Word InitInstPrime_11;
    MR_Word FinalInstPrime_12;

    succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(HeadVar__1_1, Mode_6, &InitInstPrime_11, &FinalInstPrime_12);
    if (succeeded)
      Inst_8 = InitInstPrime_11;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
        return;
      }
    check_hlds__mode_util__mode_list_get_initial_insts_3_p_0(HeadVar__1_1, Modes_7, &Insts_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_9));
    }
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_final_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  MR_bool succeeded;
  MR_Word Inst_6;
  MR_Word FinalInstPrime_9;
  MR_Word InitInstPrime_8;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_4, Mode_5, &InitInstPrime_8, &FinalInstPrime_9);
  if (succeeded)
    Inst_6 = FinalInstPrime_9;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
  return Inst_6;
}

MR_Word MR_CALL 
check_hlds__mode_util__mode_get_initial_inst_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  MR_bool succeeded;
  MR_Word Inst_6;
  MR_Word InitInstPrime_8;
  MR_Word FinalInstPrime_9;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_4, Mode_5, &InitInstPrime_8, &FinalInstPrime_9);
  if (succeeded)
    Inst_6 = InitInstPrime_8;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
  return Inst_6;
}

void MR_CALL 
check_hlds__mode_util__mode_get_from_to_insts_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5,
  MR_Word * FromToInsts_6)
{
  MR_bool succeeded;
  MR_Word InitInst_7;
  MR_Word FinalInst_8;
  MR_Word InitInstPrime_9;
  MR_Word FinalInstPrime_10;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_4, Mode_5, &InitInstPrime_9, &FinalInstPrime_10);
  if (succeeded)
  {
    InitInst_7 = InitInstPrime_9;
    FinalInst_8 = FinalInstPrime_10;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
      return;
    }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FromToInsts_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InitInst_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (FinalInst_8));
  }
}

void MR_CALL 
check_hlds__mode_util__mode_get_insts_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Mode_6,
  MR_Word * InitInst_7,
  MR_Word * FinalInst_8)
{
  MR_bool succeeded;
  MR_Word InitInstPrime_9;
  MR_Word FinalInstPrime_10;

  succeeded = check_hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_5, Mode_6, &InitInstPrime_9, &FinalInstPrime_10);
  if (succeeded)
  {
    *InitInst_7 = InitInstPrime_9;
    *FinalInst_8 = FinalInstPrime_10;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_util.mode_get_insts\'/4", (MR_String) "mode_get_insts_semidet failed");
      return;
    }
}

MR_bool MR_CALL 
check_hlds__mode_util__mode_get_insts_semidet_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Mode0_6,
  MR_Word * InitialInst_7,
  MR_Word * FinalInst_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Mode0_6)) == (MR_Integer) 0))
    {
      *InitialInst_7 = ((MR_Word) ((MR_hl_field(0, Mode0_6, (MR_Integer) 0))));
      *FinalInst_8 = ((MR_Word) ((MR_hl_field(0, Mode0_6, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Name_9 = ((MR_Word) ((MR_hl_field(1, Mode0_6, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(1, Mode0_6, (MR_Integer) 1))));
      MR_Integer Arity_11;
      MR_Word Modes_12;
      MR_Word ModeDefns_13;
      MR_Word HLDS_Mode_15;
      MR_Word Params_19;
      MR_Word ModeDefn_20;
      MR_Word Mode1_23;
      MR_Word Mode_24;
      MR_Word HLDS_Mode0_14;
      MR_Word Var_25;
      MR_Box conv0_HLDS_Mode0_14;
      MR_Word next_value_of_Mode0_6;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Args_10, &Arity_11);
      hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, &Modes_12);
      hlds__hlds_inst_mode__mode_table_get_mode_defns_2_p_0(Modes_12, &ModeDefns_13);
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (Name_9));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (Arity_11));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0), ModeDefns_13, ((MR_Box) (Var_25)), &conv0_HLDS_Mode0_14);
      if (succeeded)
      {
        HLDS_Mode0_14 = ((MR_Word) (conv0_HLDS_Mode0_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        HLDS_Mode_15 = HLDS_Mode0_14;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_31_31;
        MR_Word TypeCtorInfo_32_32;
        MR_String String_16;
        MR_Word BuiltinName_17;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Box conv1_HLDS_Mode_15;

        succeeded = ((MR_tag((MR_Word) Name_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          String_16 = ((MR_String) ((MR_hl_field(0, Name_9, (MR_Integer) 0))));
          Var_26 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0);
          TypeCtorInfo_32_32 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0);
          {
            BuiltinName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, BuiltinName_17, 0) = ((MR_Box) (Var_26));
            MR_hl_field(1, BuiltinName_17, 1) = ((MR_Box) (String_16));
          }
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_27, 0) = ((MR_Box) (BuiltinName_17));
            MR_hl_field(0, Var_27, 1) = ((MR_Box) (Arity_11));
          }
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_31_31, TypeCtorInfo_32_32, ModeDefns_13, ((MR_Box) (Var_27)), &conv1_HLDS_Mode_15);
          if (succeeded)
          {
            HLDS_Mode_15 = ((MR_Word) (conv1_HLDS_Mode_15));
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        Params_19 = ((MR_Word) ((MR_hl_field(0, HLDS_Mode_15, (MR_Integer) 1))));
        ModeDefn_20 = ((MR_Word) ((MR_hl_field(0, HLDS_Mode_15, (MR_Integer) 2))));
        Mode1_23 = (MR_Word) (ModeDefn_20);
        parse_tree__prog_mode__mode_substitute_arg_list_4_p_0(Mode1_23, Params_19, Args_10, &Mode_24);
        // direct tailcall eliminated
        ;
        next_value_of_Mode0_6 = Mode_24;
        Mode0_6 = next_value_of_Mode0_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_final_inst_1_f_0(
  MR_Word FromToInsts_3)
{
  MR_Word Final_4 = ((MR_Word) ((MR_hl_field(0, FromToInsts_3, (MR_Integer) 1))));

  return Final_4;
}

MR_Word MR_CALL 
check_hlds__mode_util__from_to_insts_to_init_inst_1_f_0(
  MR_Word FromToInsts_3)
{
  MR_Word Init_4 = ((MR_Word) ((MR_hl_field(0, FromToInsts_3, (MR_Integer) 0))));

  return Init_4;
}

void mercury__check_hlds__mode_util__init(void)
{
}

void mercury__check_hlds__mode_util__init_type_tables(void)
{
}

void mercury__check_hlds__mode_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_util.
