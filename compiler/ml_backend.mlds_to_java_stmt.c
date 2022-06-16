/*
** Automatically generated from `mlds_to_java_stmt.m'
** by the Mercury compiler,
** version rotd-2022-06-16
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
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0;

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__510__1_5_p_0(
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
ml_backend__mlds_to_java_stmt__output_switch_default_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word FuncInfo_13,
  MR_Word Context_14,
  MR_Word Default_15,
  MR_Word * ExitMethods_16);

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
ml_backend__mlds_to_java_stmt__output_args_as_array_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word CallArgs_9,
  MR_Word CallArgTypes_10);

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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_stmt_scalar_common_2[0])))
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
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



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_stmt__pair__pti_pair_2__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_ml_backend__mlds__type_ctor_info_mlds_rval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__510__1_5_p_0(
  MR_Word Info_9,
  MR_Word LambdaHeadVar__1_48,
  MR_Word LambdaHeadVar__2_49)
{
  MR_Word Type_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 0))));
  MR_Word Result_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_48, (MR_Integer) 1))));

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
        MR_String CodeString_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 0))));
        MR_Word MaybeUserContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetCode_8, (MR_Integer) 1))));

        if ((MaybeUserContext_11 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_7, CodeString_10);
        else
        {
          MR_Word ProgContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUserContext_11, (MR_Integer) 0))));

          ml_backend__mlds_to_java_util__write_string_with_context_block_7_p_0(Info_6, Stream_7, (MR_Integer) 0, CodeString_10, ProgContext_12);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String CodeString_32 = ((MR_String) ((MR_hl_field(MR_mktag(2), TargetCode_8, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_7, CodeString_32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_13, Stream_7);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_6, Lval_14, Stream_7);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetCode_8, (MR_Integer) 1))));
            MR_Word InfoGenerics_16;
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2))));
            MR_String Var_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4))));
            MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6))));
            MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));

            {
              InfoGenerics_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 0) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 1) = (MR_Box) (packed_word_0);
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 2) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 5) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (MR_Unsigned) (Var_41)));
              MR_hl_field(MR_mktag(0), InfoGenerics_16, 6) = ((MR_Box) (Var_42));
            }
            ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(InfoGenerics_16, Type_15, Stream_7);
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
  MR_Word LocalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 0))));
  MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 1))));
  MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 2))));
  MR_Word Initializer_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_10, (MR_Integer) 3))));
  MR_Word Var_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Integer Var_24;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_8, Var_19, (MR_Integer) 2, Context_13, Indent_9);
  ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_14, Stream_8);
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
    ml_backend__mlds_to_java_stmt__output_switch_default_for_java_9_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Context_5, Default_7, ExitMethods_8);
  else
  {
    MR_Word Case_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Cases_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word CaseExitMethods0_32;
    MR_Word CasesExitMethods_33;
    MR_Word CaseExitMethods_34;

    ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Context_5, Case_27, &CaseExitMethods0_32);
    ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(Info_1, Stream_2, Indent_3, FuncInfo_4, Context_5, Cases_28, Default_7, &CasesExitMethods_33);
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
ml_backend__mlds_to_java_stmt__output_switch_default_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word FuncInfo_13,
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
            MR_Word Var_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Word Var_35;
            MR_Integer Var_37;

            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_11, Var_30, (MR_Integer) 2, Context_14, Indent_12);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default: /*NOTREACHED*/\n");
            Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_37 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_11, Var_35, (MR_Integer) 2, Context_14, Var_37);
            mercury__io__write_string_4_p_0(Stream_11, (MR_String) "throw new jmercury.runtime.UnreachableDefault();\n");
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
        MR_Word Stmt_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_15, (MR_Integer) 0))));
        MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Integer Var_27;

        ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_11, Var_22, (MR_Integer) 2, Context_14, Indent_12);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "default:\n");
        Var_27 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
        ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_10, Stream_11, Var_27, FuncInfo_13, Stmt_18, ExitMethods_16);
      }
      break;
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

  ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word FirstCond_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 0))));
  MR_Word LaterConds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 1))));
  MR_Word Stmt_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_15, (MR_Integer) 2))));
  MR_Word StmtExitMethods_21;
  MR_Word Var_25;
  MR_Integer Var_27;
  MR_Box conv0_STATE_VARIABLE_IO_26_26;

  ml_backend__mlds_to_java_stmt__output_case_cond_for_java_7_p_0(Info_10, Stream_11, Indent_12, Context_14, FirstCond_18);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_6[1]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_switch_case_for_java_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Info_10));
    MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Indent_12));
    MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (Context_14));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, LaterConds_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_26_26);
  Var_27 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_10, Stream_11, Var_27, FuncInfo_13, Stmt_20, &StmtExitMethods_21);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)), StmtExitMethods_21);
  if (succeeded)
  {
    MR_Word Var_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
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

  ml_backend__mlds_to_java_stmt__IntroducedFrom__pred__output_stmt_return_for_java__510__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_func__output_function_defn_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_stmt__output_local_var_defn_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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
  Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  ml_backend__mlds_to_java_util__output_context_for_java_6_p_0(Stream_10, Var_63, (MR_Integer) 2, Context_16);
  switch (MR_tag((MR_Word) Stmt_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_13, (MR_Integer) 0))));
        MR_Word FuncDefns_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_13, (MR_Integer) 1))));
        MR_Word SubStmts_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_13, (MR_Integer) 2))));
        MR_Word Context_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_13, (MR_Integer) 3))));
        MR_Integer BlockIndent_144 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
        MR_Word Var_163;

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
        if (!((LocalVarDefns_139 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_153;
          MR_Box conv0_STATE_VARIABLE_IO_33_154;

          {
            Var_153 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_153, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_153, 3) = ((MR_Box) (Info_9));
            MR_hl_field(MR_mktag(0), Var_153, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(MR_mktag(0), Var_153, 5) = ((MR_Box) (BlockIndent_144));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_153, LocalVarDefns_139, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_33_154);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        if (!((FuncDefns_140 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word Var_157;
          MR_Box conv1_STATE_VARIABLE_IO_37_158;

          {
            Var_157 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_157, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_157, 3) = ((MR_Box) (Info_9));
            MR_hl_field(MR_mktag(0), Var_157, 4) = ((MR_Box) (Stream_10));
            MR_hl_field(MR_mktag(0), Var_157, 5) = ((MR_Box) (BlockIndent_144));
            MR_hl_field(MR_mktag(0), Var_157, 6) = ((MR_Box) ((MR_Unsigned) 8U));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_157, FuncDefns_140, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_37_158);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        }
        ml_backend__mlds_to_java_stmt__output_statements_for_java_8_p_0(Info_9, Stream_10, BlockIndent_144, FuncInfo_12, SubStmts_141, ExitMethods_14);
        Var_163 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_163, (MR_Integer) 2, Context_142, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_583 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt_13, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Cond_584 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_13, (MR_Integer) 1))));
        MR_Word BodyStmt_585 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_13, (MR_Integer) 2))));
        MR_Word Context_587 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_13, (MR_Integer) 4))));
        MR_Integer ScopeIndent_588;

        ml_backend__mlds_to_target_util__scope_indent_3_p_0(BodyStmt_585, Indent_11, &ScopeIndent_588);
        switch (Kind_583) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_617;
              MR_Word BodyInfo_625;
              MR_Word StmtExitMethods_626;
              MR_Word Var_637;
              MR_Word Var_641;
              MR_String Var_642;
              MR_Word Var_643;
              MR_Word Var_644;
              MR_Word Var_646;
              MR_Unsigned packed_word_20;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "do\n");
              Var_637 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
              packed_word_20 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
              Var_641 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2))));
              Var_642 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
              Var_643 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));
              Var_644 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
              Var_646 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6))));
              {
                BodyInfo_625 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BodyInfo_625, 0) = ((MR_Box) (Var_637));
                MR_hl_field(MR_mktag(0), BodyInfo_625, 1) = (MR_Box) (packed_word_20);
                MR_hl_field(MR_mktag(0), BodyInfo_625, 2) = ((MR_Box) (Var_641));
                MR_hl_field(MR_mktag(0), BodyInfo_625, 3) = ((MR_Box) (Var_642));
                MR_hl_field(MR_mktag(0), BodyInfo_625, 4) = ((MR_Box) (Var_643));
                MR_hl_field(MR_mktag(0), BodyInfo_625, 5) = (MR_Box) (((((MR_Unsigned) (Var_644) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                MR_hl_field(MR_mktag(0), BodyInfo_625, 6) = ((MR_Box) (Var_646));
              }
              ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(BodyInfo_625, Stream_10, ScopeIndent_588, FuncInfo_12, BodyStmt_585, &StmtExitMethods_626);
              Var_617 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
              ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_617, (MR_Integer) 2, Context_587, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_584, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ");\n");
              *ExitMethods_14 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_584, StmtExitMethods_626);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_597;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "while (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_584, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
              succeeded = ((((MR_tag((MR_Word) Cond_584)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Cond_584, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_597 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_584, (MR_Integer) 1))));
                succeeded = (Var_597 == (MR_Word) ((MR_Unsigned) 4U));
              }
              if (succeeded)
              {
                MR_Integer Var_601;

                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
                Var_601 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_601);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "/* Unreachable code */\n");
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
                *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
              }
              else
              {
                MR_Word BodyInfo_589;
                MR_Word StmtExitMethods_590;
                MR_Word Var_627 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
                MR_Word Var_631 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2))));
                MR_String Var_632 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
                MR_Word Var_633 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));
                MR_Word Var_634 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_636 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6))));
                MR_Unsigned packed_word_24 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));

                {
                  BodyInfo_589 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 0) = ((MR_Box) (Var_627));
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 1) = (MR_Box) (packed_word_24);
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 2) = ((MR_Box) (Var_631));
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 3) = ((MR_Box) (Var_632));
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 4) = ((MR_Box) (Var_633));
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 5) = (MR_Box) (((((MR_Unsigned) (Var_634) << 2)) | (MR_Unsigned) ((MR_Integer) 2)));
                  MR_hl_field(MR_mktag(0), BodyInfo_589, 6) = ((MR_Box) (Var_636));
                }
                ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(BodyInfo_589, Stream_10, ScopeIndent_588, FuncInfo_12, BodyStmt_585, &StmtExitMethods_590);
                *ExitMethods_14 = ml_backend__mlds_to_java_stmt__while_exit_methods_for_java_2_f_0(Cond_584, StmtExitMethods_590);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_354 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_13, (MR_Integer) 0))));
        MR_Word Then0_355 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_13, (MR_Integer) 1))));
        MR_Word MaybeElse_356 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_13, (MR_Integer) 2))));
        MR_Word Context_357 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_13, (MR_Integer) 3))));
        MR_Word Then_362;
        MR_Integer ThenScopeIndent_363;
        MR_Word ThenExitMethods_364;
        MR_Word ThenContext_361;
        MR_Word Var_368;

        succeeded = (MaybeElse_356 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Then0_355)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_355, (MR_Integer) 2))));
            ThenContext_361 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Then0_355, (MR_Integer) 3))));
            succeeded = (Var_368 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
        {
          MR_Word Var_371;

          {
            Var_371 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_371, 0) = ((MR_Box) (Then0_355));
            MR_hl_field(MR_mktag(1), Var_371, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Then_362 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Then_362, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Then_362, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Then_362, 2) = ((MR_Box) (Var_371));
            MR_hl_field(MR_mktag(0), Then_362, 3) = ((MR_Box) (ThenContext_361));
          }
        }
        else
          Then_362 = Then0_355;
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "if (");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Cond_354, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")\n");
        ml_backend__mlds_to_target_util__scope_indent_3_p_0(Then_362, Indent_11, &ThenScopeIndent_363);
        ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, ThenScopeIndent_363, FuncInfo_12, Then_362, &ThenExitMethods_364);
        if ((MaybeElse_356 == (MR_Word) ((MR_Unsigned) 0U)))
          *ExitMethods_14 = mercury__set__insert_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_364, ((MR_Box) ((MR_Integer) 4)));
        else
        {
          MR_Word Else_365 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_356, (MR_Integer) 0))));
          MR_Integer ElseScopeIndent_366;
          MR_Word ElseExitMethods_367;
          MR_Word Var_380 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);

          ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_380, (MR_Integer) 2, Context_357, Indent_11);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "else\n");
          ml_backend__mlds_to_target_util__scope_indent_3_p_0(Else_365, Indent_11, &ElseScopeIndent_366);
          ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, ElseScopeIndent_366, FuncInfo_12, Else_365, &ElseExitMethods_367);
          *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ThenExitMethods_364, ElseExitMethods_367);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Val_479 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 2))));
            MR_Word Cases_481 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 4))));
            MR_Word Default_482 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 5))));
            MR_Word Context_483 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 6))));
            MR_Word CaseInfo_484;
            MR_Word Var_485 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            MR_Integer Var_494;
            MR_Word Var_497;
            MR_Word Var_510;
            MR_Word Var_514;
            MR_String Var_515;
            MR_Word Var_516;
            MR_Word Var_517;
            MR_Word Var_519;
            MR_Unsigned packed_word_15;

            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_485, (MR_Integer) 2, Context_483, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "switch (");
            ml_backend__mlds_to_java_data__output_rval_maybe_with_enum_for_java_5_p_0(Info_9, Val_479, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") {\n");
            Var_510 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
            packed_word_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1)));
            Var_514 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 2))));
            Var_515 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
            Var_516 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 4))));
            Var_517 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5))) >> 2)) & (MR_Integer) 1);
            Var_519 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 6))));
            {
              CaseInfo_484 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CaseInfo_484, 0) = ((MR_Box) (Var_510));
              MR_hl_field(MR_mktag(0), CaseInfo_484, 1) = (MR_Box) (packed_word_15);
              MR_hl_field(MR_mktag(0), CaseInfo_484, 2) = ((MR_Box) (Var_514));
              MR_hl_field(MR_mktag(0), CaseInfo_484, 3) = ((MR_Box) (Var_515));
              MR_hl_field(MR_mktag(0), CaseInfo_484, 4) = ((MR_Box) (Var_516));
              MR_hl_field(MR_mktag(0), CaseInfo_484, 5) = (MR_Box) (((((MR_Unsigned) (Var_517) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(MR_mktag(0), CaseInfo_484, 6) = ((MR_Box) (Var_519));
            }
            Var_494 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_switch_cases_for_java_10_p_0(CaseInfo_484, Stream_10, Var_494, FuncInfo_12, Context_483, Cases_481, Default_482, ExitMethods_14);
            Var_497 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_497, (MR_Integer) 2, Context_483, Indent_11);
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
            MR_Word Target_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Target_38)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Target_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word BreakContext_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5))) & (MR_Integer) 3);

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
                      MR_Word BreakContext_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 5))) & (MR_Integer) 3);

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
            MR_Word Signature_195 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 1))));
            MR_Word FuncRval_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 2))));
            MR_Word CallArgs_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 3))));
            MR_Word Results_198 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 4))));
            MR_Word Context_200 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 6))));
            MR_Word ArgTypes_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_195, (MR_Integer) 0))));
            MR_Word RetTypes_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_195, (MR_Integer) 1))));
            MR_Word Var_227;
            MR_Integer Var_229;
            MR_Word Var_239;
            MR_Word Var_287;

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_227 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_229 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_10, Var_227, (MR_Integer) 2, Context_200, Var_229);
            if (!((Results_198 == (MR_Word) ((MR_Unsigned) 0U))))
            {
              MR_Word Var_312 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_198, (MR_Integer) 1))));
              MR_Word Var_313 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_198, (MR_Integer) 0))));

              if ((Var_312 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_9, Var_313, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = ");
              }
              else
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "java.lang.Object [] result = ");
            }
            succeeded = ((((MR_tag((MR_Word) FuncRval_196)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FuncRval_196, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FuncRval_196, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_239)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word Var_243;

              ml_backend__mlds_to_java_data__output_call_rval_for_java_5_p_0(Info_9, FuncRval_196, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
              {
                Var_243 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_243, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_243, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_243, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_243, 3) = ((MR_Box) (Info_9));
              }
              parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_243, (MR_String) ", ", CallArgs_197, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            else
            {
              MR_Integer Arity_213;

              if (!((RetTypes_202 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_202, (MR_Integer) 1))));
                MR_Word Var_315 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_202, (MR_Integer) 0))));

                if ((Var_314 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String RetTypeString_209;

                  ml_backend__mlds_to_java_type__boxed_type_to_string_for_java_3_p_0(Info_9, Var_315, &RetTypeString_209);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
                  mercury__io__write_string_4_p_0(Stream_10, RetTypeString_209);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                }
                else
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((java.lang.Object[]) ");
              }
              mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), CallArgs_197, &Arity_213);
              succeeded = ml_backend__mlds_to_java_util__is_specialised_method_ptr_arity_1_p_0(Arity_213);
              if (succeeded)
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtr");
                mercury__io__write_int_4_p_0(Stream_10, Arity_213);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_196, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_9, Stream_10, CallArgs_197, ArgTypes_201);
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((jmercury.runtime.MethodPtrN) ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_9, FuncRval_196, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").call___0_0(");
                ml_backend__mlds_to_java_stmt__output_args_as_array_6_p_0(Info_9, Stream_10, CallArgs_197, ArgTypes_201);
              }
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
              if (!((RetTypes_202 == (MR_Word) ((MR_Unsigned) 0U))))
              {
                MR_Word Var_316 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_202, (MR_Integer) 1))));
                MR_Word Var_317 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_202, (MR_Integer) 0))));

                if ((Var_316 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_String UnboxMethod_217;
                  MR_String Var_215;
                  MR_String Var_216;

                  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Var_317, &Var_215, &Var_216, &UnboxMethod_217);
                  if (succeeded)
                  {
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").");
                    mercury__io__write_string_4_p_0(Stream_10, UnboxMethod_217);
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "()");
                  }
                  else
                    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
                }
                else
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
              }
            }
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            succeeded = (Results_198 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_198, (MR_Integer) 1))));
              succeeded = (Var_287 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Integer Var_289 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);

              ml_backend__mlds_to_java_stmt__output_assign_results_9_p_0(Info_9, Stream_10, Results_198, RetTypes_202, (MR_Integer) 0, Var_289, Context_200);
            }
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 4)));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Results_407 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 1))));

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            if ((Results_407 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return;\n");
            else
            {
              MR_Word Var_467 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_407, (MR_Integer) 1))));
              MR_Word Var_468 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Results_407, (MR_Integer) 0))));

              if ((Var_467 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return ");
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Var_468, Stream_10);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
              }
              else
              {
                MR_Word Params_413 = (MR_Word) (FuncInfo_12);
                MR_Word ReturnTypes_415 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_413, (MR_Integer) 1))));
                MR_Word TypesAndResults_416;
                MR_Word OutputBoxedRval_417;
                MR_String Separator_421;
                MR_Integer Var_434;
                MR_String Var_445;
                MR_Integer Var_447;
                MR_Integer Var_448;

                TypesAndResults_416 = mercury__assoc_list__from_corresponding_lists_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ReturnTypes_415, Results_407);
                mercury__io__write_string_4_p_0(Stream_10, (MR_String) "return new java.lang.Object[] {\n");
                Var_434 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_434);
                {
                  OutputBoxedRval_417 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OutputBoxedRval_417, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), OutputBoxedRval_417, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0_4));
                  MR_hl_field(MR_mktag(0), OutputBoxedRval_417, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), OutputBoxedRval_417, 3) = ((MR_Box) (Info_9));
                }
                Var_448 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
                Var_447 = (MR_Integer) ((MR_Unsigned) Var_448 * (MR_Unsigned) 2);
                Var_445 = mercury__string__duplicate_char_2_f_0((MR_Char) 32, Var_447);
                Separator_421 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_445);
                parse_tree__parse_tree_out_info__write_out_list_6_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_1[0]), OutputBoxedRval_417, Separator_421, TypesAndResults_416, Stream_10);
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
            MR_Word BodyStmt_539 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 2))));
            MR_Word HandlerStmt_540 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 3))));
            MR_Word TryExitMethods0_542;
            MR_Word CatchExitMethods_543;
            MR_Integer Var_550;
            MR_Integer Var_562;
            MR_Integer Var_565;
            MR_Word Var_571;

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "try\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_550 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, Var_550, FuncInfo_12, BodyStmt_539, &TryExitMethods0_542);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "catch (jmercury.runtime.Commit commit_variable)\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "{\n");
            Var_562 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Var_562);
            Var_565 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_stmt__output_statement_for_java_8_p_0(Info_9, Stream_10, Var_565, FuncInfo_12, HandlerStmt_540, &CatchExitMethods_543);
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
            Var_571 = mercury__set__delete_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), TryExitMethods0_542, ((MR_Box) ((MR_Integer) 3)));
            *ExitMethods_14 = mercury__set__union_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), Var_571, CatchExitMethods_543);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref_331 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 1))));

            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Ref_331, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) " = new jmercury.runtime.Commit();\n");
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_10, Indent_11);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) "throw ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Ref_331, Stream_10);
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ";\n");
            *ExitMethods_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ((MR_Box) ((MR_Integer) 3)));
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_13, (MR_Integer) 1))));

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
    MR_Word Stmt_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Stmts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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

  ml_backend__mlds_to_java_stmt__output_target_code_component_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
        MR_String Comment_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), AtomicStmt_11, (MR_Integer) 0))));

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
        MR_Word Lval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_11, (MR_Integer) 0))));
        MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_11, (MR_Integer) 1))));

        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
        ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_8, Lval_15, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = ");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Rval_16, Stream_9);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 0))))) {
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
            MR_Word Target_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 1))));
            MR_Word ExplicitSecTag_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 4))));
            MR_Word MaybeCtorName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 7))));
            MR_Word IsArray_39;
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
            Var_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
            Var_79 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
            ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_77, (MR_Integer) 2, Context_12, Var_79);
            ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(Info_8, Target_20, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
            succeeded = (MaybeCtorName_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              QualifiedCtorId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorName_25, (MR_Integer) 0))));
              succeeded = ((((MR_tag((MR_Word) Type_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                MerType_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_23, (MR_Integer) 1))));
                CtorCat_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_23, (MR_Integer) 2))));
                succeeded = ml_backend__mlds_to_java_type__hand_defined_type_for_java_4_p_0(MerType_30, CtorCat_31, &Var_32, &Var_33);
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word CtorDefn_36;
              MR_String CtorName_37;
              MR_Integer CtorArity_38;

              ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_8, Type_23, Stream_9);
              mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 46);
              CtorDefn_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualifiedCtorId_29, (MR_Integer) 2))));
              CtorName_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), CtorDefn_36, (MR_Integer) 0))));
              CtorArity_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorDefn_36, (MR_Integer) 1))));
              ml_backend__mlds_to_java_name__output_unqual_class_name_for_java_5_p_0(Stream_9, CtorName_37, CtorArity_38);
            }
            else
              ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_8, Type_23, Stream_9);
            IsArray_39 = ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(Type_23);
            ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(IsArray_39, &Start_40, &End_41);
            if ((ArgRvalsTypes_26 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_9, Start_40);
              mercury__io__write_string_4_p_0(Stream_9, End_41);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
            }
            else
            {
              MR_Word HeadArgRvalType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRvalsTypes_26, (MR_Integer) 0))));
              MR_Word TailArgRvalsTypes_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRvalsTypes_26, (MR_Integer) 1))));
              MR_Integer Var_102;
              MR_Integer Var_105;

              mercury__io__write_string_4_p_0(Stream_9, Start_40);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
              Var_102 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
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
            MR_Word TargetLang_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_11, (MR_Integer) 2))));

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
                    MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&ml_backend__mlds_to_java_stmt_scalar_common_4[0]));
                    MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (ml_backend__mlds_to_java_stmt__output_atomic_stmt_for_java_7_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (Info_8));
                    MR_hl_field(MR_mktag(0), Var_125, 4) = ((MR_Box) (Stream_9));
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
    MR_Word HeadArgRval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadArg_11, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, HeadArgRval_14, Stream_9);
    if ((TailArgs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailArg_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_12, (MR_Integer) 0))));
      MR_Word TailTailArgs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailArgs_12, (MR_Integer) 1))));
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
    MR_Word Val_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Match_12, (MR_Integer) 0))));
    MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Integer N_15;
    MR_Word Var_26;

    ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_21, (MR_Integer) 2, Context_11, Indent_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "case ");
    succeeded = ((((MR_tag((MR_Word) Val_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Val_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Val_14, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_26, (MR_Integer) 1))));
    }
    if (succeeded)
      mercury__io__write_int_4_p_0(Stream_9, N_15);
    else
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Val_14, Stream_9);
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
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_assign_results\'/9", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        MR_Word Type_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word Types_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
        MR_Word Var_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
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
  MR_String JavaBoxedName_13;
  MR_String UnboxMethod_14;
  MR_String Var_12;

  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_9, &Var_12, &JavaBoxedName_13, &UnboxMethod_14);
  if (succeeded)
  {
    MR_String Var_42;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
    mercury__io__write_string_4_p_0(Stream_8, JavaBoxedName_13);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "result[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_10, &Var_42);
    mercury__io__write_string_4_p_0(Stream_8, Var_42);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]).");
    mercury__io__write_string_4_p_0(Stream_8, UnboxMethod_14);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "()");
  }
  else
  {
    MR_String Var_56;

    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_9, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "result[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_stmt_scalar_common_3[0]), ResultIndex_10, &Var_56);
    mercury__io__write_string_4_p_0(Stream_8, Var_56);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_stmt__output_args_as_array_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word CallArgs_9,
  MR_Word CallArgTypes_10)
{
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "new java.lang.Object[] { ");
  ml_backend__mlds_to_java_stmt__output_boxed_args_6_p_0(Info_7, Stream_8, CallArgs_9, CallArgTypes_10);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "} ");
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
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_stmt.output_boxed_args\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word CallArgType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
        MR_Word CallArgTypes_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));

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
  MR_bool succeeded = ((((MR_tag((MR_Word) Cond_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word ExitMethods_6;
  MR_Word ExitMethods0_7;
  MR_Word Var_8;
  MR_Word TypeCtorInfo_17_17;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Cond_4, (MR_Integer) 1))));
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
  ExitMethods_6 = mercury__set__delete_list_2_f_0((MR_Word) (&ml_backend__mlds_to_target_util__ml_backend__mlds_to_target_util__type_ctor_info_exit_method_0), ExitMethods0_7, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__mlds_to_java_stmt_scalar_common_2[1])));
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
