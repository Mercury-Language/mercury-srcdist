/*
** Automatically generated from `mlds_to_java_name.m'
** by the Mercury compiler,
** version rotd-2021-12-16
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
#include "parse_tree.file_names.mih"
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
ml_backend__mlds_to_java_name__output_pred_label_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLabel_6);


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
ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word LocalVarName_6)
{
  {
    MR_String NameStr_8;
    MR_String MangledName_17;
    MR_String JavaSafeName_18;

    NameStr_8 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_6);
    MangledName_17 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_8);
    JavaSafeName_18 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_17);
    mercury__io__write_string_4_p_0(Stream_5, JavaSafeName_18);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word FieldVarName_6)
{
  {
    MR_String NameStr_8;
    MR_String MangledName_17;
    MR_String JavaSafeName_18;

    NameStr_8 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_6);
    MangledName_17 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_8);
    JavaSafeName_18 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_17);
    mercury__io__write_string_4_p_0(Stream_5, JavaSafeName_18);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_class_name_arity_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8)
{
  {
    MR_String String_19;
    MR_String MangledName_24;
    MR_String UppercaseMangledName_25;
    MR_String Var_26;
    MR_String Var_28;

    MangledName_24 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_7);
    UppercaseMangledName_25 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_24);
    Var_28 = mercury__string__from_int_1_f_0(ClassArity_8);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_28);
    String_19 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_25, Var_26);
    mercury__io__write_string_4_p_0(Stream_6, String_19);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_5_p_0(
  MR_Word Stream_6,
  MR_String Name_7,
  MR_Integer Arity_8)
{
  {
    MR_String String_10;
    MR_String MangledName_17;
    MR_String UppercaseMangledName_18;
    MR_String Var_19;
    MR_String Var_21;

    MangledName_17 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    UppercaseMangledName_18 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_17);
    Var_21 = mercury__string__from_int_1_f_0(Arity_8);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_21);
    String_10 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_18, Var_19);
    mercury__io__write_string_4_p_0(Stream_6, String_10);
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
ml_backend__mlds_to_java_name__output_maybe_qualified_function_name_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word QualFuncName_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_8, (MR_Integer) 0))));
    MR_Word FuncName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_8, (MR_Integer) 1))));
    MR_Word CurrentModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_10, CurrentModuleName_12);
    if (!(succeeded))
      ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(Stream_7, FuncName_11);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word FunctionName_6)
{
  if (((MR_tag((MR_Word) FunctionName_6)) == (MR_Integer) 1))
  {
    MR_String Name_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctionName_6, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_5, Name_16);
  }
  else
  {
    MR_Word PlainFuncName_8 = (MR_Word) ((MR_Word) (FunctionName_6));
    MR_Word FuncLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_8, (MR_Integer) 0))));
    MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_9, (MR_Integer) 0))));
    MR_Word MaybeAux_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_9, (MR_Integer) 1))));
    MR_Word PredLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_11, (MR_Integer) 0))));
    MR_Integer ProcId_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_11, (MR_Integer) 1))));
    MR_Integer ModeNum_15;
    MR_String Var_26;
    MR_String Var_30;

    ml_backend__mlds_to_java_name__output_pred_label_for_java_4_p_0(Stream_5, PredLabel_13);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_14, &ModeNum_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), ModeNum_15, &Var_30);
    mercury__io__write_string_4_p_0(Stream_5, Var_30);
    Var_26 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_12);
    mercury__io__write_string_4_p_0(Stream_5, Var_26);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word QualGlobalVarName_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_8, (MR_Integer) 0))));
    MR_Word GlobalVarName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_8, (MR_Integer) 1))));
    MR_Word CurrentModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_10, CurrentModuleName_12);
    if (!(succeeded))
      ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__output_global_var_name_for_java_4_p_0(Stream_7, GlobalVarName_11);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word QualKind_8)
{
  {
    MR_bool succeeded;
    MR_String QualifierString_10;
    MR_Word OuterName_19;
    MR_Word InnerName_20;
    MR_String MangledOuterName_21;
    MR_String MangledSuffix_22;

    OuterName_19 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_7);
    InnerName_20 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
    parse_tree__java_names__mangle_sym_name_for_java_4_p_0(OuterName_19, (MR_Integer) 0, (MR_String) "__", &MangledOuterName_21);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_19, InnerName_20);
    if (succeeded)
      MangledSuffix_22 = (MR_String) "";
    else
    {
      MR_Word Suffix_23;
      MR_String MangledSuffix0_24;
      MR_Word Var_27;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_20, OuterName_19, &Suffix_23);
      Var_27 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(Suffix_23, Var_27, (MR_String) ".", &MangledSuffix0_24);
      MangledSuffix_22 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_24);
    }
    QualifierString_10 = mercury__string__f_43_43_2_f_0(MangledOuterName_21, MangledSuffix_22);
    mercury__io__write_string_4_p_0(Stream_6, QualifierString_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__output_global_var_name_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word GlobalVarName_6)
{
  switch (MR_tag((MR_Word) GlobalVarName_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "dummy_var");
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_6, (MR_Integer) 0))));
        MR_String RttiAddrName_12;

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_11, &RttiAddrName_12);
        mercury__io__write_string_4_p_0(Stream_5, RttiAddrName_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_6, (MR_Integer) 0))));
        MR_Word Id_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_6, (MR_Integer) 1))));
        MR_String Prefix_15;
        MR_String Var_20;
        MR_Word Var_23;

        Var_20 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_14);
        Prefix_15 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) "_");
        mercury__io__write_string_4_p_0(Stream_5, Prefix_15);
        Var_23 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_13);
        ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_4_p_0(Stream_5, Var_23);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_6, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_6, (MR_Integer) 1))));
        MR_String NameStr_10;
        MR_String MangledName_32;
        MR_String JavaSafeName_33;

        NameStr_10 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_8, Num_9);
        MangledName_32 = parse_tree__prog_foreign__name_mangle_1_f_0(NameStr_10);
        JavaSafeName_33 = parse_tree__java_names__make_valid_java_symbol_name_1_f_0(MangledName_32);
        mercury__io__write_string_4_p_0(Stream_5, JavaSafeName_33);
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word PredLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ModeNum_9;
    MR_String Var_20;

    ml_backend__mlds_to_java_name__output_pred_label_for_java_4_p_0(Stream_5, PredLabel_6);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), ModeNum_9, &Var_20);
    mercury__io__write_string_4_p_0(Stream_5, Var_20);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_name__output_pred_label_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLabel_6)
{
  if (((MR_tag((MR_Word) PredLabel_6)) == (MR_Integer) 1))
  {
    MR_String PredName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 1))));
    MR_String TypeName_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 2))));
    MR_Integer TypeArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 3))));
    MR_String MangledPredName_22;
    MR_String MangledTypeName_23;
    MR_String Var_69;

    MangledPredName_22 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_18);
    MangledTypeName_23 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_20);
    mercury__io__write_string_4_p_0(Stream_5, MangledPredName_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    if (!((MaybeTypeModule_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeModule_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_19, (MR_Integer) 0))));
      MR_String Var_81;

      Var_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_24);
      mercury__io__write_string_4_p_0(Stream_5, Var_81);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    }
    mercury__io__write_string_4_p_0(Stream_5, MangledTypeName_23);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), TypeArity_21, &Var_69);
    mercury__io__write_string_4_p_0(Stream_5, Var_69);
  }
  else
  {
    MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_6, (MR_Integer) 1))));
    MR_String Name_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_6, (MR_Integer) 2))));
    MR_Integer PredArity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_6, (MR_Integer) 3))));
    MR_String Suffix_14;
    MR_Integer OrigArity_15;
    MR_String MangledName_16;
    MR_String Var_57;

    switch (PredOrFunc_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_14 = (MR_String) "f";
          OrigArity_15 = (MR_Integer) ((MR_Unsigned) PredArity_11 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_14 = (MR_String) "p";
          OrigArity_15 = PredArity_11;
        }
        break;
    }
    MangledName_16 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_10);
    mercury__io__write_string_4_p_0(Stream_5, MangledName_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_name_scalar_common_1[0]), OrigArity_15, &Var_57);
    mercury__io__write_string_4_p_0(Stream_5, Var_57);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__io__write_string_4_p_0(Stream_5, Suffix_14);
    if (!((MaybeDefiningModule_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DefiningModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_9, (MR_Integer) 0))));
      MR_String Var_88;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_in__");
      Var_88 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_17);
      mercury__io__write_string_4_p_0(Stream_5, Var_88);
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
