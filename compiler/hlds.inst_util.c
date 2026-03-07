/*
** Automatically generated from `inst_util.m'
** by the Mercury compiler,
** version rotd-2026-03-07
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


// :- module hlds.inst_util.
// :- implementation.

/*
INIT mercury__hlds__inst_util__init
ENDINIT
*/

#include "hlds.inst_util.mih"


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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.mq_info.mih"










#include "array.mh"


void MR_CALL 
hlds__inst_util__get_higher_order_arg_types_3_p_0(
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
hlds__inst_util__get_cons_id_arg_types_for_bound_functor_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word BoundFunctor_7,
  MR_Word * ArgTypes_8)
{
  MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_7, 0))));
  MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_7, 1))));

  hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(ModuleInfo_5, Type_6, ConsId_9, ArgInsts_10, ArgTypes_8);
}

void MR_CALL 
hlds__inst_util__get_cons_id_arg_types_for_inst_5_p_0(
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

      succeeded = hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(ModuleInfo_6, Type_7, DuCtor_12, &ArgTypes0_13);
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
    succeeded = ((((MR_tag((MR_Word) ConsId_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_8, 0)))) == (MR_Integer) 4)));
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

MR_Word MR_CALL 
hlds__inst_util__pred_inst_info_default_func_mode_1_f_0(
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

void mercury__hlds__inst_util__init(void)
{
}

void mercury__hlds__inst_util__init_type_tables(void)
{
}

void mercury__hlds__inst_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__inst_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.inst_util.
