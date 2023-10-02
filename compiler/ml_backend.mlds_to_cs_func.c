/*
** Automatically generated from `mlds_to_cs_func.m'
** by the Mercury compiler,
** version rotd-2023-10-02
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


// :- module ml_backend.mlds_to_cs_func.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_func__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_func.mih"


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
#include "term_context.mih"
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
#include "libs.indent.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_stmt.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
ml_backend__mlds_to_cs_func__param_to_string_for_csharp_3_f_0(
  MR_Word Info_5,
  MR_String IndentStr_6,
  MR_Word Arg_7);

static void MR_CALL 
ml_backend__mlds_to_cs_func__make_out_param_4_p_0(
  MR_Word Type_5,
  MR_Word * Argument_6,
  MR_Integer Num_7,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word FuncName_14,
  MR_Word OutputAux_15,
  MR_Word Context_16,
  MR_Word Signature_17,
  MR_Word MaybeBody_18);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ml_backend__mlds_to_cs_func_scalar_common_1[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_cs_func_scalar_common_2[1][3];




static /* final */ const MR_Box ml_backend__mlds_to_cs_func_scalar_common_1[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_func_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_func_scalar_common_1[1])),
    ((MR_Box) (ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_String MR_CALL 
ml_backend__mlds_to_cs_func__param_to_string_for_csharp_3_f_0(
  MR_Word Info_5,
  MR_String IndentStr_6,
  MR_Word Arg_7)
{
  MR_bool succeeded;
  MR_String Str_8;
  MR_Word VarName_9 = ((MR_Word) ((MR_hl_field(0, Arg_7, (MR_Integer) 0))));
  MR_Word Type_10 = ((MR_Word) ((MR_hl_field(0, Arg_7, (MR_Integer) 1))));
  MR_String TypeStr_12;
  MR_String VarNameStr_13;

  TypeStr_12 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_5, Type_10);
  VarNameStr_13 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(VarName_9);
  succeeded = ((((MR_tag((MR_Word) Type_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_10, (MR_Integer) 0)))) == (MR_Integer) 10)));
  if (succeeded)
  {
    MR_String Var_32;
    MR_String Var_33;
    MR_String Var_35;

    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", VarNameStr_13);
    Var_33 = mercury__string__f_43_43_2_f_0(TypeStr_12, Var_32);
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "out ", Var_33);
    Str_8 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_35);
  }
  else
  {
    MR_String Var_37;
    MR_String Var_38;

    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ", VarNameStr_13);
    Var_38 = mercury__string__f_43_43_2_f_0(TypeStr_12, Var_37);
    Str_8 = mercury__string__f_43_43_2_f_0(IndentStr_6, Var_38);
  }
  return Str_8;
}

static void MR_CALL 
ml_backend__mlds_to_cs_func__make_out_param_4_p_0(
  MR_Word Type_5,
  MR_Word * Argument_6,
  MR_Integer Num_7,
  MR_Integer * HeadVar__4_4)
{
  MR_Word VarName_8;
  MR_Word Var_10;
  MR_Word Var_11;

  *HeadVar__4_4 = (MR_Integer) ((MR_Unsigned) Num_7 + (MR_Unsigned) 1);
  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (Num_7));
  }
  {
    VarName_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VarName_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, VarName_8, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 10U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (Type_5));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Argument_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarName_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word OutputAux_11,
  MR_Word FunctionDefn_12)
{
  MR_String IndentStr_14;
  MR_Word FuncName_15;
  MR_Word Context_16;
  MR_Word Flags_17;
  MR_Word MaybePredProcId_18;
  MR_Word Params_19;
  MR_Word MaybeBody_20;
  MR_String PreStr_23;
  MR_String PostStr_24;
  MR_Word Access_27;
  MR_Word PerInstance_28;
  MR_String AccessPrefix_29;
  MR_String PerInstancePrefix_30;

  mercury__io__nl_3_p_0(Stream_9);
  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  FuncName_15 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 0))));
  Context_16 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 1))));
  Flags_17 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 2))));
  MaybePredProcId_18 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 3))));
  Params_19 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 4))));
  MaybeBody_20 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 5))));
  if ((MaybeBody_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PreStr_23 = mercury__string__f_43_43_2_f_0(IndentStr_14, (MR_String) "/* external:\n");
    PostStr_24 = mercury__string__f_43_43_2_f_0(IndentStr_14, (MR_String) "*/\n");
  }
  else
  {
    PreStr_23 = (MR_String) "";
    PostStr_24 = (MR_String) "";
  }
  mercury__io__write_string_4_p_0(Stream_9, PreStr_23);
  if (!((MaybePredProcId_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word PredProcId_26 = ((MR_Word) ((MR_hl_field(1, MaybePredProcId_18, (MR_Integer) 0))));
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);

    ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_6_p_0(Stream_9, Var_37, IndentStr_14, PredProcId_26);
  }
  Access_27 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  PerInstance_28 = ((MR_Unsigned) ((MR_hl_field(0, Flags_17, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      AccessPrefix_29 = (MR_String) "private ";
      break;
    case (MR_Integer) 0:
      AccessPrefix_29 = (MR_String) "public ";
      break;
  }
  switch (PerInstance_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PerInstancePrefix_30 = (MR_String) "static ";
      break;
    case (MR_Integer) 1:
      PerInstancePrefix_30 = (MR_String) "";
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, AccessPrefix_29);
  mercury__io__write_string_4_p_0(Stream_9, PerInstancePrefix_30);
  ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0(Info_8, Stream_9, Indent_10, FuncName_15, OutputAux_11, Context_16, Params_19, MaybeBody_20);
  mercury__io__write_string_4_p_0(Stream_9, PostStr_24);
}

static void MR_CALL 
ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Argument_6;
  MR_Integer conv0_HeadVar__4_4;

  ml_backend__mlds_to_cs_func__make_out_param_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Argument_6, ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_Argument_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
ml_backend__mlds_to_cs_func__output_func_for_csharp_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word FuncName_14,
  MR_Word OutputAux_15,
  MR_Word Context_16,
  MR_Word Signature_17,
  MR_Word MaybeBody_18)
{
  MR_bool succeeded;

  if (!((MaybeBody_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Body_20 = ((MR_Word) ((MR_hl_field(1, MaybeBody_18, (MR_Integer) 0))));
    MR_Word PrintLineNumbers_21 = ((((MR_Unsigned) ((MR_hl_field(0, Info_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_String IndentStr_22;
    MR_Word FuncInfo_23;
    MR_Integer Var_34;
    MR_Word Parameters_56;
    MR_Word RetTypes_57;
    MR_String ClassName_58;
    MR_Integer ClassArity_59;
    MR_String Var_67;
    MR_Word _ExitMethods_24;

    IndentStr_22 = libs__indent__indent2_string_1_f_0(Indent_13);
    Parameters_56 = ((MR_Word) ((MR_hl_field(0, Signature_17, (MR_Integer) 0))));
    RetTypes_57 = ((MR_Word) ((MR_hl_field(0, Signature_17, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) OutputAux_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      ClassName_58 = ((MR_String) ((MR_hl_field(1, OutputAux_15, (MR_Integer) 0))));
      ClassArity_59 = ((MR_Integer) ((MR_hl_field(1, OutputAux_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) FuncName_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_67 = ((MR_String) ((MR_hl_field(1, FuncName_14, (MR_Integer) 0))));
        succeeded = (strcmp(Var_67, (MR_String) "<constructor>") == 0);
      }
    }
    if (succeeded)
    {
      MR_String ClassNameStr_60;
      MR_String ParamsStr_61;

      ClassNameStr_60 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(ClassName_58, ClassArity_59);
      ParamsStr_61 = ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0(Info_11, Indent_13, Parameters_56);
      mercury__io__write_string_4_p_0(Stream_12, ClassNameStr_60);
      mercury__io__write_string_4_p_0(Stream_12, ParamsStr_61);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    }
    else
    {
      MR_String FuncNameStr_62;
      MR_String RetTypeStr_63;
      MR_Word OutParamTypes_64;
      MR_Word OutParams_65;
      MR_Word Var_70;
      MR_String ParamsStr_71;
      MR_Box conv2_Var_66;

      FuncNameStr_62 = ml_backend__mlds_to_cs_name__function_name_to_ll_string_for_csharp_1_f_0(FuncName_14);
      if ((RetTypes_57 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        RetTypeStr_63 = (MR_String) "void";
        OutParamTypes_64 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word RetType_84 = ((MR_Word) ((MR_hl_field(1, RetTypes_57, (MR_Integer) 0))));

        OutParamTypes_64 = ((MR_Word) ((MR_hl_field(1, RetTypes_57, (MR_Integer) 1))));
        RetTypeStr_63 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_11, RetType_84);
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_cs_func_scalar_common_2[0]), OutParamTypes_64, &OutParams_65, ((MR_Box) ((MR_Integer) 2)), &conv2_Var_66);
      Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_56, OutParams_65);
      ParamsStr_71 = ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0(Info_11, Indent_13, Var_70);
      mercury__io__write_string_4_p_0(Stream_12, RetTypeStr_63);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_12, FuncNameStr_62);
      mercury__io__write_string_4_p_0(Stream_12, ParamsStr_71);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    }
    ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_12, PrintLineNumbers_21, Context_16);
    mercury__io__write_string_4_p_0(Stream_12, IndentStr_22);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "{\n");
    FuncInfo_23 = (MR_Word) (Signature_17);
    Var_34 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_stmt__output_stmt_for_csharp_8_p_0(Info_11, Stream_12, Var_34, FuncInfo_23, Body_20, &_ExitMethods_24);
    ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_12, PrintLineNumbers_21, Context_16);
    mercury__io__write_string_4_p_0(Stream_12, IndentStr_22);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
    ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_12, PrintLineNumbers_21);
  }
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_8;

  conv0_Str_8 = ml_backend__mlds_to_cs_func__param_to_string_for_csharp_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_8));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0(
  MR_Word Info_5,
  MR_Integer Indent_6,
  MR_Word Params_7)
{
  MR_String Str_8;

  if ((Params_7 == (MR_Word) ((MR_Unsigned) 0U)))
    Str_8 = (MR_String) "()";
  else
  {
    MR_String Indent1Str_11;
    MR_Word ParamStrs_12;
    MR_String ParamsStr_13;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) Indent_6 + (MR_Unsigned) 1);
    MR_Word Var_16;
    MR_String Var_27;

    Indent1Str_11 = libs__indent__indent2_string_1_f_0(Var_14);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_func_scalar_common_1[0]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (ml_backend__mlds_to_cs_func__params_to_string_for_csharp_3_f_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (Info_5));
      MR_hl_field(0, Var_16, 4) = ((MR_Box) (Indent1Str_11));
    }
    ParamStrs_12 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Params_7);
    ParamsStr_13 = mercury__string__join_list_2_f_0((MR_String) ",\n", ParamStrs_12);
    Var_27 = mercury__string__f_43_43_2_f_0(ParamsStr_13, (MR_String) ")");
    Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "(\n", Var_27);
  }
  return Str_8;
}

void mercury__ml_backend__mlds_to_cs_func__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_func__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_func__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_func__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_func.
