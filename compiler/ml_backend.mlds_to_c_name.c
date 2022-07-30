/*
** Automatically generated from `mlds_to_c_name.m'
** by the Mercury compiler,
** version 22.01.4-beta-2022-07-30
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
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_pred_label_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLabel_6);


static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_c_name_scalar_common_1[1][1] = {
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



MR_String MR_CALL 
ml_backend__mlds_to_c_name__qual_name_prefix_c_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_String ModuleNamePrefix_4;
    MR_Word SymName_5;
    MR_String MangledModuleName_6;

    SymName_5 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_3);
    MangledModuleName_6 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_5);
    ModuleNamePrefix_4 = mercury__string__f_43_43_2_f_0(MangledModuleName_6, (MR_String) "__");
    return ModuleNamePrefix_4;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__output_qual_name_prefix_c_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleName_6)
{
  {
    MR_Word SymName_8;
    MR_String MangledModuleName_9;

    SymName_8 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
    MangledModuleName_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_8);
    mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_local_var_name_4_p_0(
  MR_Word Stream_5,
  MR_Word LocalVarName_6)
{
  {
    MR_String MangledLocalVarName_8;
    MR_String Var_11;

    Var_11 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_6);
    MangledLocalVarName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_11);
    mercury__io__write_string_4_p_0(Stream_5, MangledLocalVarName_8);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_4_p_0(
  MR_Word Stream_5,
  MR_Word QualFieldVarName_6)
{
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_6, (MR_Integer) 0))));
    MR_Word FieldVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_6, (MR_Integer) 2))));
    MR_Word SymName_20;
    MR_String MangledModuleName_21;
    MR_String MangledFieldVarName_34;
    MR_String Var_35;

    SymName_20 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
    MangledModuleName_21 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_20);
    mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_21);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    Var_35 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_10);
    MangledFieldVarName_34 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_35);
    mercury__io__write_string_4_p_0(Stream_5, MangledFieldVarName_34);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_class_name_arity_5_p_0(
  MR_Word Stream_6,
  MR_String ClassName_7,
  MR_Integer Arity_8)
{
  {
    MR_String MangledClassName_10;
    MR_String Var_23;

    MangledClassName_10 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_7);
    mercury__io__write_string_4_p_0(Stream_6, MangledClassName_10);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), Arity_8, &Var_23);
    mercury__io__write_string_4_p_0(Stream_6, Var_23);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_proc_label_4_p_0(
  MR_Word Stream_5,
  MR_Word QualProcLabel_6)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_6, (MR_Integer) 0))));
    MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_6, (MR_Integer) 1))));
    MR_Word PredLabel_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 0))));
    MR_Word PredLabel_39;
    MR_Integer ProcId_40;
    MR_Integer ModeNum_42;
    MR_String Var_51;
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
      MR_Word SymName_27;
      MR_String MangledModuleName_28;

      SymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
      MangledModuleName_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_27);
      mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_28);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    }
    PredLabel_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 0))));
    ProcId_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Name_9, (MR_Integer) 1))));
    ml_backend__mlds_to_c_name__mlds_output_pred_label_4_p_0(Stream_5, PredLabel_39);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_40, &ModeNum_42);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_42, &Var_51);
    mercury__io__write_string_4_p_0(Stream_5, Var_51);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_4_p_0(
  MR_Word Stream_5,
  MR_Word QualFuncName_6)
{
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
      MR_Word SymName_33;
      MR_String MangledModuleName_34;

      SymName_33 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_8);
      MangledModuleName_34 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_33);
      mercury__io__write_string_4_p_0(Stream_5, MangledModuleName_34);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    }
    if (((MR_tag((MR_Word) FuncName_9)) == (MR_Integer) 1))
    {
      MR_String Name_56 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_9, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(Stream_5, Name_56);
    }
    else
    {
      MR_Word PlainFuncName_47 = (MR_Word) ((MR_Word) (FuncName_9));
      MR_Word FuncLabel_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_47, (MR_Integer) 0))));
      MR_Word ProcLabel_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_48, (MR_Integer) 0))));
      MR_Word MaybeAux_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_48, (MR_Integer) 1))));
      MR_Word PredLabel_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_50, (MR_Integer) 0))));
      MR_Integer ProcId_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ProcLabel_50, (MR_Integer) 1))));
      MR_Integer ModeNum_54;
      MR_String FuncIdSuffix_55;
      MR_String Var_69;

      ml_backend__mlds_to_c_name__mlds_output_pred_label_4_p_0(Stream_5, PredLabel_52);
      hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_53, &ModeNum_54);
      FuncIdSuffix_55 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_51);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), ModeNum_54, &Var_69);
      mercury__io__write_string_4_p_0(Stream_5, Var_69);
      mercury__io__write_string_4_p_0(Stream_5, FuncIdSuffix_55);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_pred_label_4_p_0(
  MR_Word Stream_5,
  MR_Word PredLabel_6)
{
  if (((MR_tag((MR_Word) PredLabel_6)) == (MR_Integer) 1))
  {
    MR_String PredName_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 0))));
    MR_Word MaybeTypeModule_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 1))));
    MR_String TypeName_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 2))));
    MR_Integer TypeArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_6, (MR_Integer) 3))));
    MR_String MangledPredName_23;
    MR_String MangledTypeName_24;
    MR_String Var_83;

    MangledPredName_23 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_19);
    MangledTypeName_24 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_21);
    mercury__io__write_string_4_p_0(Stream_5, MangledPredName_23);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
    if (!((MaybeTypeModule_20 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeModule_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_20, (MR_Integer) 0))));
      MR_String MangledTypeModule_26;

      MangledTypeModule_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_25);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "__");
      mercury__io__write_string_4_p_0(Stream_5, MangledTypeModule_26);
    }
    mercury__io__write_string_4_p_0(Stream_5, MangledTypeName_24);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), TypeArity_22, &Var_83);
    mercury__io__write_string_4_p_0(Stream_5, Var_83);
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
    MR_String Var_65;

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
    MangledName_16 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_10);
    mercury__io__write_string_4_p_0(Stream_5, MangledName_16);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_name_scalar_common_1[0]), OrigArity_15, &Var_65);
    mercury__io__write_string_4_p_0(Stream_5, Var_65);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_");
    mercury__io__write_string_4_p_0(Stream_5, Suffix_14);
    if (!((MaybeDefiningModule_9 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word DefiningModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_9, (MR_Integer) 0))));
      MR_String MangledDefiningModule_18;

      MangledDefiningModule_18 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_17);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "_in__");
      mercury__io__write_string_4_p_0(Stream_5, MangledDefiningModule_18);
    }
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__global_var_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_String EnvVarName_3 = (MR_String) (HeadVar__1_1);

    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word GlobalVarName_8)
{
  {
    switch (MR_tag((MR_Word) GlobalVarName_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_27;
          MR_String MangledModuleName_28;

          SymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
          MangledModuleName_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_27);
          mercury__io__write_string_4_p_0(Stream_6, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "__");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_8, (MR_Integer) 0))));
          MR_Word ShouldModuleQual_65;

          ShouldModuleQual_65 = backend_libs__rtti__module_qualify_name_of_rtti_id_1_f_0(RttiId_17);
          switch (ShouldModuleQual_65) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_57;
                MR_String MangledModuleName_58;

                SymName_57 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_7);
                MangledModuleName_58 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_57);
                mercury__io__write_string_4_p_0(Stream_6, MangledModuleName_58);
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
          MR_Word RttiId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_8, (MR_Integer) 0))));
          MR_String RttiAddrName_45;

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_44, &RttiAddrName_45);
          mercury__io__write_string_4_p_0(Stream_6, RttiAddrName_45);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ProcLabel_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_8, (MR_Integer) 0))));
          MR_Word TablingId_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_8, (MR_Integer) 1))));
          MR_String Var_50;

          Var_50 = ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(ProcLabel_46, TablingId_47);
          mercury__io__write_string_4_p_0(Stream_6, Var_50);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ConstVar_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_8, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Integer Num_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_8, (MR_Integer) 1))));
          MR_String MangledGlobalVarName_43;
          MR_String Var_53;

          Var_53 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_41, Num_42);
          MangledGlobalVarName_43 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_53);
          mercury__io__write_string_4_p_0(Stream_6, MangledGlobalVarName_43);
        }
        break;
    }
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(
  MR_Word ProcLabel_4,
  MR_Word TablingId_5)
{
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
    if (((MR_tag((MR_Word) PredLabel_11)) == (MR_Integer) 1))
    {
      MR_String PredName_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 0))));
      MR_Word MaybeTypeModule_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 1))));
      MR_String TypeName_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 2))));
      MR_Integer TypeArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 3))));
      MR_String MangledPredName_35;
      MR_String MangledTypeName_36;
      MR_String PrefixStr_37;
      MR_String MidStr_39;
      MR_String Var_43;
      MR_String Var_44;
      MR_String Var_45;
      MR_String Var_47;

      MangledPredName_35 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_31);
      MangledTypeName_36 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_33);
      PrefixStr_37 = mercury__string__f_43_43_2_f_0(MangledPredName_35, (MR_String) "__");
      if ((MaybeTypeModule_32 == (MR_Word) ((MR_Unsigned) 0U)))
        MidStr_39 = (MR_String) "";
      else
      {
        MR_Word TypeModule_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_32, (MR_Integer) 0))));
        MR_String Var_41;

        Var_41 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_38);
        MidStr_39 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) "__");
      }
      Var_47 = mercury__string__int_to_string_1_f_0(TypeArity_34);
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_47);
      Var_44 = mercury__string__f_43_43_2_f_0(MangledTypeName_36, Var_45);
      Var_43 = mercury__string__f_43_43_2_f_0(MidStr_39, Var_44);
      Var_13 = mercury__string__f_43_43_2_f_0(PrefixStr_37, Var_43);
    }
    else
    {
      MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MaybeDefiningModule_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 1))));
      MR_String Name_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 2))));
      MR_Integer PredArity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 3))));
      MR_String Suffix_26;
      MR_Integer OrigArity_27;
      MR_String MangledName_28;
      MR_String MainStr_29;
      MR_String Var_49;
      MR_String Var_51;
      MR_String Var_52;
      MR_String Var_53;

      switch (PredOrFunc_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Suffix_26 = (MR_String) "f";
            OrigArity_27 = (MR_Integer) ((MR_Unsigned) PredArity_23 - (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            Suffix_26 = (MR_String) "p";
            OrigArity_27 = PredArity_23;
          }
          break;
      }
      MangledName_28 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_22);
      Var_52 = mercury__string__int_to_string_1_f_0(OrigArity_27);
      Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "_", Suffix_26);
      Var_51 = mercury__string__f_43_43_2_f_0(Var_52, Var_53);
      Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_51);
      MainStr_29 = mercury__string__f_43_43_2_f_0(MangledName_28, Var_49);
      if ((MaybeDefiningModule_21 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_13 = MainStr_29;
      else
      {
        MR_Word DefiningModule_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_21, (MR_Integer) 0))));
        MR_String Var_55;
        MR_String Var_57;

        Var_57 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_30);
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "_in__", Var_57);
        Var_13 = mercury__string__f_43_43_2_f_0(MainStr_29, Var_55);
      }
    }
    Var_17 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_12);
    Var_16 = mercury__string__int_to_string_1_f_0(Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_16);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
    Var_7 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_9);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_6, Var_7);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
ml_backend__mlds_to_c_name__should_module_qualify_global_var_name_1_f_0(
  MR_Word GlobalVarName_3)
{
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
