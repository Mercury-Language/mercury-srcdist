/*
** Automatically generated from `mlds_to_java_name.m'
** by the Mercury compiler,
** version rotd-2020-05-11
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


// :- module ml_backend.mlds_to_java_name.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_name__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_name.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.java_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ml_backend__mlds_to_java_name__enforce_java_names_2_p_0(
  MR_String Name_3,
  MR_String * JavaName_4);

static void MR_CALL 
ml_backend__mlds_to_java_name__output_pred_label_for_java_3_p_0(
  MR_Word PredLabel_4);


static /* final */ const MR_Box ml_backend__mlds_to_java_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_java_name_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static void MR_CALL 
ml_backend__mlds_to_java_name__enforce_java_names_2_p_0(
  MR_String Name_3,
  MR_String * JavaName_4)
{
  {
    MR_bool succeeded;
    MR_String RevName_5;
    MR_Word String1_15;
    MR_Integer Pos_6;

    mercury__string__to_char_list_2_p_0(Name_3, &String1_15);
    mercury__string__from_rev_char_list_2_p_0(String1_15, &RevName_5);
    succeeded = mercury__string__sub_string_search_3_p_0(RevName_5, (MR_String) ".", &Pos_6);
    if (succeeded)
    {
      MR_String Head0_7;
      MR_String Tail0_8;
      MR_String Tail_9;
      MR_String Head1_10;
      MR_String Head_11;
      MR_Word String1_18;
      MR_Word String1_21;

      mercury__string__split_4_p_0(RevName_5, Pos_6, &Head0_7, &Tail0_8);
      mercury__string__to_char_list_2_p_0(Tail0_8, &String1_18);
      mercury__string__from_rev_char_list_2_p_0(String1_18, &Tail_9);
      mercury__string__to_char_list_2_p_0(Head0_7, &String1_21);
      mercury__string__from_rev_char_list_2_p_0(String1_21, &Head1_10);
      mercury__string__capitalize_first_2_p_0(Head1_10, &Head_11);
      mercury__string__append_3_p_2(Tail_9, Head_11, JavaName_4);
    }
    else
      *JavaName_4 = Name_3;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(
  MR_Word LocalVarName_4)
{
  {
    MR_String NameStr_6;
    MR_String MangledName_14;
    MR_String JavaSafeName_15;

    NameStr_6 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_4);
    MangledName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_6);
    JavaSafeName_15 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_14);
    mercury__io__write_string_3_p_0(JavaSafeName_15);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(
  MR_Word FieldVarName_4)
{
  {
    MR_String NameStr_6;
    MR_String MangledName_14;
    MR_String JavaSafeName_15;

    NameStr_6 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_4);
    MangledName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_6);
    JavaSafeName_15 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_14);
    mercury__io__write_string_3_p_0(JavaSafeName_15);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_class_name_arity_for_java_4_p_0(
  MR_String ClassName_5,
  MR_Integer ClassArity_6)
{
  {
    MR_String String_16;
    MR_String MangledName_21;
    MR_String UppercaseMangledName_22;
    MR_String Var_23;
    MR_String Var_25;

    MangledName_21 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_5);
    UppercaseMangledName_22 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_21);
    Var_25 = mercury__string__from_int_1_f_0(ClassArity_6);
    Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_25);
    String_16 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_22, Var_23);
    mercury__io__write_string_3_p_0(String_16);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_4_p_0(
  MR_String Name_5,
  MR_Integer Arity_6)
{
  {
    MR_String String_8;
    MR_String MangledName_15;
    MR_String UppercaseMangledName_16;
    MR_String Var_17;
    MR_String Var_19;

    MangledName_15 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_5);
    UppercaseMangledName_16 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_15);
    Var_19 = mercury__string__from_int_1_f_0(Arity_6);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_19);
    String_8 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_16, Var_17);
    mercury__io__write_string_3_p_0(String_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__qual_class_name_to_string_for_java_3_p_0(
  MR_Word QualClassName_4,
  MR_Integer Arity_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_Word MLDS_ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 0))));
    MR_Word QualKind_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String ClassName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName_4, (MR_Integer) 2))));
    MR_Word SymName_10;
    MR_Word Var_16;

    SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
    Var_16 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_10, Var_16);
    if (succeeded)
      *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "jmercury.runtime.", ClassName_9);
    else
    {
      MR_String QualString_11;
      MR_String UnqualString_12;
      MR_String Var_14;
      MR_Word OuterName_21;
      MR_Word InnerName_22;
      MR_String MangledOuterName_23;
      MR_String MangledSuffix_24;
      MR_String MangledName_36;
      MR_String UppercaseMangledName_37;
      MR_String Var_38;
      MR_String Var_40;

      OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(MLDS_ModuleName_7);
      InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_21, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_23);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_21, InnerName_22);
      if (succeeded)
        MangledSuffix_24 = (MR_String) "";
      else
      {
        MR_Word Suffix_25;
        MR_String MangledSuffix0_26;
        MR_Word Var_29;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_22, OuterName_21, &Suffix_25);
        Var_29 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_25, Var_29, (MR_String) ".", &MangledSuffix0_26);
        MangledSuffix_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_26);
      }
      QualString_11 = mercury__string__f_43_43_2_f_0(MangledOuterName_23, MangledSuffix_24);
      MangledName_36 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
      UppercaseMangledName_37 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_36);
      Var_40 = mercury__string__from_int_1_f_0(Arity_5);
      Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_40);
      UnqualString_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_37, Var_38);
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualString_12);
      *String_6 = mercury__string__f_43_43_2_f_0(QualString_11, Var_14);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_maybe_qualified_function_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualFuncName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 0))));
    MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 1))));
    MR_Word CurrentModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
      ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_8, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(FuncName_9);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(
  MR_Word FunctionName_4)
{
  if (((MR_tag((MR_Word) FunctionName_4)) == (MR_Integer) 1))
  {
    MR_String Name_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctionName_4, (MR_Integer) 0))));

    mercury__io__write_string_3_p_0(Name_14);
  }
  else
  {
    MR_Word PlainFuncName_6 = (MR_Word) ((MR_Word) (FunctionName_4));
    MR_Word FuncLabel_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_6, (MR_Integer) 0))));
    MR_Word ProcLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_7, (MR_Integer) 0))));
    MR_Word MaybeAux_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_7, (MR_Integer) 1))));
    MR_Word PredLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 0))));
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_9, (MR_Integer) 1))));
    MR_Integer ModeNum_13;
    MR_String Var_24;
    MR_String Var_28;

    ml_backend__mlds_to_java_name__output_pred_label_for_java_3_p_0(PredLabel_11);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ModeNum_13);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), ModeNum_13, &Var_28);
    mercury__io__write_string_3_p_0(Var_28);
    Var_24 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_10);
    mercury__io__write_string_3_p_0(Var_24);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 0))));
    MR_Word GlobalVarName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 1))));
    MR_Word CurrentModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
      ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_8, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_9);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(
  MR_Word ModuleName_5,
  MR_Word QualKind_6)
{
  {
    MR_bool succeeded;
    MR_String QualifierString_8;
    MR_Word OuterName_17;
    MR_Word InnerName_18;
    MR_String MangledOuterName_19;
    MR_String MangledSuffix_20;

    OuterName_17 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_5);
    InnerName_18 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_17, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_19);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_17, InnerName_18);
    if (succeeded)
      MangledSuffix_20 = (MR_String) "";
    else
    {
      MR_Word Suffix_21;
      MR_String MangledSuffix0_22;
      MR_Word Var_25;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_18, OuterName_17, &Suffix_21);
      Var_25 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_6);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_21, Var_25, (MR_String) ".", &MangledSuffix0_22);
      MangledSuffix_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_22);
    }
    QualifierString_8 = mercury__string__f_43_43_2_f_0(MangledOuterName_19, MangledSuffix_20);
    mercury__io__write_string_3_p_0(QualifierString_8);
    mercury__io__write_string_3_p_0((MR_String) ".");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(
  MR_Word GlobalVarName_4)
{
  switch (MR_tag((MR_Word) GlobalVarName_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0((MR_String) "dummy_var");
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_4, (MR_Integer) 0))));
        MR_String RttiAddrName_10;

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_9, &RttiAddrName_10);
        mercury__io__write_string_3_p_0(RttiAddrName_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_4, (MR_Integer) 0))));
        MR_Word Id_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_4, (MR_Integer) 1))));
        MR_String Prefix_13;
        MR_String Var_18;
        MR_Word Var_21;

        Var_18 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_12);
        Prefix_13 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "_");
        mercury__io__write_string_3_p_0(Prefix_13);
        Var_21 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_11);
        ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_3_p_0(Var_21);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_4, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_4, (MR_Integer) 1))));
        MR_String NameStr_8;
        MR_String MangledName_29;
        MR_String JavaSafeName_30;

        NameStr_8 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_6, Num_7);
        MangledName_29 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_8);
        JavaSafeName_30 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_29);
        mercury__io__write_string_3_p_0(JavaSafeName_30);
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word PredLabel_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ModeNum_7;
    MR_String Var_18;

    ml_backend__mlds_to_java_name__output_pred_label_for_java_3_p_0(PredLabel_4);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_5, &ModeNum_7);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), ModeNum_7, &Var_18);
    mercury__io__write_string_3_p_0(Var_18);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_name__output_pred_label_for_java_3_p_0(
  MR_Word PredLabel_4)
{
  if (((MR_tag((MR_Word) PredLabel_4)) == (MR_Integer) 1))
  {
    MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 1))));
    MR_String TypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 2))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_4, (MR_Integer) 3))));
    MR_String MangledPredName_20;
    MR_String MangledTypeName_21;
    MR_String Var_67;

    MangledPredName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_16);
    MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    mercury__io__write_string_3_p_0(MangledPredName_20);
    mercury__io__write_string_3_p_0((MR_String) "__");
    if (!((MaybeTypeModule_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeModule_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_17, (MR_Integer) 0))));
      MR_String Var_78;

      Var_78 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_22);
      mercury__io__write_string_3_p_0(Var_78);
      mercury__io__write_string_3_p_0((MR_String) "__");
    }
    mercury__io__write_string_3_p_0(MangledTypeName_21);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), TypeArity_19, &Var_67);
    mercury__io__write_string_3_p_0(Var_67);
  }
  else
  {
    MR_Word PredOrFunc_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 1))));
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 2))));
    MR_Integer PredArity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_4, (MR_Integer) 3))));
    MR_String Suffix_12;
    MR_Integer OrigArity_13;
    MR_String MangledName_14;
    MR_String Var_55;

    switch (PredOrFunc_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_12 = (MR_String) "f";
          OrigArity_13 = (MR_Integer) ((MR_Unsigned) PredArity_9 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_12 = (MR_String) "p";
          OrigArity_13 = PredArity_9;
        }
        break;
    }
    MangledName_14 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_8);
    mercury__io__write_string_3_p_0(MangledName_14);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), OrigArity_13, &Var_55);
    mercury__io__write_string_3_p_0(Var_55);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__io__write_string_3_p_0(Suffix_12);
    if (!((MaybeDefiningModule_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DefiningModule_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_7, (MR_Integer) 0))));
      MR_String Var_84;

      mercury__io__write_string_3_p_0((MR_String) "_in__");
      Var_84 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_15);
      mercury__io__write_string_3_p_0(Var_84);
    }
  }
}

void mercury__ml_backend__mlds_to_java_name__init(void)
{
}

void mercury__ml_backend__mlds_to_java_name__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_name.
