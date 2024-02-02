/*
** Automatically generated from `mlds_to_cs_name.m'
** by the Mercury compiler,
** version rotd-2024-02-02
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static MR_String MR_CALL 
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_1_f_0(
  MR_Word PredLabel_3);


static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


MR_String MR_CALL 
ml_backend__mlds_to_cs_name__proc_label_to_ll_string_for_csharp_2_f_0(
  MR_String Suffix_4,
  MR_Word ProcLabel_5)
{
  MR_String ProcLabelStr_6;
  MR_String ProcLabelStr0_7;

  ProcLabelStr0_7 = ml_backend__mlds_to_cs_name__proc_label_to_nll_string_for_csharp_2_f_0(Suffix_4, ProcLabel_5);
  ProcLabelStr_6 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(ProcLabelStr0_7);
  return ProcLabelStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__proc_label_to_nll_string_for_csharp_2_f_0(
  MR_String Suffix_4,
  MR_Word ProcLabel_5)
{
  MR_String ProcLabelStr_6;
  MR_Word PredLabel_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 0))));
  MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, (MR_Integer) 1))));
  MR_String PredLabelStr_9;
  MR_Integer ModeNum_10;
  MR_String Var_19;
  MR_String Var_26;
  MR_String Var_28;

  PredLabelStr_9 = ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_1_f_0(PredLabel_7);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_8, &ModeNum_10);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_10, &Var_19);
  Var_26 = mercury__string__f_43_43_2_f_0(Var_19, Suffix_4);
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_26);
  ProcLabelStr_6 = mercury__string__f_43_43_2_f_0(PredLabelStr_9, Var_28);
  return ProcLabelStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__maybe_qualified_function_name_to_ll_string_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word QualFuncName_5)
{
  MR_bool succeeded;
  MR_String MaybeQualFuncNameStr_6;
  MR_Word FuncModule_7 = ((MR_Word) ((MR_hl_field(0, QualFuncName_5, (MR_Integer) 0))));
  MR_Word FuncName_8 = ((MR_Word) ((MR_hl_field(0, QualFuncName_5, (MR_Integer) 1))));
  MR_String FuncNameStr_9;
  MR_Word CurrentModule_10;
  MR_String FunctionNameStr0_31;

  FunctionNameStr0_31 = ml_backend__mlds_to_cs_name__function_name_to_nll_string_for_csharp_1_f_0(FuncName_8);
  FuncNameStr_9 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(FunctionNameStr0_31);
  CurrentModule_10 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 2))));
  succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(FuncModule_7, CurrentModule_10);
  if (succeeded)
    MaybeQualFuncNameStr_6 = FuncNameStr_9;
  else
  {
    MR_String QualStr_11;
    MR_String Var_29;

    QualStr_11 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(FuncModule_7, (MR_Integer) 0);
    Var_29 = mercury__string__f_43_43_2_f_0((MR_String) ".", FuncNameStr_9);
    MaybeQualFuncNameStr_6 = mercury__string__f_43_43_2_f_0(QualStr_11, Var_29);
  }
  return MaybeQualFuncNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__function_name_to_ll_string_for_csharp_1_f_0(
  MR_Word FunctionName_3)
{
  MR_String FunctionNameStr_4;
  MR_String FunctionNameStr0_5;

  FunctionNameStr0_5 = ml_backend__mlds_to_cs_name__function_name_to_nll_string_for_csharp_1_f_0(FunctionName_3);
  FunctionNameStr_4 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(FunctionNameStr0_5);
  return FunctionNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__function_name_to_nll_string_for_csharp_1_f_0(
  MR_Word FunctionName_3)
{
  MR_String FunctionNameStr_4;

  if (((MR_tag((MR_Word) FunctionName_3)) == (MR_Integer) 1))
    FunctionNameStr_4 = ((MR_String) ((MR_hl_field(1, FunctionName_3, (MR_Integer) 0))));
  else
  {
    MR_Word PlainFuncName_5 = (MR_Word) ((MR_Word) (FunctionName_3));
    MR_Word FuncLabel_6 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_5, (MR_Integer) 0))));
    MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(0, FuncLabel_6, (MR_Integer) 0))));
    MR_Word MaybeAux_9 = ((MR_Word) ((MR_hl_field(0, FuncLabel_6, (MR_Integer) 1))));
    MR_Word PredLabel_10 = ((MR_Word) ((MR_hl_field(0, ProcLabel_8, (MR_Integer) 0))));
    MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_8, (MR_Integer) 1))));
    MR_String PredLabelStr_12;
    MR_Integer ModeNum_13;
    MR_String MaybeAuxSuffix_14;
    MR_String Var_23;
    MR_String Var_30;
    MR_String Var_32;

    PredLabelStr_12 = ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_1_f_0(PredLabel_10);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_11, &ModeNum_13);
    MaybeAuxSuffix_14 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_9);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), ModeNum_13, &Var_23);
    Var_30 = mercury__string__f_43_43_2_f_0(Var_23, MaybeAuxSuffix_14);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    FunctionNameStr_4 = mercury__string__f_43_43_2_f_0(PredLabelStr_12, Var_32);
  }
  return FunctionNameStr_4;
}

static MR_String MR_CALL 
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_1_f_0(
  MR_Word PredLabel_3)
{
  MR_String PredLabelStr_4;

  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_Integer) 1))
  {
    MR_String PredName_15 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_16 = ((MR_Word) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_17 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_18 = ((MR_Integer) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_19;
    MR_String MangledTypeName_20;

    MangledPredName_19 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(PredName_15);
    MangledTypeName_20 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_17);
    if ((MaybeTypeModule_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_102;
      MR_String Var_110;
      MR_String Var_111;
      MR_String Var_113;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_18, &Var_102);
      Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_102);
      Var_111 = mercury__string__f_43_43_2_f_0(MangledTypeName_20, Var_110);
      Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_111);
      PredLabelStr_4 = mercury__string__f_43_43_2_f_0(MangledPredName_19, Var_113);
    }
    else
    {
      MR_Word TypeModule_21 = ((MR_Word) ((MR_hl_field(1, MaybeTypeModule_16, (MR_Integer) 0))));
      MR_String TypeModuleStr_22;
      MR_String Var_87;
      MR_String Var_95;
      MR_String Var_96;
      MR_String Var_98;
      MR_String Var_99;
      MR_String Var_101;

      TypeModuleStr_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_21);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), TypeArity_18, &Var_87);
      Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_87);
      Var_96 = mercury__string__f_43_43_2_f_0(MangledTypeName_20, Var_95);
      Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_96);
      Var_99 = mercury__string__f_43_43_2_f_0(MangledPredName_19, Var_98);
      Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_99);
      PredLabelStr_4 = mercury__string__f_43_43_2_f_0(TypeModuleStr_22, Var_101);
    }
  }
  else
  {
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_6 = ((MR_Word) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 2))));
    MR_Word PredFormArity_8 = ((MR_Word) ((MR_hl_field(0, PredLabel_3, (MR_Integer) 3))));
    MR_Integer PredFormArityInt_9 = (MR_Integer) (PredFormArity_8);
    MR_String Suffix_10;
    MR_Integer UserArityInt_11;
    MR_String MangledName_12;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_10 = (MR_String) "f";
          UserArityInt_11 = (MR_Integer) ((MR_Unsigned) PredFormArityInt_9 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_10 = (MR_String) "p";
          UserArityInt_11 = PredFormArityInt_9;
        }
        break;
    }
    MangledName_12 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_76;
      MR_String Var_77;
      MR_String Var_84;
      MR_String Var_86;

      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_10);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), UserArityInt_11, &Var_77);
      Var_84 = mercury__string__f_43_43_2_f_0(Var_77, Var_76);
      Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_84);
      PredLabelStr_4 = mercury__string__f_43_43_2_f_0(MangledName_12, Var_86);
    }
    else
    {
      MR_Word DefiningModule_13 = ((MR_Word) ((MR_hl_field(1, MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String DefiningModuleStr_14;
      MR_String Var_61;
      MR_String Var_62;
      MR_String Var_64;
      MR_String Var_65;
      MR_String Var_72;
      MR_String Var_74;

      DefiningModuleStr_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_13);
      Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", DefiningModuleStr_14);
      Var_62 = mercury__string__f_43_43_2_f_0(Suffix_10, Var_61);
      Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_62);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), UserArityInt_11, &Var_65);
      Var_72 = mercury__string__f_43_43_2_f_0(Var_65, Var_64);
      Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_72);
      PredLabelStr_4 = mercury__string__f_43_43_2_f_0(MangledName_12, Var_74);
    }
  }
  return PredLabelStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__qual_nrt_name_to_nll_string_for_csharp_3_f_0(
  MR_Word ModuleName_5,
  MR_String Name_6,
  MR_Integer Arity_7)
{
  MR_String QualNameStr_8;
  MR_String QualStr_9;
  MR_String UnqualNameStr_10;
  MR_String Var_19;
  MR_String MangledName_20;
  MR_String UppercaseMangledName_21;
  MR_String Var_28;
  MR_String Var_36;

  QualStr_9 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(ModuleName_5, (MR_Integer) 0);
  MangledName_20 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_6);
  UppercaseMangledName_21 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_20);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), Arity_7, &Var_28);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_28);
  UnqualNameStr_10 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_21, Var_36);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualNameStr_10);
  QualNameStr_8 = mercury__string__f_43_43_2_f_0(QualStr_9, Var_19);
  return QualNameStr_8;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__qual_class_name_to_ll_string_for_csharp_2_f_0(
  MR_Word QualName_4,
  MR_Integer Arity_5)
{
  MR_String QualClassNameStr_6;
  MR_String QualClassNameStr0_7;

  QualClassNameStr0_7 = ml_backend__mlds_to_cs_name__qual_class_name_to_nll_string_for_csharp_2_f_0(QualName_4, Arity_5);
  QualClassNameStr_6 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(QualClassNameStr0_7);
  return QualClassNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__qual_class_name_to_nll_string_for_csharp_2_f_0(
  MR_Word QualName_4,
  MR_Integer Arity_5)
{
  MR_bool succeeded;
  MR_String QualClassNameStr_6;
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, QualName_4, (MR_Integer) 0))));
  MR_Word QualKind_8 = ((MR_Unsigned) ((MR_hl_field(0, QualName_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_String ClassName_9 = ((MR_String) ((MR_hl_field(0, QualName_4, (MR_Integer) 2))));
  MR_Word SymName_10;
  MR_Word Var_23;

  SymName_10 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
  Var_23 = parse_tree__java_names__csharp_mercury_runtime_package_name_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(SymName_10, Var_23);
  if (succeeded)
    QualClassNameStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ClassName_9);
  else
  {
    MR_String QualStr_11;
    MR_String UnqualClassNameStr_12;
    MR_String Var_26;
    MR_String MangledName_28;
    MR_String UppercaseMangledName_29;
    MR_String Var_36;
    MR_String Var_44;

    QualStr_11 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(ModuleName_7, QualKind_8);
    MangledName_28 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_9);
    UppercaseMangledName_29 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_28);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), Arity_5, &Var_36);
    Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_36);
    UnqualClassNameStr_12 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_29, Var_44);
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ".", UnqualClassNameStr_12);
    QualClassNameStr_6 = mercury__string__f_43_43_2_f_0(QualStr_11, Var_26);
  }
  return QualClassNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(
  MR_String Name_4,
  MR_Integer Arity_5)
{
  MR_String ClassNameStr_6;
  MR_String ClassNameStr0_7;
  MR_String MangledName_8;
  MR_String UppercaseMangledName_9;
  MR_String Var_16;
  MR_String Var_24;

  MangledName_8 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_4);
  UppercaseMangledName_9 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), Arity_5, &Var_16);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_16);
  ClassNameStr0_7 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_9, Var_24);
  ClassNameStr_6 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(ClassNameStr0_7);
  return ClassNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__unqual_class_name_to_nll_string_for_csharp_2_f_0(
  MR_String Name_4,
  MR_Integer Arity_5)
{
  MR_String ClassNameStr_6;
  MR_String MangledName_7;
  MR_String UppercaseMangledName_8;
  MR_String Var_15;
  MR_String Var_23;

  MangledName_7 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(Name_4);
  UppercaseMangledName_8 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), Arity_5, &Var_15);
  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_15);
  ClassNameStr_6 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_8, Var_23);
  return ClassNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__field_var_name_to_ll_string_for_csharp_1_f_0(
  MR_Word FieldVarName_3)
{
  MR_String FieldVarNameStr_4;
  MR_String FieldVarNameStr0_5;
  MR_String RawString_6;
  MR_String MangledString_7;

  RawString_6 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_3);
  MangledString_7 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_6);
  FieldVarNameStr0_5 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_7);
  FieldVarNameStr_4 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(FieldVarNameStr0_5);
  return FieldVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__field_var_name_to_nll_string_for_csharp_1_f_0(
  MR_Word FieldVarName_3)
{
  MR_String FieldVarNameStr_4;
  MR_String RawString_5;
  MR_String MangledString_6;

  RawString_5 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_3);
  MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_5);
  FieldVarNameStr_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_6);
  return FieldVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(
  MR_Word LocalVarName_3)
{
  MR_String LocalVarNameStr_4;
  MR_String LocalVarNameStr0_5;
  MR_String RawString_6;
  MR_String MangledString_7;

  RawString_6 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
  MangledString_7 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_6);
  LocalVarNameStr0_5 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_7);
  LocalVarNameStr_4 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(LocalVarNameStr0_5);
  return LocalVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__local_var_name_to_nll_string_for_csharp_1_f_0(
  MR_Word LocalVarName_3)
{
  MR_String LocalVarNameStr_4;
  MR_String RawString_5;
  MR_String MangledString_6;

  RawString_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
  MangledString_6 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_5);
  LocalVarNameStr_4 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_6);
  return LocalVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__maybe_qualified_global_var_name_to_string_for_csharp_2_f_0(
  MR_Word Info_4,
  MR_Word QualGlobalVarName_5)
{
  MR_bool succeeded;
  MR_String MaybeQualGlobalVarNameStr_6;
  MR_Word GlobalVarModule_7 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_5, (MR_Integer) 0))));
  MR_Word GlobalVarName_8 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_5, (MR_Integer) 1))));
  MR_String GlobalVarNameStr_9;
  MR_Word CurrentModule_10;
  MR_String GlobalVarNameStr0_31;

  GlobalVarNameStr0_31 = ml_backend__mlds_to_cs_name__global_var_name_to_nll_string_for_csharp_1_f_0(GlobalVarName_8);
  GlobalVarNameStr_9 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(GlobalVarNameStr0_31);
  CurrentModule_10 = ((MR_Word) ((MR_hl_field(0, Info_4, (MR_Integer) 2))));
  succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(GlobalVarModule_7, CurrentModule_10);
  if (succeeded)
    MaybeQualGlobalVarNameStr_6 = GlobalVarNameStr_9;
  else
  {
    MR_String QualStr_11;
    MR_String Var_29;

    QualStr_11 = ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(GlobalVarModule_7, (MR_Integer) 0);
    Var_29 = mercury__string__f_43_43_2_f_0((MR_String) ".", GlobalVarNameStr_9);
    MaybeQualGlobalVarNameStr_6 = mercury__string__f_43_43_2_f_0(QualStr_11, Var_29);
  }
  return MaybeQualGlobalVarNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__qualifier_to_nll_string_for_csharp_2_f_0(
  MR_Word ModuleName_4,
  MR_Word QualKind_5)
{
  MR_bool succeeded;
  MR_String Str_6;
  MR_Word OuterName_7;
  MR_Word InnerName_8;
  MR_String MangledOuterName_9;

  OuterName_7 = ml_backend__mlds__mlds_module_name_to_package_name_1_f_0(ModuleName_4);
  InnerName_8 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
  MangledOuterName_9 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_7);
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_7, InnerName_8);
  if (succeeded)
    Str_6 = MangledOuterName_9;
  else
  {
    MR_Word Suffix_10;
    MR_String MangledSuffix_11;
    MR_Word Var_12;
    MR_String Var_21;

    ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_8, OuterName_7, &Suffix_10);
    Var_12 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_5);
    parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_10, Var_12, (MR_String) ".", &MangledSuffix_11);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix_11);
    Str_6 = mercury__string__f_43_43_2_f_0(MangledOuterName_9, Var_21);
  }
  return Str_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(
  MR_Word GlobalVarName_3)
{
  MR_String GlobalVarNameStr_4;
  MR_String GlobalVarNameStr0_5;

  GlobalVarNameStr0_5 = ml_backend__mlds_to_cs_name__global_var_name_to_nll_string_for_csharp_1_f_0(GlobalVarName_3);
  GlobalVarNameStr_4 = ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(GlobalVarNameStr0_5);
  return GlobalVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__global_var_name_to_nll_string_for_csharp_1_f_0(
  MR_Word GlobalVarName_3)
{
  MR_String GlobalVarNameStr_4;

  switch (MR_tag((MR_Word) GlobalVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GlobalVarNameStr_4 = (MR_String) "dummy_var";
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_7 = ((MR_Word) ((MR_hl_field(1, GlobalVarName_3, (MR_Integer) 0))));

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_7, &GlobalVarNameStr_4);
      }
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_cs_name.global_var_name_to_nll_string_for_csharp\'/1", (MR_String) "NYI: gvn_tabling_ref");
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_5 = ((MR_Unsigned) ((MR_hl_field(3, GlobalVarName_3, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_6 = ((MR_Integer) ((MR_hl_field(3, GlobalVarName_3, (MR_Integer) 1))));

        GlobalVarNameStr_4 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_5, Num_6);
      }
      break;
  }
  return GlobalVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__limit_identifier_length_1_f_0(
  MR_String Str0_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_Integer Length_5;

  Length_5 = mercury__string__length_1_f_0(Str0_3);
  succeeded = (Length_5 > (MR_Integer) 511);
  if (succeeded)
  {
    MR_String Left_6;
    MR_String Middle_7;
    MR_String Right_8;
    MR_String Var_21;
    MR_String Var_22;
    MR_String Var_24;

    Left_6 = mercury__string__left_2_f_0(Str0_3, (MR_Integer) 251);
    Middle_7 = backend_libs__c_util__hex_hash32_1_f_0(Str0_3);
    Right_8 = mercury__string__right_2_f_0(Str0_3, (MR_Integer) 250);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "_", Right_8);
    Var_22 = mercury__string__f_43_43_2_f_0(Middle_7, Var_21);
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_22);
    Str_4 = mercury__string__f_43_43_2_f_0(Left_6, Var_24);
  }
  else
    Str_4 = Str0_3;
  return Str_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(
  MR_Word SymName0_3)
{
  MR_bool succeeded;
  MR_String MangledSymName_4;
  MR_Word SymName_6;
  MR_Word StrippedSymName0_5;
  MR_String Var_10;

  succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(SymName0_3, &Var_10, &StrippedSymName0_5);
  if (succeeded)
    succeeded = (strcmp((MR_String) "mercury", Var_10) == 0);
  if (succeeded)
    SymName_6 = StrippedSymName0_5;
  else
    SymName_6 = SymName0_3;
  parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_6, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
  return MangledSymName_4;
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
