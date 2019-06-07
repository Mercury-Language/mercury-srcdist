/*
** Automatically generated from `mlds_to_cs_name.m'
** by the Mercury compiler,
** version rotd-2019-06-07
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "counter.mih"
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
#include "require.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static void MR_CALL 
ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(
  MR_Word PredLabel_3,
  MR_String * String_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[2][1];




static /* final */ const MR_Box ml_backend__mlds_to_cs_name_scalar_common_1[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_3_p_0(
  MR_Word VarName_4)
{
  {
    MR_String VarNameStr_6;
    MR_String RawString_12;
    MR_String MangledString_13;

    RawString_12 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_4);
    MangledString_13 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_12);
    VarNameStr_6 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_13);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_field_var_name_for_csharp_3_p_0(
  MR_Word VarName_4)
{
  {
    MR_String VarNameStr_6;
    MR_String RawString_12;
    MR_String MangledString_13;

    RawString_12 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(VarName_4);
    MangledString_13 = parse_tree__prog_foreign__name_mangle_1_f_0(RawString_12);
    VarNameStr_6 = parse_tree__java_names__make_valid_csharp_symbol_name_1_f_0(MangledString_13);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(VarNameStr_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_class_name_arity_for_csharp_4_p_0(
  MR_String ClassName_5,
  MR_Integer ClassArity_6)
{
  {
    MR_String Str_8;
    MR_String MangledName_18;
    MR_String UppercaseMangledName_19;
    MR_String Var_20;
    MR_String Var_22;

    MangledName_18 = parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(ClassName_5);
    UppercaseMangledName_19 = parse_tree__java_names__flip_initial_case_1_f_0(MangledName_18);
    Var_22 = mercury__string__from_int_1_f_0(ClassArity_6);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_22);
    Str_8 = mercury__string__f_43_43_2_f_0(UppercaseMangledName_19, Var_20);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(Str_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_4_p_0(
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
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(String_8);
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
    {
      *String_6 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.", ClassName_9);
    }
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
ml_backend__mlds_to_cs_name__mlds_output_proc_label_4_p_0(
  MR_String Suffix_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word PredLabel_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String PredLabelStr_9;
    MR_Integer ModeNum_10;
    MR_String String_11;
    MR_String Var_23;
    MR_String Var_30;
    MR_String Var_32;

    ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_6, &PredLabelStr_9);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ModeNum_10);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), ModeNum_10, &Var_23);
    Var_30 = mercury__string__f_43_43_2_f_0(Var_23, Suffix_5);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    String_11 = mercury__string__f_43_43_2_f_0(PredLabelStr_9, Var_32);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(String_11);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_function_name_for_csharp_4_p_0(
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
    {
      ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    }
    ml_backend__mlds_to_cs_name__output_function_name_for_csharp_3_p_0(FuncName_9);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_function_name_for_csharp_3_p_0(
  MR_Word FunctionName_4)
{
  {
    MR_String FunctionNameStr_6;

    if (((MR_tag((MR_Word) FunctionName_4)) == (MR_Integer) 1))
      FunctionNameStr_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), FunctionName_4, (MR_Integer) 0))));
    else
    {
      MR_Word PlainFuncName_12 = (MR_Word) ((MR_Word) (FunctionName_4));
      MR_Word FuncLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_12, (MR_Integer) 0))));
      MR_Word ProcLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_13, (MR_Integer) 0))));
      MR_Word MaybeAux_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_13, (MR_Integer) 1))));
      MR_Word PredLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_15, (MR_Integer) 0))));
      MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_15, (MR_Integer) 1))));
      MR_String PredLabelStr_19;
      MR_Integer ModeNum_20;
      MR_String MaybeAuxSuffix_21;
      MR_String Var_31;
      MR_String Var_38;
      MR_String Var_40;

      ml_backend__mlds_to_cs_name__pred_label_to_string_for_csharp_2_p_0(PredLabel_17, &PredLabelStr_19);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_18, &ModeNum_20);
      MaybeAuxSuffix_21 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_16);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), ModeNum_20, &Var_31);
      Var_38 = mercury__string__f_43_43_2_f_0(Var_31, MaybeAuxSuffix_21);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
      FunctionNameStr_6 = mercury__string__f_43_43_2_f_0(PredLabelStr_19, Var_40);
    }
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(FunctionNameStr_6);
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

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), TypeArity_19, &Var_103);
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
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), TypeArity_19, &Var_88);
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
          OrigArity_12 = (MR_Integer) ((MR_Unsigned) PredArity_8 - (MR_Unsigned) (MR_Integer) 1);
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
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), OrigArity_12, &Var_78);
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
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[1]), OrigArity_12, &Var_66);
      Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
      Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_73);
      *String_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_75);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_3_p_0(
  MR_Word DataName_4)
{
  {
    MR_String DataNameStr_6;

    ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(DataName_4, &DataNameStr_6);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(DataNameStr_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_maybe_qualified_global_var_name_for_csharp_4_p_0(
  MR_Word Info_5,
  MR_Word QualGlobalVarName_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 0))));
    MR_Word GlobalVarName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualGlobalVarName_6, (MR_Integer) 1))));
    MR_Word CurrentModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
    MR_String DataNameStr_30;

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_8, CurrentModuleName_10);
    if (!(succeeded))
    {
      ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_4_p_0(ModuleName_8, (MR_Integer) 0);
    }
    ml_backend__mlds_to_cs_name__global_var_name_to_string_for_csharp_2_p_0(GlobalVarName_9, &DataNameStr_30);
    ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(DataNameStr_30);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__write_identifier_string_for_csharp_3_p_0(
  MR_String String_4)
{
  {
    MR_bool succeeded;
    MR_Integer Length_6;

    Length_6 = mercury__string__length_1_f_0(String_4);
    succeeded = (Length_6 > (MR_Integer) 511);
    if (succeeded)
    {
      MR_String Left_7;
      MR_String Right_8;
      MR_Integer Hash_9;
      MR_Integer Var_15;
      MR_String Var_31;

      Left_7 = mercury__string__left_2_f_0(String_4, (MR_Integer) 251);
      Right_8 = mercury__string__right_2_f_0(String_4, (MR_Integer) 250);
      Var_15 = mercury__string__hash_1_f_0(String_4);
      Hash_9 = (Var_15 & (MR_Integer) 4294967295);
      mercury__io__write_string_3_p_0(Left_7);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) (&ml_backend__mlds_to_cs_name_scalar_common_1[0]), (MR_Integer) 8, (MR_Integer) 2, Hash_9, &Var_31);
      mercury__io__write_string_3_p_0(Var_31);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__io__write_string_3_p_0(Right_8);
    }
    else
      mercury__io__write_string_3_p_0(String_4);
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_name__output_qual_name_prefix_cs_4_p_0(
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
    MangledOuterName_19 = ml_backend__mlds_to_cs_name__strip_mercury_and_mangle_sym_name_for_csharp_1_f_0(OuterName_17);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OuterName_17, InnerName_18);
    if (succeeded)
      MangledSuffix_20 = (MR_String) "";
    else
    {
      MR_Word Suffix_21;
      MR_String MangledSuffix0_22;
      MR_Word Var_23;

      ml_backend__mlds_to_target_util__remove_sym_name_prefix_3_p_0(InnerName_18, OuterName_17, &Suffix_21);
      Var_23 = ml_backend__mlds_to_target_util__convert_qual_kind_1_f_0(QualKind_6);
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(Suffix_21, Var_23, (MR_String) ".", &MangledSuffix0_22);
      MangledSuffix_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", MangledSuffix0_22);
    }
    QualifierString_8 = mercury__string__f_43_43_2_f_0(MangledOuterName_19, MangledSuffix_20);
    mercury__io__write_string_3_p_0(QualifierString_8);
    mercury__io__write_string_3_p_0((MR_String) ".");
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
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(StrippedSymName_5, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    }
    else
    {
      parse_tree__java_names__mangle_sym_name_for_csharp_4_p_0(SymName_3, (MR_Integer) 0, (MR_String) "__", &MangledSymName_4);
    }
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
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_name.global_var_name_to_string_for_csharp\'/2", (MR_String) "NYI: gvn_tabling_ref");
          return;
        }
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
