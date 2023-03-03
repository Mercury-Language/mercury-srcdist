/*
** Automatically generated from `mlds_to_java_func.m'
** by the Mercury compiler,
** version rotd-2023-03-03
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


// :- module ml_backend.mlds_to_java_func.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_func__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_func.mih"


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
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_stmt.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static void MR_CALL 
ml_backend__mlds_to_java_func__output_param_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Arg_9,
  MR_Word Stream_10);

static void MR_CALL 
ml_backend__mlds_to_java_func__output_func_for_java_10_p_0(
  MR_Word Info_11,
  MR_Word Stream_12,
  MR_Integer Indent_13,
  MR_Word FuncName_14,
  MR_Word OutputAux_15,
  MR_Word Context_16,
  MR_Word Signature_17,
  MR_Word MaybeBody_18);

static void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box ml_backend__mlds_to_java_func_scalar_common_1[1][9];




static /* final */ const MR_Box ml_backend__mlds_to_java_func_scalar_common_1[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static void MR_CALL 
ml_backend__mlds_to_java_func__output_param_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Arg_9,
  MR_Word Stream_10)
{
  MR_Word VarName_12 = ((MR_Word) ((MR_hl_field(0, Arg_9, (MR_Integer) 0))));
  MR_Word Type_13 = ((MR_Word) ((MR_hl_field(0, Arg_9, (MR_Integer) 1))));

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_8);
  ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_13, Stream_10);
  mercury__io__write_char_4_p_0(Stream_10, (MR_Char) 32);
  ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_10, VarName_12);
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word OutputAux_11,
  MR_Word FunctionDefn_12)
{
  MR_Word Name_14;
  MR_Word Context_15;
  MR_Word Flags_16;
  MR_Word MaybePredProcId_17;
  MR_Word Params_18;
  MR_Word MaybeBody_19;
  MR_Word Var_74;

  mercury__io__nl_3_p_0(Stream_9);
  Name_14 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 0))));
  Context_15 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 1))));
  Flags_16 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 2))));
  MaybePredProcId_17 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 3))));
  Params_18 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 4))));
  MaybeBody_19 = ((MR_Word) ((MR_hl_field(0, FunctionDefn_12, (MR_Integer) 5))));
  Var_74 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  if ((MaybeBody_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_74, (MR_Integer) 2, Context_15, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "// external: ");
    ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(Stream_9, Name_14);
    mercury__io__nl_3_p_0(Stream_9);
  }
  else
  {
    MR_Word Access_77;
    MR_Word PerInstance_78;

    ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_74, (MR_Integer) 2, Context_15, Indent_10);
    Access_77 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    PerInstance_78 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Access_77) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private ");
        break;
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public ");
        break;
    }
    switch (PerInstance_78) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
    if (!((MaybePredProcId_17 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcid_23 = ((MR_Word) ((MR_hl_field(1, MaybePredProcId_17, (MR_Integer) 0))));
      MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);

      ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_5_p_0(Stream_9, Var_38, PredProcid_23);
    }
    ml_backend__mlds_to_java_func__output_func_for_java_10_p_0(Info_8, Stream_9, Indent_10, Name_14, OutputAux_11, Context_15, Params_18, MaybeBody_19);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_func__output_func_for_java_10_p_0(
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

  ml_backend__mlds_to_java_func__output_func_decl_for_java_8_p_0(Info_11, Stream_12, Indent_13, FuncName_14, OutputAux_15, Signature_17);
  mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
  if (!((MaybeBody_18 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Body_20 = ((MR_Word) ((MR_hl_field(1, MaybeBody_18, (MR_Integer) 0))));
    MR_Word FuncInfo_21 = (MR_Word) (Signature_17);

    succeeded = ((MR_tag((MR_Word) Body_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word _ExitMethods_26;

      ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_11, Stream_12, Indent_13, FuncInfo_21, Body_20, &_ExitMethods_26);
    }
    else
    {
      MR_Integer Var_35;
      MR_Word Var_38;
      MR_Word _ExitMethods_43;

      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "{\n");
      Var_35 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
      ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_11, Stream_12, Var_35, FuncInfo_21, Body_20, &_ExitMethods_43);
      Var_38 = ((((MR_Unsigned) ((MR_hl_field(0, Info_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_12, Var_38, (MR_Integer) 2, Context_16, Indent_13);
      mercury__io__write_string_4_p_0(Stream_12, (MR_String) "}\n");
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_func_decl_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Signature_14)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OutputAux_13)) == (MR_Integer) 1);
  MR_Word Parameters_16 = ((MR_Word) ((MR_hl_field(0, Signature_14, (MR_Integer) 0))));
  MR_Word RetTypes_17 = ((MR_Word) ((MR_hl_field(0, Signature_14, (MR_Integer) 1))));
  MR_String ClassName_18;
  MR_Integer ClassArity_19;
  MR_String Var_22;

  if (succeeded)
  {
    ClassName_18 = ((MR_String) ((MR_hl_field(1, OutputAux_13, (MR_Integer) 0))));
    ClassArity_19 = ((MR_Integer) ((MR_hl_field(1, OutputAux_13, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) FuncName_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_22 = ((MR_String) ((MR_hl_field(1, FuncName_12, (MR_Integer) 0))));
      succeeded = (strcmp(Var_22, (MR_String) "<constructor>") == 0);
    }
  }
  if (succeeded)
    ml_backend__mlds_to_java_name__output_class_name_arity_for_java_5_p_0(Stream_10, ClassName_18, ClassArity_19);
  else
  {
    if ((RetTypes_17 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "void");
    else
    {
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, RetTypes_17, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, RetTypes_17, (MR_Integer) 0))));

      if ((Var_35 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_9, Var_36, Stream_10);
      else
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "java.lang.Object []");
    }
    mercury__io__nl_3_p_0(Stream_10);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
    ml_backend__mlds_to_java_name__output_function_name_for_java_4_p_0(Stream_10, FuncName_12);
  }
  ml_backend__mlds_to_java_func__output_params_for_java_6_p_0(Info_9, Stream_10, Indent_11, Parameters_16);
}

static void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_param_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Parameters_10)
{
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
  if (!((Parameters_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Var_19;
    MR_Integer Var_22;

    mercury__io__nl_3_p_0(Stream_8);
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_java_func_scalar_common_1[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_java_func__output_params_for_java_6_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (Var_22));
    }
    parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_19, (MR_String) ",\n", Parameters_10, Stream_8);
  }
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
}

void mercury__ml_backend__mlds_to_java_func__init(void)
{
}

void mercury__ml_backend__mlds_to_java_func__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_func__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_func__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_func.
