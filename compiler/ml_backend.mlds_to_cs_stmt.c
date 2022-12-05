/*
** Automatically generated from `mlds_to_cs_stmt.m'
** by the Mercury compiler,
** version rotd-2022-12-05
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
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Word MR_CALL 
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__537__1_1_f_0(
  MR_Word LambdaHeadVar__1_45);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TargetCode_8);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_assign_out_params_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Rval_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
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
  MR_Integer Indent_3,
  MR_Word Context_5,
  MR_Word HeadVar__6_6,
  MR_Word Default_7,
  MR_Word * ExitMethods_8);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_100_101_102_97_117_108_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word Context_14,
  MR_Word Default_15,
  MR_Word * ExitMethods_16);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
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
  MR_Integer Indent_10,
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
  MR_Integer Indent_10,
  MR_Word AtomicStmt_11,
  MR_Word Context_12);

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
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
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_stmt_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__537__1_1_f_0(
  MR_Word LambdaHeadVar__1_45)
{
  MR_Word LambdaHeadVar__2_46;

  {
    LambdaHeadVar__2_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_46, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, LambdaHeadVar__2_46, 1) = ((MR_Box) (LambdaHeadVar__1_45));
  }
  return LambdaHeadVar__2_46;
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
        MR_Word FuncName_16 = (MR_Word) ((MR_Word) (TargetCode_8));

        ml_backend__mlds_to_cs_name__output_maybe_qualified_function_name_for_csharp_5_p_0(Info_6, Stream_7, FuncName_16);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(1, TargetCode_8, (MR_Integer) 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(1, TargetCode_8, (MR_Integer) 1))));
        MR_Word Var_28;

        ml_backend__mlds_to_cs_util__output_pragma_warning_restore_3_p_0(Stream_7);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "{\n");
        if (!((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word ProgContext_12 = ((MR_Word) ((MR_hl_field(1, MaybeUserContext_11, (MR_Integer) 0))));
          MR_Word Var_23 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 1))) & (MR_Integer) 1);

          ml_backend__mlds_to_cs_util__cs_output_context_5_p_0(Stream_7, Var_23, ProgContext_12);
        }
        mercury__io__write_string_4_p_0(Stream_7, CodeString_10);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "}\n");
        Var_28 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 1))) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__cs_output_default_context_4_p_0(Stream_7, Var_28);
        ml_backend__mlds_to_cs_util__output_pragma_warning_disable_3_p_0(Stream_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_38 = ((MR_String) ((MR_hl_field(2, TargetCode_8, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_7, CodeString_38);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_6, Rval_13, Stream_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_6, Lval_14, Stream_7);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_6, Type_15, Stream_7);
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
  MR_Integer Indent_11,
  MR_Word Rval_12,
  MR_Integer Num_13,
  MR_Integer * HeadVar__6_6)
{
  MR_String Var_29;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Num_13 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "out_param_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_2[0]), Num_13, &Var_29);
  mercury__io__write_string_4_p_0(Stream_10, Var_29);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Rval_12, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word LocalVarDefn_10)
{
  MR_Word LocalVarName_12;
  MR_Word Type_14;
  MR_Word Initializer_15;
  MR_Integer Var_22;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  LocalVarName_12 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 0))));
  Type_14 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 2))));
  Initializer_15 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 3))));
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_7, Type_14, Stream_8);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_cs_name__output_local_var_name_for_csharp_4_p_0(Stream_8, LocalVarName_12);
  Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 8U), Var_22, Type_14, Initializer_15, (MR_String) ";");
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_stmt_for_csharp_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
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

  ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
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
    MR_Word Case_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word CaseExitMethods0_32;
    MR_Word CasesExitMethods_33;
    MR_Word CaseExitMethods_34;
    MR_Word FirstCond_46 = ((MR_Word) ((MR_hl_field(0, Case_27, (MR_Integer) 0))));
    MR_Word LaterConds_47 = ((MR_Word) ((MR_hl_field(0, Case_27, (MR_Integer) 1))));
    MR_Word Statement_48 = ((MR_Word) ((MR_hl_field(0, Case_27, (MR_Integer) 2))));
    MR_Word StmtExitMethods_49;
    MR_Word Var_51;
    MR_Integer Var_53;
    MR_Box conv0_STATE_VARIABLE_IO_26_52;

    ml_backend__mlds_to_cs_stmt__output_case_cond_for_csharp_7_p_0(Info_1, Stream_2, Indent_3, Context_5, FirstCond_46);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_5[1]));
      MR_hl_field(0, Var_51, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0_1));
      MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_51, 3) = ((MR_Box) (Info_1));
      MR_hl_field(0, Var_51, 4) = ((MR_Box) (Stream_2));
      MR_hl_field(0, Var_51, 5) = ((MR_Box) (Indent_3));
      MR_hl_field(0, Var_51, 6) = ((MR_Box) (Context_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, LaterConds_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_52);
    Var_53 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
    ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_1, Stream_2, Var_53, Statement_48, &StmtExitMethods_49);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_49);
    if (succeeded)
    {
      MR_Word Var_57 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Integer Var_58 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
      MR_Word Var_62;

      ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_2, Var_57, Context_5, Var_58);
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
  MR_Integer Indent_12,
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
            MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_37;
            MR_Integer Var_38;

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_11, Var_33, Context_14, Indent_12);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default: /*NOTREACHED*/\n");
            Var_37 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_38 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_11, Var_37, Context_14, Var_38);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "throw new runtime.UnreachableDefault();\n");
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
        MR_Word Statement_18 = ((MR_Word) ((MR_hl_field(1, Default_15, (MR_Integer) 0))));
        MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_26;
        MR_Word Var_29;

        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_11, Var_22, Context_14, Indent_12);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default:\n");
        Var_26 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_10, Stream_11, Var_26, Statement_18, ExitMethods_16);
        Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_11, Var_29, Context_14, Indent_12);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "break;\n");
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__5_5,
  MR_Word * ExitMethods_6)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *ExitMethods_6 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
  else
  {
    MR_Word Stmt_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Stmts_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
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

  ml_backend__mlds_to_cs_stmt__output_assign_out_params_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv3_HeadVar__6_6);
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

  ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_46;

  conv2_LambdaHeadVar__2_46 = ml_backend__mlds_to_cs_stmt__IntroducedFrom__func__output_stmt_call_for_csharp__537__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_46));
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

  ml_backend__mlds_to_cs_func__output_function_defn_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_stmt__output_local_var_defn_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Stmt_13,
  MR_Word * ExitMethods_14)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Stmt_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_76 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 0))));
        MR_Word FuncDefns_77 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 1))));
        MR_Word Stmts_78 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_79 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 3))));
        MR_Integer BlockIndent_80 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        MR_Word Var_82 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_96;

        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_82, Context_79, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
        if (!((LocalVarDefns_76 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_86;
          MR_Box conv0_STATE_VARIABLE_IO_34_87;

          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_86, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_4[0]));
            MR_hl_field(0, Var_86, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_1));
            MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_86, 3) = ((MR_Box) (Info_9));
            MR_hl_field(0, Var_86, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(0, Var_86, 5) = ((MR_Box) (BlockIndent_80));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, LocalVarDefns_76, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_34_87);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        if (!((FuncDefns_77 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_90;
          MR_Box conv1_STATE_VARIABLE_IO_38_91;

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
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_90, FuncDefns_77, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_91);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, BlockIndent_80, Stmts_78, ExitMethods_14);
        Var_96 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_96, Context_79, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_503 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_13, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Cond_504 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 1))));
        MR_Word BodyStmt_505 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_507 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 4))));
        MR_Integer ScopeIndent_508;
        MR_Word Var_610;

        ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_505, Indent_11, &ScopeIndent_508);
        Var_610 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        switch (Kind_503) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_538;
              MR_Word BodyInfo_544;
              MR_Word StmtExitMethods_545;
              MR_Word Var_583;
              MR_Word Var_587;
              MR_String Var_588;
              MR_Word Var_589;
              MR_Word Var_590;
              MR_Word Var_592;
              MR_Unsigned packed_word_42;

              ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_610, Context_507, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "do\n");
              Var_583 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
              packed_word_42 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));
              Var_587 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
              Var_588 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
              Var_589 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
              Var_590 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_592 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
              {
                BodyInfo_544 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BodyInfo_544, 0) = ((MR_Box) (Var_583));
                MR_hl_field(0, BodyInfo_544, 1) = (MR_Box) (packed_word_42);
                MR_hl_field(0, BodyInfo_544, 2) = ((MR_Box) (Var_587));
                MR_hl_field(0, BodyInfo_544, 3) = ((MR_Box) (Var_588));
                MR_hl_field(0, BodyInfo_544, 4) = ((MR_Box) (Var_589));
                MR_hl_field(0, BodyInfo_544, 5) = (MR_Box) (((((MR_Unsigned) (Var_590) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(0, BodyInfo_544, 6) = ((MR_Box) (Var_592));
              }
              ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(BodyInfo_544, Stream_10, ScopeIndent_508, BodyStmt_505, &StmtExitMethods_545);
              Var_538 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_538, Context_507, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_504, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
              *ExitMethods_14 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_504, StmtExitMethods_545);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_613;
              MR_Word Var_615;
              MR_Word Var_616;
              MR_String Var_617;
              MR_Word Var_618;
              MR_Word Var_620;
              MR_Word Var_622;
              MR_Unsigned packed_word_46;
              MR_Word Var_518;

              ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_610, Context_507, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_504, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
              Var_622 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
              packed_word_46 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));
              Var_620 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_618 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
              Var_617 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
              Var_616 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
              Var_615 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_613 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
              succeeded = ((((MR_tag((MR_Word) Cond_504)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_504, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_518 = ((MR_Word) ((MR_hl_field(3, Cond_504, (MR_Integer) 1))));
                succeeded = (Var_518 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                MR_Integer Var_523;

                ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_620, Context_507, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
                Var_523 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_523);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "/* Unreachable code */\n");
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
                *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
              }
              else
              {
                MR_Word BodyInfo_509;
                MR_Word StmtExitMethods_510;

                {
                  BodyInfo_509 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BodyInfo_509, 0) = ((MR_Box) (Var_622));
                  MR_hl_field(0, BodyInfo_509, 1) = (MR_Box) (packed_word_46);
                  MR_hl_field(0, BodyInfo_509, 2) = ((MR_Box) (Var_618));
                  MR_hl_field(0, BodyInfo_509, 3) = ((MR_Box) (Var_617));
                  MR_hl_field(0, BodyInfo_509, 4) = ((MR_Box) (Var_616));
                  MR_hl_field(0, BodyInfo_509, 5) = (MR_Box) (((((MR_Unsigned) (Var_615) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(0, BodyInfo_509, 6) = ((MR_Box) (Var_613));
                }
                ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(BodyInfo_509, Stream_10, ScopeIndent_508, BodyStmt_505, &StmtExitMethods_510);
                *ExitMethods_14 = ml_backend__mlds_to_cs_stmt__while_exit_methods_for_csharp_2_f_0(Cond_504, StmtExitMethods_510);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_317 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 0))));
        MR_Word Then0_318 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 1))));
        MR_Word MaybeElse_319 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_320 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 3))));
        MR_Word Then_325;
        MR_Integer ThenScopeIndent_326;
        MR_Word ThenExitMethods_327;
        MR_Word Var_336;
        MR_Word ThenContext_324;
        MR_Word Var_331;

        succeeded = (MaybeElse_319 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Then0_318)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_331 = ((MR_Word) ((MR_hl_field(2, Then0_318, (MR_Integer) 2))));
            ThenContext_324 = ((MR_Word) ((MR_hl_field(2, Then0_318, (MR_Integer) 3))));
            succeeded = (Var_331 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_334;

          {
            Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_334, 0) = ((MR_Box) (Then0_318));
            MR_hl_field(1, Var_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Then_325 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Then_325, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_325, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_325, 2) = ((MR_Box) (Var_334));
            MR_hl_field(0, Then_325, 3) = ((MR_Box) (ThenContext_324));
          }
        }
        else
          Then_325 = Then0_318;
        Var_336 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_336, Context_320, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "if (");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Cond_317, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
        ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_325, Indent_11, &ThenScopeIndent_326);
        ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, ThenScopeIndent_326, Then_325, &ThenExitMethods_327);
        if ((MaybeElse_319 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExitMethods_14 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_327, ((MR_Box) ((MR_Integer) 4)));
        else
        {
          MR_Word Else_328 = ((MR_Word) ((MR_hl_field(1, MaybeElse_319, (MR_Integer) 0))));
          MR_Integer ElseScopeIndent_329;
          MR_Word ElseExitMethods_330;
          MR_Word Var_344 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

          ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_344, Context_320, Indent_11);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "else\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_328, Indent_11, &ElseScopeIndent_329);
          ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, ElseScopeIndent_329, Else_328, &ElseExitMethods_330);
          *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_327, ElseExitMethods_330);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Val_410 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word Cases_412 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 4))));
            MR_Word Default_413 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 5))));
            MR_Word Context_414 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 6))));
            MR_Word CaseInfo_415;
            MR_Word Var_416 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Integer Var_424;
            MR_Word Var_427;
            MR_Word Var_439;
            MR_Word Var_443;
            MR_String Var_444;
            MR_Word Var_445;
            MR_Word Var_446;
            MR_Word Var_448;
            MR_Unsigned packed_word_33;

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_416, Context_414, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "switch (");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Val_410, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") {\n");
            Var_439 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
            packed_word_33 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));
            Var_443 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
            Var_444 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
            Var_445 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
            Var_446 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
            Var_448 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
            {
              CaseInfo_415 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CaseInfo_415, 0) = ((MR_Box) (Var_439));
              MR_hl_field(0, CaseInfo_415, 1) = (MR_Box) (packed_word_33);
              MR_hl_field(0, CaseInfo_415, 2) = ((MR_Box) (Var_443));
              MR_hl_field(0, CaseInfo_415, 3) = ((MR_Box) (Var_444));
              MR_hl_field(0, CaseInfo_415, 4) = ((MR_Box) (Var_445));
              MR_hl_field(0, CaseInfo_415, 5) = (MR_Box) (((((MR_Unsigned) (Var_446) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(0, CaseInfo_415, 6) = ((MR_Box) (Var_448));
            }
            Var_424 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_119_105_116_99_104_95_99_97_115_101_115_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_10_p_0(CaseInfo_415, Stream_10, Var_424, Context_414, Cases_412, Default_413, ExitMethods_14);
            Var_427 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_427, Context_414, Indent_11);
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
            MR_Word Target_246 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word Context_247 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) Target_246)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Target_246)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word BreakContext_249 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
                      MR_Word Var_271 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                      switch (BreakContext_249) {
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
                            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_271, Context_247, Indent_11);
                            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
                            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word BreakContext_268 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);
                      MR_Word Var_289 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                      switch (BreakContext_268) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_289, Context_247, Indent_11);
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
                      MR_Word Var_264 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

                      ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_264, Context_247, Indent_11);
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
            MR_Word Signature_121 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word FuncRval_122 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word CallArgs_123 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 3))));
            MR_Word Results_124 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 4))));
            MR_Word IsTailCall_125 = ((MR_Unsigned) ((MR_hl_field(3, Stmt_13, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Context_126 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 6))));
            MR_Word ArgTypes_127 = ((MR_Word) ((MR_hl_field(0, Signature_121, (MR_Integer) 0))));
            MR_Word RetTypes_128 = ((MR_Word) ((MR_hl_field(0, Signature_121, (MR_Integer) 1))));
            MR_Word OutArgs_129;
            MR_String CloseBracket_133;
            MR_Word Var_135 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_139;
            MR_Integer Var_140;
            MR_Word Var_153;
            MR_Word Var_155;
            MR_Word Var_165;
            MR_Word Var_147;

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_135, Context_126, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_139 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_140 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_139, Context_126, Var_140);
            if ((Results_124 == (MR_Word) ((MR_Unsigned) 0U)))
              OutArgs_129 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Lval_130 = ((MR_Word) ((MR_hl_field(1, Results_124, (MR_Integer) 0))));
              MR_Word Lvals_131 = ((MR_Word) ((MR_hl_field(1, Results_124, (MR_Integer) 1))));

              ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_9, Lval_130, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
              OutArgs_129 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds_to_cs_stmt_scalar_common_7[0]), Lvals_131);
            }
            succeeded = ((((MR_tag((MR_Word) FuncRval_122)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_122, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_147 = ((MR_Word) ((MR_hl_field(3, FuncRval_122, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_147)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
            }
            if (succeeded)
              CloseBracket_133 = (MR_String) "";
            else
            {
              MR_String TypeString_134;

              TypeString_134 = ml_backend__mlds_to_cs_type__method_ptr_type_to_string_3_f_0(Info_9, ArgTypes_127, RetTypes_128);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
              mercury__io__write_string_4_p_0(Stream_10, TypeString_134);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
              CloseBracket_133 = (MR_String) ")";
            }
            ml_backend__mlds_to_cs_data__output_call_rval_for_csharp_5_p_0(Info_9, FuncRval_122, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, CloseBracket_133);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
            {
              Var_153 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_153, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[1]));
              MR_hl_field(0, Var_153, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_4));
              MR_hl_field(0, Var_153, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_153, 3) = ((MR_Box) (Info_9));
            }
            Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_123, OutArgs_129);
            parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_153, (MR_String) ", ", Var_155, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
            switch (IsTailCall_125) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_159 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                  MR_Integer Var_160 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);

                  ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_159, Context_126, Var_160);
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
            Var_165 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_165, Context_126, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Results_369 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word Context_370 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));

            if ((Results_369 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_374 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

              ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_374, Context_370, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return;\n");
            }
            else
            {
              MR_Word Rval_371 = ((MR_Word) ((MR_hl_field(1, Results_369, (MR_Integer) 0))));
              MR_Word Rvals_372 = ((MR_Word) ((MR_hl_field(1, Results_369, (MR_Integer) 1))));
              MR_Word Var_377;
              MR_Word Var_380;
              MR_Box conv5_Var_373;
              MR_Box conv4_STATE_VARIABLE_IO_29_379;

              {
                Var_377 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_377, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_8[0]));
                MR_hl_field(0, Var_377, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0_5));
                MR_hl_field(0, Var_377, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_377, 3) = ((MR_Box) (Info_9));
                MR_hl_field(0, Var_377, 4) = ((MR_Box) (Stream_10));
                MR_hl_field(0, Var_377, 5) = ((MR_Box) (Indent_11));
              }
              mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_377, Rvals_372, ((MR_Box) ((MR_Integer) 2)), &conv5_Var_373, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_29_379);
              Var_380 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_380, Context_370, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return ");
              ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Rval_371, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            }
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt_459 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word HandlerStmt_460 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 3))));
            MR_Word Context_461 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 4))));
            MR_Word LineNumbers_462 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word TryExitMethods0_463;
            MR_Word CatchExitMethods_464;
            MR_Integer Var_471;
            MR_Integer Var_483;
            MR_Integer Var_486;
            MR_Word Var_491;

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "try\n");
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_471 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, Var_471, BodyStmt_459, &TryExitMethods0_463);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "catch (runtime.Commit commit_variable)\n");
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_483 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Var_483);
            Var_486 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_stmt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_115_116_109_116_95_102_111_114_95_99_115_104_97_114_112_95_95_91_52_93_95_48_8_p_0(Info_9, Stream_10, Var_486, HandlerStmt_460, &CatchExitMethods_464);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, LineNumbers_462, Context_461, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            Var_491 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_463, ((MR_Box) ((MR_Integer) 3)));
            *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_491, CatchExitMethods_464);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref_213 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word Context_214 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word Var_215 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_220;

            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_215, Context_214, Indent_11);
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Ref_213, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = new runtime.Commit();\n");
            Var_220 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_10, Var_220, Context_214, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "throw ");
            ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_9, Ref_213, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStatement_56 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word Context_57 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));

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
  MR_Integer Indent_10,
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
    MR_Word Val_14 = ((MR_Word) ((MR_hl_field(0, Match_12, (MR_Integer) 0))));
    MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

    ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_19, Context_11, Indent_10);
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

  ml_backend__mlds_to_cs_stmt__output_target_code_component_for_csharp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
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
        MR_String Comment_14 = ((MR_String) ((MR_hl_field(1, AtomicStmt_11, (MR_Integer) 0))));

        succeeded = (strcmp(Comment_14, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__nl_3_p_0(Stream_9);
        else
        {
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* ");
          mercury__io__write_string_4_p_0(Stream_9, Comment_14);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) " */\n");
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_15 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_11, (MR_Integer) 0))));
        MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_11, (MR_Integer) 1))));
        MR_Word Var_61 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

        ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_61, Context_12, Indent_10);
        ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_8, Lval_15, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
        ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, Rval_16, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 0))))) {
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
            MR_Word Target_20 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 1))));
            MR_Word ExplicitSecTag_22 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 4))));
            MR_Word MaybeCtorName_25 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes_26 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 7))));
            MR_Word IsArray_39;
            MR_String Start_40;
            MR_String End_41;
            MR_Word Var_75;
            MR_Word Var_79;
            MR_Integer Var_80;
            MR_Word Var_114;
            MR_Word QualifiedCtorId_29;
            MR_Word MerType_30;
            MR_Word CtorCat_31;
            MR_String Var_32;
            MR_Word Var_33;

            switch (ExplicitSecTag_22) {
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
            Var_75 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_75, Context_12, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
            Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_80 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_79, Context_12, Var_80);
            ml_backend__mlds_to_cs_data__output_lval_for_csharp_5_p_0(Info_8, Target_20, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
            succeeded = (MaybeCtorName_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              QualifiedCtorId_29 = ((MR_Word) ((MR_hl_field(1, MaybeCtorName_25, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Type_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MerType_30 = ((MR_Word) ((MR_hl_field(3, Type_23, (MR_Integer) 1))));
                CtorCat_31 = ((MR_Word) ((MR_hl_field(3, Type_23, (MR_Integer) 2))));
                succeeded = ml_backend__mlds_to_cs_type__hand_defined_type_for_csharp_4_p_0(MerType_30, CtorCat_31, &Var_32, &Var_33);
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word CtorDefn_36;
              MR_String CtorName_37;
              MR_Integer CtorArity_38;

              ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, Type_23, Stream_9);
              mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 46);
              CtorDefn_36 = ((MR_Word) ((MR_hl_field(0, QualifiedCtorId_29, (MR_Integer) 2))));
              CtorName_37 = ((MR_String) ((MR_hl_field(0, CtorDefn_36, (MR_Integer) 0))));
              CtorArity_38 = ((MR_Integer) ((MR_hl_field(0, CtorDefn_36, (MR_Integer) 1))));
              ml_backend__mlds_to_cs_name__output_unqual_class_name_for_csharp_5_p_0(Stream_9, CtorName_37, CtorArity_38);
            }
            else
              ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, Type_23, Stream_9);
            IsArray_39 = ml_backend__mlds_to_cs_type__type_is_array_for_csharp_1_f_0(Type_23);
            ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(IsArray_39, &Start_40, &End_41);
            if ((ArgRvalsTypes_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_9, Start_40);
              mercury__io__write_string_4_p_0(Stream_9, End_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            else
            {
              MR_Word HeadArgRvalType_42 = ((MR_Word) ((MR_hl_field(1, ArgRvalsTypes_26, (MR_Integer) 0))));
              MR_Word TailArgRvalsTypes_43 = ((MR_Word) ((MR_hl_field(1, ArgRvalsTypes_26, (MR_Integer) 1))));
              MR_Integer Var_103;
              MR_Integer Var_106;

              mercury__io__write_string_4_p_0(Stream_9, Start_40);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              Var_103 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
              ml_backend__mlds_to_cs_stmt__output_init_args_for_csharp_7_p_0(Info_8, Stream_9, Var_103, HeadArgRvalType_42, TailArgRvalsTypes_43);
              Var_106 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_106);
              mercury__io__write_string_4_p_0(Stream_9, End_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            Var_114 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_cs_util__indent_line_after_context_6_p_0(Stream_9, Var_114, Context_12, Indent_10);
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
            MR_Word TargetLang_46 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components_47 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 2))));

            switch (TargetLang_46) {
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
                  MR_Word Var_126;
                  MR_Box conv0_STATE_VARIABLE_IO_53;

                  {
                    Var_126 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_126, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_stmt_scalar_common_3[0]));
                    MR_hl_field(0, Var_126, 1) = ((MR_Box) (ml_backend__mlds_to_cs_stmt__output_atomic_stmt_for_csharp_7_p_0_1));
                    MR_hl_field(0, Var_126, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_126, 3) = ((MR_Box) (Info_8));
                    MR_hl_field(0, Var_126, 4) = ((MR_Box) (Stream_9));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_126, Components_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_53);
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
  MR_Integer Indent_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12)
{
  while (MR_TRUE)
  {
    MR_Word HeadArgRval_14 = ((MR_Word) ((MR_hl_field(0, HeadArg_11, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    ml_backend__mlds_to_cs_data__output_rval_for_csharp_5_p_0(Info_8, HeadArgRval_14, Stream_9);
    if ((TailArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailArg_16 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, (MR_Integer) 0))));
      MR_Word TailTailArgs_17 = ((MR_Word) ((MR_hl_field(1, TailArgs_12, (MR_Integer) 1))));
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word ExitMethods_6;
  MR_Word ExitMethods0_7;
  MR_Word Var_8;
  MR_Word TypeCtorInfo_17_17;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(3, Cond_4, (MR_Integer) 1))));
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
