/*
** Automatically generated from `mlds_to_cs_name.m'
** by the Mercury compiler,
** version rotd-2023-01-31
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
#include "term_context.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



void MR_CALL 
ml_backend__mlds_to_cs_name__local_var_name_to_string_for_csharp_2_p_0(
  MR_Word LocalVarName_3,
  MR_String * String_4)
{
  MR_String RawString_5;
  MR_String MangledString_6;

  RawString_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
  MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_5);
  *String_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_6);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word VarName_6)
{
  MR_String VarNameStr_8;
  MR_String RawString_11;
  MR_String MangledString_12;

  RawString_11 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_6);
  MangledString_12 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_11);
  VarNameStr_8 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_12);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, VarNameStr_8);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word VarName_6)
{
  MR_String VarNameStr_8;
  MR_String RawString_11;
  MR_String MangledString_12;

  RawString_11 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(VarName_6);
  MangledString_12 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_11);
  VarNameStr_8 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_12);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, VarNameStr_8);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_class_name_arity_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_String ClassName_7,
  MR_Integer ClassArity_8)
{
  MR_String Str_10;
  MR_String MangledName_13;
  MR_String UppercaseMangledName_14;
  MR_String Var_15;
  MR_String Var_17;

  MangledName_13 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_7);
  UppercaseMangledName_14 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_13);
  Var_17 = mercury__string__from_int_1_f_0(ClassArity_8);
  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_17);
  Str_10 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_14, Var_15);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, Str_10);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_5_p_0(
  MR_Word Stream_6,
  MR_String Name_7,
  MR_Integer Arity_8)
{
  MR_String String_10;
  MR_String MangledName_13;
  MR_String UppercaseMangledName_14;
  MR_String Var_15;
  MR_String Var_17;

  MangledName_13 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
  UppercaseMangledName_14 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_13);
  Var_17 = mercury__string__from_int_1_f_0(Arity_8);
  Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_17);
  String_10 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_14, Var_15);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, String_10);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__qual_class_name_to_string_for_csharp_3_p_0(
  MR_Word QualName_4,
  MR_Integer Arity_5,
  MR_String * String_6)
{
  MR_bool succeeded;
  MR_Word MLDS_ModuleName_7 = ((MR_Word) ((MR_hl_field(0, QualName_4, (MR_Integer) 0))));
  MR_Word QualKind_8 = ((MR_Unsigned) ((MR_hl_field(0, QualName_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_String ClassName_9 = ((MR_String) ((MR_hl_field(0, QualName_4, (MR_Integer) 2))));
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
    MR_Word OuterName_18;
    MR_Word InnerName_19;
    MR_String MangledOuterName_20;
    MR_String MangledSuffix_21;
    MR_String MangledName_28;
    MR_String UppercaseMangledName_29;
    MR_String Var_30;
    MR_String Var_32;

    OuterName_18 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(MLDS_ModuleName_7);
    InnerName_19 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(MLDS_ModuleName_7);
    MangledOuterName_20 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_18);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_18, InnerName_19);
    if (succeeded)
      MangledSuffix_21 = (MR_String) "";
    else
    {
      MR_Word Suffix_22;
      MR_String MangledSuffix0_23;
      MR_Word Var_24;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_19, OuterName_18, &Suffix_22);
      Var_24 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_22, Var_24, (MR_String) ".", &MangledSuffix0_23);
      MangledSuffix_21 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_23);
    }
    QualString_11 = mercury__string__f_43_43_2_f_0(MangledOuterName_20, MangledSuffix_21);
    MangledName_28 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
    UppercaseMangledName_29 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_28);
    Var_32 = mercury__string__from_int_1_f_0(Arity_5);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_32);
    UnqualString_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_29, Var_30);
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualString_12);
    *String_6 = mercury__string__f_43_43_2_f_0(QualString_11, Var_14);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__mlds_output_proc_label_5_p_0(
  MR_Word Stream_6,
  MR_String Suffix_7,
  MR_Word HeadVar__3_3)
{
  MR_Word PredLabel_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String PredLabelStr_11;
  MR_Integer ModeNum_12;
  MR_String String_13;
  MR_String Var_24;
  MR_String Var_31;
  MR_String Var_33;

  ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_8, &PredLabelStr_11);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ModeNum_12);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_12, &Var_24);
  Var_31 = mercury__string__f_43_43_2_f_0(Var_24, Suffix_7);
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_31);
  String_13 = mercury__string__f_43_43_2_f_0(PredLabelStr_11, Var_33);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_6, String_13);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_function_name_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word QualFuncName_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, QualFuncName_8, (MR_Integer) 0))));
  MR_Word FuncName_11 = ((MR_Word) ((MR_hl_field(0, QualFuncName_8, (MR_Integer) 1))));
  MR_Word CurrentModuleName_12 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));

  succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_10, CurrentModuleName_12);
  if (!(succeeded))
    ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
  ml_backend__mlds_to_cs_name__output_function_name_for_csharp_4_p_0(Stream_7, FuncName_11);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_function_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word FunctionName_6)
{
  MR_String FunctionNameStr_8;

  if (((MR_tag((MR_Word) FunctionName_6)) == (MR_Integer) 1))
    FunctionNameStr_8 = ((MR_String) ((MR_hl_field(1, FunctionName_6, (MR_Integer) 0))));
  else
  {
    MR_Word PlainFuncName_11 = (MR_Word) ((MR_Word) (FunctionName_6));
    MR_Word FuncLabel_12 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_11, (MR_Integer) 0))));
    MR_Word ProcLabel_14 = ((MR_Word) ((MR_hl_field(0, FuncLabel_12, (MR_Integer) 0))));
    MR_Word MaybeAux_15 = ((MR_Word) ((MR_hl_field(0, FuncLabel_12, (MR_Integer) 1))));
    MR_Word PredLabel_16 = ((MR_Word) ((MR_hl_field(0, ProcLabel_14, (MR_Integer) 0))));
    MR_Integer ProcId_17 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_14, (MR_Integer) 1))));
    MR_String PredLabelStr_18;
    MR_Integer ModeNum_19;
    MR_String MaybeAuxSuffix_20;
    MR_String Var_30;
    MR_String Var_37;
    MR_String Var_39;

    ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_16, &PredLabelStr_18);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_17, &ModeNum_19);
    MaybeAuxSuffix_20 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_15);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_19, &Var_30);
    Var_37 = mercury__string__f_43_43_2_f_0(Var_30, MaybeAuxSuffix_20);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_37);
    FunctionNameStr_8 = mercury__string__f_43_43_2_f_0(PredLabelStr_18, Var_39);
  }
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, FunctionNameStr_8);
}

static void MR_CALL 
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4)
{
  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_Integer) 1))
  {
    MR_String PredName_17 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_18 = ((MR_Word) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_19 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_20 = ((MR_Integer) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_21;
    MR_String MangledTypeName_22;

    MangledPredName_21 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_17);
    MangledTypeName_22 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_19);
    if ((MaybeTypeModule_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_104;
      MR_String Var_112;
      MR_String Var_113;
      MR_String Var_115;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_20, &Var_104);
      Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_104);
      Var_113 = mercury__string__f_43_43_2_f_0(MangledTypeName_22, Var_112);
      Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_113);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledPredName_21, Var_115);
    }
    else
    {
      MR_Word TypeModule_23 = ((MR_Word) ((MR_hl_field(1, MaybeTypeModule_18, (MR_Integer) 0))));
      MR_String TypeModuleStr_24;
      MR_String Var_89;
      MR_String Var_97;
      MR_String Var_98;
      MR_String Var_100;
      MR_String Var_101;
      MR_String Var_103;

      TypeModuleStr_24 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_23);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_20, &Var_89);
      Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_89);
      Var_98 = mercury__string__f_43_43_2_f_0(MangledTypeName_22, Var_97);
      Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_98);
      Var_101 = mercury__string__f_43_43_2_f_0(MangledPredName_21, Var_100);
      Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_101);
      *String_4 = mercury__string__f_43_43_2_f_0(TypeModuleStr_24, Var_103);
    }
  }
  else
  {
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_6 = ((MR_Word) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 2))));
    MR_Word PredFormArity_8 = ((MR_Word) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 3))));
    MR_Integer PredFormArityInt_11 = (MR_Integer) (PredFormArity_8);
    MR_String Suffix_12;
    MR_Integer UserArityInt_13;
    MR_String MangledName_14;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_12 = (MR_String) "f";
          UserArityInt_13 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_11 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_12 = (MR_String) "p";
          UserArityInt_13 = PredFormArityInt_11;
        }
        break;
    }
    MangledName_14 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_86;
      MR_String Var_88;

      Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_12);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), UserArityInt_13, &Var_79);
      Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
      Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_86);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_14, Var_88);
    }
    else
    {
      MR_Word DefiningModule_15 = ((MR_Word) ((MR_hl_field(1, MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String DefiningModuleStr_16;
      MR_String Var_63;
      MR_String Var_64;
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_74;
      MR_String Var_76;

      DefiningModuleStr_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_15);
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", DefiningModuleStr_16);
      Var_64 = mercury__string__f_43_43_2_f_0(Suffix_12, Var_63);
      Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_64);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), UserArityInt_13, &Var_67);
      Var_74 = mercury__string__f_43_43_2_f_0(Var_67, Var_66);
      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_74);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_14, Var_76);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_Word DataName_6)
{
  MR_String DataNameStr_8;

  ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(DataName_6, &DataNameStr_8);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_5, DataNameStr_8);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word QualGlobalVarName_8)
{
  MR_bool succeeded;
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_8, (MR_Integer) 0))));
  MR_Word GlobalVarName_11 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_8, (MR_Integer) 1))));
  MR_Word CurrentModuleName_12 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));
  MR_String DataNameStr_27;

  succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_10, CurrentModuleName_12);
  if (!(succeeded))
    ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(Stream_7, ModuleName_10, (MR_Integer) 0);
  ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(GlobalVarName_11, &DataNameStr_27);
  ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(Stream_7, DataNameStr_27);
}

void MR_CALL 
ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_4_p_0(
  MR_Word Stream_5,
  MR_String String_6)
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

void MR_CALL 
ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word QualKind_8)
{
  MR_bool succeeded;
  MR_String QualifierString_10;
  MR_Word OuterName_15;
  MR_Word InnerName_16;
  MR_String MangledOuterName_17;
  MR_String MangledSuffix_18;

  OuterName_15 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_7);
  InnerName_16 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
  MangledOuterName_17 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_15);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_15, InnerName_16);
  if (succeeded)
    MangledSuffix_18 = (MR_String) "";
  else
  {
    MR_Word Suffix_19;
    MR_String MangledSuffix0_20;
    MR_Word Var_21;

    ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_16, OuterName_15, &Suffix_19);
    Var_21 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_8);
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_19, Var_21, (MR_String) ".", &MangledSuffix0_20);
    MangledSuffix_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_20);
  }
  QualifierString_10 = mercury__string__f_43_43_2_f_0(MangledOuterName_17, MangledSuffix_18);
  mercury__io__write_string_4_p_0(Stream_6, QualifierString_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".");
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word SymName_3)
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
        MR_Word RttiId_7 = ((MR_Word) ((MR_hl_field(1, GlobalVarName_3, (MR_Integer) 0))));

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
        MR_Word ConstVar_5 = ((MR_Unsigned) ((MR_hl_field(3, GlobalVarName_3, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_6 = ((MR_Integer) ((MR_hl_field(3, GlobalVarName_3, (MR_Integer) 1))));

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
