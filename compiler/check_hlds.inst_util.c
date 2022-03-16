/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2022-03-16
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
#include "bimap.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




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
    MR_hl_field(MR_mktag(0), Type_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(MR_mktag(0), Type_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word ArgTypes_10;
  MR_Word Var_7;
  MR_Word Var_8;

  succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(Type_4, &Var_7, &Var_8, &ArgTypes_10);
  if (succeeded)
    *Types_6 = ArgTypes_10;
  else
  {
    MR_Word Var_11;
    MR_Word VarSet0_14;
    MR_Word Var_15;
    MR_Word _VarSet_16;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_14);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_15, VarSet0_14, &_VarSet_16);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_5, ((MR_Box) (Var_11)), Types_6);
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

  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
      MR_Word VarSet0_21;
      MR_Word Var_22;
      MR_Word _VarSet_23;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &VarSet0_21);
      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &Var_22, VarSet0_21, &_VarSet_23);
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (OutMode_6));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ArgModes_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Var_8, Var_11);
  {
    PredInstInfo_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredInstInfo_4, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), PredInstInfo_4, 1) = ((MR_Box) (ArgModes_7));
    MR_hl_field(MR_mktag(0), PredInstInfo_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), PredInstInfo_4, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_shared_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(MR_mktag(0), Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_shared_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
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
            *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "cannot make shared version of \140free(T)\'");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
        MR_Word Uniq_11 = ((&check_hlds__inst_util_vector_common_1[15 + Uniq0_9]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_11));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_10));
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
            MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));
            MR_Word BoundInsts_14;
            MR_Word Uniq0_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_51 = ((&check_hlds__inst_util_vector_common_1[20 + Uniq0_50]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            check_hlds__inst_util__make_shared_bound_inst_list_4_p_0(BoundInsts0_13, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_51));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_12));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
            MR_Word Uniq0_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_53 = ((&check_hlds__inst_util_vector_common_1[25 + Uniq0_52]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_53));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_15));
            }
            *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "free inst var");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
            MR_Word SubInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
            MR_Word SubInst1_19;

            check_hlds__inst_util__make_shared_inst_4_p_0(SubInst0_18, &SubInst1_19, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_35, SubInst1_19, SubInst0_18);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst1_19));
              }
            else
              *Inst_6 = SubInst1_19;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
            MR_Word InstTable0_23;
            MR_Word SharedInstTable0_24;
            MR_Word MaybeMaybeInst_25;
            MR_Word SharedInstTable1_26;
            MR_Word SharedInst_28;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &InstTable0_23);
            hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable0_23, &SharedInstTable0_24);
            hlds__hlds_inst_mode__search_insert_shared_inst_4_p_0(InstName_22, &MaybeMaybeInst_25, SharedInstTable0_24, &SharedInstTable1_26);
            if ((MaybeMaybeInst_25 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_29;
              MR_Word InstTable2_30;
              MR_Word SharedInstTable2_31;
              MR_Word SharedInstTable_32;
              MR_Word InstTable_33;
              MR_Word STATE_VARIABLE_ModuleInfo_36_36;
              MR_Word STATE_VARIABLE_ModuleInfo_37_37;
              MR_Word Var_38;
              MR_Word SubInst0_54;
              MR_Word SubInst1_55;

              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable1_26, InstTable0_23, &InstTable1_29);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_29, STATE_VARIABLE_ModuleInfo_0_34, &STATE_VARIABLE_ModuleInfo_36_36);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_36_36, InstName_22, &SubInst0_54);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_36_36, SubInst0_54, &SubInst1_55);
              check_hlds__inst_util__make_shared_inst_4_p_0(SubInst1_55, &SharedInst_28, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_37_37);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, &InstTable2_30);
              hlds__hlds_inst_mode__inst_table_get_shared_insts_2_p_0(InstTable2_30, &SharedInstTable2_31);
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (SharedInst_28));
              }
              hlds__hlds_inst_mode__det_update_shared_inst_4_p_0(InstName_22, Var_38, SharedInstTable2_31, &SharedInstTable_32);
              hlds__hlds_inst_mode__inst_table_set_shared_insts_3_p_0(SharedInstTable_32, InstTable2_30, &InstTable_33);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_33, STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_35);
            }
            else
            {
              MR_Word MaybeInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_25, (MR_Integer) 0))));

              if ((MaybeInst_27 == (MR_Word) ((MR_Unsigned) 0U)))
                SharedInst_28 = Inst0_5;
              else
                SharedInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_27, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_35, InstName_22, SharedInst_28);
            if (succeeded)
              *Inst_6 = Inst0_5;
            else
              *Inst_6 = SharedInst_28;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_shared_inst\'/4", (MR_String) "abstract_inst");
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
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_shared_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_shared_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
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
    MR_Word Inst0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Insts0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Inst_10;
    MR_Word Insts_11;
    MR_Word STATE_VARIABLE_ModuleInfo_15_15;

    check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(Inst0_8, &Inst_10, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_15_15);
    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(Insts0_9, &Insts_11, STATE_VARIABLE_ModuleInfo_15_15, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_11));
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
    MR_Word Bound0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Bounds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Bound_10;
    MR_Word Bounds_11;
    MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 0))));
    MR_Word ArgInsts0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Bound0_8, (MR_Integer) 1))));
    MR_Word ArgInsts_15;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;

    check_hlds__inst_util__make_mostly_uniq_inst_list_4_p_0(ArgInsts0_14, &ArgInsts_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_18_18);
    {
      Bound_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Bound_10, 0) = ((MR_Box) (ConsId_13));
      MR_hl_field(MR_mktag(0), Bound_10, 1) = ((MR_Box) (ArgInsts_15));
    }
    check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(Bounds0_9, &Bounds_11, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Bound_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Bounds_11));
    }
  }
}

void MR_CALL 
check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(
  MR_Word Inst0_5,
  MR_Word * Inst_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Inst0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_6 = Inst0_5;
        *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
      }
      break;
    case (MR_Integer) 1:
      {
        *Inst_6 = Inst0_5;
        *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq0_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_5, (MR_Integer) 1))));
        MR_Word Uniq_11 = ((&check_hlds__inst_util_vector_common_1[0 + Uniq0_9]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_11));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_10));
        }
        *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word BoundInsts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 3))));
            MR_Word BoundInsts_14;
            MR_Word Uniq0_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_49 = ((&check_hlds__inst_util_vector_common_1[5 + Uniq0_48]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            check_hlds__inst_util__make_mostly_uniq_bound_inst_list_4_p_0(BoundInsts0_13, &BoundInsts_14, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
            MR_Word Uniq0_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Uniq_51 = ((&check_hlds__inst_util_vector_common_1[10 + Uniq0_50]))->check_hlds__inst_util__vector_common_type_1_0__vct_1_f_0;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_51));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (PredInst_15));
            }
            *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "free inst var");
            return;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word InstVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
            MR_Word SubInst0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 2))));
            MR_Word SubInst_19;

            check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst0_18, &SubInst_19, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
            succeeded = check_hlds__inst_match__inst_matches_final_3_p_0(*STATE_VARIABLE_ModuleInfo_36, SubInst_19, SubInst0_18);
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVars_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_19));
              }
            else
              *Inst_6 = SubInst_19;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_5, (MR_Integer) 1))));
            MR_Word InstTable0_23;
            MR_Word MostlyUniqInstTable0_24;
            MR_Word MaybeMaybeInst_25;
            MR_Word MostlyUniqInstTable1_26;
            MR_Word MostlyUniqInst_28;

            hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &InstTable0_23);
            hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable0_23, &MostlyUniqInstTable0_24);
            hlds__hlds_inst_mode__search_insert_mostly_uniq_inst_4_p_0(InstName_22, &MaybeMaybeInst_25, MostlyUniqInstTable0_24, &MostlyUniqInstTable1_26);
            if ((MaybeMaybeInst_25 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InstTable1_29;
              MR_Word SubInst1_30;
              MR_Word InstTable2_31;
              MR_Word MostlyUniqInstTable2_32;
              MR_Word MostlyUniqInstTable_33;
              MR_Word InstTable_34;
              MR_Word STATE_VARIABLE_ModuleInfo_37_37;
              MR_Word STATE_VARIABLE_ModuleInfo_38_38;
              MR_Word Var_39;
              MR_Word SubInst0_52;

              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable1_26, InstTable0_23, &InstTable1_29);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable1_29, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_37_37);
              check_hlds__inst_lookup__inst_lookup_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, InstName_22, &SubInst0_52);
              check_hlds__inst_lookup__inst_expand_3_p_0(STATE_VARIABLE_ModuleInfo_37_37, SubInst0_52, &SubInst1_30);
              check_hlds__inst_util__make_mostly_uniq_inst_4_p_0(SubInst1_30, &MostlyUniqInst_28, STATE_VARIABLE_ModuleInfo_37_37, &STATE_VARIABLE_ModuleInfo_38_38);
              hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_38_38, &InstTable2_31);
              hlds__hlds_inst_mode__inst_table_get_mostly_uniq_insts_2_p_0(InstTable2_31, &MostlyUniqInstTable2_32);
              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MostlyUniqInst_28));
              }
              hlds__hlds_inst_mode__det_update_mostly_uniq_inst_4_p_0(InstName_22, Var_39, MostlyUniqInstTable2_32, &MostlyUniqInstTable_33);
              hlds__hlds_inst_mode__inst_table_set_mostly_uniq_insts_3_p_0(MostlyUniqInstTable_33, InstTable2_31, &InstTable_34);
              hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_34, STATE_VARIABLE_ModuleInfo_38_38, STATE_VARIABLE_ModuleInfo_36);
            }
            else
            {
              MR_Word MaybeInst_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaybeInst_25, (MR_Integer) 0))));

              if ((MaybeInst_27 == (MR_Word) ((MR_Unsigned) 0U)))
                MostlyUniqInst_28 = Inst0_5;
              else
                MostlyUniqInst_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_27, (MR_Integer) 0))));
              *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
            }
            succeeded = check_hlds__inst_test__inst_contains_inst_name_3_p_0(*STATE_VARIABLE_ModuleInfo_36, InstName_22, MostlyUniqInst_28);
            if (succeeded)
              *Inst_6 = Inst0_5;
            else
              *Inst_6 = MostlyUniqInst_28;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_util.make_mostly_uniq_inst\'/4", (MR_String) "abstract_inst");
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
