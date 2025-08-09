/*
** Automatically generated from `mlds_to_cs_stmt.m'
** by the Mercury compiler,
** version rotd-2025-08-09
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


// :- module ml_backend.mlds_to_cs_stmt.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_stmt__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_stmt.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_func.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__533__1_1_f_0(
  MR_Word LambdaHeadVar__1_48);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TargetCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_assign_out_params_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word Rval_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word Context_5,
  MR_Word HeadVar__6_6,
  MR_Word Default_7,
  MR_Word * ExitMethods_8);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_Word Context_14,
  MR_Word Default_15,
  MR_Word * ExitMethods_16);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word HeadVar__5_5,
  MR_Word * ExitMethods_6);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Context_11,
  MR_Word Match_12);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word AtomicStmt_11,
  MR_Word Context_12);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12);

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);


static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_3[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_5[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_6[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_7[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_8[1][11];




static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_cs_stmt_scalar_common_1[0])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_output_aux_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_7[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_6[0])),
    ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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


static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__533__1_1_f_0(
  MR_Word LambdaHeadVar__1_48)
{
  MR_Word LambdaHeadVar__2_49;

  {
    LambdaHeadVar__2_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_49, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, LambdaHeadVar__2_49, 1) = ((MR_Box) (LambdaHeadVar__1_48));
  }
  return LambdaHeadVar__2_49;
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TargetCode_8)
{
  switch (MR_tag((MR_Word) TargetCode_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_17 = (MR_Word) ((MR_Word) (TargetCode_8));
        MR_String FuncNameStr_18;

        FuncNameStr_18 = ml_backend__mlds_to_cs_name__maybe_qualified_function_name_to_ll_string_for_csharp_2_f_0(Info_6, FuncName_17);
        mercury__io__write_string_4_p_0(Stream_7, FuncNameStr_18);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(1, TargetCode_8, 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(1, TargetCode_8, 1))));
        MR_Word ForeignLineNumbers_12 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, 1))) & (MR_Integer) 1);

        ml_backend__mlds_to_cs_util__output_pragma_warning_restore_3_p_0(Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "{\n");
        if (!((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ProgContext_13 = ((MR_Word) ((MR_hl_field(1, MaybeUserContext_11, 0))));

          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_7, ForeignLineNumbers_12, ProgContext_13);
        }
        mercury__io__write_string_4_p_0(Stream_7, CodeString_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n");
        ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_7, ForeignLineNumbers_12);
        ml_backend__mlds_to_cs_util__output_pragma_warning_disable_3_p_0(Stream_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_41 = ((MR_String) ((MR_hl_field(2, TargetCode_8, 0))));

        mercury__io__write_string_4_p_0(Stream_7, CodeString_41);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetCode_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, 1))));

            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_14, Stream_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_15 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, 1))));

            ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_6, Lval_15, Stream_7);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_16 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, 1))));
            MR_String Var_36;

            Var_36 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_6, Type_16);
            mercury__io__write_string_4_p_0(Stream_7, Var_36);
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_target_code_component_for_csharp\'/5", (MR_String) "target_code_alloc_id not implemented");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_assign_out_params_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word Rval_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6)
{
  MR_String IndentStr_15;
  MR_String Var_32;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Num_13 + (MR_Unsigned) 1);
  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_11);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "out_param_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_2[0]), Num_13, &Var_32);
  mercury__io__write_string_4_p_0(Stream_10, Var_32);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Rval_12, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word LocalVarDefn_10)
{
  MR_Word LocalVarName_12 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, 0))));
  MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, 2))));
  MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, 3))));
  MR_String IndentStr_17;
  MR_String TypeStr_18;
  MR_String LocalVarNameStr_19;
  MR_Unsigned Var_32;

  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_9);
  TypeStr_18 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_7, Type_14);
  LocalVarNameStr_19 = ml_backend__mlds_to_cs_name__local_var_name_to_ll_string_for_csharp_1_f_0(LocalVarName_12);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_8, TypeStr_18);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_19);
  Var_32 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 8U), Var_32, Type_14, Initializer_15, (MR_String) ";");
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_stmt_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Stmt_13,
  MR_Word * ExitMethods_14)
{
  ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, Indent_11, Stmt_13, ExitMethods_14);
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word Context_5,
  MR_Word HeadVar__6_6,
  MR_Word Default_7,
  MR_Word * ExitMethods_8)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(Info_1, Stream_2, Indent_3, Context_5, Default_7, ExitMethods_8);
  else
  {
    MR_Word Case_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word CaseExitMethods0_32;
    MR_Word CasesExitMethods_33;
    MR_Word CaseExitMethods_34;
    MR_Word FirstCond_46 = ((MR_Word) ((MR_hl_field(0, Case_27, 0))));
    MR_Word LaterConds_47 = ((MR_Word) ((MR_hl_field(0, Case_27, 1))));
    MR_Word Statement_48 = ((MR_Word) ((MR_hl_field(0, Case_27, 2))));
    MR_Word StmtExitMethods_49;
    MR_Word Var_53;
    MR_Unsigned Var_55;
    MR_Box conv0_STATE_VARIABLE_IO_2_54;

    ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(Info_1, Stream_2, Indent_3, Context_5, FirstCond_46);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_5[1]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (Info_1));
      MR_hl_field(0, Var_53, 4) = ((MR_Box) (Stream_2));
      MR_hl_field(0, Var_53, 5) = ((MR_Box) (Indent_3));
      MR_hl_field(0, Var_53, 6) = ((MR_Box) (Context_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, LaterConds_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_54);
    Var_55 = (Indent_3 + (MR_Unsigned) 1U);
    ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_1, Stream_2, Var_55, Statement_48, &StmtExitMethods_49);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_49);
    if (succeeded)
    {
      MR_Word LineNumbers_50 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, 1))) >> 1)) & (MR_Integer) 1);
      MR_String Indent1Str_51;
      MR_Unsigned Var_59 = (Indent_3 + (MR_Unsigned) 1U);
      MR_Word Var_62;

      Indent1Str_51 = libs__indent__indent2_string_1_f_0(Var_59);
      ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_2, LineNumbers_50, Context_5);
      mercury__io__write_string_4_p_0(Stream_2, Indent1Str_51);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "break;\n");
      Var_62 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_49, ((MR_Box) ((MR_Integer) 0)));
      CaseExitMethods0_32 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_62, ((MR_Box) ((MR_Integer) 4)));
    }
    else
      CaseExitMethods0_32 = StmtExitMethods_49;
    ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(Info_1, Stream_2, Indent_3, Context_5, Cases_28, Default_7, &CasesExitMethods_33);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_32);
    if (succeeded)
    {
      MR_Word Var_40;

      Var_40 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods0_32, ((MR_Box) ((MR_Integer) 0)));
      CaseExitMethods_34 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_40, ((MR_Box) ((MR_Integer) 4)));
    }
    else
      CaseExitMethods_34 = CaseExitMethods0_32;
    *ExitMethods_8 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods_34, CasesExitMethods_33);
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_Word Context_14,
  MR_Word Default_15,
  MR_Word * ExitMethods_16)
{
  switch (MR_tag((MR_Word) Default_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LineNumbers_51 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_52;

            IndentStr_52 = libs__indent__indent2_string_1_f_0(Indent_12);
            mercury__io__write_string_4_p_0(Stream_11, IndentStr_52);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default: /*NOTREACHED*/\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_11, LineNumbers_51, Context_14);
            mercury__io__write_string_4_p_0(Stream_11, IndentStr_52);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "  throw new runtime.UnreachableDefault();\n");
            *ExitMethods_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 1:
          *ExitMethods_16 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Statement_18 = ((MR_Word) ((MR_hl_field(1, Default_15, 0))));
        MR_Word LineNumbers_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, 1))) >> 1)) & (MR_Integer) 1);
        MR_String IndentStr_20;
        MR_Unsigned Var_30;

        IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_12);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_11, LineNumbers_19, Context_14);
        mercury__io__write_string_4_p_0(Stream_11, IndentStr_20);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default:\n");
        Var_30 = (Indent_12 + (MR_Unsigned) 1U);
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_10, Stream_11, Var_30, Statement_18, ExitMethods_16);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_11, LineNumbers_19, Context_14);
        mercury__io__write_string_4_p_0(Stream_11, IndentStr_20);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "break;\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word HeadVar__5_5,
  MR_Word * ExitMethods_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *ExitMethods_6 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
  else
  {
    MR_Word Stmt_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word Stmts_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word StmtExitMethods_26;

    ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_1, Stream_2, Indent_3, Stmt_22, &StmtExitMethods_26);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_26);
    if (succeeded)
    {
      MR_Word StmtsExitMethods_27;
      MR_Word ExitMethods0_28;

      ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_1, Stream_2, Indent_3, Stmts_23, &StmtsExitMethods_27);
      ExitMethods0_28 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_26, StmtsExitMethods_27);
      succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtsExitMethods_27);
      if (succeeded)
        *ExitMethods_6 = ExitMethods0_28;
      else
        *ExitMethods_6 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_28, ((MR_Box) ((MR_Integer) 4)));
    }
    else
      *ExitMethods_6 = StmtExitMethods_26;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv3_HeadVar__6_6;

  ml_backend__mlds_to_cs_stmt__output_assign_out_params_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__6_6));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_49;

  conv2_LambdaHeadVar__2_49 = ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__533__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_49));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Unsigned Indent_11,
  MR_Word Stmt_13,
  MR_Word * ExitMethods_14)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Stmt_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_76 = ((MR_Word) ((MR_hl_field(0, Stmt_13, 0))));
        MR_Word FuncDefns_77 = ((MR_Word) ((MR_hl_field(0, Stmt_13, 1))));
        MR_Word Stmts_78 = ((MR_Word) ((MR_hl_field(0, Stmt_13, 2))));
        MR_Word Context_79 = ((MR_Word) ((MR_hl_field(0, Stmt_13, 3))));
        MR_Unsigned BlockIndent_80 = (Indent_11 + (MR_Unsigned) 1U);
        MR_Word LineNumbers_81 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
        MR_String BraceIndentStr_82;

        BraceIndentStr_82 = libs__indent__indent2_string_1_f_0(Indent_11);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_81, Context_79);
        mercury__io__write_string_4_p_0(Stream_10, BraceIndentStr_82);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
        if (!((LocalVarDefns_76 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_86;
          MR_Box conv0_STATE_VARIABLE_IO_3_87;

          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_4[0]));
            MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1));
            MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_86, 3) = ((MR_Box) (Info_9));
            MR_hl_field(0, Var_86, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(0, Var_86, 5) = ((MR_Box) (BlockIndent_80));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, LocalVarDefns_76, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_3_87);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        if (!((FuncDefns_77 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_90;
          MR_Box conv1_STATE_VARIABLE_IO_5_91;

          {
            Var_90 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_90, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_5[0]));
            MR_hl_field(0, Var_90, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_2));
            MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_90, 3) = ((MR_Box) (Info_9));
            MR_hl_field(0, Var_90, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(0, Var_90, 5) = ((MR_Box) (BlockIndent_80));
            MR_hl_field(0, Var_90, 6) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, FuncDefns_77, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_5_91);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, BlockIndent_80, Stmts_78, ExitMethods_14);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_81, Context_79);
        mercury__io__write_string_4_p_0(Stream_10, BraceIndentStr_82);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_490 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_13, 0))) & (MR_Integer) 1);
        MR_Word Cond_491 = ((MR_Word) ((MR_hl_field(1, Stmt_13, 1))));
        MR_Word BodyStmt_492 = ((MR_Word) ((MR_hl_field(1, Stmt_13, 2))));
        MR_Word Context_494 = ((MR_Word) ((MR_hl_field(1, Stmt_13, 4))));
        MR_Word LineNumbers_495 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
        MR_Unsigned ScopeIndent_496;
        MR_String IndentStr_497;

        ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_492, Indent_11, &ScopeIndent_496);
        IndentStr_497 = libs__indent__indent2_string_1_f_0(Indent_11);
        switch (Kind_490) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word BodyInfo_543;
              MR_Word StmtExitMethods_544;
              MR_Word Var_564 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
              MR_Word Var_568 = ((MR_Word) ((MR_hl_field(0, Info_9, 2))));
              MR_String Var_569 = ((MR_String) ((MR_hl_field(0, Info_9, 3))));
              MR_Word Var_570 = ((MR_Word) ((MR_hl_field(0, Info_9, 4))));
              MR_Word Var_571 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 5))) >> 2)) & (MR_Integer) 1);
              MR_Word Var_573 = ((MR_Word) ((MR_hl_field(0, Info_9, 6))));
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Info_9, 1)));

              {
                BodyInfo_543 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BodyInfo_543, 0) = ((MR_Box) (Var_564));
                MR_hl_field(0, BodyInfo_543, 1) = (MR_Box) (packed_word_3);
                MR_hl_field(0, BodyInfo_543, 2) = ((MR_Box) (Var_568));
                MR_hl_field(0, BodyInfo_543, 3) = ((MR_Box) (Var_569));
                MR_hl_field(0, BodyInfo_543, 4) = ((MR_Box) (Var_570));
                MR_hl_field(0, BodyInfo_543, 5) = (MR_Box) (((((MR_Unsigned) (Var_571) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(0, BodyInfo_543, 6) = ((MR_Box) (Var_573));
              }
              ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_495, Context_494);
              mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "do\n");
              ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(BodyInfo_543, Stream_10, ScopeIndent_496, BodyStmt_492, &StmtExitMethods_544);
              ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_495, Context_494);
              mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_491, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
              *ExitMethods_14 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_491, StmtExitMethods_544);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_509;

              ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_495, Context_494);
              mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_491, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
              succeeded = ((((MR_tag((MR_Word) Cond_491)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_491, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_509 = ((MR_Word) ((MR_hl_field(3, Cond_491, 1))));
                succeeded = (Var_509 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_495, Context_494);
                mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
                mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "  /* Unreachable code */\n");
                mercury__io__write_string_4_p_0(Stream_10, IndentStr_497);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
                *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
              }
              else
              {
                MR_Word BodyInfo_498;
                MR_Word StmtExitMethods_499;
                MR_Word Var_554 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
                MR_Word Var_558 = ((MR_Word) ((MR_hl_field(0, Info_9, 2))));
                MR_String Var_559 = ((MR_String) ((MR_hl_field(0, Info_9, 3))));
                MR_Word Var_560 = ((MR_Word) ((MR_hl_field(0, Info_9, 4))));
                MR_Word Var_561 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 5))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_563 = ((MR_Word) ((MR_hl_field(0, Info_9, 6))));
                MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, Info_9, 1)));

                {
                  BodyInfo_498 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BodyInfo_498, 0) = ((MR_Box) (Var_554));
                  MR_hl_field(0, BodyInfo_498, 1) = (MR_Box) (packed_word_4);
                  MR_hl_field(0, BodyInfo_498, 2) = ((MR_Box) (Var_558));
                  MR_hl_field(0, BodyInfo_498, 3) = ((MR_Box) (Var_559));
                  MR_hl_field(0, BodyInfo_498, 4) = ((MR_Box) (Var_560));
                  MR_hl_field(0, BodyInfo_498, 5) = (MR_Box) (((((MR_Unsigned) (Var_561) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(0, BodyInfo_498, 6) = ((MR_Box) (Var_563));
                }
                ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(BodyInfo_498, Stream_10, ScopeIndent_496, BodyStmt_492, &StmtExitMethods_499);
                *ExitMethods_14 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_491, StmtExitMethods_499);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_276 = ((MR_Word) ((MR_hl_field(2, Stmt_13, 0))));
        MR_Word Then0_277 = ((MR_Word) ((MR_hl_field(2, Stmt_13, 1))));
        MR_Word MaybeElse_278 = ((MR_Word) ((MR_hl_field(2, Stmt_13, 2))));
        MR_Word Context_279 = ((MR_Word) ((MR_hl_field(2, Stmt_13, 3))));
        MR_Word LineNumbers_280 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
        MR_String IndentStr_281;
        MR_Word Then_286;
        MR_Unsigned ThenScopeIndent_287;
        MR_Word ThenExitMethods_288;
        MR_Word ThenContext_285;
        MR_Word Var_292;

        IndentStr_281 = libs__indent__indent2_string_1_f_0(Indent_11);
        succeeded = (MaybeElse_278 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Then0_277)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_292 = ((MR_Word) ((MR_hl_field(2, Then0_277, 2))));
            ThenContext_285 = ((MR_Word) ((MR_hl_field(2, Then0_277, 3))));
            succeeded = (Var_292 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_295;

          {
            Var_295 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_295, 0) = ((MR_Box) (Then0_277));
            MR_hl_field(1, Var_295, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Then_286 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Then_286, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_286, 2) = ((MR_Box) (Var_295));
            MR_hl_field(0, Then_286, 3) = ((MR_Box) (ThenContext_285));
          }
        }
        else
          Then_286 = Then0_277;
        ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_286, Indent_11, &ThenScopeIndent_287);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_280, Context_279);
        mercury__io__write_string_4_p_0(Stream_10, IndentStr_281);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "if (");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_276, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, ThenScopeIndent_287, Then_286, &ThenExitMethods_288);
        if ((MaybeElse_278 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExitMethods_14 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_288, ((MR_Box) ((MR_Integer) 4)));
        else
        {
          MR_Word Else_289 = ((MR_Word) ((MR_hl_field(1, MaybeElse_278, 0))));
          MR_Unsigned ElseScopeIndent_290;
          MR_Word ElseExitMethods_291;

          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_289, Indent_11, &ElseScopeIndent_290);
          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_280, Context_279);
          mercury__io__write_string_4_p_0(Stream_10, IndentStr_281);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "else\n");
          ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, ElseScopeIndent_290, Else_289, &ElseExitMethods_291);
          *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_288, ElseExitMethods_291);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt_13, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Val_363 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word Cases_365 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 4))));
            MR_Word Default_366 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 5))));
            MR_Word Context_367 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 6))));
            MR_Word LineNumbers_368 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_369;
            MR_Word CaseInfo_370;
            MR_Unsigned Var_381;
            MR_Word Var_398;
            MR_Word Var_402;
            MR_String Var_403;
            MR_Word Var_404;
            MR_Word Var_405;
            MR_Word Var_407;
            MR_Unsigned packed_word_1;

            IndentStr_369 = libs__indent__indent2_string_1_f_0(Indent_11);
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_368, Context_367);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_369);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "switch (");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Val_363, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") {\n");
            Var_398 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
            packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Info_9, 1)));
            Var_402 = ((MR_Word) ((MR_hl_field(0, Info_9, 2))));
            Var_403 = ((MR_String) ((MR_hl_field(0, Info_9, 3))));
            Var_404 = ((MR_Word) ((MR_hl_field(0, Info_9, 4))));
            Var_405 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 5))) >> 2)) & (MR_Integer) 1);
            Var_407 = ((MR_Word) ((MR_hl_field(0, Info_9, 6))));
            {
              CaseInfo_370 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CaseInfo_370, 0) = ((MR_Box) (Var_398));
              MR_hl_field(0, CaseInfo_370, 1) = (MR_Box) (packed_word_1);
              MR_hl_field(0, CaseInfo_370, 2) = ((MR_Box) (Var_402));
              MR_hl_field(0, CaseInfo_370, 3) = ((MR_Box) (Var_403));
              MR_hl_field(0, CaseInfo_370, 4) = ((MR_Box) (Var_404));
              MR_hl_field(0, CaseInfo_370, 5) = (MR_Box) (((((MR_Unsigned) (Var_405) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(0, CaseInfo_370, 6) = ((MR_Box) (Var_407));
            }
            Var_381 = (Indent_11 + (MR_Unsigned) 1U);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(CaseInfo_370, Stream_10, Var_381, Context_367, Cases_365, Default_366, ExitMethods_14);
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_368, Context_367);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_369);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_for_csharp\'/8", (MR_String) "labels not supported in C#.");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_209 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 1))));
            MR_Word Context_210 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word LineNumbers_211 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_212;

            IndentStr_212 = libs__indent__indent2_string_1_f_0(Indent_11);
            switch (MR_tag((MR_Word) Target_209)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Target_209)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word BreakContext_214 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, 5))) & (MR_Integer) 3);

                      switch (BreakContext_214) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/8", (MR_String) "goto_break_switch not in switch");
                            return;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_211, Context_210);
                            mercury__io__write_string_4_p_0(Stream_10, IndentStr_212);
                            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
                            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word BreakContext_239 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, 5))) & (MR_Integer) 3);

                      switch (BreakContext_239) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_211, Context_210);
                            mercury__io__write_string_4_p_0(Stream_10, IndentStr_212);
                            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
                            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                          }
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/8", (MR_String) "goto_break_loop not in loop");
                            return;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_211, Context_210);
                      mercury__io__write_string_4_p_0(Stream_10, IndentStr_212);
                      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "continue;\n");
                      *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 1)));
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_goto_for_csharp\'/8", (MR_String) "gotos not supported in C#.");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_stmt_for_csharp\'/8", (MR_String) "computed gotos not supported in C#.");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Signature_114 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 1))));
            MR_Word FuncRval_115 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word CallArgs_116 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 3))));
            MR_Word Results_117 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 4))));
            MR_Word IsTailCall_118 = ((MR_Unsigned) ((MR_hl_field(3, Stmt_13, 5))) & (MR_Integer) 3);
            MR_Word Context_119 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 6))));
            MR_Word ArgTypes_120 = ((MR_Word) ((MR_hl_field(0, Signature_114, 0))));
            MR_Word RetTypes_121 = ((MR_Word) ((MR_hl_field(0, Signature_114, 1))));
            MR_Word LineNumbers_122 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_123;
            MR_String Indent1Str_124;
            MR_Word OutArgs_125;
            MR_Unsigned Var_130;
            MR_Word Var_146;
            MR_Word Var_148;
            MR_Word Var_139;

            IndentStr_123 = libs__indent__indent2_string_1_f_0(Indent_11);
            Var_130 = (Indent_11 + (MR_Unsigned) 1U);
            Indent1Str_124 = libs__indent__indent2_string_1_f_0(Var_130);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_123);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_122, Context_119);
            mercury__io__write_string_4_p_0(Stream_10, Indent1Str_124);
            if ((Results_117 == (MR_Word) ((MR_Unsigned) 0U)))
              OutArgs_125 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Lval_126 = ((MR_Word) ((MR_hl_field(1, Results_117, 0))));
              MR_Word Lvals_127 = ((MR_Word) ((MR_hl_field(1, Results_117, 1))));

              ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_9, Lval_126, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
              OutArgs_125 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_7[0]), Lvals_127);
            }
            succeeded = ((((MR_tag((MR_Word) FuncRval_115)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_115, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_139 = ((MR_Word) ((MR_hl_field(3, FuncRval_115, 1))));
              succeeded = ((MR_tag((MR_Word) Var_139)) == (MR_Integer) 1);
            }
            if (succeeded)
              ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_5_p_0(Info_9, FuncRval_115, Stream_10);
            else
            {
              MR_String PtrTypeName_129;

              PtrTypeName_129 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_9, ArgTypes_120, RetTypes_121);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
              mercury__io__write_string_4_p_0(Stream_10, PtrTypeName_129);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
              ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_5_p_0(Info_9, FuncRval_115, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
            {
              Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_146, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[1]));
              MR_hl_field(0, Var_146, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_4));
              MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_146, 3) = ((MR_Box) (Info_9));
            }
            Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_116, OutArgs_125);
            parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_146, (MR_String) ", ", Var_148, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
            switch (IsTailCall_118) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_122, Context_119);
                  mercury__io__write_string_4_p_0(Stream_10, Indent1Str_124);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "throw new runtime.UnreachableDefault();\n");
                }
                break;
              case (MR_Integer) 2:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
            }
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_122, Context_119);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_123);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Results_329 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 1))));
            MR_Word Context_330 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word LineNumbers_331 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_332;

            IndentStr_332 = libs__indent__indent2_string_1_f_0(Indent_11);
            if ((Results_329 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_331, Context_330);
              mercury__io__write_string_4_p_0(Stream_10, IndentStr_332);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return;\n");
            }
            else
            {
              MR_Word Rval_333 = ((MR_Word) ((MR_hl_field(1, Results_329, 0))));
              MR_Word Rvals_334 = ((MR_Word) ((MR_hl_field(1, Results_329, 1))));
              MR_Word Var_337;
              MR_Box conv5_Var_335;
              MR_Box conv4_STATE_VARIABLE_IO_3_339;

              {
                Var_337 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_337, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_8[0]));
                MR_hl_field(0, Var_337, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_5));
                MR_hl_field(0, Var_337, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_337, 3) = ((MR_Box) (Info_9));
                MR_hl_field(0, Var_337, 4) = ((MR_Box) (Stream_10));
                MR_hl_field(0, Var_337, 5) = ((MR_Box) (Indent_11));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_337, Rvals_334, ((MR_Box) ((MR_Integer) 2)), &conv5_Var_335, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_3_339);
              ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_331, Context_330);
              mercury__io__write_string_4_p_0(Stream_10, IndentStr_332);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Rval_333, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            }
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt_413 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word HandlerStmt_414 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 3))));
            MR_Word Context_415 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 4))));
            MR_Word LineNumbers_416 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_417;
            MR_Word TryExitMethods0_418;
            MR_Word CatchExitMethods_419;
            MR_Unsigned Var_431;
            MR_Unsigned Var_456;
            MR_Word Var_464;

            IndentStr_417 = libs__indent__indent2_string_1_f_0(Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "try\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_416, Context_415);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_431 = (Indent_11 + (MR_Unsigned) 1U);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, Var_431, BodyStmt_413, &TryExitMethods0_418);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_416, Context_415);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "catch (runtime.Commit commit_variable)\n");
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_416, Context_415);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "  ");
            Var_456 = (Indent_11 + (MR_Unsigned) 1U);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, Var_456, HandlerStmt_414, &CatchExitMethods_419);
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_416, Context_415);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_417);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            Var_464 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_418, ((MR_Box) ((MR_Integer) 3)));
            *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_464, CatchExitMethods_419);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref_179 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 1))));
            MR_Word Context_180 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));
            MR_Word LineNumbers_181 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, 1))) >> 1)) & (MR_Integer) 1);
            MR_String IndentStr_182;

            IndentStr_182 = libs__indent__indent2_string_1_f_0(Indent_11);
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_181, Context_180);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_182);
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Ref_179, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = new runtime.Commit();\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_10, LineNumbers_181, Context_180);
            mercury__io__write_string_4_p_0(Stream_10, IndentStr_182);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "throw ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Ref_179, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStatement_56 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 1))));
            MR_Word Context_57 = ((MR_Word) ((MR_hl_field(3, Stmt_13, 2))));

            ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0(Info_9, Stream_10, Indent_11, AtomicStatement_56, Context_57);
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Context_11,
  MR_Word Match_12)
{
  if (((MR_tag((MR_Word) Match_12)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_case_cond_for_csharp\'/7", (MR_String) "cannot match ranges in C# cases");
      return;
    }
  else
  {
    MR_Word Val_14 = ((MR_Word) ((MR_hl_field(0, Match_12, 0))));
    MR_Word LineNumbers_15 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) >> 1)) & (MR_Integer) 1);
    MR_String IndentStr_16;

    IndentStr_16 = libs__indent__indent2_string_1_f_0(Indent_10);
    ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, LineNumbers_15, Context_11);
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_16);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Val_14, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word AtomicStmt_11,
  MR_Word Context_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) AtomicStmt_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "gc_check not implemented.");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Comment_14 = ((MR_String) ((MR_hl_field(1, AtomicStmt_11, 0))));

        succeeded = (strcmp(Comment_14, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__nl_3_p_0(Stream_9);
        else
        {
          MR_String IndentStr_15;

          IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__io__write_string_4_p_0(Stream_9, Comment_14);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_16 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_11, 0))));
        MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_11, 1))));
        MR_Word LineNumbers_18 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) >> 1)) & (MR_Integer) 1);
        MR_String IndentStr_151;

        IndentStr_151 = libs__indent__indent2_string_1_f_0(Indent_10);
        ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, LineNumbers_18, Context_12);
        mercury__io__write_string_4_p_0(Stream_9, IndentStr_151);
        ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_8, Lval_16, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Rval_17, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_11, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "assign_if_in_heap");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "delete_object not supported in C#.");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_22 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, 1))));
            MR_Word ExplicitSecTag_24 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_11, 3))) & (MR_Integer) 1);
            MR_Word Type_25 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, 4))));
            MR_Word MaybeCtorName_27 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, 6))));
            MR_Word ArgRvalsTypes_28 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, 7))));
            MR_String Indent2Str_31;
            MR_String TypeStr0_32;
            MR_Word ArrayDims_33;
            MR_String TypeStr_34;
            MR_String LParen_46;
            MR_String RParen_47;
            MR_Unsigned Var_83;
            MR_String IndentStr_152;
            MR_Word LineNumbers_153;
            MR_Word QualCtorId_35;
            MR_Word MerType_36;
            MR_Word CtorCat_37;
            MR_String Var_38;
            MR_Word Var_39;

            switch (ExplicitSecTag_24) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "explicit secondary tag");
                  return;
                }
                break;
            }
            LineNumbers_153 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, 1))) >> 1)) & (MR_Integer) 1);
            IndentStr_152 = libs__indent__indent2_string_1_f_0(Indent_10);
            Var_83 = (Indent_10 + (MR_Unsigned) 1U);
            Indent2Str_31 = libs__indent__indent2_string_1_f_0(Var_83);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_152);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, LineNumbers_153, Context_12);
            mercury__io__write_string_4_p_0(Stream_9, Indent2Str_31);
            ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_8, Target_22, Stream_9);
            ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_8, Type_25, &TypeStr0_32, &ArrayDims_33);
            TypeStr_34 = ml_backend__mlds_to_target_util__add_array_dimensions_2_f_0(TypeStr0_32, ArrayDims_33);
            succeeded = (MaybeCtorName_27 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              QualCtorId_35 = ((MR_Word) ((MR_hl_field(1, MaybeCtorName_27, 0))));
              succeeded = ((((MR_tag((MR_Word) Type_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_25, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                MerType_36 = ((MR_Word) ((MR_hl_field(3, Type_25, 1))));
                CtorCat_37 = ((MR_Word) ((MR_hl_field(3, Type_25, 2))));
                succeeded = ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(MerType_36, CtorCat_37, &Var_38, &Var_39);
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word CtorId_42 = ((MR_Word) ((MR_hl_field(0, QualCtorId_35, 2))));
              MR_String CtorName_43 = ((MR_String) ((MR_hl_field(0, CtorId_42, 0))));
              MR_Integer CtorArity_44 = ((MR_Integer) ((MR_hl_field(0, CtorId_42, 1))));
              MR_String CtorClassNameStr_45;

              CtorClassNameStr_45 = ml_backend__mlds_to_cs_name__unqual_class_name_to_ll_string_for_csharp_2_f_0(CtorName_43, CtorArity_44);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
              mercury__io__write_string_4_p_0(Stream_9, TypeStr_34);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".");
              mercury__io__write_string_4_p_0(Stream_9, CtorClassNameStr_45);
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
              mercury__io__write_string_4_p_0(Stream_9, TypeStr_34);
            }
            ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(ArrayDims_33, &LParen_46, &RParen_47);
            if ((ArgRvalsTypes_28 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_9, LParen_46);
              mercury__io__write_string_4_p_0(Stream_9, RParen_47);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            else
            {
              MR_Word HeadArgRvalType_48 = ((MR_Word) ((MR_hl_field(1, ArgRvalsTypes_28, 0))));
              MR_Word TailArgRvalsTypes_49 = ((MR_Word) ((MR_hl_field(1, ArgRvalsTypes_28, 1))));
              MR_String Indent3Str_50;
              MR_Unsigned Var_121;

              mercury__io__write_string_4_p_0(Stream_9, LParen_46);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              Var_121 = (Indent_10 + (MR_Unsigned) 2U);
              Indent3Str_50 = libs__indent__indent2_string_1_f_0(Var_121);
              ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_7_p_0(Info_8, Stream_9, Indent3Str_50, HeadArgRvalType_48, TailArgRvalsTypes_49);
              mercury__io__write_string_4_p_0(Stream_9, IndentStr_152);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "  ");
              mercury__io__write_string_4_p_0(Stream_9, RParen_47);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_9, LineNumbers_153, Context_12);
            mercury__io__write_string_4_p_0(Stream_9, IndentStr_152);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "mark_hp not implemented.");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "restore_hp not implemented.");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "trail_ops not implemented.");
            return;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word TargetLang_53 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_11, 1))) & (MR_Integer) 3);
            MR_Word Components_54 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, 2))));

            switch (TargetLang_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "inline_target_code only works for lang_java");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_145;
                  MR_Box conv0_STATE_VARIABLE_IO_60;

                  {
                    Var_145 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_145, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[0]));
                    MR_hl_field(0, Var_145, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0_1));
                    MR_hl_field(0, Var_145, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_145, 3) = ((MR_Box) (Info_8));
                    MR_hl_field(0, Var_145, 4) = ((MR_Box) (Stream_9));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_145, Components_54, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_60);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_stmt.output_atomic_stmt_for_csharp\'/7", (MR_String) "foreign language interfacing not implemented");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String IndentStr_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12)
{
  while (MR_TRUE)
  {
    MR_Word HeadArgRval_14 = ((MR_Word) ((MR_hl_field(0, HeadArg_11, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_9, IndentStr_10);
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, HeadArgRval_14, Stream_9);
    if ((TailArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailArg_16 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, 0))));
      MR_Word TailTailArgs_17 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, 1))));
      MR_Word next_value_of_HeadArg_11;
      MR_Word next_value_of_TailArgs_12;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadArg_11 = HeadTailArg_16;
      next_value_of_TailArgs_12 = TailTailArgs_17;
      HeadArg_11 = next_value_of_HeadArg_11;
      TailArgs_12 = next_value_of_TailArgs_12;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_4, 0)))) == (MR_Integer) 1)));
  MR_Word ExitMethods_6;
  MR_Word ExitMethods0_7;
  MR_Word Var_8;
  MR_Word TypeCtorInfo_17_17;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(3, Cond_4, 1))));
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_9 = (MR_Integer) 0;
      TypeCtorInfo_17_17 = (MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (Var_9)), BlockExitMethods_5);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
    ExitMethods0_7 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
  else
    ExitMethods0_7 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), BlockExitMethods_5, ((MR_Box) ((MR_Integer) 4)));
  ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_cs_stmt_scalar_common_1[1])));
  return ExitMethods_6;
}

void mercury__ml_backend__mlds_to_cs_stmt__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_stmt__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_stmt__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_stmt__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_stmt.
