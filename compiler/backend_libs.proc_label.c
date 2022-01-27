/*
** Automatically generated from `proc_label.m'
** by the Mercury compiler,
** version 22.01-beta-2022-01-25
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


// :- module backend_libs.proc_label.
// :- implementation.

/*
INIT mercury__backend_libs__proc_label__init
ENDINIT
*/

#include "backend_libs.proc_label.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
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
#include "string.mih"
#include "term.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"










#include "array.mh"



MR_Word MR_CALL 
backend_libs__proc_label__make_uni_label_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Integer UniModeNum_7)
{
  {
    MR_bool succeeded;
    MR_Word ProcLabel_8;
    MR_Word ModuleName_9;
    MR_Word TypeModule_10;
    MR_String TypeName_11;
    MR_Integer Arity_12;
    MR_Word Var_15;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_9);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
    Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      TypeModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))));
      TypeName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));
      {
        MR_Word Module_13;
        MR_Integer UniModeNumInt_14;
        MR_Integer Var_19;

        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_19);
        succeeded = (UniModeNum_7 == Var_19);
        if (succeeded)
          Module_13 = TypeModule_10;
        else
          Module_13 = ModuleName_9;
        hlds__hlds_pred__proc_id_to_int_2_p_0(UniModeNum_7, &UniModeNumInt_14);
        {
          ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 0) = ((MR_Box) (Module_13));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 2) = ((MR_Box) (TypeModule_10));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 3) = ((MR_Box) (TypeName_11));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 4) = ((MR_Box) (Arity_12));
          MR_hl_field(MR_mktag(1), ProcLabel_8, 5) = ((MR_Box) (UniModeNumInt_14));
        }
      }
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.proc_label.make_uni_label\'/3", (MR_String) "unqualified type_ctor");
    return ProcLabel_8;
  }
}

MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7)
{
  {
    MR_bool succeeded;
    MR_Word ProcLabel_8;
    MR_Word ThisModule_9;
    MR_Word PredInfo_10;
    MR_Word PredOrFunc_12;
    MR_Word PredModule_13;
    MR_String PredName_14;
    MR_Integer PredArity_15;
    MR_Word PredIsImported_16;
    MR_Word Origin_17;
    MR_Word _ProcInfo_11;
    MR_Word SpecialPred_27;
    MR_Word TypeCtor_28;

    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ThisModule_9);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_5, PredId_6, ProcId_7, &PredInfo_10, &_ProcInfo_11);
    PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
    PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_10);
    PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_10);
    PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_10);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_10);
    if (succeeded)
      PredIsImported_16 = (MR_Integer) 1;
    else
      PredIsImported_16 = (MR_Integer) 0;
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_10, &Origin_17);
    succeeded = ((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialPred_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_17, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_17, (MR_Integer) 1))));
      {
        MR_Integer TypeArity_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_28, (MR_Integer) 1))));
        MR_String TypeName_31;
        MR_Word TypeModule_32;
        MR_Word TypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_28, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TypeCtorSymName_29)) == (MR_Integer) 1))
        {
          TypeModule_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_29, (MR_Integer) 0))));
          TypeName_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_29, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        {
          TypeName_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_29, (MR_Integer) 0))));
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_28);
          if (succeeded)
          {
            TypeModule_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word DefiningModule_33;
          MR_Integer ProcIdInt_34;
          MR_Integer Var_40;

          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_9, TypeModule_32);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = (SpecialPred_27 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_40);
              succeeded = (ProcId_7 != Var_40);
            }
          }
          if (succeeded)
            DefiningModule_33 = ThisModule_9;
          else
            DefiningModule_33 = TypeModule_32;
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_34);
          {
            ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 0) = ((MR_Box) (DefiningModule_33));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 1) = (MR_Box) ((MR_Unsigned) (SpecialPred_27));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 2) = ((MR_Box) (TypeModule_32));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 3) = ((MR_Box) (TypeName_31));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 4) = ((MR_Box) (TypeArity_30));
            MR_hl_field(MR_mktag(1), ProcLabel_8, 5) = ((MR_Box) (ProcIdInt_34));
          }
        }
        else
        {
          MR_String Var_36;
          MR_String Var_38;

          Var_38 = mercury__string__f_43_43_2_f_0(PredName_14, (MR_String) "\'");
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", Var_38);
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", Var_36);
        }
      }
    }
    else
    {
      MR_Word DefiningModule_51;
      MR_Integer ProcIdInt_52;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_9, PredModule_13);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = (PredIsImported_16 == (MR_Integer) 0);
      if (succeeded)
        DefiningModule_51 = ThisModule_9;
      else
        DefiningModule_51 = PredModule_13;
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdInt_52);
      {
        ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLabel_8, 0) = ((MR_Box) (DefiningModule_51));
        MR_hl_field(MR_mktag(0), ProcLabel_8, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
        MR_hl_field(MR_mktag(0), ProcLabel_8, 2) = ((MR_Box) (PredModule_13));
        MR_hl_field(MR_mktag(0), ProcLabel_8, 3) = ((MR_Box) (PredName_14));
        MR_hl_field(MR_mktag(0), ProcLabel_8, 4) = ((MR_Box) (PredArity_15));
        MR_hl_field(MR_mktag(0), ProcLabel_8, 5) = ((MR_Box) (ProcIdInt_52));
      }
    }
    return ProcLabel_8;
  }
}

MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(
  MR_Word RttiProcLabel_3)
{
  {
    MR_bool succeeded;
    MR_Word ProcLabel_4;
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ThisModule_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 1))));
    MR_Word PredModule_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 2))));
    MR_String PredName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 3))));
    MR_Integer PredArity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 4))));
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 7))));
    MR_Word PredIsImported_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word Origin_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_3, (MR_Integer) 11))));
    MR_Word SpecialPred_30;
    MR_Word TypeCtor_31;

    succeeded = ((MR_tag((MR_Word) Origin_18)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialPred_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_18, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_18, (MR_Integer) 1))));
      {
        MR_Integer TypeArity_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_31, (MR_Integer) 1))));
        MR_String TypeName_34;
        MR_Word TypeModule_35;
        MR_Word TypeCtorSymName_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_31, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TypeCtorSymName_32)) == (MR_Integer) 1))
        {
          TypeModule_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_32, (MR_Integer) 0))));
          TypeName_34 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_32, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        {
          TypeName_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_32, (MR_Integer) 0))));
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_31);
          if (succeeded)
          {
            TypeModule_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word DefiningModule_36;
          MR_Integer ProcIdInt_37;
          MR_Integer Var_43;

          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_6, TypeModule_35);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = (SpecialPred_30 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_43);
              succeeded = (ProcId_12 != Var_43);
            }
          }
          if (succeeded)
            DefiningModule_36 = ThisModule_6;
          else
            DefiningModule_36 = TypeModule_35;
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_37);
          {
            ProcLabel_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 0) = ((MR_Box) (DefiningModule_36));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 1) = (MR_Box) ((MR_Unsigned) (SpecialPred_30));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 2) = ((MR_Box) (TypeModule_35));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 3) = ((MR_Box) (TypeName_34));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 4) = ((MR_Box) (TypeArity_33));
            MR_hl_field(MR_mktag(1), ProcLabel_4, 5) = ((MR_Box) (ProcIdInt_37));
          }
        }
        else
        {
          MR_String Var_39;
          MR_String Var_41;

          Var_41 = mercury__string__f_43_43_2_f_0(PredName_8, (MR_String) "\'");
          Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", Var_41);
          mercury__require__unexpected_2_p_0((MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", Var_39);
        }
      }
    }
    else
    {
      MR_Word DefiningModule_54;
      MR_Integer ProcIdInt_55;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_6, PredModule_7);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = (PredIsImported_16 == (MR_Integer) 0);
      if (succeeded)
        DefiningModule_54 = ThisModule_6;
      else
        DefiningModule_54 = PredModule_7;
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ProcIdInt_55);
      {
        ProcLabel_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcLabel_4, 0) = ((MR_Box) (DefiningModule_54));
        MR_hl_field(MR_mktag(0), ProcLabel_4, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_5));
        MR_hl_field(MR_mktag(0), ProcLabel_4, 2) = ((MR_Box) (PredModule_7));
        MR_hl_field(MR_mktag(0), ProcLabel_4, 3) = ((MR_Box) (PredName_8));
        MR_hl_field(MR_mktag(0), ProcLabel_4, 4) = ((MR_Box) (PredArity_9));
        MR_hl_field(MR_mktag(0), ProcLabel_4, 5) = ((MR_Box) (ProcIdInt_55));
      }
    }
    return ProcLabel_4;
  }
}

void mercury__backend_libs__proc_label__init(void)
{
}

void mercury__backend_libs__proc_label__init_type_tables(void)
{
}

void mercury__backend_libs__proc_label__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__proc_label__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.proc_label.
