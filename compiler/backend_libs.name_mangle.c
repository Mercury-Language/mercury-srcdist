/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2019-07-31
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


// :- module backend_libs.name_mangle.
// :- implementation.

/*
INIT mercury__backend_libs__name_mangle__init
ENDINIT
*/

#include "backend_libs.name_mangle.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word DefiningModule_8,
  MR_Word PredOrFunc_9,
  MR_Word DeclaringModule_10,
  MR_String Name0_11,
  MR_Integer Arity_12,
  MR_Word AddPrefix_13);


static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1];




static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_String MR_CALL 
backend_libs__name_mangle__mercury_common_type_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_type_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_vector_common_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_common_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_data_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_data_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_var_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_var_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_label_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury__";
  }
}

void MR_CALL 
backend_libs__name_mangle__output_init_name_3_p_0(
  MR_Word ModuleName_4)
{
  {
    MR_String InitName_6;

    InitName_6 = parse_tree__prog_foreign__make_init_name_1_f_0(ModuleName_4);
    mercury__io__write_string_3_p_0(InitName_6);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(
  MR_Word TCName_5,
  MR_String TypeNames_6)
{
  {
    MR_String Str_8;

    Str_8 = backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(TCName_5, TypeNames_6);
    mercury__io__write_string_3_p_0((MR_String) "mercury_data_");
    mercury__io__write_string_3_p_0(Str_8);
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(
  MR_Word TCName_4,
  MR_String TypeNames_5)
{
  {
    MR_String Str_6;
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCName_4, (MR_Integer) 0))));
    MR_String ClassName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), TCName_4, (MR_Integer) 1))));
    MR_Integer ClassArity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TCName_4, (MR_Integer) 2))));
    MR_Word ClassSym_10;
    MR_String MangledClassString_11;
    MR_String ArityString_12;
    MR_String MangledTypeNames_13;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    {
      ClassSym_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClassSym_10, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(1), ClassSym_10, 1) = ((MR_Box) (ClassName_8));
    }
    MangledClassString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ClassSym_10);
    mercury__string__int_to_string_2_p_0(ClassArity_9, &ArityString_12);
    MangledTypeNames_13 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeNames_5);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MangledTypeNames_13));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "__"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (ArityString_12));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "__arity"));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MangledClassString_11));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "base_typeclass_info_"));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
    }
    mercury__string__append_list_2_p_0(Var_14, &Str_6);
    return Str_6;
  }
}

MR_bool MR_CALL 
backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String PlainName_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_7;
      MR_String _Suffix_6;

      succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(ModuleName_3);
      if (succeeded)
      {
        succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(PlainName_4);
        if (succeeded)
        {
          Var_7 = (MR_String) "f_";
          succeeded = mercury__string__append_3_p_1(Var_7, &_Suffix_6, PlainName_4);
          succeeded = !(succeeded);
        }
      }
    }
    else
    {
      MR_String Name_2 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_10;
      MR_String _Suffix_9;

      succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_2);
      if (succeeded)
      {
        Var_10 = (MR_String) "f_";
        succeeded = mercury__string__append_3_p_1(Var_10, &_Suffix_9, Name_2);
        succeeded = !(succeeded);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(
  MR_String Name_2)
{
  {
    MR_bool succeeded;
    MR_String Var_4;
    MR_String _Suffix_3;

    succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_2);
    if (succeeded)
    {
      Var_4 = (MR_String) "f_";
      succeeded = mercury__string__append_3_p_1(Var_4, &_Suffix_3, Name_2);
      succeeded = !(succeeded);
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_maybe_prefix_4_p_0(
  MR_Word ProcLabel_5,
  MR_Word AddPrefix_6)
{
  {
    MR_String ProcLabelString_8;

    ProcLabelString_8 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_5, AddPrefix_6);
    mercury__io__write_string_3_p_0(ProcLabelString_8);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(
  MR_Word ProcLabel_4)
{
  {
    MR_String ProcLabelString_15;

    ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_4, (MR_Integer) 0);
    mercury__io__write_string_3_p_0(ProcLabelString_15);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_3_p_0(
  MR_Word ProcLabel_4)
{
  {
    MR_String ProcLabelString_15;

    ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ProcLabel_4, (MR_Integer) 1);
    mercury__io__write_string_3_p_0(ProcLabelString_15);
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__proc_label_to_c_string_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word AddPrefix_5)
{
  {
    MR_bool succeeded;
    MR_String ProcLabelString_6;

    if (((MR_tag((MR_Word) ProcLabel_4)) == (MR_Integer) 0))
    {
      MR_Word DefiningModule_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 0))));
      MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word PredModule_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 2))));
      MR_String PredName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 3))));
      MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 4))));
      MR_Integer ModeInt_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_4, (MR_Integer) 5))));
      MR_String LabelName_13;
      MR_Integer OrigArity_14;
      MR_String ArityString_15;
      MR_String ModeNumString_16;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_String DeclaringModuleName_67;
      MR_String DefiningModuleName_68;
      MR_String LabelName0_69;
      MR_String LabelName1_70;
      MR_String LabelName2_71;
      MR_String LabelName3_72;

      DeclaringModuleName_67 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredModule_9);
      DefiningModuleName_68 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_7);
      succeeded = (strcmp(PredName_10, (MR_String) "main") == 0);
      if (succeeded)
        succeeded = (Arity_11 == (MR_Integer) 2);
      if (!(succeeded))
      {
        succeeded = mercury__string__prefix_2_p_0(PredName_10, (MR_String) "__");
      }
      if (succeeded)
        LabelName0_69 = PredName_10;
      else
        LabelName0_69 = parse_tree__prog_foreign__qualify_name_2_f_0(DeclaringModuleName_67, PredName_10);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefiningModule_7, PredModule_9);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_String Var_73;

        Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "__", LabelName0_69);
        LabelName1_70 = mercury__string__f_43_43_2_f_0(DefiningModuleName_68, Var_73);
      }
      else
        LabelName1_70 = LabelName0_69;
      LabelName2_71 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName1_70);
      switch (PredOrFunc_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            LabelName3_72 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", LabelName2_71);
            OrigArity_14 = (MR_Integer) ((MR_Unsigned) Arity_11 - (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            LabelName3_72 = LabelName2_71;
            OrigArity_14 = Arity_11;
          }
          break;
      }
      switch (AddPrefix_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LabelName_13 = LabelName3_72;
          break;
        case (MR_Integer) 1:
          {
            LabelName_13 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", LabelName3_72);
          }
          break;
      }
      mercury__string__int_to_string_2_p_0(OrigArity_14, &ArityString_15);
      mercury__string__int_to_string_2_p_0(ModeInt_12, &ModeNumString_16);
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ModeNumString_16));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (ArityString_15));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (LabelName_13));
        MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
      }
      mercury__string__append_list_2_p_0(Var_48, &ProcLabelString_6);
    }
    else
    {
      MR_Word Module_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 0))));
      MR_Word SpecialPredId_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word TypeModule_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 2))));
      MR_String TypeName_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 3))));
      MR_Integer TypeArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 4))));
      MR_Word TypeCtor_23;
      MR_String TypeArityString_24;
      MR_String MangledModule_25;
      MR_String MangledTypeModule_26;
      MR_String MangledTypeName_27;
      MR_String QualifiedMangledTypeName_28;
      MR_String FullyQualifiedMangledTypeName_29;
      MR_Word Var_30;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_String PredName_56;
      MR_Integer ModeInt_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ProcLabel_4, (MR_Integer) 5))));
      MR_String LabelName_58;
      MR_String ModeNumString_59;
      MR_String UnderscoresModule_84;
      MR_String Var_85;

      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TypeModule_19));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (TypeName_20));
      }
      {
        TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_23, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), TypeCtor_23, 1) = ((MR_Box) (TypeArity_21));
      }
      PredName_56 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_18, TypeCtor_23);
      LabelName_58 = backend_libs__name_mangle__make_pred_or_func_name_6_f_0((MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), (MR_Integer) 0, (MR_Word) (&backend_libs__name_mangle_scalar_common_1[0]), PredName_56, (MR_Integer) -1, AddPrefix_5);
      mercury__string__int_to_string_2_p_0(TypeArity_21, &TypeArityString_24);
      mercury__string__int_to_string_2_p_0(ModeInt_57, &ModeNumString_59);
      MangledModule_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_17);
      MangledTypeModule_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_19);
      MangledTypeName_27 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_20);
      QualifiedMangledTypeName_28 = parse_tree__prog_foreign__qualify_name_2_f_0(MangledTypeModule_26, MangledTypeName_27);
      mercury__string__append_3_p_2(MangledModule_25, (MR_String) "__", &UnderscoresModule_84);
      succeeded = mercury__string__append_3_p_1(UnderscoresModule_84, &Var_85, QualifiedMangledTypeName_28);
      if (succeeded)
        FullyQualifiedMangledTypeName_29 = QualifiedMangledTypeName_28;
      else
        mercury__string__append_3_p_2(UnderscoresModule_84, QualifiedMangledTypeName_28, &FullyQualifiedMangledTypeName_29);
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ModeNumString_59));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (TypeArityString_24));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (FullyQualifiedMangledTypeName_29));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (LabelName_58));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
      }
      mercury__string__append_list_2_p_0(Var_36, &ProcLabelString_6);
    }
    return ProcLabelString_6;
  }
}

static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word DefiningModule_8,
  MR_Word PredOrFunc_9,
  MR_Word DeclaringModule_10,
  MR_String Name0_11,
  MR_Integer Arity_12,
  MR_Word AddPrefix_13)
{
  {
    MR_bool succeeded;
    MR_String LabelName_14;
    MR_String DeclaringModuleName_15;
    MR_String DefiningModuleName_16;
    MR_String LabelName0_17;
    MR_String LabelName1_18;
    MR_String LabelName2_19;
    MR_String LabelName3_20;

    DeclaringModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DeclaringModule_10);
    DefiningModuleName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_8);
    succeeded = (strcmp(Name0_11, (MR_String) "main") == 0);
    if (succeeded)
      succeeded = (Arity_12 == (MR_Integer) 2);
    if (!(succeeded))
    {
      succeeded = mercury__string__prefix_2_p_0(Name0_11, (MR_String) "__");
    }
    if (succeeded)
      LabelName0_17 = Name0_11;
    else
      LabelName0_17 = parse_tree__prog_foreign__qualify_name_2_f_0(DeclaringModuleName_15, Name0_11);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(DefiningModule_8, DeclaringModule_10);
    succeeded = !(succeeded);
    if (succeeded)
    {
      MR_String Var_21;

      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "__", LabelName0_17);
      LabelName1_18 = mercury__string__f_43_43_2_f_0(DefiningModuleName_16, Var_21);
    }
    else
      LabelName1_18 = LabelName0_17;
    LabelName2_19 = parse_tree__prog_foreign__name_mangle_1_f_0(LabelName1_18);
    switch (PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          LabelName3_20 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", LabelName2_19);
        }
        break;
      case (MR_Integer) 0:
        LabelName3_20 = LabelName2_19;
        break;
    }
    switch (AddPrefix_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        LabelName_14 = LabelName3_20;
        break;
      case (MR_Integer) 1:
        {
          LabelName_14 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", LabelName3_20);
        }
        break;
    }
    return LabelName_14;
  }
}

void mercury__backend_libs__name_mangle__init(void)
{
}

void mercury__backend_libs__name_mangle__init_type_tables(void)
{
}

void mercury__backend_libs__name_mangle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__name_mangle__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.name_mangle.
