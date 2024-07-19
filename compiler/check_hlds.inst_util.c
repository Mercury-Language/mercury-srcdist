/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2024-07-19
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


// :- module check_hlds.inst_util.
// :- implementation.

/*
INIT mercury__check_hlds__inst_util__init
ENDINIT
*/

#include "check_hlds.inst_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.inst_lookup.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"




static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_5_p_0(
  MR_Word Type_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);



struct check_hlds__inst_util__vector_common_type_1_0_s {
  const MR_Word check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct check_hlds__inst_util__vector_common_type_1_0_s check_hlds__inst_util_vector_common_1[30];




static /* final */ const struct check_hlds__inst_util__vector_common_type_1_0_s check_hlds__inst_util_vector_common_1[30] = {
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


#include "array.mh"


void MR_CALL 
check_hlds__inst_util__get_higher_order_arg_types_3_p_0(
  MR_Word Type_4,
  MR_Integer Arity_5,
  MR_Word * Types_6)
{
  MR_bool succeeded;
  MR_Word ArgTypes_9;
  MR_Word Var_7;
  MR_Word Var_8;

  succeeded = parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(Type_4, &Var_7, &Var_8, &ArgTypes_9);
  if (succeeded)
    *Types_6 = ArgTypes_9;
  else
  {
    MR_Word Var_10;
    MR_Word VarSet0_12;
    MR_Word Var_13;
    MR_Word _VarSet_14;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_12);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_13, VarSet0_12, &_VarSet_14);
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_13));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, ((MR_Box) (Var_10)), Types_6);
  }
}

void MR_CALL 
check_hlds__inst_util__get_cons_id_arg_types_for_bound_inst_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word BoundInst_7,
  MR_Word * ArgTypes_8)
{
  MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(0, BoundInst_7, (MR_Integer) 0))));
  MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, BoundInst_7, (MR_Integer) 1))));

  check_hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(ModuleInfo_5, Type_6, ConsId_9, ArgInsts_10, ArgTypes_8);
}

MR_Word MR_CALL 
check_hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(
  MR_Integer Arity_3)
{
  MR_Word PredInstInfo_4;
  MR_Word InMode_5;
  MR_Word OutMode_6;
  MR_Word ArgModes_7;
  MR_Word Var_8;
  MR_Integer Var_9;
  MR_Word Var_11;

  parse_tree__prog_mode__in_mode_1_p_0(&InMode_5);
  parse_tree__prog_mode__out_mode_1_p_0(&OutMode_6);
  Var_9 = (MR_Integer) ((MR_Unsigned) Arity_3 - (MR_Unsigned) 1);
  Var_8 = mercury__list__duplicate_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_9, ((MR_Box) (InMode_5)));
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (OutMode_6));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ArgModes_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_8, Var_11);
  {
    PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredInstInfo_4, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, PredInstInfo_4, 1) = ((MR_Box) (ArgModes_7));
    MR_hl_field(0, PredInstInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, PredInstInfo_4, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  return PredInstInfo_4;
}

void MR_CALL 
check_hlds__inst_util__make_shared_bound_inst_list_5_p_0(
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
    MR_Word BoundInst0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BoundInsts0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word BoundInst_13;
    MR_Word BoundInsts_14;
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 0))));
    MR_Word ArgInsts0_17 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 1))));
    MR_Word ArgTypes_18;
    MR_Word ArgInsts_19;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;

    check_hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_4, Type_1, ConsId_16, ArgInsts0_17, &ArgTypes_18);
    check_hlds__inst_util__make_shared_inst_list_5_p_0(ArgTypes_18, ArgInsts0_17, &ArgInsts_19, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_22_22);
    {
      BoundInst_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundInst_13, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(0, BoundInst_13, 1) = ((MR_Box) (ArgInsts_19));
    }
    check_hlds__inst_util__make_shared_bound_inst_list_5_p_0(Type_1, BoundInsts0_12, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_14));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_5_p_0(
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/5", (MR_String) "cannot make shared version of \140free\'");
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
        MR_Word PredInst_16 = ((MR_Word) ((MR_hl_field(1, Inst0_7, (MR_Integer) 1))));
        MR_Word Uniq0_47 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_48 = ((&check_hlds__inst_util_vector_common_1[25 + Uniq0_47]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

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
        MR_Word InstResults0_13 = ((MR_Word) ((MR_hl_field(2, Inst0_7, (MR_Integer) 1))));
        MR_Word BoundInsts0_14 = ((MR_Word) ((MR_hl_field(2, Inst0_7, (MR_Integer) 2))));
        MR_Word BoundInsts_15;
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_util_vector_common_1[20 + Uniq0_45]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_util__make_shared_bound_inst_list_5_p_0(Type_6, BoundInsts0_14, &BoundInsts_15, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_13));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))));
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
              MR_Word STATE_VARIABLE_ModuleInfo_41_41;
              MR_Word STATE_VARIABLE_ModuleInfo_42_42;
              MR_Word Var_43;
              MR_Word SubInst0_49;
              MR_Word SubInst1_50;

              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable1_25, InstTable0_22, &InstTable1_28);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_28, STATE_VARIABLE_ModuleInfo_0_33, &STATE_VARIABLE_ModuleInfo_41_41);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_41_41, InstName_21, &SubInst0_49);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_41_41, SubInst0_49, &SubInst1_50);
              check_hlds__inst_util__make_shared_inst_5_p_0(Type_6, SubInst1_50, &SharedInst_27, STATE_VARIABLE_ModuleInfo_41_41, &STATE_VARIABLE_ModuleInfo_42_42);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &InstTable2_29);
              hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable2_29, &SharedInstTable2_30);
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (SharedInst_27));
              }
              hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(InstName_21, Var_43, SharedInstTable2_30, &SharedInstTable_31);
              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable_31, InstTable2_29, &InstTable_32);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_32, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_34);
            }
            else
            {
              MR_Word OldMaybeInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_24, (MR_Integer) 0))));

              if ((OldMaybeInst_26 == (MR_Word) ((MR_Unsigned) 0U)))
                SharedInst_27 = Inst0_7;
              else
                SharedInst_27 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_26, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_34, InstName_21, SharedInst_27);
            if (succeeded)
              *Inst_8 = Inst0_7;
            else
              *Inst_8 = SharedInst_27;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_18 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))));
            MR_Word SubInst0_19 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 2))));
            MR_Word SubInst1_20;

            check_hlds__inst_util__make_shared_inst_5_p_0(Type_6, SubInst0_19, &SubInst1_20, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
            succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_34, Type_6, SubInst1_20, SubInst0_19);
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
            MR_Word Uniq0_10 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_11 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 2))));
            MR_Word Uniq_12 = ((&check_hlds__inst_util_vector_common_1[15 + Uniq0_10]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/5", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_5_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_29;
      MR_Word Insts_30;
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;

      check_hlds__inst_util__make_shared_inst_5_p_0(Var_36, Inst0_27, &Inst_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_34_34);
      check_hlds__inst_util__make_shared_inst_list_5_p_0(Var_35, Insts0_28, &Insts_30, STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_ModuleInfo_5);
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
check_hlds__inst_util__make_mostly_uniq_inst_list_5_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst_list\'/5", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Inst0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Insts0_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Inst_29;
      MR_Word Insts_30;
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;

      check_hlds__inst_util__make_mostly_uniq_inst_5_p_0(Var_36, Inst0_27, &Inst_29, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_34_34);
      check_hlds__inst_util__make_mostly_uniq_inst_list_5_p_0(Var_35, Insts0_28, &Insts_30, STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_ModuleInfo_5);
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
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_5_p_0(
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
    MR_Word BoundInst0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word BoundInsts0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word BoundInst_13;
    MR_Word BoundInsts_14;
    MR_Word ConsId_16 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 0))));
    MR_Word ArgInsts0_17 = ((MR_Word) ((MR_hl_field(0, BoundInst0_11, (MR_Integer) 1))));
    MR_Word ArgTypes_18;
    MR_Word ArgInsts_19;
    MR_Word STATE_VARIABLE_ModuleInfo_22_22;

    check_hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(STATE_VARIABLE_ModuleInfo_0_4, Type_1, ConsId_16, ArgInsts0_17, &ArgTypes_18);
    check_hlds__inst_util__make_mostly_uniq_inst_list_5_p_0(ArgTypes_18, ArgInsts0_17, &ArgInsts_19, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_22_22);
    {
      BoundInst_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BoundInst_13, 0) = ((MR_Box) (ConsId_16));
      MR_hl_field(0, BoundInst_13, 1) = ((MR_Box) (ArgInsts_19));
    }
    check_hlds__inst_util__make_mostly_uniq_bound_inst_list_5_p_0(Type_1, BoundInsts0_12, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_ModuleInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (BoundInst_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (BoundInsts_14));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_5_p_0(
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
        MR_Word PredInst_16 = ((MR_Word) ((MR_hl_field(1, Inst0_7, (MR_Integer) 1))));
        MR_Word Uniq0_47 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_48 = ((&check_hlds__inst_util_vector_common_1[10 + Uniq0_47]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

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
        MR_Word BoundInsts0_14 = ((MR_Word) ((MR_hl_field(2, Inst0_7, (MR_Integer) 2))));
        MR_Word BoundInsts_15;
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_7, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_util_vector_common_1[5 + Uniq0_45]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_util__make_mostly_uniq_bound_inst_list_5_p_0(Type_6, BoundInsts0_14, &BoundInsts_15, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_8 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_15));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_21 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))));
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
              MR_Word STATE_VARIABLE_ModuleInfo_41_41;
              MR_Word STATE_VARIABLE_ModuleInfo_42_42;
              MR_Word Var_43;
              MR_Word SubInst0_49;

              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable1_25, InstTable0_22, &InstTable1_28);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_28, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_41_41);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_41_41, InstName_21, &SubInst0_49);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_41_41, SubInst0_49, &SubInst1_29);
              check_hlds__inst_util__make_mostly_uniq_inst_5_p_0(Type_6, SubInst1_29, &MostlyUniqInst_27, STATE_VARIABLE_ModuleInfo_41_41, &STATE_VARIABLE_ModuleInfo_42_42);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_42_42, &InstTable2_30);
              hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable2_30, &MostlyUniqInstTable2_31);
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (MostlyUniqInst_27));
              }
              hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(InstName_21, Var_43, MostlyUniqInstTable2_31, &MostlyUniqInstTable_32);
              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable_32, InstTable2_30, &InstTable_33);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_33, STATE_VARIABLE_ModuleInfo_42_42, STATE_VARIABLE_ModuleInfo_35);
            }
            else
            {
              MR_Word OldMaybeInst_26 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_24, (MR_Integer) 0))));

              if ((OldMaybeInst_26 == (MR_Word) ((MR_Unsigned) 0U)))
                MostlyUniqInst_27 = Inst0_7;
              else
                MostlyUniqInst_27 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_26, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_35, InstName_21, MostlyUniqInst_27);
            if (succeeded)
              *Inst_8 = Inst0_7;
            else
              *Inst_8 = MostlyUniqInst_27;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_18 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))));
            MR_Word SubInst0_19 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 2))));
            MR_Word SubInst_20;

            check_hlds__inst_util__make_mostly_uniq_inst_5_p_0(Type_6, SubInst0_19, &SubInst_20, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            succeeded = check_hlds__inst_match__inst_matches_final_4_p_0(*STATE_VARIABLE_ModuleInfo_35, Type_6, SubInst_20, SubInst0_19);
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
            MR_Word Uniq0_10 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_11 = ((MR_Word) ((MR_hl_field(3, Inst0_7, (MR_Integer) 2))));
            MR_Word Uniq_12 = ((&check_hlds__inst_util_vector_common_1[0 + Uniq0_10]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/5", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Word ArgInsts_9,
  MR_Word * ArgTypes_10)
{
  MR_bool succeeded;
  MR_Integer Arity_11;
  MR_Word DuCtor_12;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_9, &Arity_11);
  succeeded = ((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 1);
  if (succeeded)
  {
    DuCtor_12 = (MR_Word) (MR_body((MR_Word) (ConsId_8), (MR_Integer) 1));
    {
      MR_Word ArgTypes0_13;
      MR_Word TypeCtorInfo_22_22;
      MR_Integer Var_25;

      succeeded = check_hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_7, DuCtor_12, &ArgTypes0_13);
      if (succeeded)
      {
        TypeCtorInfo_22_22 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__list__length_2_p_0(TypeCtorInfo_22_22, ArgTypes0_13, &Var_25);
        succeeded = (Arity_11 == Var_25);
      }
      if (succeeded)
        *ArgTypes_10 = ArgTypes0_13;
      else
      {
        MR_Word ArgTypes0_19;
        MR_Word TypeCtor_14;

        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_7, &TypeCtor_14, &ArgTypes0_19);
        if (succeeded)
          succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_14);
        if (succeeded)
          *ArgTypes_10 = ArgTypes0_19;
        else
        {
          MR_Word Var_17;
          MR_Word VarSet0_26;
          MR_Word Var_27;
          MR_Word _VarSet_28;

          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_26);
          mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_27, VarSet0_26, &_VarSet_28);
          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_17, 0) = ((MR_Box) (Var_27));
            MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_11, ((MR_Box) (Var_17)), ArgTypes_10);
        }
      }
    }
  }
  else
  {
    succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      MR_Word ArgTypes0_20;
      MR_Word _TypeCtor_16;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_7, &_TypeCtor_16, &ArgTypes0_20);
      if (succeeded)
        *ArgTypes_10 = ArgTypes0_20;
      else
      {
        MR_Word Var_18;
        MR_Word VarSet0_31;
        MR_Word Var_32;
        MR_Word _VarSet_33;

        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_31);
        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_32, VarSet0_31, &_VarSet_33);
        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_11, ((MR_Box) (Var_18)), ArgTypes_10);
      }
    }
    else
      *ArgTypes_10 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void mercury__check_hlds__inst_util__init(void)
{
}

void mercury__check_hlds__inst_util__init_type_tables(void)
{
}

void mercury__check_hlds__inst_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_util.
