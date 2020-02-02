/*
** Automatically generated from `mlds_to_java_data.m'
** by the Mercury compiler,
** version rotd-2020-02-02
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__904__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_87);

static void MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_initializer_body_list_for_java__1157__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_cast_rval_for_java_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6);

static void MR_CALL 
ml_backend__mlds_to_java_data__mlds_output_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word CodeAddr_7,
  MR_Word IsCall_8);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(
  MR_Integer N_4);

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(
  MR_Word Rval_2);

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(
  MR_Word Op_4);


static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_4[1][7];


/* sealed */ struct ml_backend__mlds_to_java_data__vector_common_type_1_0_s {
  const MR_String ml_backend__mlds_to_java_data__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct ml_backend__mlds_to_java_data__vector_common_type_1_0_s ml_backend__mlds_to_java_data_vector_common_1[10];



static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_data_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ml_backend__mlds_to_java_data__vector_common_type_1_0_s ml_backend__mlds_to_java_data_vector_common_1[10] = {
  /* row 0 */   {     (MR_String) ">>" },
  /* row 1 */   {     (MR_String) ">>>" },
  /* row 2 */   {     (MR_String) ">>" },
  /* row 3 */   {     (MR_String) ">>>" },
  /* row 4 */   {     (MR_String) ">>" },
  /* row 5 */   {     (MR_String) ">>>" },
  /* row 6 */   {     (MR_String) ">>" },
  /* row 7 */   {     (MR_String) ">>>" },
  /* row 8 */   {     (MR_String) ">>" },
  /* row 9 */   {     (MR_String) ">>>" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__904__1_2_p_0(
  MR_Word Lang_19,
  MR_Word HeadVar__2_87)
{
  {
    MR_bool succeeded = (Lang_19 == HeadVar__2_87);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_initializer_body_list_for_java__1157__1_4_p_0(
  MR_Word Info_5,
  MR_Word LambdaHeadVar__1_14)
{
  ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_5, LambdaHeadVar__1_14, (MR_Word) ((MR_Unsigned) 0U));
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_initializer_body_list_for_java__1157__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Inits_6)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_data_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_5));
    }
    mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Inits_6, (MR_String) ",\n\t\t", Var_12);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word OutputAux_8,
  MR_Word Type_9,
  MR_Word Initializer_10)
{
  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) OutputAux_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OutputAux_8)) {
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
                MR_String Var_24;

                mercury__io__write_string_3_p_0((MR_String) " = ");
                Var_24 = ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(Type_9);
                mercury__io__write_string_3_p_0(Var_24);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__io__write_string_3_p_0((MR_String) " = ");
        switch (MR_tag((MR_Word) OutputAux_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OutputAux_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  MR_Word Var_30;

                  {
                    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_7, Initializer_10, Var_30);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;

                  {
                    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_9));
                  }
                  ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_5_p_0(Info_7, Initializer_10, Var_28);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_30;

              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Type_9));
              }
              ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_7, Initializer_10, Var_30);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_initializer_body_list_for_java__1157__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_initializer_body_list_for_java__1157__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_body_for_java\'/5", (MR_String) "no_initializer");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_7, (MR_Integer) 0))));

          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Rval_10);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word IsArray_13;
          MR_String Var_31;
          MR_Char Var_34;
          MR_Word Var_66;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, StructType_11);
          IsArray_13 = ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(StructType_11);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_31 = (MR_String) " {";
          else
            Var_31 = (MR_String) "(";
          mercury__io__write_string_3_p_0(Var_31);
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__mlds_to_java_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_12, (MR_String) ",\n\t\t", Var_66);
          succeeded = (IsArray_13 == (MR_Integer) 0);
          if (succeeded)
            Var_34 = (MR_Char) 125;
          else
            Var_34 = (MR_Char) 41;
          mercury__io__write_char_3_p_0(Var_34);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Word Var_46;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ Object[]");
          else
          {
            MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));

            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_15);
          }
          mercury__io__write_string_3_p_0((MR_String) " {\n\t\t");
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ml_backend__mlds_to_java_data_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Info_6));
          }
          mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_14, (MR_String) ",\n\t\t", Var_46);
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Initializer_7,
  MR_Word MaybeType_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Initializer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/5", (MR_String) "no_initializer");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/5", (MR_String) "init_obj");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 0))));
          MR_Word FieldInits_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_7, (MR_Integer) 1))));
          MR_Word CtorCat_14;
          MR_Word Var_40;

          mercury__io__write_string_3_p_0((MR_String) "new ");
          succeeded = ((((MR_tag((MR_Word) StructType_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            CtorCat_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StructType_11, (MR_Integer) 2))));
            Var_40 = ml_backend__mlds_to_target_util__type_category_is_array_1_f_0(CtorCat_14);
            succeeded = (Var_40 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            MR_Integer Size_15;
            MR_String Var_62;

            Size_15 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), FieldInits_12);
            mercury__io__write_string_3_p_0((MR_String) "java.lang.Object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), Size_15, &Var_62);
            mercury__io__write_string_3_p_0(Var_62);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, StructType_11);
            mercury__io__write_string_3_p_0((MR_String) "()");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_7, (MR_Integer) 0))));
          MR_Integer Size_53;

          Size_53 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), ElementInits_16);
          mercury__io__write_string_3_p_0((MR_String) "new ");
          if ((MaybeType_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_73;

            mercury__io__write_string_3_p_0((MR_String) "/* XXX init_array */ Object[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), Size_53, &Var_73);
            mercury__io__write_string_3_p_0(Var_73);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          else
          {
            MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_8, (MR_Integer) 0))));
            MR_String String_18;
            MR_Word ArrayDims_19;
            MR_Word Heads_20;
            MR_Integer Var_58;
            MR_Box conv0_Var_58;

            ml_backend__mlds_to_java_type__type_to_string_for_java_4_p_0(Info_6, Type_17, &String_18, &ArrayDims_19);
            mercury__io__write_string_3_p_0(String_18);
            succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ArrayDims_19, &Heads_20, &conv0_Var_58);
            if (succeeded)
            {
              Var_58 = ((MR_Integer) (conv0_Var_58));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              succeeded = ((MR_Integer) 0 == Var_58);
            if (succeeded)
            {
              MR_Word Var_32;
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Size_53));
                MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Heads_20, Var_34);
              ml_backend__mlds_to_target_util__output_array_dimensions_3_p_0(Var_32);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_initializer_alloc_only_for_java\'/5", (MR_String) "missing array dimension");
                return;
              }
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_maybe_with_enum_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;
    MR_Word Lval_14;
    MR_Word Type_16;
    MR_Word CtorCat_24;

    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_6);
    succeeded = ((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2);
    if (succeeded)
    {
      Lval_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Lval_14)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_14, (MR_Integer) 4))));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_14, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Type_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CtorCat_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_16, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) CtorCat_24)) == (MR_Integer) 2);
          if (succeeded)
          {
          }
        }
      }
    }
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) ".MR_value");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_call_rval_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word CodeAddr_9;
    MR_Word Const_8;

    if (succeeded)
    {
      Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Const_8)) == (MR_Integer) 1);
      if (succeeded)
        CodeAddr_9 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word QualFuncLabel_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_9, (MR_Integer) 0))));
      MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_26, (MR_Integer) 0))));
      MR_Word FuncLabel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_26, (MR_Integer) 1))));
      MR_Word ProcLabel_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_29, (MR_Integer) 0))));
      MR_Word MaybeAux_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_29, (MR_Integer) 1))));
      MR_String Var_35;

      ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_28, (MR_Integer) 0);
      ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_3_p_0(ProcLabel_30);
      Var_35 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_31);
      mercury__io__write_string_3_p_0(Var_35);
    }
    else
      ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, Rval_6);
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_lval_for_java_4_p_0(
  MR_Word tscc_proc_1_input_1_Info_5,
  MR_Word tscc_proc_1_input_2_Lval_6)
{
  {
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 1: pred ml_backend.mlds_to_java_data.output_lval_for_java/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/5-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_17, (MR_Integer) 2))));

              succeeded = (FieldVarName_21 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_5, CtorType_18);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_21);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 20U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_23;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_26 = (MR_String) (GlobalVarRef_25);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(QualLocalVarName_29);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_27);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_20 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
            MR_Integer TypeNum_23;
            MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
            MR_Word ModuleSymName_25;
            MR_String MangledModuleName_26;
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
            MR_String Var_106;
            MR_String Var_116;

            TypeNum_23 = (MR_Integer) (Var_48);
            ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_25, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_26);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_23, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), RowNum_24, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_5, Type_73, SubRval_74);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(Info_5, Type_75, SubRval_76);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(Info_5, Unop_14, SubRval_77);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(Info_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                return;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
                MR_Integer TypeNum_80 = (MR_Integer) (Var_37);
                MR_String Var_84;
                MR_String Var_94;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_80, &Var_84);
                mercury__io__write_string_3_p_0(Var_84);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), StartRowNum_30, &Var_94);
                mercury__io__write_string_3_p_0(Var_94);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, RowRval_28);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_3_p_0((MR_String) "this");
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 32U));
      MR_Integer N_10;
      MR_Word Var_16;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_49;

        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_49);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
          MR_Word Var_28;

          succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = (Var_28 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_46;
          MR_String Var_12;
          MR_String Var_13;

          succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_46, &Var_12, &Var_13);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_46) == 0);
          if (succeeded)
          {
            MR_Word Lval_59;
            MR_Word Type_61;
            MR_Word CtorCat_69;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            succeeded = ((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              Lval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_8, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) Lval_59)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_59, (MR_Integer) 4))));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Type_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CtorCat_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) CtorCat_69)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
              mercury__io__write_string_3_p_0((MR_String) ".MR_value");
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(
  MR_Word tscc_proc_2_input_1_Info_5,
  MR_Word tscc_proc_2_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 2: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/5-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_17, (MR_Integer) 2))));

              succeeded = (FieldVarName_21 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_5, CtorType_18);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_21);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 20U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_23;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_26 = (MR_String) (GlobalVarRef_25);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(QualLocalVarName_29);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_27);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_20 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
            MR_Integer TypeNum_23;
            MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
            MR_Word ModuleSymName_25;
            MR_String MangledModuleName_26;
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
            MR_String Var_106;
            MR_String Var_116;

            TypeNum_23 = (MR_Integer) (Var_48);
            ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_25, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_26);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_23, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), RowNum_24, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_5, Type_73, SubRval_74);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(Info_5, Type_75, SubRval_76);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(Info_5, Unop_14, SubRval_77);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(Info_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                return;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
                MR_Integer TypeNum_80 = (MR_Integer) (Var_37);
                MR_String Var_84;
                MR_String Var_94;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_80, &Var_84);
                mercury__io__write_string_3_p_0(Var_84);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), StartRowNum_30, &Var_94);
                mercury__io__write_string_3_p_0(Var_94);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, RowRval_28);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_3_p_0((MR_String) "this");
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 32U));
      MR_Integer N_10;
      MR_Word Var_16;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_49;

        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_49);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
          MR_Word Var_28;

          succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = (Var_28 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_46;
          MR_String Var_12;
          MR_String Var_13;

          succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_46, &Var_12, &Var_13);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_46) == 0);
          if (succeeded)
          {
            MR_Word Lval_59;
            MR_Word Type_61;
            MR_Word CtorCat_69;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            succeeded = ((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              Lval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_8, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) Lval_59)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_59, (MR_Integer) 4))));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Type_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CtorCat_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) CtorCat_69)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
              mercury__io__write_string_3_p_0((MR_String) ".MR_value");
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(
  MR_Word tscc_proc_3_input_1_Info_5,
  MR_Word tscc_proc_3_input_2_Rval_6)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_4_input_1_Info_6;
    MR_Word tscc_proc_4_input_2_Type_7;
    MR_Word tscc_proc_4_input_3_Expr_8;

    // The code for TSCC PROC 3: pred ml_backend.mlds_to_java_data.output_rval_for_java/4-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/5-0
    ;
    ;
    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_17, (MR_Integer) 2))));

              succeeded = (FieldVarName_21 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_5, CtorType_18);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_21);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 20U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_23;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_26 = (MR_String) (GlobalVarRef_25);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(QualLocalVarName_29);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_27);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_20 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
            MR_Integer TypeNum_23;
            MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
            MR_Word ModuleSymName_25;
            MR_String MangledModuleName_26;
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
            MR_String Var_106;
            MR_String Var_116;

            TypeNum_23 = (MR_Integer) (Var_48);
            ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_25, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_26);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_23, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), RowNum_24, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_5, Type_73, SubRval_74);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(Info_5, Type_75, SubRval_76);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(Info_5, Unop_14, SubRval_77);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(Info_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                return;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
                MR_Integer TypeNum_80 = (MR_Integer) (Var_37);
                MR_String Var_84;
                MR_String Var_94;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_80, &Var_84);
                mercury__io__write_string_3_p_0(Var_84);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), StartRowNum_30, &Var_94);
                mercury__io__write_string_3_p_0(Var_94);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, RowRval_28);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_3_p_0((MR_String) "this");
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 32U));
      MR_Integer N_10;
      MR_Word Var_16;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_49;

        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_49);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
          MR_Word Var_28;

          succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = (Var_28 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_46;
          MR_String Var_12;
          MR_String Var_13;

          succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_46, &Var_12, &Var_13);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_46) == 0);
          if (succeeded)
          {
            MR_Word Lval_59;
            MR_Word Type_61;
            MR_Word CtorCat_69;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            succeeded = ((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              Lval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_8, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) Lval_59)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_59, (MR_Integer) 4))));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Type_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CtorCat_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) CtorCat_69)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
              mercury__io__write_string_3_p_0((MR_String) ".MR_value");
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_cast_rval_for_java_5_p_0(
  MR_Word tscc_proc_4_input_1_Info_6,
  MR_Word tscc_proc_4_input_2_Type_7,
  MR_Word tscc_proc_4_input_3_Expr_8)
{
  {
    MR_Word tscc_proc_1_input_1_Info_5;
    MR_Word tscc_proc_1_input_2_Lval_6;
    MR_Word tscc_proc_2_input_1_Info_5;
    MR_Word tscc_proc_2_input_2_Rval_6;
    MR_Word tscc_proc_3_input_1_Info_5;
    MR_Word tscc_proc_3_input_2_Rval_6;

    // The code for TSCC PROC 4: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/5-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ml_backend.mlds_to_java_data.output_lval_for_java/4-0
    ;
    // proc 2 in TSCC: pred ml_backend.mlds_to_java_data.output_bracketed_rval_for_java/4-0
    ;
    // proc 3 in TSCC: pred ml_backend.mlds_to_java_data.output_rval_for_java/4-0
    ;
    // proc 4 in TSCC: pred ml_backend.mlds_to_java_data.output_cast_rval_for_java/5-0
    ;
    ;
    goto top_of_proc_4;
  top_of_proc_1:;
    {
      MR_Word Info_5 = tscc_proc_1_input_1_Info_5;
      MR_Word Lval_6 = tscc_proc_1_input_2_Lval_6;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word PtrRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
            MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 3))));
            MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 4))));

            if (((MR_tag((MR_Word) FieldId_11)) == (MR_Integer) 1))
            {
              MR_Word QualFieldVarName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 0))));
              MR_Word CtorType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId_11, (MR_Integer) 1))));
              MR_Word FieldVarName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFieldVarName_17, (MR_Integer) 2))));

              succeeded = (FieldVarName_21 == (MR_Word) ((MR_Unsigned) 4U));
              if (succeeded)
              {
                ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                mercury__io__write_string_3_p_0((MR_String) ".");
              }
              else
              {
                succeeded = ((((MR_tag((MR_Word) PtrRval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), PtrRval_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (succeeded)
                {
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ".");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "((");
                  ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_5, CtorType_18);
                  mercury__io__write_string_3_p_0((MR_String) ") ");
                  ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_5, PtrRval_9);
                  mercury__io__write_string_3_p_0((MR_String) ").");
                }
              }
              ml_backend__mlds_to_java_name__output_field_var_name_for_java_3_p_0(FieldVarName_21);
            }
            else
            {
              MR_Word OffsetRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId_11, (MR_Integer) 0))));

              if ((FieldType_12 == (MR_Word) ((MR_Unsigned) 20U)))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) FieldType_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
              {
                MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldType_12, (MR_Integer) 1))));

                succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
                if (succeeded)
                {
                }
              }
              else
                succeeded = MR_FALSE;
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_lval_for_java\'/4", (MR_String) "unexpected field type");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object[]) ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, PtrRval_9);
              mercury__io__write_string_3_p_0((MR_String) ")[");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, OffsetRval_13);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_6 = Rval_23;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_5 = next_value_of_tscc_proc_2_input_1_Info_5;
            tscc_proc_2_input_2_Rval_6 = next_value_of_tscc_proc_2_input_2_Rval_6;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GlobalVarRef_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))));
            MR_String EnvVarName_26 = (MR_String) (GlobalVarRef_25);

            mercury__io__write_string_3_p_0((MR_String) "mercury_envvar_");
            mercury__io__write_string_3_p_0(EnvVarName_26);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word QualLocalVarName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(QualLocalVarName_29);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word QualGlobalVarName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_name__output_maybe_qualified_global_var_name_for_java_4_p_0(Info_5, QualGlobalVarName_27);
              }
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_5 = tscc_proc_2_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_2_input_2_Rval_6;
      MR_bool succeeded;

      if (((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 2))
      {
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));

        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_24, (MR_Integer) 0)))) == (MR_Integer) 0))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((((MR_tag((MR_Word) Rval_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

        succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        MR_Word next_value_of_tscc_proc_3_input_1_Info_5 = Info_5;
        MR_Word next_value_of_tscc_proc_3_input_2_Rval_6 = Rval_6;

        // direct tailcall eliminated
        ;
        tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
        tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
        goto top_of_proc_3;
      }
      else
      {
        mercury__io__write_char_3_p_0((MR_Char) 40);
        ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, Rval_6);
        mercury__io__write_char_3_p_0((MR_Char) 41);
      }
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_5 = tscc_proc_3_input_1_Info_5;
      MR_Word Rval_6 = tscc_proc_3_input_2_Rval_6;

      switch (MR_tag((MR_Word) Rval_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "ml_scalar_common");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ScalarCommon_20 = (MR_Word) (MR_body((MR_Word) (Rval_6), (MR_Integer) 1));
            MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 0))));
            MR_Integer TypeNum_23;
            MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 3))));
            MR_Word ModuleSymName_25;
            MR_String MangledModuleName_26;
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommon_20, (MR_Integer) 2))));
            MR_String Var_106;
            MR_String Var_116;

            TypeNum_23 = (MR_Integer) (Var_48);
            ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
            parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleSymName_25, (MR_Integer) 0, (MR_String) "__", &MangledModuleName_26);
            mercury__io__write_string_3_p_0(MangledModuleName_26);
            mercury__io__write_string_3_p_0((MR_String) ".MR_scalar_common_");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_23, &Var_106);
            mercury__io__write_string_3_p_0(Var_106);
            mercury__io__write_string_3_p_0((MR_String) "[");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), RowNum_24, &Var_116);
            mercury__io__write_string_3_p_0(Var_116);
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_5 = Info_5;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_6 = Lval_8;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Info_5 = next_value_of_tscc_proc_1_input_1_Info_5;
            tscc_proc_1_input_2_Lval_6 = next_value_of_tscc_proc_1_input_2_Lval_6;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "tags not supported in Java");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

                ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(Info_5, Const_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Type_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(Info_5, Type_73, SubRval_74);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Type_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(Info_5, Type_75, SubRval_76);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_4_input_1_Info_6 = Info_5;
                MR_Word next_value_of_tscc_proc_4_input_2_Type_7 = Type_12;
                MR_Word next_value_of_tscc_proc_4_input_3_Expr_8 = SubRval_13;

                // direct tailcall eliminated
                ;
                tscc_proc_4_input_1_Info_6 = next_value_of_tscc_proc_4_input_1_Info_6;
                tscc_proc_4_input_2_Type_7 = next_value_of_tscc_proc_4_input_2_Type_7;
                tscc_proc_4_input_3_Expr_8 = next_value_of_tscc_proc_4_input_3_Expr_8;
                goto top_of_proc_4;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Unop_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word SubRval_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

                ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(Info_5, Unop_14, SubRval_77);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word BinOp_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RvalA_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Word RvalB_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

                ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(Info_5, BinOp_15, RvalA_16, RvalB_17);
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_for_java\'/4", (MR_String) "mem_addr(_) not supported");
                return;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
                MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
                MR_Integer StartRowNum_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 3))));
                MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommon_27, (MR_Integer) 2))));
                MR_Integer TypeNum_80 = (MR_Integer) (Var_37);
                MR_String Var_84;
                MR_String Var_94;

                mercury__io__write_string_3_p_0((MR_String) "MR_vector_common_");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), TypeNum_80, &Var_84);
                mercury__io__write_string_3_p_0(Var_84);
                mercury__io__write_string_3_p_0((MR_String) "[");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), StartRowNum_30, &Var_94);
                mercury__io__write_string_3_p_0(Var_94);
                mercury__io__write_string_3_p_0((MR_String) " + ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_5, RowRval_28);
                mercury__io__write_string_3_p_0((MR_String) "]");
              }
              break;
            case (MR_Integer) 9:
              mercury__io__write_string_3_p_0((MR_String) "this");
              break;
          }
          break;
      }
      goto tscc_end;
    }
  top_of_proc_4:;
    {
      MR_Word Info_6 = tscc_proc_4_input_1_Info_6;
      MR_Word Type_7 = tscc_proc_4_input_2_Type_7;
      MR_Word Expr_8 = tscc_proc_4_input_3_Expr_8;
      MR_bool succeeded = (Type_7 == (MR_Word) ((MR_Unsigned) 32U));
      MR_Integer N_10;
      MR_Word Var_16;

      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_8, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
          if (succeeded)
            N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_16, (MR_Integer) 0))));
        }
      }
      if (succeeded)
      {
        MR_Integer Var_49;

        ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
        succeeded = (N_10 >= (MR_Integer) 1);
        if (succeeded)
        {
          Var_49 = (MR_Integer) 5;
          succeeded = (N_10 <= Var_49);
        }
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.PseudoTypeInfo.K");
          mercury__io__write_int_3_p_0(N_10);
        }
        else
        {
          mercury__io__write_string_3_p_0((MR_String) "new jmercury.runtime.PseudoTypeInfo(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
      else
      {
        if ((Type_7 == (MR_Word) ((MR_Unsigned) 28U)))
          succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) Type_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
        {
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_7, (MR_Integer) 2))));
          MR_Word Var_28;

          succeeded = ((((MR_tag((MR_Word) Var_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_27, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = (Var_28 == (MR_Integer) 0);
          }
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          ml_backend__mlds_to_java_util__maybe_output_comment_for_java_4_p_0(Info_6, (MR_String) "cast");
          mercury__io__write_string_3_p_0((MR_String) "jmercury.runtime.TypeInfo_Struct.maybe_new(");
          ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_String Var_46;
          MR_String Var_12;
          MR_String Var_13;

          succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_46, &Var_12, &Var_13);
          if (succeeded)
            succeeded = (strcmp((MR_String) "int", Var_46) == 0);
          if (succeeded)
          {
            MR_Word Lval_59;
            MR_Word Type_61;
            MR_Word CtorCat_69;

            mercury__io__write_string_3_p_0((MR_String) "(int) ");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            succeeded = ((MR_tag((MR_Word) Expr_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              Lval_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_8, (MR_Integer) 0))));
              switch (MR_tag((MR_Word) Lval_59)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_59, (MR_Integer) 4))));
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        Type_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_59, (MR_Integer) 2))));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Type_61)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  CtorCat_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_61, (MR_Integer) 2))));
                  succeeded = ((MR_tag((MR_Word) CtorCat_69)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                  }
                }
              }
            }
            if (succeeded)
              mercury__io__write_string_3_p_0((MR_String) ".MR_value");
          }
          else
          {
            MR_Word next_value_of_tscc_proc_3_input_1_Info_5;
            MR_Word next_value_of_tscc_proc_3_input_2_Rval_6;

            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_3_input_1_Info_5 = Info_6;
            next_value_of_tscc_proc_3_input_2_Rval_6 = Expr_8;
            tscc_proc_3_input_1_Info_5 = next_value_of_tscc_proc_3_input_1_Info_5;
            tscc_proc_3_input_2_Rval_6 = next_value_of_tscc_proc_3_input_2_Rval_6;
            goto top_of_proc_3;
          }
        }
      }
      goto tscc_end;
    }
  tscc_end:;
    return;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binop_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Op_8,
  MR_Word X_9,
  MR_Word Y_10)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Op_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Op_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".equals(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "!=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "<");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) ">");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) "<=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              mercury__io__write_string_3_p_0((MR_String) ">=");
              mercury__io__write_string_3_p_0((MR_String) " 0)");
            }
            break;
          case (MR_Integer) 10:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) ".compareTo(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ")) ");
            }
            break;
          case (MR_Integer) 11:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 13:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 14:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 15:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 16:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 17:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 18:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 19:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 20:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 21:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 22:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 23:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 24:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 25:
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) " == ");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) ") ");
            }
            break;
          case (MR_Integer) 26:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 27:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_7291 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Op_8, (MR_Integer) 0))) & (MR_Integer) 15);

          switch (Var_7291) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 8:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 7:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 9:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_7299 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Op_8, (MR_Integer) 0))) & (MR_Integer) 15);

          switch (Var_7299) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 4:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 6:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 8:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 5:
              {
                mercury__io__write_string_3_p_0((MR_String) "(short)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
            case (MR_Integer) 7:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 9:
              {
                succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                }
                else
                {
                  mercury__io__write_string_3_p_0((MR_String) "(");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                  mercury__io__write_string_3_p_0((MR_String) " ");
                  ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_7298 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7298) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_7292 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7292) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((short)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff)))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "java.lang.Long.divideUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((byte)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff)))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_7297 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7297) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((short)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff)))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((int)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL)))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "java.lang.Long.remainderUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "((byte)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff)))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_7300 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7300) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_7301 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7301) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_7288 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7288) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_7289 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7289) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Var_7290 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7290) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(short)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(byte)(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_7, X_9);
              mercury__io__write_string_3_p_0((MR_String) "[");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
              mercury__io__write_string_3_p_0((MR_String) "]");
            }
            break;
          case (MR_Integer) 11:
            {
              succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
              }
              else
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                mercury__io__write_string_3_p_0((MR_String) " ");
                ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_7296 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7296) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(java.lang.Long.compareUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    mercury__io__write_string_3_p_0((MR_String) "<");
                    mercury__io__write_string_3_p_0((MR_String) " 0)");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_7294 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7294) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(java.lang.Long.compareUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    mercury__io__write_string_3_p_0((MR_String) ">");
                    mercury__io__write_string_3_p_0((MR_String) " 0)");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Var_7295 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7295) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(java.lang.Long.compareUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    mercury__io__write_string_3_p_0((MR_String) "<=");
                    mercury__io__write_string_3_p_0((MR_String) " 0)");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word Var_7293 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_8, (MR_Integer) 1))) & (MR_Integer) 15);

              switch (Var_7293) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    succeeded = ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(X_9);
                    if (succeeded)
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ".MR_value)");
                    }
                    else
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffff))");
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xffffffffL))");
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(java.lang.Long.compareUnsigned(");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") ");
                    mercury__io__write_string_3_p_0((MR_String) ">=");
                    mercury__io__write_string_3_p_0((MR_String) " 0)");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, X_9);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff) ");
                    ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(Op_8);
                    mercury__io__write_string_3_p_0((MR_String) " ((");
                    ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_7, Y_10);
                    mercury__io__write_string_3_p_0((MR_String) ") & 0xff))");
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unop_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word UnaryOp_7,
  MR_Word Expr_8)
{
  switch (MR_tag((MR_Word) UnaryOp_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnaryOp_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "/* tag */  0");
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* strip_tag */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* mkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "/* unmkbody */ ");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "!");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash2_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash3_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash4_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash5_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "mercury.String.hash6_1_f_0");
            mercury__io__write_string_3_p_0((MR_String) "(");
            ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_unop_for_java\'/5", (MR_String) "invalid unary operator");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), UnaryOp_7, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Var_157) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "(short)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "(byte)(");
              mercury__io__write_string_3_p_0((MR_String) "~");
              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
              mercury__io__write_string_3_p_0((MR_String) "))");
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_unboxed_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_11;
    MR_String UnboxMethod_12;
    MR_String Var_10;

    succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &Var_10, &JavaBoxedName_11, &UnboxMethod_12);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "((");
      mercury__io__write_string_3_p_0(JavaBoxedName_11);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      ml_backend__mlds_to_java_data__output_bracketed_rval_for_java_4_p_0(Info_6, Expr_8);
      mercury__io__write_string_3_p_0((MR_String) ").");
      mercury__io__write_string_3_p_0(UnboxMethod_12);
      mercury__io__write_string_3_p_0((MR_String) "()");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "((");
      ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_6, Type_7);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_java_data__output_boxed_rval_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word Type_7,
  MR_Word Expr_8)
{
  {
    MR_bool succeeded;
    MR_String JavaBoxedName_11;
    MR_String _JavaName_10;
    MR_String Var_12;

    succeeded = ml_backend__mlds_to_java_type__java_builtin_type_4_p_0(Type_7, &_JavaName_10, &JavaBoxedName_11, &Var_12);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0(JavaBoxedName_11);
      mercury__io__write_string_3_p_0((MR_String) ".valueOf(");
      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "((java.lang.Object) (");
      ml_backend__mlds_to_java_data__output_rval_for_java_4_p_0(Info_6, Expr_8);
      mercury__io__write_string_3_p_0((MR_String) "))");
    }
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_java_data__IntroducedFrom__pred__output_rval_const_for_java__904__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "true");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "false");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CodeAddr_26 = (MR_Word) (MR_body((MR_Word) (Const_6), (MR_Integer) 1));

          ml_backend__mlds_to_java_data__mlds_output_code_addr_for_java_5_p_0(Info_5, CodeAddr_26, (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

          ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(N_8);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Unsigned U_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Integer Var_122;

              Var_122 = mercury__uint__cast_to_int_1_f_0(U_9);
              ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(Var_122);
            }
            break;
          case (MR_Integer) 1:
            {
              int8_t I8_10 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              mercury__io__write_int8_3_p_0(I8_10);
            }
            break;
          case (MR_Integer) 2:
            {
              uint8_t U8_11 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int8_t Var_117;

              mercury__io__write_string_3_p_0((MR_String) "(byte)");
              Var_117 = mercury__int8__cast_from_uint8_1_f_0(U8_11);
              mercury__io__write_int8_3_p_0(Var_117);
            }
            break;
          case (MR_Integer) 3:
            {
              int16_t I16_12 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "(short)");
              mercury__io__write_int16_3_p_0(I16_12);
            }
            break;
          case (MR_Integer) 4:
            {
              uint16_t U16_13 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int16_t Var_110;

              mercury__io__write_string_3_p_0((MR_String) "(short)");
              Var_110 = mercury__int16__cast_from_uint16_1_f_0(U16_13);
              mercury__io__write_int16_3_p_0(Var_110);
            }
            break;
          case (MR_Integer) 5:
            {
              int32_t I32_14 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_int32_3_p_0(I32_14);
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t U32_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int32_t Var_105;

              Var_105 = mercury__int32__cast_from_uint32_1_f_0(U32_15);
              mercury__io__write_int32_3_p_0(Var_105);
            }
            break;
          case (MR_Integer) 7:
            {
              int64_t I64_16 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              mercury__io__write_int64_3_p_0(I64_16);
              mercury__io__write_string_3_p_0((MR_String) "L");
            }
            break;
          case (MR_Integer) 8:
            {
              uint64_t U64_17 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              int64_t Var_98;

              Var_98 = mercury__int64__cast_from_uint64_1_f_0(U64_17);
              mercury__io__write_int64_3_p_0(Var_98);
              mercury__io__write_string_3_p_0((MR_String) "L");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word EnumType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Integer N_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_5, EnumType_18);
              mercury__io__write_string_3_p_0((MR_String) ".K");
              ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(N_130);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Integer N_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "(");
              ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(N_129);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Float FloatVal_22 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_22);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String String_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_1((MR_Integer) 1, String_23);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word String_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "\"");
              backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0((MR_Integer) 1, String_131);
              mercury__io__write_string_3_p_0((MR_String) "\"");
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word Lang_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Value_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word Var_84;

              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&ml_backend__mlds_to_java_data_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (ml_backend__mlds_to_java_data__output_rval_const_for_java_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (Lang_19));
                MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) ((MR_Integer) 2));
              }
              mercury__require__expect_3_p_0(Var_84, (MR_String) "predicate \140ml_backend.mlds_to_java_data.output_rval_const_for_java\'/4", (MR_String) "language other than Java.");
              mercury__io__write_string_3_p_0(Value_20);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word TargetPrefixes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_String NamedConst_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_String Var_68 = ((MR_String) ((MR_hl_field(MR_mktag(0), TargetPrefixes_24, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0(Var_68);
              mercury__io__write_string_3_p_0(NamedConst_25);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word LocalVarName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              ml_backend__mlds_to_java_name__output_local_var_name_for_java_3_p_0(LocalVarName_28);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word GlobalVarName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word SymName_31;
              MR_String ModuleNameStr_32;

              SymName_31 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_29);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_31, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_32);
              mercury__io__write_string_3_p_0(ModuleNameStr_32);
              mercury__io__write_string_3_p_0((MR_String) ".");
              ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_30);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word RttiId_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_String RttiAddrName_34;
              MR_Word ModuleName_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word SymName_133;
              MR_String ModuleNameStr_134;

              SymName_133 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_132);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_133, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_134);
              mercury__io__write_string_3_p_0(ModuleNameStr_134);
              mercury__io__write_string_3_p_0((MR_String) ".");
              backend_libs__rtti__id_to_c_identifier_2_p_0(RttiId_33, &RttiAddrName_34);
              mercury__io__write_string_3_p_0(RttiAddrName_34);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word QualProcLabel_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word TablingId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));
              MR_Word ProcLabel_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_35, (MR_Integer) 1))));
              MR_String TablingPrefix_38;
              MR_String Var_49;
              MR_Word Var_52;
              MR_Word ModuleName_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualProcLabel_35, (MR_Integer) 0))));
              MR_Word SymName_136;
              MR_String ModuleNameStr_137;

              SymName_136 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_135);
              parse_tree__java_names__mangle_sym_name_for_java_4_p_0(SymName_136, (MR_Integer) 0, (MR_String) "__", &ModuleNameStr_137);
              mercury__io__write_string_3_p_0(ModuleNameStr_137);
              mercury__io__write_string_3_p_0((MR_String) ".");
              Var_49 = backend_libs__rtti__tabling_info_id_str_1_f_0(TablingId_36);
              TablingPrefix_38 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "_");
              mercury__io__write_string_3_p_0(TablingPrefix_38);
              Var_52 = ml_backend__mlds__mlds_std_tabling_proc_label_1_f_0(ProcLabel_37);
              ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_3_p_0(Var_52);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word Type_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_String Initializer_40;

              Initializer_40 = ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(Type_39);
              mercury__io__write_string_3_p_0(Initializer_40);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__mlds_output_code_addr_for_java_5_p_0(
  MR_Word Info_6,
  MR_Word CodeAddr_7,
  MR_Word IsCall_8)
{
  switch (IsCall_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word AddrOfMap_10;
        MR_Word CodeAddrWrapper_11;
        MR_String ClassName_12;
        MR_Word MaybePtrNum_13;
        MR_Box conv0_CodeAddrWrapper_11;

        mercury__io__write_string_3_p_0((MR_String) "new ");
        AddrOfMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4))));
        mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_code_addr_0), (MR_Word) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_code_addr_wrapper_0), AddrOfMap_10, ((MR_Box) (CodeAddr_7)), &conv0_CodeAddrWrapper_11);
        CodeAddrWrapper_11 = ((MR_Word) (conv0_CodeAddrWrapper_11));
        ClassName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), CodeAddrWrapper_11, (MR_Integer) 0))));
        MaybePtrNum_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddrWrapper_11, (MR_Integer) 1))));
        mercury__io__write_string_3_p_0(ClassName_12);
        mercury__io__write_string_3_p_0((MR_String) "_0(");
        if (!((MaybePtrNum_13 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Integer PtrNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePtrNum_13, (MR_Integer) 0))));

          mercury__io__write_int_3_p_0(PtrNum_14);
        }
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word QualFuncLabel_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_7, (MR_Integer) 0))));
        MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_15, (MR_Integer) 0))));
        MR_Word FuncLabel_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_15, (MR_Integer) 1))));
        MR_Word ProcLabel_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_18, (MR_Integer) 0))));
        MR_Word MaybeAux_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_18, (MR_Integer) 1))));
        MR_String Var_26;

        ml_backend__mlds_to_java_name__output_qual_name_prefix_java_4_p_0(ModuleName_17, (MR_Integer) 0);
        ml_backend__mlds_to_java_name__mlds_output_proc_label_for_java_3_p_0(ProcLabel_19);
        Var_26 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_20);
        mercury__io__write_string_3_p_0(Var_26);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_int_const_for_java_3_p_0(
  MR_Integer N_4)
{
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);
    MR_Integer Var_9;
    MR_Integer Var_10;

    if (succeeded)
    {
      Var_10 = (MR_Integer) 31;
      Var_9 = mercury__int__f_62_62_2_f_0(N_4, Var_10);
      succeeded = (Var_9 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Integer Var_15 = (N_4 & (MR_Integer) 4294967295);
      MR_String Var_21;

      mercury__io__write_string_3_p_0((MR_String) "0x");
      mercury__string__format__format_unsigned_int_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_java_data_scalar_common_2[0]), (MR_Integer) 2, Var_15, &Var_21);
      mercury__io__write_string_3_p_0(Var_21);
    }
    else
      mercury__io__write_int_3_p_0(N_4);
  }
}

MR_String MR_CALL 
ml_backend__mlds_to_java_data__get_default_initializer_for_java_1_f_0(
  MR_Word Type_3)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word CtorCat_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 2))));

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
              MR_Word ForeignLangType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_3, (MR_Integer) 1))));
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
}

static MR_bool MR_CALL 
ml_backend__mlds_to_java_data__rval_is_enum_object_1_p_0(
  MR_Word Rval_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Rval_2)) == (MR_Integer) 2);
    MR_Word Lval_3;
    MR_Word Type_5;
    MR_Word CtorCat_13;

    if (succeeded)
    {
      Lval_3 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_2, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Lval_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            Type_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_3, (MR_Integer) 4))));
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Type_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                Type_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_3, (MR_Integer) 2))));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Type_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          CtorCat_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_5, (MR_Integer) 2))));
          succeeded = ((MR_tag((MR_Word) CtorCat_13)) == (MR_Integer) 2);
          if (succeeded)
          {
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_data__output_binary_op_for_java_3_p_0(
  MR_Word Op_4)
{
  switch (MR_tag((MR_Word) Op_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "&&");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "||");
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_binary_op_for_java\'/3", (MR_String) "invalid binary operator");
            return;
          }
          break;
        case (MR_Integer) 12:
          mercury__io__write_string_3_p_0((MR_String) "+");
          break;
        case (MR_Integer) 13:
          mercury__io__write_string_3_p_0((MR_String) "-");
          break;
        case (MR_Integer) 14:
          mercury__io__write_string_3_p_0((MR_String) "*");
          break;
        case (MR_Integer) 15:
          mercury__io__write_string_3_p_0((MR_String) "/");
          break;
        case (MR_Integer) 16:
          mercury__io__write_string_3_p_0((MR_String) "==");
          break;
        case (MR_Integer) 17:
          mercury__io__write_string_3_p_0((MR_String) "!=");
          break;
        case (MR_Integer) 18:
          mercury__io__write_string_3_p_0((MR_String) "<");
          break;
        case (MR_Integer) 19:
          mercury__io__write_string_3_p_0((MR_String) ">");
          break;
        case (MR_Integer) 20:
          mercury__io__write_string_3_p_0((MR_String) "<=");
          break;
        case (MR_Integer) 21:
          mercury__io__write_string_3_p_0((MR_String) ">=");
          break;
      }
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_3_p_0((MR_String) "+");
      break;
    case (MR_Integer) 2:
      mercury__io__write_string_3_p_0((MR_String) "-");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "*");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "/");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "%");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "<<");
          break;
        case (MR_Integer) 4:
          {
            MR_Word IntType_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_4, (MR_Integer) 1))) & (MR_Integer) 15);
            MR_String OpStr_31 = ((&ml_backend__mlds_to_java_data_vector_common_1[0 + IntType_22]))->ml_backend__mlds_to_java_data__vector_common_type_1_0__vct_1_f_0;

            mercury__io__write_string_3_p_0(OpStr_31);
          }
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_3_p_0((MR_String) "&");
          break;
        case (MR_Integer) 6:
          mercury__io__write_string_3_p_0((MR_String) "|");
          break;
        case (MR_Integer) 7:
          mercury__io__write_string_3_p_0((MR_String) "^");
          break;
        case (MR_Integer) 8:
          mercury__io__write_string_3_p_0((MR_String) "==");
          break;
        case (MR_Integer) 9:
          mercury__io__write_string_3_p_0((MR_String) "!=");
          break;
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_data.output_binary_op_for_java\'/3", (MR_String) "invalid binary operator");
            return;
          }
          break;
        case (MR_Integer) 12:
          mercury__io__write_string_3_p_0((MR_String) "<");
          break;
        case (MR_Integer) 13:
          mercury__io__write_string_3_p_0((MR_String) ">");
          break;
        case (MR_Integer) 14:
          mercury__io__write_string_3_p_0((MR_String) "<=");
          break;
        case (MR_Integer) 15:
          mercury__io__write_string_3_p_0((MR_String) ">=");
          break;
      }
      break;
  }
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
