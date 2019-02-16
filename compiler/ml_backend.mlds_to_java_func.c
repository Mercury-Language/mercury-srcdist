/*
** Automatically generated from `mlds_to_java_func.m'
** by the Mercury compiler,
** version rotd-2019-02-15
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
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_stmt.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
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




static void MR_CALL 
ml_backend__mlds_to_java_func__output_param_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8);

static void MR_CALL 
ml_backend__mlds_to_java_func__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6);

static void MR_CALL 
ml_backend__mlds_to_java_func__output_func_for_java_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16);

static void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_to_java_func_scalar_common_1[1][8];




static /* final */ const MR_Box ml_backend__mlds_to_java_func_scalar_common_1[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ml_backend__mlds_to_java_func__output_param_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Arg_8)
{
  {
    MR_Word VarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 0))));
    MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_8, (MR_Integer) 1))));

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_11);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(VarName_10);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_function_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word FunctionDefn_10)
{
  {
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 2))));
    MR_Word MaybePredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 3))));
    MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 4))));
    MR_Word MaybeBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 5))));
    MR_Word Var_73;

    mercury__io__nl_2_p_0();
    Var_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    if ((MaybeBody_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_73, (MR_Integer) 2, Context_13, Indent_8);
      mercury__io__write_string_3_p_0((MR_String) "// external: ");
      ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(Name_12);
      mercury__io__nl_2_p_0();
    }
    else
    {
      ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_73, (MR_Integer) 2, Context_13, Indent_8);
      ml_backend__mlds_to_java_func__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(Flags_14);
      if (!((MaybePredProcId_15 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word PredProcid_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_15, (MR_Integer) 0))));
        MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);

        ml_backend__mlds_to_target_util__maybe_output_pred_proc_id_comment_4_p_0(Var_29, PredProcid_21);
      }
      ml_backend__mlds_to_java_func__output_func_for_java_9_p_0(Info_7, Indent_8, Name_12, OutputAux_9, Context_13, Params_16, MaybeBody_17);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_func__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_102_117_110_99_116_105_111_110_95_100_101_99_108_95_102_108_97_103_115_95_102_111_114_95_106_97_118_97_95_95_91_49_93_95_48_4_p_0(
  MR_Word Flags_6)
{
  {
    MR_Word Access_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PerInstance_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_6, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Access_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    switch (PerInstance_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "static ");
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_func__output_func_for_java_9_p_0(
  MR_Word Info_10,
  MR_Integer Indent_11,
  MR_Word FuncName_12,
  MR_Word OutputAux_13,
  MR_Word Context_14,
  MR_Word Signature_15,
  MR_Word MaybeBody_16)
{
  {
    ml_backend__mlds_to_java_func__output_func_decl_for_java_7_p_0(Info_10, Indent_11, FuncName_12, OutputAux_13, Signature_15);
    mercury__io__write_string_3_p_0((MR_String) "\n");
    if (!((MaybeBody_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Body_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeBody_16, (MR_Integer) 0))));
      MR_Word FuncInfo_19;
      MR_Word Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Integer Var_31;
      MR_Word Var_34;
      MR_Word _ExitMethods_20;

      ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_26, (MR_Integer) 2, Context_14, Indent_11);
      mercury__io__write_string_3_p_0((MR_String) "{\n");
      FuncInfo_19 = (MR_Word) (Signature_15);
      Var_31 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) (MR_Integer) 1);
      ml_backend__mlds_to_java_stmt__output_statement_for_java_7_p_0(Info_10, Var_31, FuncInfo_19, Body_18, &_ExitMethods_20);
      Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_34, (MR_Integer) 2, Context_14, Indent_11);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_func_decl_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word FuncName_10,
  MR_Word OutputAux_11,
  MR_Word Signature_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) OutputAux_11)) == (MR_Integer) 1);
    MR_Word Parameters_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 0))));
    MR_Word RetTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_12, (MR_Integer) 1))));
    MR_String ClassName_16;
    MR_Integer ClassArity_17;
    MR_String Var_20;

    if (succeeded)
    {
      ClassName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 0))));
      ClassArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), OutputAux_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) FuncName_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), FuncName_10, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "<constructor>") == 0);
      }
    }
    if (succeeded)
      ml_backend__mlds_to_java_name__output_class_name_arity_for_java_4_p_0(ClassName_16, ClassArity_17);
    else
    {
      if ((RetTypes_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_3_p_0((MR_String) "void");
      }
      else
      {
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 1))));
        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_15, (MR_Integer) 0))));

        if ((Var_43 == (MR_Word) ((MR_Unsigned) 0U)))
          ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_8, Var_44);
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "java.lang.Object []");
        }
      }
      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
      ml_backend__mlds_to_java_name__output_function_name_for_java_3_p_0(FuncName_10);
    }
    ml_backend__mlds_to_java_func__output_params_for_java_5_p_0(Info_8, Indent_9, Parameters_14);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_func__output_param_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_func__output_params_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word Parameters_8)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if (!((Parameters_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_18;
      MR_Integer Var_20;

      mercury__io__nl_2_p_0();
      Var_20 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_func_scalar_common_1[0]));
        MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java_func__output_params_for_java_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_20));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_8, (MR_String) ",\n", Var_18);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
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
