/*
** Automatically generated from `inst_make.m'
** by the Mercury compiler,
** version rotd-2026-04-17
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


// :- module check_hlds.inst_make.
// :- implementation.

/*
INIT mercury__check_hlds__inst_make__init
ENDINIT
*/

#include "check_hlds.inst_make.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.inst_lookup.mih"
#include "hlds.inst_match.mih"
#include "hlds.inst_test.mih"
#include "hlds.inst_util.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
check_hlds__inst_make__make_mostly_uniq_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
check_hlds__inst_make__make_mostly_uniq_bound_functors_5_p_0(
  MR_Word Type_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);



struct check_hlds__inst_make__vector_common_type_1_0_s {
  const MR_Word check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct check_hlds__inst_make__vector_common_type_1_0_s check_hlds__inst_make_vector_common_1[30];




static /* final */ const struct check_hlds__inst_make__vector_common_type_1_0_s check_hlds__inst_make_vector_common_1[30] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 0 },
  /* row   6 */   { (MR_Integer) 2 },
  /* row   7 */   { (MR_Integer) 2 },
  /* row   8 */   { (MR_Integer) 3 },
  /* row   9 */   { (MR_Integer) 4 },
  /* row  10 */   { (MR_Integer) 0 },
  /* row  11 */   { (MR_Integer) 2 },
  /* row  12 */   { (MR_Integer) 2 },
  /* row  13 */   { (MR_Integer) 3 },
  /* row  14 */   { (MR_Integer) 4 },
  /* row  15 */   { (MR_Integer) 0 },
  /* row  16 */   { (MR_Integer) 0 },
  /* row  17 */   { (MR_Integer) 0 },
  /* row  18 */   { (MR_Integer) 3 },
  /* row  19 */   { (MR_Integer) 4 },
  /* row  20 */   { (MR_Integer) 0 },
  /* row  21 */   { (MR_Integer) 0 },
  /* row  22 */   { (MR_Integer) 0 },
  /* row  23 */   { (MR_Integer) 3 },
  /* row  24 */   { (MR_Integer) 4 },
  /* row  25 */   { (MR_Integer) 0 },
  /* row  26 */   { (MR_Integer) 0 },
  /* row  27 */   { (MR_Integer) 0 },
  /* row  28 */   { (MR_Integer) 3 },
  /* row  29 */   { (MR_Integer) 4 },
};




void MR_CALL 
check_hlds__inst_make__make_shared_bound_functors_5_p_0(
  MR_Word Type_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
  }
  else
  {
    MR_Word BoundFunctor0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word BoundFunctors0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word BoundFunctor_13;
    MR_Word BoundFunctors_14;
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_11, 0))));
    MR_Word ArgInsts0_17 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_11, 1))));
    MR_Word ArgTypes_18;
    MR_Word ArgInsts_19;
    MR_Word STATE_VARIABLE_ModuleInfo_1_22;

    hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_4, Type_1, ConsId_16, ArgInsts0_17, &ArgTypes_18);
    check_hlds__inst_make__make_shared_inst_list_5_p_0(ArgTypes_18, ArgInsts0_17, &ArgInsts_19, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_22);
    {
      BoundFunctor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundFunctor_13, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(0, BoundFunctor_13, 1) = ((MR_Box) (ArgInsts_19));
    }
    check_hlds__inst_make__make_shared_bound_functors_5_p_0(Type_1, BoundFunctors0_12, &BoundFunctors_14, STATE_VARIABLE_ModuleInfo_1_22, STATE_VARIABLE_ModuleInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_14));
    }
  }
}

void MR_CALL 
check_hlds__inst_make__make_shared_inst_5_p_0(
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_shared_inst\'/5", (MR_String) "cannot make shared version of \140free\'");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_8 = Inst0_7;
            *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInst_16 = ((MR_Word) ((MR_hl_field(1, Inst0_7, 1))));
        MR_Word Uniq0_47 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word Uniq_48 = ((&check_hlds__inst_make_vector_common_1[25 + Uniq0_47]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_48));
          MR_hl_field(1, base, 1) = ((MR_Box) (PredInst_16));
        }
        *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_13 = ((MR_Word) ((MR_hl_field(2, Inst0_7, 1))));
        MR_Word BoundFunctors0_14 = ((MR_Word) ((MR_hl_field(2, Inst0_7, 2))));
        MR_Word BoundFunctors_15;
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_make_vector_common_1[20 + Uniq0_45]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_make__make_shared_bound_functors_5_p_0(Type_6, BoundFunctors0_14, &BoundFunctors_15, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_13));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word InstTable0_22;
            MR_Word SharedInstTable0_23;
            MR_Word MaybeOldMaybeInst_24;
            MR_Word SharedInstTable1_25;
            MR_Word SharedInst_27;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &InstTable0_22);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable0_22, &SharedInstTable0_23);
            hlds__hlds_inst_mode__search_insert_unknown_shared_inst_4_p_0(InstName_21, &MaybeOldMaybeInst_24, SharedInstTable0_23, &SharedInstTable1_25);
            if ((MaybeOldMaybeInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_28;
              MR_Word InstTable2_29;
              MR_Word SharedInstTable2_30;
              MR_Word SharedInstTable_31;
              MR_Word InstTable_32;
              MR_Word STATE_VARIABLE_ModuleInfo_3_41;
              MR_Word STATE_VARIABLE_ModuleInfo_4_42;
              MR_Word Var_43;
              MR_Word SubInst0_49;
              MR_Word SubInst1_50;

              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable1_25, InstTable0_22, &InstTable1_28);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_28, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_3_41);
              hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_3_41, InstName_21, &SubInst0_49);
              hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_3_41, SubInst0_49, &SubInst1_50);
              check_hlds__inst_make__make_shared_inst_5_p_0(Type_6, SubInst1_50, &SharedInst_27, STATE_VARIABLE_ModuleInfo_3_41, &STATE_VARIABLE_ModuleInfo_4_42);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_4_42, &InstTable2_29);
              hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable2_29, &SharedInstTable2_30);
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (SharedInst_27));
              }
              hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(InstName_21, Var_43, SharedInstTable2_30, &SharedInstTable_31);
              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable_31, InstTable2_29, &InstTable_32);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_32, STATE_VARIABLE_ModuleInfo_4_42, STATE_VARIABLE_ModuleInfo_34);
            }
            else
            {
              MR_Word OldMaybeInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_24, 0))));

              if ((OldMaybeInst_26 == (MR_Word) ((MR_Unsigned) 0U)))
                SharedInst_27 = Inst0_7;
              else
                SharedInst_27 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_26, 0))));
              *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
            }
            succeeded = hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_34, InstName_21, SharedInst_27);
            if (succeeded)
              *Inst_8 = Inst0_7;
            else
              *Inst_8 = SharedInst_27;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_18 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word SubInst0_19 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word SubInst1_20;

            check_hlds__inst_make__make_shared_inst_5_p_0(Type_6, SubInst0_19, &SubInst1_20, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
            succeeded = hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_34, Type_6, SubInst1_20, SubInst0_19);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_18));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst1_20));
              }
            else
              *Inst_8 = SubInst1_20;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_10 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_7, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_11 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word Uniq_12 = ((&check_hlds__inst_make_vector_common_1[15 + Uniq0_10]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_11));
            }
            *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_shared_inst\'/5", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__inst_make__make_shared_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_shared_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_shared_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Insts0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Inst_29;
      MR_Word Insts_30;
      MR_Word STATE_VARIABLE_ModuleInfo_1_34;

      check_hlds__inst_make__make_shared_inst_5_p_0(Var_36, Inst0_27, &Inst_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_34);
      check_hlds__inst_make__make_shared_inst_list_5_p_0(Var_35, Insts0_28, &Insts_30, STATE_VARIABLE_ModuleInfo_1_34, STATE_VARIABLE_ModuleInfo_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_30));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_make__make_mostly_uniq_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_mostly_uniq_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_mostly_uniq_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Insts0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Inst_29;
      MR_Word Insts_30;
      MR_Word STATE_VARIABLE_ModuleInfo_1_34;

      check_hlds__inst_make__make_mostly_uniq_inst_5_p_0(Var_36, Inst0_27, &Inst_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_34);
      check_hlds__inst_make__make_mostly_uniq_inst_list_5_p_0(Var_35, Insts0_28, &Insts_30, STATE_VARIABLE_ModuleInfo_1_34, STATE_VARIABLE_ModuleInfo_5);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Inst_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (Insts_30));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_make__make_mostly_uniq_bound_functors_5_p_0(
  MR_Word Type_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
  }
  else
  {
    MR_Word BoundFunctor0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word BoundFunctors0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word BoundFunctor_13;
    MR_Word BoundFunctors_14;
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_11, 0))));
    MR_Word ArgInsts0_17 = ((MR_Word) ((MR_hl_field(0, BoundFunctor0_11, 1))));
    MR_Word ArgTypes_18;
    MR_Word ArgInsts_19;
    MR_Word STATE_VARIABLE_ModuleInfo_1_22;

    hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_4, Type_1, ConsId_16, ArgInsts0_17, &ArgTypes_18);
    check_hlds__inst_make__make_mostly_uniq_inst_list_5_p_0(ArgTypes_18, ArgInsts0_17, &ArgInsts_19, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_1_22);
    {
      BoundFunctor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundFunctor_13, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(0, BoundFunctor_13, 1) = ((MR_Box) (ArgInsts_19));
    }
    check_hlds__inst_make__make_mostly_uniq_bound_functors_5_p_0(Type_1, BoundFunctors0_12, &BoundFunctors_14, STATE_VARIABLE_ModuleInfo_1_22, STATE_VARIABLE_ModuleInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundFunctor_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundFunctors_14));
    }
  }
}

void MR_CALL 
check_hlds__inst_make__make_mostly_uniq_inst_5_p_0(
  MR_Word Type_6,
  MR_Word Inst0_7,
  MR_Word * Inst_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_8 = Inst0_7;
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInst_16 = ((MR_Word) ((MR_hl_field(1, Inst0_7, 1))));
        MR_Word Uniq0_47 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word Uniq_48 = ((&check_hlds__inst_make_vector_common_1[10 + Uniq0_47]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_48));
          MR_hl_field(1, base, 1) = ((MR_Box) (PredInst_16));
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BoundFunctors0_14 = ((MR_Word) ((MR_hl_field(2, Inst0_7, 2))));
        MR_Word BoundFunctors_15;
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_make_vector_common_1[5 + Uniq0_45]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_make__make_mostly_uniq_bound_functors_5_p_0(Type_6, BoundFunctors0_14, &BoundFunctors_15, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundFunctors_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word InstTable0_22;
            MR_Word MostlyUniqInstTable0_23;
            MR_Word MaybeOldMaybeInst_24;
            MR_Word MostlyUniqInstTable1_25;
            MR_Word MostlyUniqInst_27;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &InstTable0_22);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable0_22, &MostlyUniqInstTable0_23);
            hlds__hlds_inst_mode__search_insert_unknown_mostly_uniq_inst_4_p_0(InstName_21, &MaybeOldMaybeInst_24, MostlyUniqInstTable0_23, &MostlyUniqInstTable1_25);
            if ((MaybeOldMaybeInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_28;
              MR_Word SubInst1_29;
              MR_Word InstTable2_30;
              MR_Word MostlyUniqInstTable2_31;
              MR_Word MostlyUniqInstTable_32;
              MR_Word InstTable_33;
              MR_Word STATE_VARIABLE_ModuleInfo_3_41;
              MR_Word STATE_VARIABLE_ModuleInfo_4_42;
              MR_Word Var_43;
              MR_Word SubInst0_49;

              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable1_25, InstTable0_22, &InstTable1_28);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_28, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_3_41);
              hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_3_41, InstName_21, &SubInst0_49);
              hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_3_41, SubInst0_49, &SubInst1_29);
              check_hlds__inst_make__make_mostly_uniq_inst_5_p_0(Type_6, SubInst1_29, &MostlyUniqInst_27, STATE_VARIABLE_ModuleInfo_3_41, &STATE_VARIABLE_ModuleInfo_4_42);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_4_42, &InstTable2_30);
              hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable2_30, &MostlyUniqInstTable2_31);
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (MostlyUniqInst_27));
              }
              hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(InstName_21, Var_43, MostlyUniqInstTable2_31, &MostlyUniqInstTable_32);
              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable_32, InstTable2_30, &InstTable_33);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_33, STATE_VARIABLE_ModuleInfo_4_42, STATE_VARIABLE_ModuleInfo_35);
            }
            else
            {
              MR_Word OldMaybeInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_24, 0))));

              if ((OldMaybeInst_26 == (MR_Word) ((MR_Unsigned) 0U)))
                MostlyUniqInst_27 = Inst0_7;
              else
                MostlyUniqInst_27 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_26, 0))));
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            succeeded = hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_35, InstName_21, MostlyUniqInst_27);
            if (succeeded)
              *Inst_8 = Inst0_7;
            else
              *Inst_8 = MostlyUniqInst_27;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_18 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 1))));
            MR_Word SubInst0_19 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word SubInst_20;

            check_hlds__inst_make__make_mostly_uniq_inst_5_p_0(Type_6, SubInst0_19, &SubInst_20, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            succeeded = hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_35, Type_6, SubInst_20, SubInst0_19);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_18));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_20));
              }
            else
              *Inst_8 = SubInst_20;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_10 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_7, 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_11 = ((MR_Word) ((MR_hl_field(3, Inst0_7, 2))));
            MR_Word Uniq_12 = ((&check_hlds__inst_make_vector_common_1[0 + Uniq0_10]))->check_hlds__inst_make__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_12));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_11));
            }
            *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_make.make_mostly_uniq_inst\'/5", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
  }
}

void mercury__check_hlds__inst_make__init(void)
{
}

void mercury__check_hlds__inst_make__init_type_tables(void)
{
}

void mercury__check_hlds__inst_make__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_make__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_make.
