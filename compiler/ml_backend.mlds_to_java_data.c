/*
** Automatically generated from `mlds_to_java_data.m'
** by the Mercury compiler,
** version rotd-2023-01-30
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


// :- module ml_backend.mlds_to_java_data.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_data__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_data.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint32.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
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
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
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




static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__900__1_2_p_0(
  MR_Word Lang_21,
  MR_Word HeadVar__2_87);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word HeadInit_12,
  MR_Word TailInits_13,
  MR_String Suffix_14);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_cast_rval_for_java_6_p_0(
  MR_Word tscc_proc_4_input_1_Info_7,
  MR_Word tscc_proc_4_input_2_Type_8,
  MR_Word tscc_proc_4_input_3_Expr_9,
  MR_Word tscc_proc_4_input_4_Stream_10);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String FuncName_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_String OpStr_11,
  MR_String Mask_12,
  MR_Word X_13,
  MR_Word Y_14);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word Expr_9,
  MR_Word Stream_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Const_8);

static void MR_CALL 
ml_backend__mlds_to_java_data__mlds_output_wrapper_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word CodeAddr_8);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(
  MR_Word Rval_2);


static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_2[1][5];


struct ml_backend__mlds_to_java_data__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_to_java_data__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_to_java_data__vector_common_type_3_0_s ml_backend__mlds_to_java_data_vector_common_3[10];



static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_1[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_java_data__vector_common_type_3_0_s ml_backend__mlds_to_java_data_vector_common_3[10] = {
  /* row   0 */   { (MR_String) ">>" },
  /* row   1 */   { (MR_String) ">>>" },
  /* row   2 */   { (MR_String) ">>" },
  /* row   3 */   { (MR_String) ">>>" },
  /* row   4 */   { (MR_String) ">>" },
  /* row   5 */   { (MR_String) ">>>" },
  /* row   6 */   { (MR_String) ">>" },
  /* row   7 */   { (MR_String) ">>>" },
  /* row   8 */   { (MR_String) ">>" },
  /* row   9 */   { (MR_String) ">>>" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__900__1_2_p_0(
  MR_Word Lang_21,
  MR_Word HeadVar__2_87)
{
  MR_bool succeeded = (Lang_21 == HeadVar__2_87);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_nonempty_initializer_body_list_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Inits_11,
  MR_String Suffix_12)
{
  MR_Word HeadInit_14;
  MR_Word TailInits_15;
  MR_Box conv0_HeadInit_14;

  mercury__list__det_head_tail_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Inits_11, &conv0_HeadInit_14, &TailInits_15);
  HeadInit_14 = ((MR_Word) (conv0_HeadInit_14));
  ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_8_p_0(Info_8, Stream_9, Indent_10, HeadInit_14, TailInits_15, Suffix_12);
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word OutputAux_12,
  MR_Integer Indent_13,
  MR_Word Type_14,
  MR_Word Initializer_15,
  MR_String Suffix_16)
{
  switch (MR_tag((MR_Word) Initializer_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        switch (MR_tag((MR_Word) OutputAux_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String InitForType_24;

                  InitForType_24 = ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(Type_14);
                  mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
                  mercury__io__write_string_4_p_0(Stream_11, InitForType_24);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) " = ");
        switch (MR_tag((MR_Word) OutputAux_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
                  MR_Word Var_33;

                  {
                    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Type_14));
                  }
                  ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_10, Stream_11, (MR_Integer) 0, Var_32, Initializer_15, Var_33, Suffix_16);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_36;

                  {
                    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Type_14));
                  }
                  ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_7_p_0(Info_10, Stream_11, Initializer_15, Var_36, Suffix_16);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
              MR_Word Var_33;

              {
                Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_33, 0) = ((MR_Box) (Type_14));
              }
              ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_10, Stream_11, (MR_Integer) 0, Var_32, Initializer_15, Var_33, Suffix_16);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word HeadInit_12,
  MR_Word TailInits_13,
  MR_String Suffix_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((TailInits_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_9, Stream_10, (MR_Integer) 1, Indent_11, HeadInit_12, (MR_Word) ((MR_Unsigned) 0U), Suffix_14);
    else
    {
      MR_Word HeadTailInit_16 = ((MR_Word) ((MR_hl_field(1, TailInits_13, (MR_Integer) 0))));
      MR_Word TailTailInits_17 = ((MR_Word) ((MR_hl_field(1, TailInits_13, (MR_Integer) 1))));
      MR_Word next_value_of_HeadInit_12;
      MR_Word next_value_of_TailInits_13;

      ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_9, Stream_10, (MR_Integer) 1, Indent_11, HeadInit_12, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ",");
      // direct tailcall eliminated
      ;
      next_value_of_HeadInit_12 = HeadTailInit_16;
      next_value_of_TailInits_13 = TailTailInits_17;
      HeadInit_12 = next_value_of_HeadInit_12;
      TailInits_13 = next_value_of_TailInits_13;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Word InitStart_12,
  MR_Integer Indent_13,
  MR_Word Initializer_14,
  MR_Word MaybeType_15,
  MR_String Suffix_16)
{
  switch (MR_tag((MR_Word) Initializer_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_body_for_java\'/9", (MR_String) "no_initializer");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Initializer_14, (MR_Integer) 0))));

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_13);
            break;
          case (MR_Integer) 0:
            {
            }
            break;
        }
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_10, Rval_18, Stream_11);
        mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_19 = ((MR_Word) ((MR_hl_field(2, Initializer_14, (MR_Integer) 0))));
        MR_Word FieldInits_20 = ((MR_Word) ((MR_hl_field(2, Initializer_14, (MR_Integer) 1))));
        MR_Word IsArray_21;
        MR_String Start_22;
        MR_String End_23;

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            mercury__io__nl_3_p_0(Stream_11);
            break;
        }
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_13);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
        ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_10, StructType_19, Stream_11);
        IsArray_21 = ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(StructType_19);
        ml_backend__mlds_to_target_util__init_arg_wrappers_cs_java_3_p_0(IsArray_21, &Start_22, &End_23);
        if ((FieldInits_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_11, Start_22);
          mercury__io__write_string_4_p_0(Stream_11, End_23);
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
        else
        {
          MR_Word HeadFieldInit_24 = ((MR_Word) ((MR_hl_field(1, FieldInits_20, (MR_Integer) 0))));
          MR_Word TailFieldInits_25 = ((MR_Word) ((MR_hl_field(1, FieldInits_20, (MR_Integer) 1))));
          MR_Integer Var_60;

          mercury__io__write_string_4_p_0(Stream_11, Start_22);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
          Var_60 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_8_p_0(Info_10, Stream_11, Var_60, HeadFieldInit_24, TailFieldInits_25, (MR_String) "");
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_13);
          mercury__io__write_string_4_p_0(Stream_11, End_23);
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_26 = ((MR_Word) ((MR_hl_field(3, Initializer_14, (MR_Integer) 0))));

        switch (InitStart_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            mercury__io__nl_3_p_0(Stream_11);
            break;
        }
        ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_13);
        mercury__io__write_string_4_p_0(Stream_11, (MR_String) "new ");
        if ((MaybeType_15 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "/* XXX init_array */ Object[]");
        else
        {
          MR_Word Type_27 = ((MR_Word) ((MR_hl_field(1, MaybeType_15, (MR_Integer) 0))));

          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_10, Type_27, Stream_11);
        }
        if ((ElementInits_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {}");
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
        else
        {
          MR_Word HeadElementInit_28 = ((MR_Word) ((MR_hl_field(1, ElementInits_26, (MR_Integer) 0))));
          MR_Word TailElementInits_29 = ((MR_Word) ((MR_hl_field(1, ElementInits_26, (MR_Integer) 1))));
          MR_Integer Var_86;

          mercury__io__write_string_4_p_0(Stream_11, (MR_String) " {\n");
          Var_86 = (MR_Integer) ((MR_Unsigned) Indent_13 + (MR_Unsigned) 1);
          ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_8_p_0(Info_10, Stream_11, Var_86, HeadElementInit_28, TailElementInits_29, (MR_String) "");
          ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_13);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}");
          mercury__io__write_string_4_p_0(Stream_11, Suffix_16);
          mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Initializer_10,
  MR_Word MaybeType_11,
  MR_String Suffix_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/7", (MR_String) "no_initializer");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/7", (MR_String) "init_obj");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_15 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 0))));
        MR_Word FieldInits_16 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 1))));
        MR_Word CtorCat_18;
        MR_Word Var_33;

        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "new ");
        succeeded = ((((MR_tag((MR_Word) StructType_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, StructType_15, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CtorCat_18 = ((MR_Word) ((MR_hl_field(3, StructType_15, (MR_Integer) 2))));
          Var_33 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_18);
          succeeded = (Var_33 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Integer Size_19;
          MR_String Var_78;

          Size_19 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_16);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "java.lang.Object[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), Size_19, &Var_78);
          mercury__io__write_string_4_p_0(Stream_9, Var_78);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        else
        {
          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_8, StructType_15, Stream_9);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "()");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_20 = ((MR_Word) ((MR_hl_field(3, Initializer_10, (MR_Integer) 0))));
        MR_Integer Size_69;

        Size_69 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_20);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "new ");
        if ((MaybeType_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_98;

          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/* XXX init_array */ Object[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), Size_69, &Var_98);
          mercury__io__write_string_4_p_0(Stream_9, Var_98);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        else
        {
          MR_Word Type_21 = ((MR_Word) ((MR_hl_field(1, MaybeType_11, (MR_Integer) 0))));
          MR_String String_22;
          MR_Word ArrayDims_23;
          MR_Word Heads_24;
          MR_Integer Var_74;
          MR_Box conv0_Var_74;

          ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_8, Type_21, &String_22, &ArrayDims_23);
          mercury__io__write_string_4_p_0(Stream_9, String_22);
          succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_23, &Heads_24, &conv0_Var_74);
          if (succeeded)
          {
            Var_74 = ((MR_Integer) (conv0_Var_74));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = ((MR_Integer) 0 == Var_74);
          if (succeeded)
          {
            MR_Word Var_51;
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (Size_69));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Heads_24, Var_53);
            ml_backend__mlds_to_target_util__output_array_dimensions_4_p_0(Stream_9, Var_51);
            mercury__io__write_string_4_p_0(Stream_9, Suffix_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
          }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/7", (MR_String) "missing array dimension");
              return;
            }
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_maybe_with_enum_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word Lval_14;
  MR_Word Type_16;
  MR_Word CtorCat_23;

  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
  succeeded = ((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2);
  if (succeeded)
  {
    Lval_14 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) Lval_14)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          Type_16 = ((MR_Word) ((MR_hl_field(0, Lval_14, (MR_Integer) 4))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Type_16 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Type_16 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Type_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        CtorCat_23 = ((MR_Word) ((MR_hl_field(3, Type_16, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) CtorCat_23)) == (MR_Integer) 2);
        if (succeeded)
        {
        }
      }
    }
  }
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_value");
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_call_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Stream_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word CodeAddr_11;
  MR_Word Const_10;

  if (succeeded)
  {
    Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Const_10)) == (MR_Integer) 1);
    if (succeeded)
      CodeAddr_11 = (MR_Word) (MR_body((MR_Word) (Const_10), (MR_Integer) 1));
  }
  if (succeeded)
  {
    MR_Word QualFuncLabel_14 = ((MR_Word) ((MR_hl_field(0, CodeAddr_11, (MR_Integer) 0))));
    MR_Word ModuleName_16 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_14, (MR_Integer) 0))));
    MR_Word FuncLabel_17 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_14, (MR_Integer) 1))));
    MR_Word ProcLabel_18 = ((MR_Word) ((MR_hl_field(0, FuncLabel_17, (MR_Integer) 0))));
    MR_Word MaybeAux_19 = ((MR_Word) ((MR_hl_field(0, FuncLabel_17, (MR_Integer) 1))));
    MR_String Var_23;

    ml_backend__mlds_to_java_name__output_qual_name_prefix_java_5_p_0(Stream_8, ModuleName_16, (MR_Integer) 0);
    ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_4_p_0(Stream_8, ProcLabel_18);
    Var_23 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_19);
    mercury__io__write_string_4_p_0(Stream_8, Var_23);
  }
  else
    ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_lval_for_java_5_p_0(
  MR_Word tscc_proc_1_input_1_Info_6,
  MR_Word tscc_proc_1_input_2_Lval_7,
  MR_Word tscc_proc_1_input_3_Stream_8)
{
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;

  // The code for TSCC PROC 1: pred ml_backend.mlds_to_java_data.output_lval_for_java/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));

            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_6, CtorType_20, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
            }
            ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_8, FieldVarName_23);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((java.lang.Object[]) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_25;
          MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
          tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
          tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_27 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_28 = (MR_String) (GlobalVarRef_27);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word QualLocalVarName_31 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_8, QualLocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_5_p_0(Info_6, Stream_8, QualGlobalVarName_29);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
      tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
      tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
      goto top_of_proc_3;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_108;
          MR_String Var_118;

          TypeNum_25 = (MR_Integer) (Var_50);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_27, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_25, &Var_108);
          mercury__io__write_string_4_p_0(Stream_8, Var_108);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), RowNum_26, &Var_118);
          mercury__io__write_string_4_p_0(Stream_8, Var_118);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "tags not supported in Java");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(Info_6, Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_75 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_6, Type_75, SubRval_76, Stream_8);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_77 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(Info_6, Type_77, SubRval_78, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_79 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(Info_6, Stream_8, Unop_16, SubRval_79);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(Info_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "mem_addr(_) not supported");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_82 = (MR_Integer) (Var_62);
              MR_String Var_86;
              MR_String Var_96;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_82, &Var_86);
              mercury__io__write_string_4_p_0(Stream_8, Var_86);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), StartRowNum_32, &Var_96);
              mercury__io__write_string_4_p_0(Stream_8, Var_96);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_18;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_49;

      ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_49 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_49);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new jmercury.runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_30;

        succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_30 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_47;
        MR_String Var_14;
        MR_String Var_15;

        succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &Var_47, &Var_14, &Var_15);
        if (succeeded)
          succeeded = (strcmp((MR_String) "int", Var_47) == 0);
        if (succeeded)
        {
          MR_Word Lval_52;
          MR_Word Type_54;
          MR_Word CtorCat_61;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(int) ");
          ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
          succeeded = ((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            Lval_52 = ((MR_Word) ((MR_hl_field(2, Expr_9, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) Lval_52)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Type_54 = ((MR_Word) ((MR_hl_field(0, Lval_52, (MR_Integer) 4))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Lval_52, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Type_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_54, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CtorCat_61 = ((MR_Word) ((MR_hl_field(3, Type_54, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) CtorCat_61)) == (MR_Integer) 2);
                if (succeeded)
                {
                }
              }
            }
          }
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".MR_value");
        }
        else
        {
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Info_6 = Info_7;
          next_value_of_tscc_proc_3_input_2_Rval_7 = Expr_9;
          next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_10;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(
  MR_Word tscc_proc_2_input_1_Info_6,
  MR_Word tscc_proc_2_input_2_Rval_7,
  MR_Word tscc_proc_2_input_3_Stream_8)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;

  // The code for TSCC PROC 2: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));

            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_6, CtorType_20, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
            }
            ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_8, FieldVarName_23);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((java.lang.Object[]) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_25;
          MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
          tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
          tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_27 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_28 = (MR_String) (GlobalVarRef_27);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word QualLocalVarName_31 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_8, QualLocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_5_p_0(Info_6, Stream_8, QualGlobalVarName_29);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
      tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
      tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
      goto top_of_proc_3;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_108;
          MR_String Var_118;

          TypeNum_25 = (MR_Integer) (Var_50);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_27, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_25, &Var_108);
          mercury__io__write_string_4_p_0(Stream_8, Var_108);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), RowNum_26, &Var_118);
          mercury__io__write_string_4_p_0(Stream_8, Var_118);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "tags not supported in Java");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(Info_6, Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_75 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_6, Type_75, SubRval_76, Stream_8);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_77 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(Info_6, Type_77, SubRval_78, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_79 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(Info_6, Stream_8, Unop_16, SubRval_79);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(Info_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "mem_addr(_) not supported");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_82 = (MR_Integer) (Var_62);
              MR_String Var_86;
              MR_String Var_96;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_82, &Var_86);
              mercury__io__write_string_4_p_0(Stream_8, Var_86);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), StartRowNum_32, &Var_96);
              mercury__io__write_string_4_p_0(Stream_8, Var_96);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_18;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_49;

      ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_49 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_49);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new jmercury.runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_30;

        succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_30 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_47;
        MR_String Var_14;
        MR_String Var_15;

        succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &Var_47, &Var_14, &Var_15);
        if (succeeded)
          succeeded = (strcmp((MR_String) "int", Var_47) == 0);
        if (succeeded)
        {
          MR_Word Lval_52;
          MR_Word Type_54;
          MR_Word CtorCat_61;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(int) ");
          ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
          succeeded = ((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            Lval_52 = ((MR_Word) ((MR_hl_field(2, Expr_9, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) Lval_52)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Type_54 = ((MR_Word) ((MR_hl_field(0, Lval_52, (MR_Integer) 4))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Lval_52, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Type_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_54, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CtorCat_61 = ((MR_Word) ((MR_hl_field(3, Type_54, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) CtorCat_61)) == (MR_Integer) 2);
                if (succeeded)
                {
                }
              }
            }
          }
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".MR_value");
        }
        else
        {
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Info_6 = Info_7;
          next_value_of_tscc_proc_3_input_2_Rval_7 = Expr_9;
          next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_10;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(
  MR_Word tscc_proc_3_input_1_Info_6,
  MR_Word tscc_proc_3_input_2_Rval_7,
  MR_Word tscc_proc_3_input_3_Stream_8)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Info_7;
  MR_Word tscc_proc_4_input_2_Type_8;
  MR_Word tscc_proc_4_input_3_Expr_9;
  MR_Word tscc_proc_4_input_4_Stream_10;

  // The code for TSCC PROC 3: pred ml_backend.mlds_to_java_data.output_rval_for_java/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/6-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));

            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_6, CtorType_20, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
            }
            ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_8, FieldVarName_23);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((java.lang.Object[]) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_25;
          MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
          tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
          tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_27 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_28 = (MR_String) (GlobalVarRef_27);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word QualLocalVarName_31 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_8, QualLocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_5_p_0(Info_6, Stream_8, QualGlobalVarName_29);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
      tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
      tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
      goto top_of_proc_3;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_108;
          MR_String Var_118;

          TypeNum_25 = (MR_Integer) (Var_50);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_27, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_25, &Var_108);
          mercury__io__write_string_4_p_0(Stream_8, Var_108);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), RowNum_26, &Var_118);
          mercury__io__write_string_4_p_0(Stream_8, Var_118);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "tags not supported in Java");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(Info_6, Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_75 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_6, Type_75, SubRval_76, Stream_8);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_77 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(Info_6, Type_77, SubRval_78, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_79 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(Info_6, Stream_8, Unop_16, SubRval_79);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(Info_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "mem_addr(_) not supported");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_82 = (MR_Integer) (Var_62);
              MR_String Var_86;
              MR_String Var_96;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_82, &Var_86);
              mercury__io__write_string_4_p_0(Stream_8, Var_86);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), StartRowNum_32, &Var_96);
              mercury__io__write_string_4_p_0(Stream_8, Var_96);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_18;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_49;

      ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_49 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_49);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new jmercury.runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_30;

        succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_30 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_47;
        MR_String Var_14;
        MR_String Var_15;

        succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &Var_47, &Var_14, &Var_15);
        if (succeeded)
          succeeded = (strcmp((MR_String) "int", Var_47) == 0);
        if (succeeded)
        {
          MR_Word Lval_52;
          MR_Word Type_54;
          MR_Word CtorCat_61;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(int) ");
          ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
          succeeded = ((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            Lval_52 = ((MR_Word) ((MR_hl_field(2, Expr_9, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) Lval_52)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Type_54 = ((MR_Word) ((MR_hl_field(0, Lval_52, (MR_Integer) 4))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Lval_52, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Type_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_54, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CtorCat_61 = ((MR_Word) ((MR_hl_field(3, Type_54, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) CtorCat_61)) == (MR_Integer) 2);
                if (succeeded)
                {
                }
              }
            }
          }
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".MR_value");
        }
        else
        {
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Info_6 = Info_7;
          next_value_of_tscc_proc_3_input_2_Rval_7 = Expr_9;
          next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_10;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_cast_rval_for_java_6_p_0(
  MR_Word tscc_proc_4_input_1_Info_7,
  MR_Word tscc_proc_4_input_2_Type_8,
  MR_Word tscc_proc_4_input_3_Expr_9,
  MR_Word tscc_proc_4_input_4_Stream_10)
{
  MR_Word tscc_proc_1_input_1_Info_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Info_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Info_6;
  MR_Word tscc_proc_3_input_2_Rval_7;
  MR_Word tscc_proc_3_input_3_Stream_8;

  // The code for TSCC PROC 4: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/6-0
  ;
  ;
  goto top_of_proc_4;
top_of_proc_1:;
  {
    MR_Word Info_6 = tscc_proc_1_input_1_Info_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_19 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_20 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_Word FieldVarName_23 = ((MR_Word) ((MR_hl_field(0, QualFieldVarName_19, (MR_Integer) 2))));

            succeeded = (FieldVarName_23 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
            {
              ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
            }
            else
            {
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".");
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
                ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_6, CtorType_20, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
              }
            }
            ml_backend__mlds_to_java_name__output_field_var_name_for_java_4_p_0(Stream_8, FieldVarName_23);
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 0))))
            {
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/5", (MR_String) "unexpected field type");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((java.lang.Object[]) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, PtrRval_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, OffsetRval_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_25;
          MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_6 = next_value_of_tscc_proc_2_input_1_Info_6;
          tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
          tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_27 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String EnvVarName_28 = (MR_String) (GlobalVarRef_27);

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury_envvar_");
          mercury__io__write_string_4_p_0(Stream_8, EnvVarName_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word QualLocalVarName_31 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_8, QualLocalVarName_31);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_5_p_0(Info_6, Stream_8, QualGlobalVarName_29);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_6 = tscc_proc_2_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_3_input_1_Info_6 = Info_6;
      MR_Word next_value_of_tscc_proc_3_input_2_Rval_7 = Rval_7;
      MR_Word next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_8;

      // direct tailcall eliminated
      ;
      tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
      tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
      tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
      goto top_of_proc_3;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
      ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, Rval_7, Stream_8);
      mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_6 = tscc_proc_3_input_1_Info_6;
    MR_Word Rval_7 = tscc_proc_3_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_3_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "ml_scalar_common");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_22 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 0))));
          MR_Integer TypeNum_25;
          MR_Integer RowNum_26 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 3))));
          MR_Word ModuleSymName_27;
          MR_String MangledModuleName_28;
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_22, (MR_Integer) 2))));
          MR_String Var_108;
          MR_String Var_118;

          TypeNum_25 = (MR_Integer) (Var_50);
          ModuleSymName_27 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_23);
          parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_27, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_28);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".MR_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_25, &Var_108);
          mercury__io__write_string_4_p_0(Stream_8, Var_108);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), RowNum_26, &Var_118);
          mercury__io__write_string_4_p_0(Stream_8, Var_118);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_6 = Info_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_6 = next_value_of_tscc_proc_1_input_1_Info_6;
          tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
          tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "tags not supported in Java");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(Info_6, Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_75 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(Info_6, Type_75, SubRval_76, Stream_8);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_77 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_78 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(Info_6, Type_77, SubRval_78, Stream_8);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Info_7 = Info_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Type_8 = Type_14;
              MR_Word next_value_of_tscc_proc_4_input_3_Expr_9 = SubRval_15;
              MR_Word next_value_of_tscc_proc_4_input_4_Stream_10 = Stream_8;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Info_7 = next_value_of_tscc_proc_4_input_1_Info_7;
              tscc_proc_4_input_2_Type_8 = next_value_of_tscc_proc_4_input_2_Type_8;
              tscc_proc_4_input_3_Expr_9 = next_value_of_tscc_proc_4_input_3_Expr_9;
              tscc_proc_4_input_4_Stream_10 = next_value_of_tscc_proc_4_input_4_Stream_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_79 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(Info_6, Stream_8, Unop_16, SubRval_79);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(Info_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/5", (MR_String) "mem_addr(_) not supported");
              return;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_29 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_32 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 3))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, VectorCommon_29, (MR_Integer) 2))));
              MR_Integer TypeNum_82 = (MR_Integer) (Var_62);
              MR_String Var_86;
              MR_String Var_96;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), TypeNum_82, &Var_86);
              mercury__io__write_string_4_p_0(Stream_8, Var_86);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), StartRowNum_32, &Var_96);
              mercury__io__write_string_4_p_0(Stream_8, Var_96);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_6, RowRval_30, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
            }
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "this");
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Info_7 = tscc_proc_4_input_1_Info_7;
    MR_Word Type_8 = tscc_proc_4_input_2_Type_8;
    MR_Word Expr_9 = tscc_proc_4_input_3_Expr_9;
    MR_Word Stream_10 = tscc_proc_4_input_4_Stream_10;
    MR_bool succeeded = (Type_8 == (MR_Word) ((MR_Unsigned) 32U));
    MR_Integer N_12;
    MR_Word Var_18;

    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(3, Expr_9, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
        if (succeeded)
          N_12 = ((MR_Integer) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_49;

      ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
      succeeded = (N_12 >= (MR_Integer) 1);
      if (succeeded)
      {
        Var_49 = (MR_Integer) 5;
        succeeded = (N_12 <= Var_49);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.PseudoTypeInfo.K");
        mercury__io__write_int_4_p_0(Stream_10, N_12);
      }
      else
      {
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "new jmercury.runtime.PseudoTypeInfo(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
    }
    else
    {
      if ((Type_8 == (MR_Word) ((MR_Unsigned) 28U)))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(3, Type_8, (MR_Integer) 2))));
        MR_Word Var_30;

        succeeded = ((((MR_tag((MR_Word) Var_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_29, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_30 = ((MR_Unsigned) ((MR_hl_field(3, Var_29, (MR_Integer) 1))) & (MR_Integer) 3);
          succeeded = (Var_30 == (MR_Integer) 0);
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_5_p_0(Info_7, Stream_10, (MR_String) "cast");
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
        ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
      }
      else
      {
        MR_String Var_47;
        MR_String Var_14;
        MR_String Var_15;

        succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &Var_47, &Var_14, &Var_15);
        if (succeeded)
          succeeded = (strcmp((MR_String) "int", Var_47) == 0);
        if (succeeded)
        {
          MR_Word Lval_52;
          MR_Word Type_54;
          MR_Word CtorCat_61;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(int) ");
          ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
          succeeded = ((MR_tag((MR_Word) Expr_9)) == (MR_Integer) 2);
          if (succeeded)
          {
            Lval_52 = ((MR_Word) ((MR_hl_field(2, Expr_9, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) Lval_52)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Type_54 = ((MR_Word) ((MR_hl_field(0, Lval_52, (MR_Integer) 4))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Lval_52, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Type_54 = ((MR_Word) ((MR_hl_field(3, Lval_52, (MR_Integer) 2))));
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Type_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_54, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                CtorCat_61 = ((MR_Word) ((MR_hl_field(3, Type_54, (MR_Integer) 2))));
                succeeded = ((MR_tag((MR_Word) CtorCat_61)) == (MR_Integer) 2);
                if (succeeded)
                {
                }
              }
            }
          }
          if (succeeded)
            mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".MR_value");
        }
        else
        {
          MR_Word next_value_of_tscc_proc_3_input_1_Info_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Rval_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Stream_8;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Info_6 = Info_7;
          next_value_of_tscc_proc_3_input_2_Rval_7 = Expr_9;
          next_value_of_tscc_proc_3_input_3_Stream_8 = Stream_10;
          tscc_proc_3_input_1_Info_6 = next_value_of_tscc_proc_3_input_1_Info_6;
          tscc_proc_3_input_2_Rval_7 = next_value_of_tscc_proc_3_input_2_Rval_7;
          tscc_proc_3_input_3_Stream_8 = next_value_of_tscc_proc_3_input_3_Stream_8;
          goto top_of_proc_3;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Op_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&&", X_11, Y_12);
          break;
        case (MR_Integer) 1:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "||", X_11, Y_12);
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_binop_for_java\'/7", (MR_String) "invalid binary operator");
            return;
          }
          break;
        case (MR_Integer) 4:
          {
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".equals(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".compareTo(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")) ");
          }
          break;
        case (MR_Integer) 11:
          {
            succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_11);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value & 0xffffffffL) ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value) & 0xffffffffL)");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " & 0xffffffffL) ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " & 0xffffffffL))");
            }
          }
          break;
        case (MR_Integer) 12:
          {
            succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_11);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value & 0xffffffffL) ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value) & 0xffffffffL)");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "((");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " & 0xffffffffL) ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " & 0xffffffffL))");
            }
          }
          break;
        case (MR_Integer) 13:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
          break;
        case (MR_Integer) 14:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
          break;
        case (MR_Integer) 15:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
          break;
        case (MR_Integer) 16:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
          break;
        case (MR_Integer) 17:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "==", X_11, Y_12);
          break;
        case (MR_Integer) 18:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "!=", X_11, Y_12);
          break;
        case (MR_Integer) 19:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<", X_11, Y_12);
          break;
        case (MR_Integer) 20:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) ">", X_11, Y_12);
          break;
        case (MR_Integer) 21:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<=", X_11, Y_12);
          break;
        case (MR_Integer) 22:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) ">=", X_11, Y_12);
          break;
        case (MR_Integer) 26:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " == ");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ml_backend__mlds_to_java_data__output_int_binop_for_java_7_p_0(Info_8, Stream_9, Op_10, X_11, Y_12);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Op_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
          ml_backend__mlds_to_java_data__output_int_binop_for_java_7_p_0(Info_8, Stream_9, Op_10, X_11, Y_12);
          break;
        case (MR_Integer) 8:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "==", X_11, Y_12);
          break;
        case (MR_Integer) 9:
          ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "!=", X_11, Y_12);
          break;
        case (MR_Integer) 10:
          {
            ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_binop_for_java\'/7", (MR_String) "invalid binary operator");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  switch (MR_tag((MR_Word) Op_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Type_14 = ((MR_Unsigned) ((MR_hl_field(1, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Type_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 1:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
            ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "+", X_11, Y_12);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_355 = ((MR_Unsigned) ((MR_hl_field(2, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Type_355) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 1:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
            ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
              ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "-", X_11, Y_12);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Op_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_341 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_341) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "*", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_75 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_75) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "/", X_11, Y_12);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "/", (MR_String) "0xffffffffL", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "/", (MR_String) "0xffff", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "/", (MR_String) "0xffffffffL", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.divideUnsigned", X_11, Y_12);
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "/", (MR_String) "0xff", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_329 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_329) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "%", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "%", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "%", X_11, Y_12);
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "%", (MR_String) "0xffffffffL", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "%", (MR_String) "0xffff", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "%", (MR_String) "0xffffffffL", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.remainderUnsigned", X_11, Y_12);
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte)");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "%", (MR_String) "0xff", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type_94 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

            switch (Type_94) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<<", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<<", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<<", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<<", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<<", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type_745 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);
            MR_String OpStr_746 = ((&ml_backend__mlds_to_java_data_vector_common_3[0 + Type_745]))->ml_backend__mlds_to_java_data__vector_common_type_3_0__vct_3_f_0;

            switch (Type_745) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, OpStr_746, X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, OpStr_746, X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, OpStr_746, X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(((");
                  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") & ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0xffff");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  mercury__io__write_string_4_p_0(Stream_9, OpStr_746);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(((");
                  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") & ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0xff");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  mercury__io__write_string_4_p_0(Stream_9, OpStr_746);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_85 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_85) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "&", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Type_114 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_114) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "|", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Type_128 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_128) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 1:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
                }
                break;
              case (MR_Integer) 5:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(short) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
                }
                break;
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(byte) ");
                  ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, (MR_String) "^", X_11, Y_12);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Type_262 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_262) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 2:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<", X_11, Y_12);
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 5:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<", (MR_String) "0xffff", X_11, Y_12);
                break;
              case (MR_Integer) 7:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.compareUnsigned", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
                }
                break;
              case (MR_Integer) 3:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<", (MR_String) "0xff", X_11, Y_12);
                break;
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Type_198 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_198) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 2:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) ">", X_11, Y_12);
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 5:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">", (MR_String) "0xffff", X_11, Y_12);
                break;
              case (MR_Integer) 7:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.compareUnsigned", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
                }
                break;
              case (MR_Integer) 3:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">", (MR_String) "0xff", X_11, Y_12);
                break;
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Type_230 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_230) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 2:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) "<=", X_11, Y_12);
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<=", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 5:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<=", (MR_String) "0xffff", X_11, Y_12);
                break;
              case (MR_Integer) 7:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<=", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.compareUnsigned", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
                }
                break;
              case (MR_Integer) 3:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) "<=", (MR_String) "0xff", X_11, Y_12);
                break;
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Type_80 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (Type_80) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 8:
              case (MR_Integer) 2:
                ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(Info_8, Stream_9, (MR_String) ">=", X_11, Y_12);
                break;
              case (MR_Integer) 1:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">=", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 5:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">=", (MR_String) "0xffff", X_11, Y_12);
                break;
              case (MR_Integer) 7:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">=", (MR_String) "0xffffffffL", X_11, Y_12);
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(Info_8, Stream_9, (MR_String) "java.lang.Long.compareUnsigned", X_11, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
                }
                break;
              case (MR_Integer) 3:
                ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(Info_8, Stream_9, (MR_String) ">=", (MR_String) "0xff", X_11, Y_12);
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_maybe_with_enum_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) X_11)) == (MR_Integer) 2);
  MR_Word Lval_26;
  MR_Word Type_28;
  MR_Word CtorCat_35;

  if (succeeded)
  {
    Lval_26 = ((MR_Word) ((MR_hl_field(2, X_11, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) Lval_26)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          Type_28 = ((MR_Word) ((MR_hl_field(0, Lval_26, (MR_Integer) 4))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_26, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Type_28 = ((MR_Word) ((MR_hl_field(3, Lval_26, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Type_28 = ((MR_Word) ((MR_hl_field(3, Lval_26, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Type_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        CtorCat_35 = ((MR_Word) ((MR_hl_field(3, Type_28, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) CtorCat_35)) == (MR_Integer) 2);
        if (succeeded)
        {
        }
      }
    }
  }
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value ");
    mercury__io__write_string_4_p_0(Stream_9, OpStr_10);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ".MR_value)");
  }
  else
    ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(Info_8, Stream_9, OpStr_10, X_11, Y_12);
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_func_call_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String FuncName_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  mercury__io__write_string_4_p_0(Stream_9, FuncName_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_with_mask_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_String OpStr_11,
  MR_String Mask_12,
  MR_Word X_13,
  MR_Word Y_14)
{
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(((");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, X_13, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") & ");
  mercury__io__write_string_4_p_0(Stream_10, Mask_12);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
  mercury__io__write_string_4_p_0(Stream_10, OpStr_11);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ((");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_9, Y_14, Stream_10);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") & ");
  mercury__io__write_string_4_p_0(Stream_10, Mask_12);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "))");
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_basic_binop_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_String OpStr_10,
  MR_Word X_11,
  MR_Word Y_12)
{
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, X_11, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, OpStr_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_8, Y_12, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10)
{
  switch (MR_tag((MR_Word) UnaryOp_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnaryOp_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* tag */  0");
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* strip_tag */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* mkbody */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/* unmkbody */ ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_unop_for_java\'/6", (MR_String) "invalid unary operator");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_159 = ((MR_Unsigned) ((MR_hl_field(1, UnaryOp_9, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Var_159) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(short) (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(byte) (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(short) (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(byte) (");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "~");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_10, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word Expr_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_String JavaBoxedName_13;
  MR_String UnboxMethod_14;
  MR_String Var_12;

  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &Var_12, &JavaBoxedName_13, &UnboxMethod_14);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
    mercury__io__write_string_4_p_0(Stream_10, JavaBoxedName_13);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
    ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ").");
    mercury__io__write_string_4_p_0(Stream_10, UnboxMethod_14);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "()");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((");
    ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_7, Type_8, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_boxed_rval_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Type_8,
  MR_Word Expr_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_String JavaBoxedName_13;
  MR_String _JavaName_12;
  MR_String Var_14;

  succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_8, &_JavaName_12, &JavaBoxedName_13, &Var_14);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_10, JavaBoxedName_13);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ".valueOf(");
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
  }
  else
  {
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "((java.lang.Object) (");
    ml_backend__mlds_to_java_data__output_rval_for_java_5_p_0(Info_7, Expr_9, Stream_10);
    mercury__io__write_string_4_p_0(Stream_10, (MR_String) "))");
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__900__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Const_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Const_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Const_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "true");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "false");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CodeAddr_28 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));

        ml_backend__mlds_to_java_data__mlds_output_wrapper_code_addr_for_java_5_p_0(Info_6, Stream_7, CodeAddr_28);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

        ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(Stream_7, N_10);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned U_11 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Integer Var_49;

            Var_49 = mercury__uint__cast_to_int_1_f_0(U_11);
            ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(Stream_7, Var_49);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t I8_12 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(byte) ");
            mercury__io__write_int8_4_p_0(Stream_7, I8_12);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t U8_13 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));
            int8_t Var_56;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(byte) ");
            Var_56 = mercury__int8__cast_from_uint8_1_f_0(U8_13);
            mercury__io__write_int8_4_p_0(Stream_7, Var_56);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t I16_14 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
            mercury__io__write_int16_4_p_0(Stream_7, I16_14);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t U16_15 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));
            int16_t Var_63;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(short) ");
            Var_63 = mercury__int16__cast_from_uint16_1_f_0(U16_15);
            mercury__io__write_int16_4_p_0(Stream_7, Var_63);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t I32_16 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            mercury__io__write_int32_4_p_0(Stream_7, I32_16);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t U32_17 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));
            int32_t Var_66;

            Var_66 = mercury__int32__cast_from_uint32_1_f_0(U32_17);
            mercury__io__write_int32_4_p_0(Stream_7, Var_66);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t I64_18 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

            mercury__io__write_int64_4_p_0(Stream_7, I64_18);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t U64_19 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));
            int64_t Var_71;

            Var_71 = mercury__int64__cast_from_uint64_1_f_0(U64_19);
            mercury__io__write_int64_4_p_0(Stream_7, Var_71);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "L");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word EnumType_20 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Integer N_121 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_type__output_type_for_java_5_p_0(Info_6, EnumType_20, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".K");
            ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(Stream_7, N_121);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer N_120 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
            ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(Stream_7, N_120);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Float FloatVal_24 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_24);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String String_25 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_quoted_string_java_4_p_0(Stream_7, String_25);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word String_122 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_quoted_multi_string_java_4_p_0(Stream_7, String_122);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Lang_21 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String Value_22 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word Var_84;

            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_84, 0) = ((MR_Box) (&ml_backend__mlds_to_java_data_scalar_common_2[0]));
              MR_hl_field(0, Var_84, 1) = ((MR_Box) (ml_backend__mlds_to_java_data__output_rval_const_for_java_5_p_0_1));
              MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_84, 3) = ((MR_Box) (Lang_21));
              MR_hl_field(0, Var_84, 4) = ((MR_Box) ((MR_Integer) 2));
            }
            mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_const_for_java\'/5", (MR_String) "language other than Java.");
            mercury__io__write_string_4_p_0(Stream_7, Value_22);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TargetPrefixes_26 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_String NamedConst_27 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_String Var_92 = ((MR_String) ((MR_hl_field(0, TargetPrefixes_26, (MR_Integer) 0))));

            mercury__io__write_string_4_p_0(Stream_7, Var_92);
            mercury__io__write_string_4_p_0(Stream_7, NamedConst_27);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word LocalVarName_29 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            ml_backend__mlds_to_java_name__output_local_var_name_for_java_4_p_0(Stream_7, LocalVarName_29);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word GlobalVarName_31 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word SymName_32;
            MR_String ModuleNameStr_33;

            SymName_32 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_30);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_32, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_33);
            mercury__io__write_string_4_p_0(Stream_7, ModuleNameStr_33);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
            ml_backend__mlds_to_java_name__output_global_var_name_for_java_4_p_0(Stream_7, GlobalVarName_31);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word RttiId_34 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_String RttiAddrName_35;
            MR_Word ModuleName_123 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word SymName_124;
            MR_String ModuleNameStr_125;

            SymName_124 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_123);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_124, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_125);
            backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_34, &RttiAddrName_35);
            mercury__io__write_string_4_p_0(Stream_7, ModuleNameStr_125);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
            mercury__io__write_string_4_p_0(Stream_7, RttiAddrName_35);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word QualProcLabel_36 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word TablingId_37 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word ProcLabel_38 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_36, (MR_Integer) 1))));
            MR_String TablingPrefix_39;
            MR_String Var_114;
            MR_Word Var_117;
            MR_Word ModuleName_126 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_36, (MR_Integer) 0))));
            MR_Word SymName_127;
            MR_String ModuleNameStr_128;

            SymName_127 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_126);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_127, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_128);
            mercury__io__write_string_4_p_0(Stream_7, ModuleNameStr_128);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".");
            Var_114 = backend_libs__rtti__tabling_info_id_str_1_f_0(TablingId_37);
            TablingPrefix_39 = mercury__string__f_43_43_2_f_0(Var_114, (MR_String) "_");
            mercury__io__write_string_4_p_0(Stream_7, TablingPrefix_39);
            Var_117 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_38);
            ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_4_p_0(Stream_7, Var_117);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Type_40 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_String Initializer_41;

            Initializer_41 = ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(Type_40);
            mercury__io__write_string_4_p_0(Stream_7, Initializer_41);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__mlds_output_wrapper_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word CodeAddr_8)
{
  MR_Word AddrOfMap_10 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 4))));
  MR_Word CodeAddrWrapper_11;
  MR_String ClassName_12;
  MR_Word MaybePtrNum_13;
  MR_Box conv0_CodeAddrWrapper_11;

  mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0), AddrOfMap_10, ((MR_Box) (CodeAddr_8)), &conv0_CodeAddrWrapper_11);
  CodeAddrWrapper_11 = ((MR_Word) (conv0_CodeAddrWrapper_11));
  ClassName_12 = ((MR_String) ((MR_hl_field(0, CodeAddrWrapper_11, (MR_Integer) 0))));
  MaybePtrNum_13 = ((MR_Word) ((MR_hl_field(0, CodeAddrWrapper_11, (MR_Integer) 1))));
  if ((MaybePtrNum_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "new ");
    mercury__io__write_string_4_p_0(Stream_7, ClassName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_0()");
  }
  else
  {
    MR_Integer PtrNum_14 = ((MR_Integer) ((MR_hl_field(1, MaybePtrNum_13, (MR_Integer) 0))));
    MR_String Var_46;

    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "new ");
    mercury__io__write_string_4_p_0(Stream_7, ClassName_12);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "_0(");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), PtrNum_14, &Var_46);
    mercury__io__write_string_4_p_0(Stream_7, Var_46);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_const_for_java_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6)
{
  MR_bool succeeded = (N_6 > (MR_Integer) 0);
  uint32_t U32_9;
  int32_t _I32_8;

  if (succeeded)
  {
    succeeded = mercury__int32__from_int_2_p_0(N_6, &_I32_8);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = mercury__uint32__from_int_2_p_0(N_6, &U32_9);
  }
  if (succeeded)
  {
    MR_Integer N32_10;
    MR_Unsigned Var_22;
    MR_String Var_23;

    N32_10 = mercury__uint32__cast_to_int_1_f_0(U32_9);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "0x");
    mercury__string__format__format_cast_int_to_uint_2_p_0(N32_10, &Var_22);
    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_1[0]), (MR_Integer) 2, Var_22, &Var_23);
    mercury__io__write_string_4_p_0(Stream_5, Var_23);
  }
  else
    mercury__io__write_int_4_p_0(Stream_5, N_6);
}

MR_String MR_CALL 
ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(
  MR_Word Type_3)
{
  MR_bool succeeded;
  MR_String Initializer_4;

  switch (MR_tag((MR_Word) Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          Initializer_4 = (MR_String) "null";
          break;
        case (MR_Integer) 1:
          Initializer_4 = (MR_String) "0";
          break;
        case (MR_Integer) 2:
          Initializer_4 = (MR_String) "null";
          break;
        case (MR_Integer) 3:
          Initializer_4 = (MR_String) "\'\\u0000\'";
          break;
        case (MR_Integer) 4:
          Initializer_4 = (MR_String) "false";
          break;
        case (MR_Integer) 9:
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_java_data.get_default_initializer_for_java\'/1", (MR_String) "variable has unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      Initializer_4 = (MR_String) "null";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CtorCat_6 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) CtorCat_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Initializer_4 = (MR_String) "null";
                break;
              case (MR_Integer) 1:
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_to_java_data.get_default_initializer_for_java\'/1", (MR_String) "mercury_nb_type but ctor_cat_builtin");
                break;
              case (MR_Integer) 2:
                Initializer_4 = (MR_String) "null";
                break;
              case (MR_Integer) 3:
                Initializer_4 = (MR_String) "null";
                break;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          Initializer_4 = (MR_String) "null";
          break;
        case (MR_Integer) 3:
          Initializer_4 = (MR_String) "0";
          break;
        case (MR_Integer) 4:
          {
            MR_Word ForeignLangType_12 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_String Initializer0_16;
            MR_String Var_13;
            MR_String Var_14;
            MR_String Var_15;

            succeeded = ml_backend__mlds_to_java_type__java_primitive_foreign_language_type_5_p_0(ForeignLangType_12, &Var_13, &Var_14, &Var_15, &Initializer0_16);
            if (succeeded)
              Initializer_4 = Initializer0_16;
            else
              Initializer_4 = (MR_String) "null";
          }
          break;
      }
      break;
  }
  return Initializer_4;
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(
  MR_Word Rval_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Rval_2)) == (MR_Integer) 2);
  MR_Word Lval_3;
  MR_Word Type_5;
  MR_Word CtorCat_12;

  if (succeeded)
  {
    Lval_3 = ((MR_Word) ((MR_hl_field(2, Rval_2, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) Lval_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          Type_5 = ((MR_Word) ((MR_hl_field(0, Lval_3, (MR_Integer) 4))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Type_5 = ((MR_Word) ((MR_hl_field(3, Lval_3, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Type_5 = ((MR_Word) ((MR_hl_field(3, Lval_3, (MR_Integer) 2))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Type_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Type_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        CtorCat_12 = ((MR_Word) ((MR_hl_field(3, Type_5, (MR_Integer) 2))));
        succeeded = ((MR_tag((MR_Word) CtorCat_12)) == (MR_Integer) 2);
        if (succeeded)
        {
        }
      }
    }
  }
  return succeeded;
}

void mercury__ml_backend__mlds_to_java_data__init(void)
{
}

void mercury__ml_backend__mlds_to_java_data__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_data.
