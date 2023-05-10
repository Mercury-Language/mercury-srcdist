/*
** Automatically generated from `mlds_to_java_stmt.m'
** by the Mercury compiler,
** version rotd-2023-05-10
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


// :- module ml_backend.mlds_to_java_stmt.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_stmt__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_stmt.mih"


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
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_func.mih"
#include "ml_backend.mlds_to_java_name.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__486__1_5_p_0(
  MR_Word Info_9,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TargetCode_8);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word LocalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word FuncInfo_4,
  MR_Word Context_5,
  MR_Word HeadVar__6_6,
  MR_Word Default_7,
  MR_Word * ExitMethods_8);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word FuncInfo_13,
  MR_Word Context_14,
  MR_Word Case_15,
  MR_Word * ExitMethods_16);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word AtomicStmt_11,
  MR_Word Context_12);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_init_args_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word HeadArg_11,
  MR_Word TailArgs_12);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Context_11,
  MR_Word Match_12);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_assign_results_9_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ResultIndex_5,
  MR_Integer Indent_6,
  MR_Word Context_7);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_unboxed_result_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Integer ResultIndex_10);

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(
  MR_Word Cond_4,
  MR_Word BlockExitMethods_5);


static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_4[3][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_5[1][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_6[2][10];




static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &ml_backend__mlds_to_java_stmt_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_4[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_stmt_scalar_common_6[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
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



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__486__1_5_p_0(
  MR_Word Info_9,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49)
{
  MR_Word Type_69 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_48, (MR_Integer) 0))));
  MR_Word Result_70 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_48, (MR_Integer) 1))));

  ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_9, Type_69, Result_70, LambdaHeadVar__2_49);
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word TargetCode_8)
{
  switch (MR_tag((MR_Word) TargetCode_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FuncName_17 = (MR_Word) ((MR_Word) (TargetCode_8));

        ml_backend__mlds_to_java_name__output_maybe_qualified_function_name_for_java_5_p_0(Info_6, Stream_7, FuncName_17);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(1, TargetCode_8, (MR_Integer) 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(1, TargetCode_8, (MR_Integer) 1))));

        if ((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_7, CodeString_10);
        else
        {
          MR_Word ProgContext_12 = ((MR_Word) ((MR_hl_field(1, MaybeUserContext_11, (MR_Integer) 0))));

          ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_6, Stream_7, (MR_Integer) 0, CodeString_10, ProgContext_12);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_32 = ((MR_String) ((MR_hl_field(2, TargetCode_8, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_7, CodeString_32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_13, Stream_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_6, Lval_14, Stream_7);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(3, TargetCode_8, (MR_Integer) 1))));
            MR_Word InfoGenerics_16;
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 0))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 2))));
            MR_String Var_38 = ((MR_String) ((MR_hl_field(0, Info_6, (MR_Integer) 3))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
            MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 6))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Info_6, (MR_Integer) 1)));

            {
              InfoGenerics_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InfoGenerics_16, 0) = ((MR_Box) (Var_33));
              MR_hl_field(0, InfoGenerics_16, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(0, InfoGenerics_16, 2) = ((MR_Box) (Var_37));
              MR_hl_field(0, InfoGenerics_16, 3) = ((MR_Box) (Var_38));
              MR_hl_field(0, InfoGenerics_16, 4) = ((MR_Box) (Var_39));
              MR_hl_field(0, InfoGenerics_16, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_41)));
              MR_hl_field(0, InfoGenerics_16, 6) = ((MR_Box) (Var_42));
            }
            ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(InfoGenerics_16, Stream_7, Type_15);
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_target_code_component_for_java\'/5", (MR_String) "target_code_alloc_id not implemented");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word LocalVarDefn_10)
{
  MR_Word LocalVarName_12 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 1))));
  MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 2))));
  MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(0, LocalVarDefn_10, (MR_Integer) 3))));
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Integer Var_24;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_19, (MR_Integer) 2, Context_13, Indent_9);
  ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Stream_8, Type_14);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 32);
  ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_8, LocalVarName_12);
  Var_24 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_7, Stream_8, (MR_Word) ((MR_Unsigned) 8U), Var_24, Type_14, Initializer_15, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word FuncInfo_4,
  MR_Word Context_5,
  MR_Word HeadVar__6_6,
  MR_Word Default_7,
  MR_Word * ExitMethods_8)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (MR_tag((MR_Word) Default_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Default_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              MR_Word Var_60;
              MR_Integer Var_62;

              ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_2, Var_55, (MR_Integer) 2, Context_5, Indent_3);
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) "default: /*NOTREACHED*/\n");
              Var_60 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              Var_62 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_2, Var_60, (MR_Integer) 2, Context_5, Var_62);
              mercury__io__write_string_4_p_0(Stream_2, (MR_String) "throw new jmercury.runtime.UnreachableDefault();\n");
              *ExitMethods_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
            }
            break;
          case (MR_Integer) 1:
            *ExitMethods_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stmt_46 = ((MR_Word) ((MR_hl_field(1, Default_7, (MR_Integer) 0))));
          MR_Word Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          MR_Integer Var_53;

          ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_2, Var_48, (MR_Integer) 2, Context_5, Indent_3);
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "default:\n");
          Var_53 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
          ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_1, Stream_2, Var_53, FuncInfo_4, Stmt_46, ExitMethods_8);
        }
        break;
    }
  else
  {
    MR_Word Case_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word CaseExitMethods0_32;
    MR_Word CasesExitMethods_33;
    MR_Word CaseExitMethods_35;

    ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Context_5, Case_27, &CaseExitMethods0_32);
    ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Context_5, Cases_28, Default_7, &CasesExitMethods_33);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_32);
    if (succeeded)
    {
      MR_Word CaseExitMethods1_34;

      mercury__set__delete_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)), CaseExitMethods0_32, &CaseExitMethods1_34);
      mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), CaseExitMethods1_34, &CaseExitMethods_35);
    }
    else
      CaseExitMethods_35 = CaseExitMethods0_32;
    *ExitMethods_8 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), CaseExitMethods_35, CasesExitMethods_33);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word FuncInfo_13,
  MR_Word Context_14,
  MR_Word Case_15,
  MR_Word * ExitMethods_16)
{
  MR_bool succeeded;
  MR_Word FirstCond_18 = ((MR_Word) ((MR_hl_field(0, Case_15, (MR_Integer) 0))));
  MR_Word LaterConds_19 = ((MR_Word) ((MR_hl_field(0, Case_15, (MR_Integer) 1))));
  MR_Word Stmt_20 = ((MR_Word) ((MR_hl_field(0, Case_15, (MR_Integer) 2))));
  MR_Word StmtExitMethods_21;
  MR_Word Var_25;
  MR_Integer Var_27;
  MR_Box conv0_STATE_VARIABLE_IO_26_26;

  ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(Info_10, Stream_11, Indent_12, Context_14, FirstCond_18);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_6[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(0, Var_25, 5) = ((MR_Box) (Indent_12));
    MR_hl_field(0, Var_25, 6) = ((MR_Box) (Context_14));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, LaterConds_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_26);
  Var_27 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_10, Stream_11, Var_27, FuncInfo_13, Stmt_20, &StmtExitMethods_21);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_21);
  if (succeeded)
  {
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(0, Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
    MR_Word Var_38;

    ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_11, Var_31, (MR_Integer) 2, Context_14, Var_33);
    mercury__io__write_string_4_p_0(Stream_11, (MR_String) "break;\n");
    Var_38 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), StmtExitMethods_21, ((MR_Box) ((MR_Integer) 0)));
    *ExitMethods_16 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_38, ((MR_Box) ((MR_Integer) 4)));
  }
  else
    *ExitMethods_16 = StmtExitMethods_21;
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__486__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word FuncInfo_12,
  MR_Word Stmt_13,
  MR_Word * ExitMethods_14)
{
  MR_bool succeeded;
  MR_Word Context_16;
  MR_Word Var_63;

  Context_16 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(Stmt_13);
  Var_63 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_10, Var_63, (MR_Integer) 2, Context_16);
  switch (MR_tag((MR_Word) Stmt_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_130 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 0))));
        MR_Word FuncDefns_131 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 1))));
        MR_Word SubStmts_132 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_133 = ((MR_Word) ((MR_hl_field(0, Stmt_13, (MR_Integer) 3))));
        MR_Integer BlockIndent_134 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        MR_Word Var_149;

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
        if (!((LocalVarDefns_130 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_139;
          MR_Box conv0_STATE_VARIABLE_IO_33_140;

          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_139, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_5[0]));
            MR_hl_field(0, Var_139, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_1));
            MR_hl_field(0, Var_139, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_139, 3) = ((MR_Box) (Info_9));
            MR_hl_field(0, Var_139, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(0, Var_139, 5) = ((MR_Box) (BlockIndent_134));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_139, LocalVarDefns_130, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33_140);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        if (!((FuncDefns_131 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_143;
          MR_Box conv1_STATE_VARIABLE_IO_37_144;

          {
            Var_143 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_143, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_6[0]));
            MR_hl_field(0, Var_143, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_2));
            MR_hl_field(0, Var_143, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(0, Var_143, 3) = ((MR_Box) (Info_9));
            MR_hl_field(0, Var_143, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(0, Var_143, 5) = ((MR_Box) (BlockIndent_134));
            MR_hl_field(0, Var_143, 6) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_143, FuncDefns_131, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_144);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        ml_backend__mlds_to_java_stmt__output_statements_for_java_8_p_0(Info_9, Stream_10, BlockIndent_134, FuncInfo_12, SubStmts_132, ExitMethods_14);
        Var_149 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_149, (MR_Integer) 2, Context_133, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_493 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_13, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Cond_494 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 1))));
        MR_Word BodyStmt_495 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_497 = ((MR_Word) ((MR_hl_field(1, Stmt_13, (MR_Integer) 4))));
        MR_Integer ScopeIndent_498;

        ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_495, Indent_11, &ScopeIndent_498);
        switch (Kind_493) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_525;
              MR_Word BodyInfo_532;
              MR_Word StmtExitMethods_533;
              MR_Word Var_544;
              MR_Word Var_548;
              MR_String Var_549;
              MR_Word Var_550;
              MR_Word Var_551;
              MR_Word Var_553;
              MR_Unsigned packed_word_20;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "do\n");
              Var_544 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
              packed_word_20 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));
              Var_548 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
              Var_549 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
              Var_550 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
              Var_551 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_553 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
              {
                BodyInfo_532 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, BodyInfo_532, 0) = ((MR_Box) (Var_544));
                MR_hl_field(0, BodyInfo_532, 1) = (MR_Box) (packed_word_20);
                MR_hl_field(0, BodyInfo_532, 2) = ((MR_Box) (Var_548));
                MR_hl_field(0, BodyInfo_532, 3) = ((MR_Box) (Var_549));
                MR_hl_field(0, BodyInfo_532, 4) = ((MR_Box) (Var_550));
                MR_hl_field(0, BodyInfo_532, 5) = (MR_Box) (((((MR_Unsigned) (Var_551) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(0, BodyInfo_532, 6) = ((MR_Box) (Var_553));
              }
              ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(BodyInfo_532, Stream_10, ScopeIndent_498, FuncInfo_12, BodyStmt_495, &StmtExitMethods_533);
              Var_525 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_525, (MR_Integer) 2, Context_497, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_494, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
              *ExitMethods_14 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_494, StmtExitMethods_533);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_507;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_494, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
              succeeded = ((((MR_tag((MR_Word) Cond_494)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Cond_494, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_507 = ((MR_Word) ((MR_hl_field(3, Cond_494, (MR_Integer) 1))));
                succeeded = (Var_507 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                MR_Integer Var_511;

                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
                Var_511 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_511);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "/* Unreachable code */\n");
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
                *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
              }
              else
              {
                MR_Word BodyInfo_499;
                MR_Word StmtExitMethods_500;
                MR_Word Var_534 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
                MR_Word Var_538 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
                MR_String Var_539 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
                MR_Word Var_540 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
                MR_Word Var_541 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_543 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
                MR_Unsigned packed_word_24 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));

                {
                  BodyInfo_499 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, BodyInfo_499, 0) = ((MR_Box) (Var_534));
                  MR_hl_field(0, BodyInfo_499, 1) = (MR_Box) (packed_word_24);
                  MR_hl_field(0, BodyInfo_499, 2) = ((MR_Box) (Var_538));
                  MR_hl_field(0, BodyInfo_499, 3) = ((MR_Box) (Var_539));
                  MR_hl_field(0, BodyInfo_499, 4) = ((MR_Box) (Var_540));
                  MR_hl_field(0, BodyInfo_499, 5) = (MR_Box) (((((MR_Unsigned) (Var_541) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(0, BodyInfo_499, 6) = ((MR_Box) (Var_543));
                }
                ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(BodyInfo_499, Stream_10, ScopeIndent_498, FuncInfo_12, BodyStmt_495, &StmtExitMethods_500);
                *ExitMethods_14 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_494, StmtExitMethods_500);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_326 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 0))));
        MR_Word Then0_327 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 1))));
        MR_Word MaybeElse_328 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 2))));
        MR_Word Context_329 = ((MR_Word) ((MR_hl_field(2, Stmt_13, (MR_Integer) 3))));
        MR_Word Then_334;
        MR_Integer ThenScopeIndent_335;
        MR_Word ThenExitMethods_336;
        MR_Word ThenContext_333;
        MR_Word Var_340;

        succeeded = (MaybeElse_328 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Then0_327)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_340 = ((MR_Word) ((MR_hl_field(2, Then0_327, (MR_Integer) 2))));
            ThenContext_333 = ((MR_Word) ((MR_hl_field(2, Then0_327, (MR_Integer) 3))));
            succeeded = (Var_340 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_343;

          {
            Var_343 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_343, 0) = ((MR_Box) (Then0_327));
            MR_hl_field(1, Var_343, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Then_334 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Then_334, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_334, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Then_334, 2) = ((MR_Box) (Var_343));
            MR_hl_field(0, Then_334, 3) = ((MR_Box) (ThenContext_333));
          }
        }
        else
          Then_334 = Then0_327;
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "if (");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_326, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
        ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_334, Indent_11, &ThenScopeIndent_335);
        ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, ThenScopeIndent_335, FuncInfo_12, Then_334, &ThenExitMethods_336);
        if ((MaybeElse_328 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExitMethods_14 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_336, ((MR_Box) ((MR_Integer) 4)));
        else
        {
          MR_Word Else_337 = ((MR_Word) ((MR_hl_field(1, MaybeElse_328, (MR_Integer) 0))));
          MR_Integer ElseScopeIndent_338;
          MR_Word ElseExitMethods_339;
          MR_Word Var_352 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

          ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_352, (MR_Integer) 2, Context_329, Indent_11);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "else\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_337, Indent_11, &ElseScopeIndent_338);
          ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, ElseScopeIndent_338, FuncInfo_12, Else_337, &ElseExitMethods_339);
          *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_336, ElseExitMethods_339);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_408 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word Cases_410 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 4))));
            MR_Word Default_411 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 5))));
            MR_Word Context_412 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 6))));
            MR_Word CaseInfo_413;
            MR_Word Var_414 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Integer Var_423;
            MR_Word Var_426;
            MR_Word Var_439;
            MR_Word Var_443;
            MR_String Var_444;
            MR_Word Var_445;
            MR_Word Var_446;
            MR_Word Var_448;
            MR_Unsigned packed_word_15;

            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_414, (MR_Integer) 2, Context_412, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "switch (");
            ml_backend__mlds_to_java_data__output_rval_maybe_with_enum_for_java_5_p_0(Info_9, Rval_408, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") {\n");
            Var_439 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 0))));
            packed_word_15 = (MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1)));
            Var_443 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 2))));
            Var_444 = ((MR_String) ((MR_hl_field(0, Info_9, (MR_Integer) 3))));
            Var_445 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 4))));
            Var_446 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
            Var_448 = ((MR_Word) ((MR_hl_field(0, Info_9, (MR_Integer) 6))));
            {
              CaseInfo_413 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CaseInfo_413, 0) = ((MR_Box) (Var_439));
              MR_hl_field(0, CaseInfo_413, 1) = (MR_Box) (packed_word_15);
              MR_hl_field(0, CaseInfo_413, 2) = ((MR_Box) (Var_443));
              MR_hl_field(0, CaseInfo_413, 3) = ((MR_Box) (Var_444));
              MR_hl_field(0, CaseInfo_413, 4) = ((MR_Box) (Var_445));
              MR_hl_field(0, CaseInfo_413, 5) = (MR_Box) (((((MR_Unsigned) (Var_446) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(0, CaseInfo_413, 6) = ((MR_Box) (Var_448));
            }
            Var_423 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(CaseInfo_413, Stream_10, Var_423, FuncInfo_12, Context_412, Cases_410, Default_411, ExitMethods_14);
            Var_426 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_426, (MR_Integer) 2, Context_412, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/8", (MR_String) "labels not supported in Java.");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_38 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Target_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Target_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word BreakContext_41 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);

                      switch (BreakContext_41) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/8", (MR_String) "goto_break_switch not in switch");
                            return;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
                            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word BreakContext_98 = ((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 5))) & (MR_Integer) 3);

                      switch (BreakContext_98) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "break;\n");
                            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 0)));
                          }
                          break;
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/8", (MR_String) "goto_break_loop not in loop");
                            return;
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "continue;\n");
                      *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 1)));
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/8", (MR_String) "gotos not supported in Java.");
                  return;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_statement_for_java\'/8", (MR_String) "computed gotos not supported in Java.");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Signature_166 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));
            MR_Word FuncRval_167 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word CallArgs_168 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 3))));
            MR_Word Results_169 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 4))));
            MR_Word Context_171 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 6))));
            MR_Word ArgTypes_172 = ((MR_Word) ((MR_hl_field(0, Signature_166, (MR_Integer) 0))));
            MR_Word RetTypes_173 = ((MR_Word) ((MR_hl_field(0, Signature_166, (MR_Integer) 1))));
            MR_Word Var_185;
            MR_Integer Var_187;
            MR_Word Var_194;
            MR_Word Var_213;

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_185 = ((((MR_Unsigned) ((MR_hl_field(0, Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_187 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_185, (MR_Integer) 2, Context_171, Var_187);
            if (!((Results_169 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Var_232 = ((MR_Word) ((MR_hl_field(1, Results_169, (MR_Integer) 1))));
              MR_Word Var_233 = ((MR_Word) ((MR_hl_field(1, Results_169, (MR_Integer) 0))));

              if ((Var_232 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_9, Var_233, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
              }
              else
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "java.lang.Object [] result = ");
            }
            succeeded = ((((MR_tag((MR_Word) FuncRval_167)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FuncRval_167, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_194 = ((MR_Word) ((MR_hl_field(3, FuncRval_167, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_194)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word Var_198;

              ml_backend__mlds_to_java_data__output_call_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
              {
                Var_198 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_198, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[1]));
                MR_hl_field(0, Var_198, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_3));
                MR_hl_field(0, Var_198, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_198, 3) = ((MR_Box) (Info_9));
              }
              parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_198, (MR_String) ", ", CallArgs_168, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            else
            if ((RetTypes_173 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer Arity_244;

              mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_168, &Arity_244);
              succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_244);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtr");
                mercury__io__write_int_4_p_0(Stream_10, Arity_244);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtrN) ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new java.lang.Object[] { ");
                ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "} ");
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
              }
            }
            else
            {
              MR_Word Var_234 = ((MR_Word) ((MR_hl_field(1, RetTypes_173, (MR_Integer) 1))));
              MR_Word Var_235 = ((MR_Word) ((MR_hl_field(1, RetTypes_173, (MR_Integer) 0))));

              if ((Var_234 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String RetTypeString_175;
                MR_Integer Arity_267;
                MR_String UnboxMethod_178;
                MR_String Var_176;
                MR_String Var_177;

                ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, Var_235, &RetTypeString_175);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
                mercury__io__write_string_4_p_0(Stream_10, RetTypeString_175);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_168, &Arity_267);
                succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_267);
                if (succeeded)
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtr");
                  mercury__io__write_int_4_p_0(Stream_10, Arity_267);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                }
                else
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtrN) ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new java.lang.Object[] { ");
                  ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "} ");
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                }
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Var_235, &Var_176, &Var_177, &UnboxMethod_178);
                if (succeeded)
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".");
                  mercury__io__write_string_4_p_0(Stream_10, UnboxMethod_178);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "()");
                }
              }
              else
              {
                MR_Integer Arity_290;

                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((java.lang.Object[]) ");
                mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_168, &Arity_290);
                succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_290);
                if (succeeded)
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtr");
                  mercury__io__write_int_4_p_0(Stream_10, Arity_290);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                  ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                }
                else
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtrN) ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_167, Stream_10);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new java.lang.Object[] { ");
                  ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_168, ArgTypes_172);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "} ");
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                }
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
              }
            }
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            succeeded = (Results_169 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_213 = ((MR_Word) ((MR_hl_field(1, Results_169, (MR_Integer) 1))));
              succeeded = (Var_213 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Integer Var_215 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);

              ml_backend__mlds_to_java_stmt__output_assign_results_9_p_0(Info_9, Stream_10, Results_169, RetTypes_173, (MR_Integer) 0, Var_215, Context_171);
            }
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Results_369 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            if ((Results_369 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return;\n");
            else
            {
              MR_Word Var_405 = ((MR_Word) ((MR_hl_field(1, Results_369, (MR_Integer) 1))));
              MR_Word Var_406 = ((MR_Word) ((MR_hl_field(1, Results_369, (MR_Integer) 0))));

              if ((Var_405 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return ");
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Var_406, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
              }
              else
              {
                MR_Word Params_371 = (MR_Word) (FuncInfo_12);
                MR_Word ReturnTypes_373 = ((MR_Word) ((MR_hl_field(0, Params_371, (MR_Integer) 1))));
                MR_Word TypesAndResults_374;
                MR_Word OutputBoxedRval_375;
                MR_String Separator_376;
                MR_Integer Var_385;
                MR_String Var_389;
                MR_Integer Var_391;
                MR_Integer Var_392;

                TypesAndResults_374 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ReturnTypes_373, Results_369);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return new java.lang.Object[] {\n");
                Var_385 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_385);
                {
                  OutputBoxedRval_375 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, OutputBoxedRval_375, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[2]));
                  MR_hl_field(0, OutputBoxedRval_375, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_4));
                  MR_hl_field(0, OutputBoxedRval_375, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, OutputBoxedRval_375, 3) = ((MR_Box) (Info_9));
                }
                Var_392 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                Var_391 = (MR_Integer) ((MR_Unsigned) Var_392 * (MR_Unsigned) 2);
                Var_389 = mercury__string__duplicate_char_2_f_0((MR_Char) 32, Var_391);
                Separator_376 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_389);
                parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_1[0]), OutputBoxedRval_375, Separator_376, TypesAndResults_374, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "};\n");
              }
            }
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 2)));
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt_459 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 2))));
            MR_Word HandlerStmt_460 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 3))));
            MR_Word TryExitMethods0_462;
            MR_Word CatchExitMethods_463;
            MR_Integer Var_470;
            MR_Integer Var_482;
            MR_Integer Var_485;
            MR_Word Var_490;

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "try\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_470 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, Var_470, FuncInfo_12, BodyStmt_459, &TryExitMethods0_462);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "catch (jmercury.runtime.Commit commit_variable)\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_482 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_482);
            Var_485 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, Var_485, FuncInfo_12, HandlerStmt_460, &CatchExitMethods_463);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            Var_490 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_462, ((MR_Box) ((MR_Integer) 3)));
            *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_490, CatchExitMethods_463);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref_313 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Ref_313, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = new jmercury.runtime.Commit();\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "throw ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Ref_313, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt_59 = ((MR_Word) ((MR_hl_field(3, Stmt_13, (MR_Integer) 1))));

            ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0(Info_9, Stream_10, Indent_11, AtomicStmt_59, Context_16);
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statements_for_java_8_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word FuncInfo_4,
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

    ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Stmt_22, &StmtExitMethods_26);
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_26);
    if (succeeded)
    {
      MR_Word StmtsExitMethods_27;
      MR_Word ExitMethods0_28;

      ml_backend__mlds_to_java_stmt__output_statements_for_java_8_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Stmts_23, &StmtsExitMethods_27);
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
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "gc_check not implemented.");
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

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
        ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_8, Lval_15, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Rval_16, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "assign_if_in_heap");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "delete_object not supported in Java.");
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
            MR_Word ArrayDims_34;
            MR_String Start_40;
            MR_String End_41;
            MR_Word Var_77;
            MR_Integer Var_79;
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "explicit secondary tag");
                  return;
                }
                break;
            }
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
            Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_79 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_77, (MR_Integer) 2, Context_12, Var_79);
            ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_8, Target_20, Stream_9);
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
                succeeded = ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(MerType_30, CtorCat_31, &Var_32, &Var_33);
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word CtorDefn_37;
              MR_String CtorName_38;
              MR_Integer CtorArity_39;

              ml_backend__mlds_to_java_type__output_type_for_java_6_p_0(Info_8, Stream_9, Type_23, &ArrayDims_34);
              mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 46);
              CtorDefn_37 = ((MR_Word) ((MR_hl_field(0, QualifiedCtorId_29, (MR_Integer) 2))));
              CtorName_38 = ((MR_String) ((MR_hl_field(0, CtorDefn_37, (MR_Integer) 0))));
              CtorArity_39 = ((MR_Integer) ((MR_hl_field(0, CtorDefn_37, (MR_Integer) 1))));
              ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_5_p_0(Stream_9, CtorName_38, CtorArity_39);
            }
            else
              ml_backend__mlds_to_java_type__output_type_for_java_6_p_0(Info_8, Stream_9, Type_23, &ArrayDims_34);
            ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(ArrayDims_34, &Start_40, &End_41);
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
              MR_Integer Var_102;
              MR_Integer Var_105;

              mercury__io__write_string_4_p_0(Stream_9, Start_40);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              Var_102 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
              ml_backend__mlds_to_java_stmt__output_init_args_for_java_7_p_0(Info_8, Stream_9, Var_102, HeadArgRvalType_42, TailArgRvalsTypes_43);
              Var_105 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_105);
              mercury__io__write_string_4_p_0(Stream_9, End_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}\n");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "mark_hp not implemented.");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "restore_hp not implemented.");
            return;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "trail_ops not implemented.");
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
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "inline_target_code only works for lang_java");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_125;
                  MR_Box conv0_STATE_VARIABLE_IO_53;

                  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
                  {
                    Var_125 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_125, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[0]));
                    MR_hl_field(0, Var_125, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0_1));
                    MR_hl_field(0, Var_125, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_125, 3) = ((MR_Box) (Info_8));
                    MR_hl_field(0, Var_125, 4) = ((MR_Box) (Stream_9));
                  }
                  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_125, Components_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_53);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_atomic_stmt_for_java\'/7", (MR_String) "foreign language interfacing not implemented");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_init_args_for_java_7_p_0(
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
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, HeadArgRval_14, Stream_9);
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

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Context_11,
  MR_Word Match_12)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Match_12)) == (MR_Integer) 1))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_case_cond_for_java\'/7", (MR_String) "cannot match ranges in Java cases");
      return;
    }
  else
  {
    MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(0, Match_12, (MR_Integer) 0))));
    MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Integer N_15;
    MR_Word Var_26;

    ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_21, (MR_Integer) 2, Context_11, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
    succeeded = ((((MR_tag((MR_Word) Rval_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        N_15 = ((MR_Integer) ((MR_hl_field(3, Var_26, (MR_Integer) 1))));
    }
    if (succeeded)
      mercury__io__write_int_4_p_0(Stream_9, N_15);
    else
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Rval_14, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ":\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_assign_results_9_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Integer ResultIndex_5,
  MR_Integer Indent_6,
  MR_Word Context_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_assign_results\'/9", (MR_String) "list length mismatch");
          return;
        }
    }
    else
    {
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_assign_results\'/9", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Word Type_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Types_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
        MR_Word Var_52 = ((((MR_Unsigned) ((MR_hl_field(0, Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_61;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Integer next_value_of_ResultIndex_5;

        ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_2, Var_52, (MR_Integer) 2, Context_7, Indent_6);
        ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_1, Var_74, Stream_2);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) " = ");
        ml_backend__mlds_to_java_stmt__output_unboxed_result_6_p_0(Info_1, Stream_2, Type_44, ResultIndex_5);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
        Var_61 = (MR_Integer) ((MR_Unsigned) ResultIndex_5 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Var_73;
        next_value_of_HeadVar__4_4 = Types_45;
        next_value_of_ResultIndex_5 = Var_61;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        ResultIndex_5 = next_value_of_ResultIndex_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_unboxed_result_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Integer ResultIndex_10)
{
  MR_bool succeeded;
  MR_String JavaBoxedTypeName_13;
  MR_String UnboxMethod_14;
  MR_String Var_12;

  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_9, &Var_12, &JavaBoxedTypeName_13, &UnboxMethod_14);
  if (succeeded)
  {
    MR_String Var_40;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
    mercury__io__write_string_4_p_0(Stream_8, JavaBoxedTypeName_13);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") result[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_10, &Var_40);
    mercury__io__write_string_4_p_0(Stream_8, Var_40);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]).");
    mercury__io__write_string_4_p_0(Stream_8, UnboxMethod_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "()");
  }
  else
  {
    MR_String TypeName_15;
    MR_String Var_57;

    TypeName_15 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_7, Type_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_8, TypeName_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") result[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_10, &Var_57);
    mercury__io__write_string_4_p_0(Stream_8, Var_57);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_boxed_args\'/6", (MR_String) "length mismatch");
          return;
        }
    }
    else
    {
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_boxed_args\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word CallArgType_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
        MR_Word CallArgTypes_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));

        ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_1, CallArgType_34, Var_45, Stream_2);
        if (!((Var_44 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_HeadVar__4_4;

          mercury__io__write_string_4_p_0(Stream_2, (MR_String) ", ");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Var_44;
          next_value_of_HeadVar__4_4 = CallArgTypes_35;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(
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
  ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(1, &ml_backend__mlds_to_java_stmt_scalar_common_2[1])));
  return ExitMethods_6;
}

void mercury__ml_backend__mlds_to_java_stmt__init(void)
{
}

void mercury__ml_backend__mlds_to_java_stmt__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_stmt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_stmt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_stmt.
