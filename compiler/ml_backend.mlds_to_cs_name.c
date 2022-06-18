/*
** Automatically generated from `mlds_to_cs_name.m'
** by the Mercury compiler,
** version 22.01.2-beta-2022-06-18
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


// :- module ml_backend.mlds_to_cs_name.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_name__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_name.mih"


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
#include "getopt.mih"
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
#include "require.mih"
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
#include "backend_libs.c_util.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_util.mih"
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
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[1][1] = {
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



void MR_CALL 
ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word LocalVarName_3,
  MR_String * String_4)
{
  {
    MR_String RawString_5;
    MR_String MangledString_6;

    RawString_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
    MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_5);
    *String_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word VarName_6)
{
  {
    MR_String VarNameStr_8;
    MR_String RawString_14;
    MR_String MangledString_15;

    RawString_14 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_6);
    MangledString_15 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_14);
    VarNameStr_8 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_15);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, VarNameStr_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word VarName_6)
{
  {
    MR_String VarNameStr_8;
    MR_String RawString_14;
    MR_String MangledString_15;

    RawString_14 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(VarName_6);
    MangledString_15 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_14);
    VarNameStr_8 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_15);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, VarNameStr_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_class_name_arity_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8)
{
  {
    MR_String Str_10;
    MR_String MangledName_20;
    MR_String UppercaseMangledName_21;
    MR_String Var_22;
    MR_String Var_24;

    MangledName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_7);
    UppercaseMangledName_21 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_20);
    Var_24 = mercury__string__from_int_1_f_0(ClassArity_8);
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_24);
    Str_10 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_21, Var_22);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, Str_10);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_5_p_0(
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
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, String_10);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word QualName_4,
  MR_Integer Arity_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_Word MLDS_ModuleName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 0))));
    MR_Word QualKind_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String ClassName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualName_4, (MR_Integer) 2))));
    MR_Word SymName_10;
    MR_Word Var_16;

    SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
    Var_16 = parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_10, Var_16);
    if (succeeded)
      *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ClassName_9);
    else
    {
      MR_String QualString_11;
      MR_String UnqualString_12;
      MR_String Var_14;
      MR_Word OuterName_21;
      MR_Word InnerName_22;
      MR_String MangledOuterName_23;
      MR_String MangledSuffix_24;
      MR_String MangledName_34;
      MR_String UppercaseMangledName_35;
      MR_String Var_36;
      MR_String Var_38;

      OuterName_21 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(MLDS_ModuleName_7);
      InnerName_22 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
      MangledOuterName_23 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_21);
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_21, InnerName_22);
      if (succeeded)
        MangledSuffix_24 = (MR_String) "";
      else
      {
        MR_Word Suffix_25;
        MR_String MangledSuffix0_26;
        MR_Word Var_27;

        ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_22, OuterName_21, &Suffix_25);
        Var_27 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
        parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_25, Var_27, (MR_String) ".", &MangledSuffix0_26);
        MangledSuffix_24 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_26);
      }
      QualString_11 = mercury__string__f_43_43_2_f_0(MangledOuterName_23, MangledSuffix_24);
      MangledName_34 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
      UppercaseMangledName_35 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_34);
      Var_38 = mercury__string__from_int_1_f_0(Arity_5);
      Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
      UnqualString_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_35, Var_36);
      Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualString_12);
      *String_6 = mercury__string__f_43_43_2_f_0(QualString_11, Var_14);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__mlds_output_proc_label_5_p_0(
  MR_Word Stream_6,
  MR_String Suffix_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word PredLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String PredLabelStr_11;
    MR_Integer ModeNum_12;
    MR_String String_13;
    MR_String Var_25;
    MR_String Var_32;
    MR_String Var_34;

    ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_8, &PredLabelStr_11);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ModeNum_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_12, &Var_25);
    Var_32 = mercury__string__f_43_43_2_f_0(Var_25, Suffix_7);
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_32);
    String_13 = mercury__string__f_43_43_2_f_0(PredLabelStr_11, Var_34);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, String_13);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_function_name_for_csharp_5_p_0(
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
      ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
    ml_backend__mlds_to_cs_name__output_function_name_for_csharp_4_p_0(Stream_7, FuncName_11);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_function_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word FunctionName_6)
{
  {
    MR_String FunctionNameStr_8;

    if (((MR_tag((MR_Word) FunctionName_6)) == (MR_Integer) 1))
      FunctionNameStr_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctionName_6, (MR_Integer) 0))));
    else
    {
      MR_Word PlainFuncName_14 = (MR_Word) ((MR_Word) (FunctionName_6));
      MR_Word FuncLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_14, (MR_Integer) 0))));
      MR_Word ProcLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_15, (MR_Integer) 0))));
      MR_Word MaybeAux_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_15, (MR_Integer) 1))));
      MR_Word PredLabel_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_17, (MR_Integer) 0))));
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_17, (MR_Integer) 1))));
      MR_String PredLabelStr_21;
      MR_Integer ModeNum_22;
      MR_String MaybeAuxSuffix_23;
      MR_String Var_33;
      MR_String Var_40;
      MR_String Var_42;

      ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_19, &PredLabelStr_21);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_20, &ModeNum_22);
      MaybeAuxSuffix_23 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_18);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_22, &Var_33);
      Var_40 = mercury__string__f_43_43_2_f_0(Var_33, MaybeAuxSuffix_23);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_40);
      FunctionNameStr_8 = mercury__string__f_43_43_2_f_0(PredLabelStr_21, Var_42);
    }
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, FunctionNameStr_8);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4)
{
  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_Integer) 1))
  {
    MR_String PredName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_20;
    MR_String MangledTypeName_21;

    MangledPredName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_16);
    MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    if ((MaybeTypeModule_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_103;
      MR_String Var_111;
      MR_String Var_112;
      MR_String Var_114;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_19, &Var_103);
      Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_103);
      Var_112 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_111);
      Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_112);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_114);
    }
    else
    {
      MR_Word TypeModule_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_17, (MR_Integer) 0))));
      MR_String TypeModuleStr_23;
      MR_String Var_88;
      MR_String Var_96;
      MR_String Var_97;
      MR_String Var_99;
      MR_String Var_100;
      MR_String Var_102;

      TypeModuleStr_23 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_22);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_19, &Var_88);
      Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_88);
      Var_97 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_96);
      Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_97);
      Var_100 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_99);
      Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_100);
      *String_4 = mercury__string__f_43_43_2_f_0(TypeModuleStr_23, Var_102);
    }
  }
  else
  {
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 2))));
    MR_Integer PredArity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 3))));
    MR_String Suffix_11;
    MR_Integer OrigArity_12;
    MR_String MangledName_13;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_11 = (MR_String) "f";
          OrigArity_12 = (MR_Integer) ((MR_Unsigned) PredArity_8 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_11 = (MR_String) "p";
          OrigArity_12 = PredArity_8;
        }
        break;
    }
    MangledName_13 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_77;
      MR_String Var_78;
      MR_String Var_85;
      MR_String Var_87;

      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_11);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), OrigArity_12, &Var_78);
      Var_85 = mercury__string__f_43_43_2_f_0(Var_78, Var_77);
      Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_85);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_87);
    }
    else
    {
      MR_Word DefiningModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String DefiningModuleStr_15;
      MR_String Var_62;
      MR_String Var_63;
      MR_String Var_65;
      MR_String Var_66;
      MR_String Var_73;
      MR_String Var_75;

      DefiningModuleStr_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_14);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", DefiningModuleStr_15);
      Var_63 = mercury__string__f_43_43_2_f_0(Suffix_11, Var_62);
      Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_63);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), OrigArity_12, &Var_66);
      Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
      Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_73);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_75);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word DataName_6)
{
  {
    MR_String DataNameStr_8;

    ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(DataName_6, &DataNameStr_8);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, DataNameStr_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word QualGlobalVarName_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_8, (MR_Integer) 0))));
    MR_Word GlobalVarName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_8, (MR_Integer) 1))));
    MR_Word CurrentModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));
    MR_String DataNameStr_33;

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_10, CurrentModuleName_12);
    if (!(succeeded))
      ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
    ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(GlobalVarName_11, &DataNameStr_33);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_7, DataNameStr_33);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_String String_6)
{
  {
    MR_bool succeeded;
    MR_Integer Length_8;

    Length_8 = mercury__string__length_1_f_0(String_6);
    succeeded = (Length_8 > (MR_Integer) 511);
    if (succeeded)
    {
      MR_String Left_9;
      MR_String Middle_10;
      MR_String Right_11;

      Left_9 = mercury__string__left_2_f_0(String_6, (MR_Integer) 251);
      Middle_10 = backend_libs__c_util__hex_hash32_1_f_0(String_6);
      Right_11 = mercury__string__right_2_f_0(String_6, (MR_Integer) 250);
      mercury__io__write_string_4_p_0(Stream_5, Left_9);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
      mercury__io__write_string_4_p_0(Stream_5, Middle_10);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
      mercury__io__write_string_4_p_0(Stream_5, Right_11);
    }
    else
      mercury__io__write_string_4_p_0(Stream_5, String_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(
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
    MangledOuterName_21 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_19);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_19, InnerName_20);
    if (succeeded)
      MangledSuffix_22 = (MR_String) "";
    else
    {
      MR_Word Suffix_23;
      MR_String MangledSuffix0_24;
      MR_Word Var_25;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_20, OuterName_19, &Suffix_23);
      Var_25 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_23, Var_25, (MR_String) ".", &MangledSuffix0_24);
      MangledSuffix_22 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_24);
    }
    QualifierString_10 = mercury__string__f_43_43_2_f_0(MangledOuterName_21, MangledSuffix_22);
    mercury__io__write_string_4_p_0(Stream_6, QualifierString_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".");
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_bool succeeded;
    MR_String MangledSymName_4;
    MR_Word StrippedSymName_5;
    MR_String Var_11;

    succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(SymName_3, &Var_11, &StrippedSymName_5);
    if (succeeded)
      succeeded = (strcmp((MR_String) "mercury", Var_11) == 0);
    if (succeeded)
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(StrippedSymName_5, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    else
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_3, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    return MangledSymName_4;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(
  MR_Word GlobalVarName_3,
  MR_String * String_4)
{
  switch (MR_tag((MR_Word) GlobalVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *String_4 = (MR_String) "dummy_var";
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_3, (MR_Integer) 0))));

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, String_4);
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_name.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_3, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_3, (MR_Integer) 1))));

        *String_4 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_5, Num_6);
      }
      break;
  }
}

void mercury__ml_backend__mlds_to_cs_name__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_name__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_name.
