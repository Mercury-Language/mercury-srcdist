/*
** Automatically generated from `mlds_to_c_name.m'
** by the Mercury compiler,
** version rotd-2022-08-18
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
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
#include "parse_tree.error_util.mih"
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
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static MR_String MR_CALL 
ml_backend__mlds_to_c_name__mlds_pred_label_to_string_1_f_0(
  MR_Word PredLabel_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1] = {
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



MR_String MR_CALL 
ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String ModuleNamePrefix_4;
  MR_Word SymName_5;
  MR_String MangledModuleName_6;

  SymName_5 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_3);
  MangledModuleName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_5);
  ModuleNamePrefix_4 = mercury__string__f_43_43_2_f_0(MangledModuleName_6, (MR_String) "__");
  return ModuleNamePrefix_4;
}

void MR_CALL 
ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6)
{
  MR_Word SymName_8;
  MR_String MangledModuleName_9;

  SymName_8 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
  MangledModuleName_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_8);
  mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_9);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(
  MR_Word Stream_5,
  MR_Word LocalVarName_6)
{
  MR_String MangledLocalVarName_8;
  MR_String Var_11;

  Var_11 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_6);
  MangledLocalVarName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_11);
  mercury__io__write_string_4_p_0(Stream_5, MangledLocalVarName_8);
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(
  MR_Word Stream_5,
  MR_Word QualFieldVarName_6)
{
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_6, (MR_Integer) 0))));
  MR_Word FieldVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_6, (MR_Integer) 2))));
  MR_Word SymName_14;
  MR_String MangledModuleName_15;
  MR_String MangledFieldVarName_22;
  MR_String Var_23;

  SymName_14 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
  MangledModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_14);
  mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
  Var_23 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_10);
  MangledFieldVarName_22 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_23);
  mercury__io__write_string_4_p_0(Stream_5, MangledFieldVarName_22);
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(
  MR_Word Stream_6,
  MR_String ClassName_7,
  MR_Integer Arity_8)
{
  MR_String MangledClassName_10;
  MR_String Var_23;

  MangledClassName_10 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_7);
  mercury__io__write_string_4_p_0(Stream_6, MangledClassName_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), Arity_8, &Var_23);
  mercury__io__write_string_4_p_0(Stream_6, Var_23);
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_proc_label_4_p_0(
  MR_Word Stream_5,
  MR_Word QualProcLabel_6)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_6, (MR_Integer) 0))));
  MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_6, (MR_Integer) 1))));
  MR_Word PredLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 0))));
  MR_Word PredLabel_29;
  MR_Integer ProcId_30;
  MR_Integer ModeNum_31;
  MR_String Var_35;
  MR_String Var_42;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String Var_16;
  MR_Integer Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  succeeded = ((MR_tag((MR_Word) PredLabel_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 1))));
    Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 2))));
    Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 3))));
    Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_10, (MR_Integer) 4))) & (MR_Integer) 1);
    succeeded = (Var_14 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (strcmp(Var_16, (MR_String) "main") == 0);
        if (succeeded)
        {
          succeeded = (Var_17 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Var_18 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (Var_19 == (MR_Integer) 0);
          }
        }
      }
    }
  }
  if (!(succeeded))
  {
    MR_Word SymName_21;
    MR_String MangledModuleName_22;

    SymName_21 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
    MangledModuleName_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_21);
    mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_22);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
  }
  PredLabel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 0))));
  ProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 1))));
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_30, &ModeNum_31);
  Var_35 = ml_backend__mlds_to_c_name__mlds_pred_label_to_string_1_f_0(PredLabel_29);
  mercury__io__write_string_4_p_0(Stream_5, Var_35);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_31, &Var_42);
  mercury__io__write_string_4_p_0(Stream_5, Var_42);
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(
  MR_Word Stream_5,
  MR_Word QualFuncName_6)
{
  MR_bool succeeded;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 0))));
  MR_Word FuncName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_6, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) FuncName_9)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  {
    MR_Word PlainFuncName_10 = (MR_Word) ((MR_Word) (FuncName_9));
    MR_Word FuncLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_10, (MR_Integer) 0))));
    MR_Word ProcLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_11, (MR_Integer) 0))));
    MR_Word PredLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_13, (MR_Integer) 0))));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Integer Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = ((MR_tag((MR_Word) PredLabel_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 1))));
      Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 2))));
      Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 3))));
      Var_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_15, (MR_Integer) 4))) & (MR_Integer) 1);
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (strcmp(Var_22, (MR_String) "main") == 0);
          if (succeeded)
          {
            succeeded = (Var_23 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = (Var_24 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_25 == (MR_Integer) 0);
            }
          }
        }
      }
    }
  }
  if (!(succeeded))
  {
    MR_Word SymName_27;
    MR_String MangledModuleName_28;

    SymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
    MangledModuleName_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_27);
    mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_28);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
  }
  if (((MR_tag((MR_Word) FuncName_9)) == (MR_Integer) 1))
  {
    MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(Stream_5, Name_44);
  }
  else
  {
    MR_Word PlainFuncName_35 = (MR_Word) ((MR_Word) (FuncName_9));
    MR_Word FuncLabel_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_35, (MR_Integer) 0))));
    MR_Word ProcLabel_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_36, (MR_Integer) 0))));
    MR_Word MaybeAux_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_36, (MR_Integer) 1))));
    MR_Word PredLabel_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_38, (MR_Integer) 0))));
    MR_Integer ProcId_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_38, (MR_Integer) 1))));
    MR_Integer ModeNum_42;
    MR_String FuncIdSuffix_43;
    MR_String Var_48;
    MR_String Var_58;

    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_41, &ModeNum_42);
    FuncIdSuffix_43 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_39);
    Var_48 = ml_backend__mlds_to_c_name__mlds_pred_label_to_string_1_f_0(PredLabel_40);
    mercury__io__write_string_4_p_0(Stream_5, Var_48);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_42, &Var_58);
    mercury__io__write_string_4_p_0(Stream_5, Var_58);
    mercury__io__write_string_4_p_0(Stream_5, FuncIdSuffix_43);
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__global_var_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_String EnvVarName_3 = (MR_String) (HeadVar__1_1);

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
  return HeadVar__2_2;
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word GlobalVarName_8)
{
  switch (MR_tag((MR_Word) GlobalVarName_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SymName_19;
        MR_String MangledModuleName_20;

        SymName_19 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
        MangledModuleName_20 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_19);
        mercury__io__write_string_4_p_0(Stream_6, MangledModuleName_20);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "__");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_8, (MR_Integer) 0))));
        MR_Word ShouldModuleQual_47;

        ShouldModuleQual_47 = backend_libs__rtti__module_qualify_name_of_rtti_id_1_f_0(RttiId_14);
        switch (ShouldModuleQual_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word SymName_39;
              MR_String MangledModuleName_40;

              SymName_39 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
              MangledModuleName_40 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_39);
              mercury__io__write_string_4_p_0(Stream_6, MangledModuleName_40);
              mercury__io__write_string_4_p_0(Stream_6, (MR_String) "__");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
      }
      break;
  }
  switch (MR_tag((MR_Word) GlobalVarName_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "dummy_var");
      break;
    case (MR_Integer) 1:
      {
        MR_Word RttiId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_8, (MR_Integer) 0))));
        MR_String RttiAddrName_31;

        backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_30, &RttiAddrName_31);
        mercury__io__write_string_4_p_0(Stream_6, RttiAddrName_31);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_8, (MR_Integer) 0))));
        MR_Word TablingId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_8, (MR_Integer) 1))));
        MR_String Var_35;

        Var_35 = ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(ProcLabel_32, TablingId_33);
        mercury__io__write_string_4_p_0(Stream_6, Var_35);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ConstVar_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_8, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Integer Num_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_8, (MR_Integer) 1))));
        MR_String MangledGlobalVarName_29;
        MR_String Var_34;

        Var_34 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_27, Num_28);
        MangledGlobalVarName_29 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_34);
        mercury__io__write_string_4_p_0(Stream_6, MangledGlobalVarName_29);
      }
      break;
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word TablingId_5)
{
  MR_String HeadVar__3_3;
  MR_String Var_6;
  MR_String Var_7;
  MR_String Var_9;
  MR_Word Var_10;
  MR_Word PredLabel_11;
  MR_Integer ProcId_12;
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_16;
  MR_Integer Var_17;

  Var_6 = backend_libs__rtti__tabling_info_id_str_1_f_0(TablingId_5);
  Var_10 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_4);
  PredLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
  ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
  Var_13 = ml_backend__mlds_to_c_name__mlds_pred_label_to_string_1_f_0(PredLabel_11);
  Var_17 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_12);
  Var_16 = mercury__string__int_to_string_1_f_0(Var_17);
  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_16);
  Var_9 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
  Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_9);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_6, Var_7);
  return HeadVar__3_3;
}

static MR_String MR_CALL 
ml_backend__mlds_to_c_name__mlds_pred_label_to_string_1_f_0(
  MR_Word PredLabel_3)
{
  MR_String Str_4;

  if (((MR_tag((MR_Word) PredLabel_3)) == (MR_Integer) 1))
  {
    MR_String PredName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 1))));
    MR_String TypeName_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 2))));
    MR_Integer TypeArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_3, (MR_Integer) 3))));
    MR_String MangledPredName_19;
    MR_String MangledTypeName_20;

    MangledPredName_19 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_15);
    MangledTypeName_20 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_17);
    if ((MaybeTypeModule_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_103;
      MR_String Var_111;
      MR_String Var_112;
      MR_String Var_114;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), TypeArity_18, &Var_103);
      Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_103);
      Var_112 = mercury__string__f_43_43_2_f_0(MangledTypeName_20, Var_111);
      Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_112);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledPredName_19, Var_114);
    }
    else
    {
      MR_Word TypeModule_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_16, (MR_Integer) 0))));
      MR_String MangledTypeModule_22;
      MR_String Var_88;
      MR_String Var_96;
      MR_String Var_97;
      MR_String Var_99;
      MR_String Var_100;
      MR_String Var_102;

      MangledTypeModule_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_21);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), TypeArity_18, &Var_88);
      Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_88);
      Var_97 = mercury__string__f_43_43_2_f_0(MangledTypeName_20, Var_96);
      Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_97);
      Var_100 = mercury__string__f_43_43_2_f_0(MangledTypeModule_22, Var_99);
      Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_100);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledPredName_19, Var_102);
    }
  }
  else
  {
    MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MaybeDefiningModule_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 1))));
    MR_String Name_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 2))));
    MR_Integer PredArity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_3, (MR_Integer) 3))));
    MR_String Suffix_11;
    MR_Integer UserArity_12;
    MR_String MangledName_13;

    switch (PredOrFunc_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Suffix_11 = (MR_String) "f";
          UserArity_12 = (MR_Integer) ((MR_Unsigned) PredArity_8 - (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          Suffix_11 = (MR_String) "p";
          UserArity_12 = PredArity_8;
        }
        break;
    }
    MangledName_13 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_7);
    if ((MaybeDefiningModule_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_77;
      MR_String Var_78;
      MR_String Var_85;
      MR_String Var_87;

      Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_11);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), UserArity_12, &Var_78);
      Var_85 = mercury__string__f_43_43_2_f_0(Var_78, Var_77);
      Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_85);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_87);
    }
    else
    {
      MR_Word DefiningModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_6, (MR_Integer) 0))));
      MR_String Var_33;
      MR_String Var_62;
      MR_String Var_63;
      MR_String Var_65;
      MR_String Var_66;
      MR_String Var_73;
      MR_String Var_75;

      Var_33 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_14);
      Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", Var_33);
      Var_63 = mercury__string__f_43_43_2_f_0(Suffix_11, Var_62);
      Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_63);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), UserArity_12, &Var_66);
      Var_73 = mercury__string__f_43_43_2_f_0(Var_66, Var_65);
      Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_73);
      Str_4 = mercury__string__f_43_43_2_f_0(MangledName_13, Var_75);
    }
  }
  return Str_4;
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
        MR_Word RttiId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_3, (MR_Integer) 0))));

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
