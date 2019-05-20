/*
** Automatically generated from `mlds_to_c_name.m'
** by the Mercury compiler,
** version rotd-2019-05-20
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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




static void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_function_name_3_p_0(
  MR_Word FunctionName_4);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
ml_backend__mlds_to_c_name__output_qual_name_prefix_c_3_p_0(
  MR_Word ModuleName_4)
{
  {
    MR_Word SymName_6;
    MR_String MangledModuleName_7;

    SymName_6 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_4);
    MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_6);
    mercury__io__write_string_3_p_0(MangledModuleName_7);
    mercury__io__write_string_3_p_0((MR_String) "__");
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(
  MR_Word LocalVarName_4)
{
  {
    MR_String MangledLocalVarName_6;
    MR_String Var_9;

    Var_9 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_4);
    MangledLocalVarName_6 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_9);
    mercury__io__write_string_3_p_0(MangledLocalVarName_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_field_var_name_3_p_0(
  MR_Word QualFieldVarName_4)
{
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_4, (MR_Integer) 0))));
    MR_Word FieldVarName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_4, (MR_Integer) 2))));
    MR_Word SymName_17;
    MR_String MangledModuleName_18;
    MR_String MangledFieldVarName_26;
    MR_String Var_27;

    SymName_17 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
    MangledModuleName_18 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_17);
    mercury__io__write_string_3_p_0(MangledModuleName_18);
    mercury__io__write_string_3_p_0((MR_String) "__");
    Var_27 = ml_backend__mlds__ml_field_var_name_to_string_1_f_0(FieldVarName_8);
    MangledFieldVarName_26 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_27);
    mercury__io__write_string_3_p_0(MangledFieldVarName_26);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_class_name_arity_4_p_0(
  MR_String ClassName_5,
  MR_Integer Arity_6)
{
  {
    MR_String MangledClassName_8;

    MangledClassName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_5);
    mercury__io__write_string_3_p_0(MangledClassName_8);
    mercury__io__write_char_3_p_0((MR_Char) 95);
    mercury__io__write_int_3_p_0(Arity_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_proc_label_3_p_0(
  MR_Word QualProcLabel_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_4, (MR_Integer) 0))));
    MR_Word Name_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_4, (MR_Integer) 1))));
    MR_Word PredLabel_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_7, (MR_Integer) 0))));
    MR_Word PredLabel_31;
    MR_Integer ProcId_32;
    MR_Integer ModeNum_34;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_String Var_14;
    MR_Integer Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    succeeded = ((MR_tag((MR_Word) PredLabel_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 0))) & (MR_Integer) 1);
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 1))));
      Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 2))));
      Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 3))));
      Var_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
      Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_8, (MR_Integer) 4))) & (MR_Integer) 1);
      succeeded = (Var_12 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (strcmp(Var_14, (MR_String) "main") == 0);
          if (succeeded)
          {
            succeeded = (Var_15 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = (Var_16 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_17 == (MR_Integer) 0);
            }
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word SymName_24;
      MR_String MangledModuleName_25;

      SymName_24 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
      MangledModuleName_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_24);
      mercury__io__write_string_3_p_0(MangledModuleName_25);
      mercury__io__write_string_3_p_0((MR_String) "__");
    }
    PredLabel_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Name_7, (MR_Integer) 0))));
    ProcId_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Name_7, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) PredLabel_31)) == (MR_Integer) 1))
    {
      MR_String PredName_54 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_31, (MR_Integer) 0))));
      MR_Word MaybeTypeModule_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_31, (MR_Integer) 1))));
      MR_String TypeName_56 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_31, (MR_Integer) 2))));
      MR_Integer TypeArity_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_31, (MR_Integer) 3))));
      MR_String MangledPredName_58;
      MR_String MangledTypeName_59;

      MangledPredName_58 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_54);
      MangledTypeName_59 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_56);
      mercury__io__write_string_3_p_0(MangledPredName_58);
      mercury__io__write_string_3_p_0((MR_String) "__");
      if (!((MaybeTypeModule_55 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word TypeModule_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_55, (MR_Integer) 0))));
        MR_String MangledTypeModule_61;

        MangledTypeModule_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_60);
        mercury__io__write_string_3_p_0(MangledTypeModule_61);
        mercury__io__write_string_3_p_0((MR_String) "__");
      }
      mercury__io__write_string_3_p_0(MangledTypeName_59);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__io__write_int_3_p_0(TypeArity_57);
    }
    else
    {
      MR_Word PredOrFunc_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_31, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MaybeDefiningModule_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_31, (MR_Integer) 1))));
      MR_String Name_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_31, (MR_Integer) 2))));
      MR_Integer PredArity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_31, (MR_Integer) 3))));
      MR_String Suffix_49;
      MR_Integer OrigArity_50;
      MR_String MangledName_51;

      switch (PredOrFunc_43) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Suffix_49 = (MR_String) "f";
            OrigArity_50 = (MR_Integer) ((MR_Unsigned) PredArity_46 - (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            Suffix_49 = (MR_String) "p";
            OrigArity_50 = PredArity_46;
          }
          break;
      }
      MangledName_51 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_45);
      mercury__io__write_string_3_p_0(MangledName_51);
      mercury__io__write_char_3_p_0((MR_Char) 95);
      mercury__io__write_int_3_p_0(OrigArity_50);
      mercury__io__write_char_3_p_0((MR_Char) 95);
      mercury__io__write_string_3_p_0(Suffix_49);
      if (!((MaybeDefiningModule_44 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word DefiningModule_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_44, (MR_Integer) 0))));
        MR_String MangledDefiningModule_53;

        mercury__io__write_string_3_p_0((MR_String) "_in__");
        MangledDefiningModule_53 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_52);
        mercury__io__write_string_3_p_0(MangledDefiningModule_53);
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_32, &ModeNum_34);
    mercury__io__write_char_3_p_0((MR_Char) 95);
    mercury__io__write_int_3_p_0(ModeNum_34);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(
  MR_Word QualFuncName_4)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_4, (MR_Integer) 0))));
    MR_Word FuncName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncName_4, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) FuncName_7)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
    {
      MR_Word PlainFuncName_8 = (MR_Word) ((MR_Word) (FuncName_7));
      MR_Word FuncLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PlainFuncName_8, (MR_Integer) 0))));
      MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_9, (MR_Integer) 0))));
      MR_Word PredLabel_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_11, (MR_Integer) 0))));
      MR_Word Var_18;
      MR_Word Var_19;
      MR_String Var_20;
      MR_Integer Var_21;
      MR_Word Var_22;
      MR_Word Var_23;

      succeeded = ((MR_tag((MR_Word) PredLabel_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 0))) & (MR_Integer) 1);
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 1))));
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 2))));
        Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 3))));
        Var_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 4))) >> 1)) & (MR_Integer) 3);
        Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_13, (MR_Integer) 4))) & (MR_Integer) 1);
        succeeded = (Var_18 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (strcmp(Var_20, (MR_String) "main") == 0);
            if (succeeded)
            {
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
    if (!(succeeded))
    {
      MR_Word SymName_30;
      MR_String MangledModuleName_31;

      SymName_30 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_6);
      MangledModuleName_31 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_30);
      mercury__io__write_string_3_p_0(MangledModuleName_31);
      mercury__io__write_string_3_p_0((MR_String) "__");
    }
    ml_backend__mlds_to_c_name__mlds_output_function_name_3_p_0(FuncName_7);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_name__mlds_output_function_name_3_p_0(
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
    MR_String Var_22;

    if (((MR_tag((MR_Word) PredLabel_11)) == (MR_Integer) 1))
    {
      MR_String PredName_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 0))));
      MR_Word MaybeTypeModule_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 1))));
      MR_String TypeName_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 2))));
      MR_Integer TypeArity_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PredLabel_11, (MR_Integer) 3))));
      MR_String MangledPredName_43;
      MR_String MangledTypeName_44;

      MangledPredName_43 = parse_tree__prog_foreign__name_mangle_1_f_0(PredName_39);
      MangledTypeName_44 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_41);
      mercury__io__write_string_3_p_0(MangledPredName_43);
      mercury__io__write_string_3_p_0((MR_String) "__");
      if (!((MaybeTypeModule_40 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word TypeModule_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeModule_40, (MR_Integer) 0))));
        MR_String MangledTypeModule_46;

        MangledTypeModule_46 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_45);
        mercury__io__write_string_3_p_0(MangledTypeModule_46);
        mercury__io__write_string_3_p_0((MR_String) "__");
      }
      mercury__io__write_string_3_p_0(MangledTypeName_44);
      mercury__io__write_string_3_p_0((MR_String) "_");
      mercury__io__write_int_3_p_0(TypeArity_42);
    }
    else
    {
      MR_Word PredOrFunc_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word MaybeDefiningModule_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 1))));
      MR_String Name_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 2))));
      MR_Integer PredArity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredLabel_11, (MR_Integer) 3))));
      MR_String Suffix_34;
      MR_Integer OrigArity_35;
      MR_String MangledName_36;

      switch (PredOrFunc_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            Suffix_34 = (MR_String) "f";
            OrigArity_35 = (MR_Integer) ((MR_Unsigned) PredArity_31 - (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            Suffix_34 = (MR_String) "p";
            OrigArity_35 = PredArity_31;
          }
          break;
      }
      MangledName_36 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_30);
      mercury__io__write_string_3_p_0(MangledName_36);
      mercury__io__write_char_3_p_0((MR_Char) 95);
      mercury__io__write_int_3_p_0(OrigArity_35);
      mercury__io__write_char_3_p_0((MR_Char) 95);
      mercury__io__write_string_3_p_0(Suffix_34);
      if (!((MaybeDefiningModule_29 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word DefiningModule_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefiningModule_29, (MR_Integer) 0))));
        MR_String MangledDefiningModule_38;

        mercury__io__write_string_3_p_0((MR_String) "_in__");
        MangledDefiningModule_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(DefiningModule_37);
        mercury__io__write_string_3_p_0(MangledDefiningModule_38);
      }
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_12, &ModeNum_13);
    mercury__io__write_char_3_p_0((MR_Char) 95);
    mercury__io__write_int_3_p_0(ModeNum_13);
    Var_22 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_10);
    mercury__io__write_string_3_p_0(Var_22);
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
ml_backend__mlds_to_c_name__mlds_output_maybe_qualified_global_var_name_4_p_0(
  MR_Word ModuleName_5,
  MR_Word GlobalVarName_6)
{
  {
    switch (MR_tag((MR_Word) GlobalVarName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_24;
          MR_String MangledModuleName_25;

          SymName_24 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
          MangledModuleName_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_24);
          mercury__io__write_string_3_p_0(MangledModuleName_25);
          mercury__io__write_string_3_p_0((MR_String) "__");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_6, (MR_Integer) 0))));
          MR_Word ShouldModuleQual_57;

          ShouldModuleQual_57 = backend_libs__rtti__module_qualify_name_of_rtti_id_1_f_0(RttiId_15);
          switch (ShouldModuleQual_57) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word SymName_49;
                MR_String MangledModuleName_50;

                SymName_49 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_5);
                MangledModuleName_50 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(SymName_49);
                mercury__io__write_string_3_p_0(MangledModuleName_50);
                mercury__io__write_string_3_p_0((MR_String) "__");
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
    switch (MR_tag((MR_Word) GlobalVarName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "dummy_var");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RttiId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GlobalVarName_6, (MR_Integer) 0))));
          MR_String RttiAddrName_37;

          backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_36, &RttiAddrName_37);
          mercury__io__write_string_3_p_0(RttiAddrName_37);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ProcLabel_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_6, (MR_Integer) 0))));
          MR_Word TablingId_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GlobalVarName_6, (MR_Integer) 1))));
          MR_String Var_42;

          Var_42 = ml_backend__mlds_to_c_name__mlds_tabling_data_name_2_f_0(ProcLabel_38, TablingId_39);
          mercury__io__write_string_3_p_0(Var_42);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ConstVar_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GlobalVarName_6, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Integer Num_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GlobalVarName_6, (MR_Integer) 1))));
          MR_String MangledGlobalVarName_35;
          MR_String Var_45;

          Var_45 = ml_backend__mlds__ml_global_const_var_name_to_string_2_f_0(ConstVar_33, Num_34);
          MangledGlobalVarName_35 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_45);
          mercury__io__write_string_3_p_0(MangledGlobalVarName_35);
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
            OrigArity_27 = (MR_Integer) ((MR_Unsigned) PredArity_23 - (MR_Unsigned) (MR_Integer) 1);
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
