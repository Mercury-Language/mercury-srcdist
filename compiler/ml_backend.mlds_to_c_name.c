/*
** Automatically generated from `mlds_to_c_name.m'
** by the Mercury compiler,
** version rotd-2024-01-22
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


// :- module ml_backend.mlds_to_c_name.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_name__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_name.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
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
ml_backend__mlds_to_c_name__pred_label_to_string_for_c_1_f_0(
  MR_Word PredLabel_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"


MR_String MR_CALL 
ml_backend__mlds_to_c_name__qualifier_to_string_for_c_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String Qualifier_4;
  MR_Word SymName_5;

  SymName_5 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_3);
  Qualifier_4 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_5);
  return Qualifier_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__qual_proc_label_to_string_for_c_1_f_0(
  MR_Word QualProcLabel_3)
{
  MR_bool succeeded;
  MR_String QualProcLabelStr_4;
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_3, (MR_Integer) 0))));
  MR_Word ProcLabel_6 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_3, (MR_Integer) 1))));
  MR_String ProcLabelStr_9;
  MR_Word PredLabel_26 = ((MR_Word) ((MR_hl_field(0, ProcLabel_6, (MR_Integer) 0))));
  MR_Integer ProcId_27 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_6, (MR_Integer) 1))));
  MR_String PredLabelStr_28;
  MR_Integer ModeNum_29;
  MR_String Var_36;
  MR_String Var_44;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_String Var_13;
  MR_Word Var_14;
  MR_Integer Var_15;
  MR_Word Var_16;
  MR_Word Var_17;

  PredLabelStr_28 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_1_f_0(PredLabel_26);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_27, &ModeNum_29);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_29, &Var_36);
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_36);
  ProcLabelStr_9 = mercury__string__f_43_43_2_f_0(PredLabelStr_28, Var_44);
  succeeded = ((MR_tag((MR_Word) PredLabel_26)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_11 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_12 = ((MR_Word) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 1))));
    Var_13 = ((MR_String) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 2))));
    Var_14 = ((MR_Word) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 3))));
    Var_16 = ((((MR_Unsigned) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
    Var_17 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_26, (MR_Integer) 4))) & (MR_Integer) 1);
    succeeded = (Var_11 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (strcmp(Var_13, (MR_String) "main") == 0);
        if (succeeded)
        {
          succeeded = (Var_16 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_17 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_15 = (MR_Integer) (Var_14);
              succeeded = (Var_15 == (MR_Integer) 2);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    QualProcLabelStr_4 = ProcLabelStr_9;
  else
  {
    MR_String Qualifier_10;
    MR_String Var_25;
    MR_Word SymName_45;

    SymName_45 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    Qualifier_10 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_45);
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "__", ProcLabelStr_9);
    QualProcLabelStr_4 = mercury__string__f_43_43_2_f_0(Qualifier_10, Var_25);
  }
  return QualProcLabelStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__qual_function_name_to_string_for_c_1_f_0(
  MR_Word QualFuncName_3)
{
  MR_bool succeeded;
  MR_String QualFuncNameStr_4;
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, QualFuncName_3, (MR_Integer) 0))));
  MR_Word FuncName_6 = ((MR_Word) ((MR_hl_field(0, QualFuncName_3, (MR_Integer) 1))));
  MR_String FuncNameStr_7;

  if (((MR_tag((MR_Word) FuncName_6)) == (MR_Integer) 1))
    FuncNameStr_7 = ((MR_String) ((MR_hl_field(1, FuncName_6, (MR_Integer) 0))));
  else
  {
    MR_Word PlainFuncName_32 = (MR_Word) ((MR_Word) (FuncName_6));
    MR_Word FuncLabel_33 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_32, (MR_Integer) 0))));
    MR_Word ProcLabel_35 = ((MR_Word) ((MR_hl_field(0, FuncLabel_33, (MR_Integer) 0))));
    MR_Word MaybeAux_36 = ((MR_Word) ((MR_hl_field(0, FuncLabel_33, (MR_Integer) 1))));
    MR_Word PredLabel_37 = ((MR_Word) ((MR_hl_field(0, ProcLabel_35, (MR_Integer) 0))));
    MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_35, (MR_Integer) 1))));
    MR_String PredLabelStr_39;
    MR_Integer ModeNum_40;
    MR_String FuncIdSuffix_41;
    MR_String Var_50;
    MR_String Var_57;
    MR_String Var_59;

    PredLabelStr_39 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_1_f_0(PredLabel_37);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_38, &ModeNum_40);
    FuncIdSuffix_41 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_36);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_40, &Var_50);
    Var_57 = mercury__string__f_43_43_2_f_0(Var_50, FuncIdSuffix_41);
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_57);
    FuncNameStr_7 = mercury__string__f_43_43_2_f_0(PredLabelStr_39, Var_59);
  }
  if (((MR_tag((MR_Word) FuncName_6)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  {
    MR_Word PlainFuncName_8 = (MR_Word) ((MR_Word) (FuncName_6));
    MR_Word FuncLabel_9 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_8, (MR_Integer) 0))));
    MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(0, FuncLabel_9, (MR_Integer) 0))));
    MR_Word PredLabel_13 = ((MR_Word) ((MR_hl_field(0, ProcLabel_11, (MR_Integer) 0))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Integer Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    succeeded = ((MR_tag((MR_Word) PredLabel_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_17 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_18 = ((MR_Word) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 1))));
      Var_19 = ((MR_String) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 2))));
      Var_20 = ((MR_Word) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 3))));
      Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      Var_23 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_13, (MR_Integer) 4))) & (MR_Integer) 1);
      succeeded = (Var_17 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (strcmp(Var_19, (MR_String) "main") == 0);
          if (succeeded)
          {
            Var_21 = (MR_Integer) (Var_20);
            succeeded = (Var_21 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = (Var_22 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_23 == (MR_Integer) 0);
            }
          }
        }
      }
    }
  }
  if (succeeded)
    QualFuncNameStr_4 = FuncNameStr_7;
  else
  {
    MR_String Qualifier_16;
    MR_String Var_31;
    MR_Word SymName_60;

    SymName_60 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
    Qualifier_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_60);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "__", FuncNameStr_7);
    QualFuncNameStr_4 = mercury__string__f_43_43_2_f_0(Qualifier_16, Var_31);
  }
  return QualFuncNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__class_name_arity_to_string_for_c_2_f_0(
  MR_String ClassName_4,
  MR_Integer Arity_5)
{
  MR_String ClassNameStr_6;
  MR_String MangledClassName_7;
  MR_String Var_14;
  MR_String Var_22;

  MangledClassName_7 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_4);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), Arity_5, &Var_14);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_14);
  ClassNameStr_6 = mercury__string__f_43_43_2_f_0(MangledClassName_7, Var_22);
  return ClassNameStr_6;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(
  MR_Word QualFieldVarName_3)
{
  MR_String QualFieldVarNameStr_4;
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_3, (MR_Integer) 0))));
  MR_Word FieldVarName_7 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_3, (MR_Integer) 2))));
  MR_String Qualifier_8;
  MR_String FieldVarNameStr_9;
  MR_String Var_17;
  MR_Word SymName_18;
  MR_String Var_19;

  SymName_18 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
  Qualifier_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_18);
  Var_19 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_7);
  FieldVarNameStr_9 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_19);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "__", FieldVarNameStr_9);
  QualFieldVarNameStr_4 = mercury__string__f_43_43_2_f_0(Qualifier_8, Var_17);
  return QualFieldVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__field_var_name_to_string_for_c_1_f_0(
  MR_Word FieldVarName_3)
{
  MR_String FieldVarNameStr_4;
  MR_String Var_5;

  Var_5 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_3);
  FieldVarNameStr_4 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_5);
  return FieldVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(
  MR_Word LocalVarName_3)
{
  MR_String LocalVarNameStr_4;
  MR_String Var_5;

  Var_5 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_3);
  LocalVarNameStr_4 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_5);
  return LocalVarNameStr_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(
  MR_Word ModuleName_4,
  MR_Word GlobalVarName_5)
{
  MR_String MaybeQualGlobalVarNameStr_6;

  switch (MR_tag((MR_Word) GlobalVarName_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Qualifier_9;
        MR_Word SymName_30;

        SymName_30 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
        Qualifier_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_30);
        MaybeQualGlobalVarNameStr_6 = mercury__string__f_43_43_2_f_0(Qualifier_9, (MR_String) "__dummy_var");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_25 = ((MR_Word) ((MR_hl_field(1, GlobalVarName_5, (MR_Integer) 0))));
        MR_Word ShouldModuleQual_43;
        MR_String GlobalVarNameStr_44;

        ShouldModuleQual_43 = backend_libs__rtti__module_qualify_name_of_rtti_id_1_f_0(RttiId_25);
        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_25, &GlobalVarNameStr_44);
        switch (ShouldModuleQual_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeQualGlobalVarNameStr_6 = GlobalVarNameStr_44;
            break;
          case (MR_Integer) 1:
            {
              MR_String Qualifier_35;
              MR_String Var_37;
              MR_Word SymName_38;

              SymName_38 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
              Qualifier_35 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_38);
              Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "__", GlobalVarNameStr_44);
              MaybeQualGlobalVarNameStr_6 = mercury__string__f_43_43_2_f_0(Qualifier_35, Var_37);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_27 = ((MR_Word) ((MR_hl_field(2, GlobalVarName_5, (MR_Integer) 0))));
        MR_Word TablingId_28 = ((MR_Word) ((MR_hl_field(2, GlobalVarName_5, (MR_Integer) 1))));

        MaybeQualGlobalVarNameStr_6 = ml_backend__mlds_to_c_name__tabling_struct_id_to_string_2_f_0(ProcLabel_27, TablingId_28);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_23 = ((MR_Unsigned) ((MR_hl_field(3, GlobalVarName_5, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_24 = ((MR_Integer) ((MR_hl_field(3, GlobalVarName_5, (MR_Integer) 1))));
        MR_String Var_29;

        Var_29 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_23, Num_24);
        MaybeQualGlobalVarNameStr_6 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_29);
      }
      break;
  }
  return MaybeQualGlobalVarNameStr_6;
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_name__should_module_qualify_global_var_name_1_f_0(
  MR_Word GlobalVarName_3)
{
  MR_Word ShouldModuleQual_4;

  switch (MR_tag((MR_Word) GlobalVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ShouldModuleQual_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_5 = ((MR_Word) ((MR_hl_field(1, GlobalVarName_3, (MR_Integer) 0))));

        ShouldModuleQual_4 = backend_libs__rtti__module_qualify_name_of_rtti_id_1_f_0(RttiId_5);
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      ShouldModuleQual_4 = (MR_Integer) 0;
      break;
  }
  return ShouldModuleQual_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__tabling_struct_id_to_string_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word TablingId_5)
{
  MR_String TablingName_6;
  MR_String TablingIdStr_7;
  MR_Word TablingProcLabel_8;
  MR_String TablingProcLabelStr_9;
  MR_String Var_17;
  MR_Word PredLabel_18;
  MR_Integer ProcId_19;
  MR_String PredLabelStr_20;
  MR_Integer ModeNum_21;
  MR_String Var_28;
  MR_String Var_36;

  TablingIdStr_7 = backend_libs__rtti__tabling_info_id_str_1_f_0(TablingId_5);
  TablingProcLabel_8 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_4);
  PredLabel_18 = ((MR_Word) ((MR_hl_field(0, TablingProcLabel_8, (MR_Integer) 0))));
  ProcId_19 = ((MR_Integer) ((MR_hl_field(0, TablingProcLabel_8, (MR_Integer) 1))));
  PredLabelStr_20 = ml_backend__mlds_to_c_name__pred_label_to_string_for_c_1_f_0(PredLabel_18);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_19, &ModeNum_21);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_21, &Var_28);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_28);
  TablingProcLabelStr_9 = mercury__string__f_43_43_2_f_0(PredLabelStr_20, Var_36);
  Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", TablingProcLabelStr_9);
  TablingName_6 = mercury__string__f_43_43_2_f_0(TablingIdStr_7, Var_17);
  return TablingName_6;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_name__pred_label_to_string_for_c_1_f_0(
  MR_Word PredLabel_3)
{
  MR_String Str_4;

  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_Integer) 1))
  {
    MR_String PredName_16 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_17 = ((MR_Word) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_18 = ((MR_String) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(1, PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_20;
    MR_String MangledTypeName_21;

    MangledPredName_20 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_16);
    MangledTypeName_21 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_18);
    if ((MaybeTypeModule_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_104;
      MR_String Var_112;
      MR_String Var_113;
      MR_String Var_115;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), TypeArity_19, &Var_104);
      Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_104);
      Var_113 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_112);
      Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_113);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_115);
    }
    else
    {
      MR_Word TypeModule_22 = ((MR_Word) ((MR_hl_field(1, MaybeTypeModule_17, (MR_Integer) 0))));
      MR_String MangledTypeModule_23;
      MR_String Var_89;
      MR_String Var_97;
      MR_String Var_98;
      MR_String Var_100;
      MR_String Var_101;
      MR_String Var_103;

      MangledTypeModule_23 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_22);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), TypeArity_19, &Var_89);
      Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_89);
      Var_98 = mercury__string__f_43_43_2_f_0(MangledTypeName_21, Var_97);
      Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_98);
      Var_101 = mercury__string__f_43_43_2_f_0(MangledTypeModule_23, Var_100);
      Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_101);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledPredName_20, Var_103);
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
    MangledName_14 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_86;
      MR_String Var_88;

      Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_12);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), UserArityInt_13, &Var_79);
      Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
      Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_86);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledName_14, Var_88);
    }
    else
    {
      MR_Word DefiningModule_15 = ((MR_Word) ((MR_hl_field(1, MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String Var_34;
      MR_String Var_63;
      MR_String Var_64;
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_74;
      MR_String Var_76;

      Var_34 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_15);
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", Var_34);
      Var_64 = mercury__string__f_43_43_2_f_0(Suffix_12, Var_63);
      Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_64);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), UserArityInt_13, &Var_67);
      Var_74 = mercury__string__f_43_43_2_f_0(Var_67, Var_66);
      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_74);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledName_14, Var_76);
    }
  }
  return Str_4;
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_String EnvVarName_3 = (MR_String) (HeadVar__1_1);

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
  return HeadVar__2_2;
}

void mercury__ml_backend__mlds_to_c_name__init(void)
{
}

void mercury__ml_backend__mlds_to_c_name__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_name.
