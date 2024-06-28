/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2024-06-28
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
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);



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


MR_Word MR_CALL 
check_hlds__inst_util__no_type_available_0_f_0(void)
{
  MR_Word Type_2;
  MR_Word VarSet0_3;
  MR_Word Var_4;
  MR_Word _VarSet_5;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_3);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_4, VarSet0_3, &_VarSet_5);
  {
    Type_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Type_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, Type_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Type_2;
}

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
check_hlds__inst_util__get_cons_id_arg_types_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Type_7,
  MR_Word ConsId_8,
  MR_Integer Arity_9,
  MR_Word * Types_10)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 4))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word ArgTypes_15;
    MR_Word TypeCtorInfo_17_17;
    MR_Integer Var_19;

    succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_7, ConsId_8, &ArgTypes_15);
    if (succeeded)
    {
      TypeCtorInfo_17_17 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__list__length_2_p_0(TypeCtorInfo_17_17, ArgTypes_15, &Var_19);
      succeeded = (Arity_9 == Var_19);
    }
    if (succeeded)
      *Types_10 = ArgTypes_15;
    else
    {
      MR_Word Var_16;
      MR_Word VarSet0_20;
      MR_Word Var_21;
      MR_Word _VarSet_22;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_20);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_21, VarSet0_20, &_VarSet_22);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_16, 0) = ((MR_Box) (Var_21));
        MR_hl_field(0, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_9, ((MR_Box) (Var_16)), Types_10);
    }
  }
  else
    *Types_10 = (MR_Word) ((MR_Unsigned) 0U);
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
check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(0, Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(0, Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_shared_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(0, Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Inst0_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free\'");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            *Inst_6 = Inst0_5;
            *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInst_14 = ((MR_Word) ((MR_hl_field(1, Inst0_5, (MR_Integer) 1))));
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_util_vector_common_1[25 + Uniq0_45]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(1, base, 1) = ((MR_Box) (PredInst_14));
        }
        *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word InstResults0_11 = ((MR_Word) ((MR_hl_field(2, Inst0_5, (MR_Integer) 1))));
        MR_Word BoundInsts0_12 = ((MR_Word) ((MR_hl_field(2, Inst0_5, (MR_Integer) 2))));
        MR_Word BoundInsts_13;
        MR_Word Uniq0_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_44 = ((&check_hlds__inst_util_vector_common_1[20 + Uniq0_43]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInsts0_12, &BoundInsts_13, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_44));
          MR_hl_field(2, base, 1) = ((MR_Box) (InstResults0_11));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))));
            MR_Word InstTable0_20;
            MR_Word SharedInstTable0_21;
            MR_Word MaybeOldMaybeInst_22;
            MR_Word SharedInstTable1_23;
            MR_Word SharedInst_25;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_31, &InstTable0_20);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable0_20, &SharedInstTable0_21);
            hlds__hlds_inst_mode__search_insert_unknown_shared_inst_4_p_0(InstName_19, &MaybeOldMaybeInst_22, SharedInstTable0_21, &SharedInstTable1_23);
            if ((MaybeOldMaybeInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_26;
              MR_Word InstTable2_27;
              MR_Word SharedInstTable2_28;
              MR_Word SharedInstTable_29;
              MR_Word InstTable_30;
              MR_Word STATE_VARIABLE_ModuleInfo_39_39;
              MR_Word STATE_VARIABLE_ModuleInfo_40_40;
              MR_Word Var_41;
              MR_Word SubInst0_47;
              MR_Word SubInst1_48;

              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable1_23, InstTable0_20, &InstTable1_26);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_31, &STATE_VARIABLE_ModuleInfo_39_39);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_39_39, InstName_19, &SubInst0_47);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_39_39, SubInst0_47, &SubInst1_48);
              check_hlds__inst_util__make_shared_inst_4_p_0(SubInst1_48, &SharedInst_25, STATE_VARIABLE_ModuleInfo_39_39, &STATE_VARIABLE_ModuleInfo_40_40);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_40_40, &InstTable2_27);
              hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable2_27, &SharedInstTable2_28);
              {
                Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_41, 0) = ((MR_Box) (SharedInst_25));
              }
              hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(InstName_19, Var_41, SharedInstTable2_28, &SharedInstTable_29);
              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable_29, InstTable2_27, &InstTable_30);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_30, STATE_VARIABLE_ModuleInfo_40_40, STATE_VARIABLE_ModuleInfo_32);
            }
            else
            {
              MR_Word OldMaybeInst_24 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_22, (MR_Integer) 0))));

              if ((OldMaybeInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
                SharedInst_25 = Inst0_5;
              else
                SharedInst_25 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_24, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_32, InstName_19, SharedInst_25);
            if (succeeded)
              *Inst_6 = Inst0_5;
            else
              *Inst_6 = SharedInst_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_16 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))));
            MR_Word SubInst0_17 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
            MR_Word SubInst1_18;

            check_hlds__inst_util__make_shared_inst_4_p_0(SubInst0_17, &SubInst1_18, STATE_VARIABLE_ModuleInfo_0_31, STATE_VARIABLE_ModuleInfo_32);
            succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_32, SubInst1_18, SubInst0_17);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_16));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst1_18));
              }
            else
              *Inst_6 = SubInst1_18;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_8 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_9 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
            MR_Word Uniq_10 = ((&check_hlds__inst_util_vector_common_1[15 + Uniq0_8]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_9));
            }
            *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_shared_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_shared_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Insts_11));
    }
  }
}

static void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
  }
  else
  {
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(0, Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(0, Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(0, Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_6 = Inst0_5;
        *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredInst_14 = ((MR_Word) ((MR_hl_field(1, Inst0_5, (MR_Integer) 1))));
        MR_Word Uniq0_45 = ((MR_Unsigned) ((MR_hl_field(1, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_46 = ((&check_hlds__inst_util_vector_common_1[10 + Uniq0_45]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_46));
          MR_hl_field(1, base, 1) = ((MR_Box) (PredInst_14));
        }
        *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BoundInsts0_12 = ((MR_Word) ((MR_hl_field(2, Inst0_5, (MR_Integer) 2))));
        MR_Word BoundInsts_13;
        MR_Word Uniq0_43 = ((MR_Unsigned) ((MR_hl_field(2, Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word Uniq_44 = ((&check_hlds__inst_util_vector_common_1[5 + Uniq0_43]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(BoundInsts0_12, &BoundInsts_13, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_44));
          MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 2) = ((MR_Box) (BoundInsts_13));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Inst0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstName_19 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))));
            MR_Word InstTable0_20;
            MR_Word MostlyUniqInstTable0_21;
            MR_Word MaybeOldMaybeInst_22;
            MR_Word MostlyUniqInstTable1_23;
            MR_Word MostlyUniqInst_25;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &InstTable0_20);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable0_20, &MostlyUniqInstTable0_21);
            hlds__hlds_inst_mode__search_insert_unknown_mostly_uniq_inst_4_p_0(InstName_19, &MaybeOldMaybeInst_22, MostlyUniqInstTable0_21, &MostlyUniqInstTable1_23);
            if ((MaybeOldMaybeInst_22 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_26;
              MR_Word SubInst1_27;
              MR_Word InstTable2_28;
              MR_Word MostlyUniqInstTable2_29;
              MR_Word MostlyUniqInstTable_30;
              MR_Word InstTable_31;
              MR_Word STATE_VARIABLE_ModuleInfo_39_39;
              MR_Word STATE_VARIABLE_ModuleInfo_40_40;
              MR_Word Var_41;
              MR_Word SubInst0_47;

              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable1_23, InstTable0_20, &InstTable1_26);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_26, STATE_VARIABLE_ModuleInfo_0_32, &STATE_VARIABLE_ModuleInfo_39_39);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_39_39, InstName_19, &SubInst0_47);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_39_39, SubInst0_47, &SubInst1_27);
              check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst1_27, &MostlyUniqInst_25, STATE_VARIABLE_ModuleInfo_39_39, &STATE_VARIABLE_ModuleInfo_40_40);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_40_40, &InstTable2_28);
              hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable2_28, &MostlyUniqInstTable2_29);
              {
                Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_41, 0) = ((MR_Box) (MostlyUniqInst_25));
              }
              hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(InstName_19, Var_41, MostlyUniqInstTable2_29, &MostlyUniqInstTable_30);
              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable_30, InstTable2_28, &InstTable_31);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_31, STATE_VARIABLE_ModuleInfo_40_40, STATE_VARIABLE_ModuleInfo_33);
            }
            else
            {
              MR_Word OldMaybeInst_24 = ((MR_Word) ((MR_hl_field(1, MaybeOldMaybeInst_22, (MR_Integer) 0))));

              if ((OldMaybeInst_24 == (MR_Word) ((MR_Unsigned) 0U)))
                MostlyUniqInst_25 = Inst0_5;
              else
                MostlyUniqInst_25 = ((MR_Word) ((MR_hl_field(1, OldMaybeInst_24, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_33, InstName_19, MostlyUniqInst_25);
            if (succeeded)
              *Inst_6 = Inst0_5;
            else
              *Inst_6 = MostlyUniqInst_25;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InstVars_16 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))));
            MR_Word SubInst0_17 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
            MR_Word SubInst_18;

            check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst0_17, &SubInst_18, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
            succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_33, SubInst_18, SubInst0_17);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (InstVars_16));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubInst_18));
              }
            else
              *Inst_6 = SubInst_18;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Uniq0_8 = ((MR_Unsigned) ((MR_hl_field(3, Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo_9 = ((MR_Word) ((MR_hl_field(3, Inst0_5, (MR_Integer) 2))));
            MR_Word Uniq_10 = ((&check_hlds__inst_util_vector_common_1[0 + Uniq0_8]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_10));
              MR_hl_field(3, base, 2) = ((MR_Box) (HOInstInfo_9));
            }
            *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
            return;
          }
          break;
      }
      break;
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
