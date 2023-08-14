/*
** Automatically generated from `mlds_to_c_data.m'
** by the Mercury compiler,
** version rotd-2023-08-14
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


// :- module ml_backend.mlds_to_c_data.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_data__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_data.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
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
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__998__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_57);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_bodies_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word HeadInit_11,
  MR_Word TailInits_12);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer Max_9,
  MR_Word Rval_10);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Rval_8);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Word Op_10,
  MR_Word X_11,
  MR_Word Y_12);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Word Rval_10);

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Word Rval_10);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word Stream_7,
  MR_Word Const_8);

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(
  MR_Word RvalX_4,
  MR_Word RvalY_5,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__mlds_to_c_data__is_an_address_1_f_0(
  MR_Word Rval_3);


static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_1[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_2[1][2];

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_3[1][5];




static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_data_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__998__1_2_p_0(
  MR_Word Lang_14,
  MR_Word HeadVar__2_57)
{
  MR_bool succeeded = (Lang_14 == HeadVar__2_57);

  return succeeded;
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word _Type_9,
  MR_Word Initializer_10)
{
  ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_105_110_105_116_105_97_108_105_122_101_114_95_95_91_51_93_95_48_6_p_0(Opts_7, Stream_8, Initializer_10);
}

void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_105_110_105_116_105_97_108_105_122_101_114_95_95_91_51_93_95_48_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Initializer_10)
{
  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, Initializer_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 1))));

        if (!((Var_26 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
          ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, Initializer_10);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " = ");
        ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, Initializer_10);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_bodies_7_p_0(
  MR_Word Opts_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word HeadInit_11,
  MR_Word TailInits_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_8, Stream_9, Indent_10, HeadInit_11);
    if ((TailInits_12 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
    else
    {
      MR_Word HeadTailInit_14 = ((MR_Word) ((MR_hl_field(1, TailInits_12, (MR_Integer) 0))));
      MR_Word TailTailInits_15 = ((MR_Word) ((MR_hl_field(1, TailInits_12, (MR_Integer) 1))));
      MR_Word next_value_of_HeadInit_11;
      MR_Word next_value_of_TailInits_12;

      mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadInit_11 = HeadTailInit_14;
      next_value_of_TailInits_12 = TailTailInits_15;
      HeadInit_11 = next_value_of_HeadInit_11;
      TailInits_12 = next_value_of_TailInits_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Initializer_10)
{
  switch (MR_tag((MR_Word) Initializer_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(1, Initializer_10, (MR_Integer) 0))));

        libs__indent__write_indent2_4_p_0(Stream_8, Indent_9);
        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_12, Stream_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Inits_255 = ((MR_Word) ((MR_hl_field(2, Initializer_10, (MR_Integer) 1))));
        MR_String IndentStr_256;

        IndentStr_256 = libs__indent__indent2_string_1_f_0(Indent_9);
        if ((Inits_255 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_initializer_body\'/6", (MR_String) "field initializers = []");
            return;
          }
        else
        {
          MR_Word HeadInit_183 = ((MR_Word) ((MR_hl_field(1, Inits_255, (MR_Integer) 0))));
          MR_Word TailInits_184 = ((MR_Word) ((MR_hl_field(1, Inits_255, (MR_Integer) 1))));

          if ((TailInits_184 == (MR_Word) ((MR_Unsigned) 0U)))
            switch (MR_tag((MR_Word) HeadInit_183)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ ");
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, HeadInit_183);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " }");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ ");
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, HeadInit_183);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " }");
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Integer Var_78;

                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
                  Var_78 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, Var_78, HeadInit_183);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}");
                }
                break;
            }
          else
          {
            MR_Integer Var_142;

            mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
            Var_142 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            ml_backend__mlds_to_c_data__mlds_output_initializer_bodies_7_p_0(Opts_7, Stream_8, Var_142, HeadInit_183, TailInits_184);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_256);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}");
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Inits_14 = ((MR_Word) ((MR_hl_field(3, Initializer_10, (MR_Integer) 0))));
        MR_String IndentStr_15;

        IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_9);
        if ((Inits_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ 0 }\n");
        }
        else
        {
          MR_Word HeadInit_19 = ((MR_Word) ((MR_hl_field(1, Inits_14, (MR_Integer) 0))));
          MR_Word TailInits_20 = ((MR_Word) ((MR_hl_field(1, Inits_14, (MR_Integer) 1))));

          if ((TailInits_20 == (MR_Word) ((MR_Unsigned) 0U)))
            switch (MR_tag((MR_Word) HeadInit_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ ");
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, HeadInit_19);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " }");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{ ");
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, (MR_Integer) 0, HeadInit_19);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " }");
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  MR_Integer Var_52;

                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
                  Var_52 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
                  ml_backend__mlds_to_c_data__mlds_output_initializer_body_6_p_0(Opts_7, Stream_8, Var_52, HeadInit_19);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}");
                }
                break;
            }
          else
          {
            MR_Integer Var_65;

            mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
            Var_65 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
            ml_backend__mlds_to_c_data__mlds_output_initializer_bodies_7_p_0(Opts_7, Stream_8, Var_65, HeadInit_19, TailInits_20);
            mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}");
          }
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(
  MR_Word tscc_proc_1_input_1_Opts_6,
  MR_Word tscc_proc_1_input_2_Lval_7,
  MR_Word tscc_proc_1_input_3_Stream_8)
{
  MR_Word tscc_proc_2_input_1_Opts_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Opts_6;
  MR_Word tscc_proc_3_input_2_Stream_7;
  MR_Word tscc_proc_3_input_3_Rval_8;
  MR_Word tscc_proc_4_input_1_Opts_7;
  MR_Word tscc_proc_4_input_2_Stream_8;
  MR_Word tscc_proc_4_input_3_Type_9;
  MR_Word tscc_proc_4_input_4_Rval_10;

  // The code for TSCC PROC 1: pred ml_backend.mlds_to_c_data.mlds_output_lval/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/6-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Opts_6 = tscc_proc_1_input_1_Opts_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_String QualFieldVarNameStr_23;
            MR_Word Var_58;
            uint8_t Var_59;

            QualFieldVarNameStr_23 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_21);
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
              Var_59 = (uint8_t) (Var_58);
              succeeded = (Var_59 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_String CastStr_24;
              MR_Word PtrAddrLval_25;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (succeeded)
                CastStr_24 = (MR_String) "";
              else
                CastStr_24 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_25 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_25, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
            else
            {
              MR_String CastStr_117;

              CastStr_117 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                uint8_t PtagUInt8_114 = (uint8_t) (Var_82);
                MR_Unsigned Var_150;
                MR_String Var_151;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_114, &Var_150);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_150, &Var_151);
                mercury__io__write_string_4_p_0(Stream_8, Var_151);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) MercuryType_16)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_mask_field(");
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
              }
              else
              {
                uint8_t PtagUInt8_20;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                MR_Unsigned Var_125;
                MR_String Var_126;

                PtagUInt8_20 = (uint8_t) (Var_40);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_125);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_125, &Var_126);
                mercury__io__write_string_4_p_0(Stream_8, Var_126);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              }
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, OffsetRval_15, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/5", (MR_String) "unexpected field type");
                return;
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_26;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String Var_110;

          Var_110 = ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(GlobalVarRef_28);
          mercury__io__write_string_4_p_0(Stream_8, Var_110);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_34 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_35;

              LocalVarNameStr_35 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_34);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_31 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 0))));
              MR_Word GlobalVarName_32 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 1))));
              MR_String QualGlobalVarNameStr_33;

              QualGlobalVarNameStr_33 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_31, GlobalVarName_32);
              mercury__io__write_string_4_p_0(Stream_8, QualGlobalVarNameStr_33);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ScalarCommon_20 = (MR_Word) ((MR_Word) (Rval_7));
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_160;
          MR_String Var_170;

          TypeNum_23 = (MR_Integer) (Var_55);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_160);
          mercury__io__write_string_4_p_0(Stream_8, Var_160);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_170);
          mercury__io__write_string_4_p_0(Stream_8, Var_170);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_93 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_94;
          MR_Integer TypeNum_96;
          MR_Integer RowNum_97;
          MR_Word ModuleSymName_98;
          MR_String MangledModuleName_99;
          MR_Word Var_101;
          MR_String Var_138;
          MR_String Var_148;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_94 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 0))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 2))));
          RowNum_97 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 3))));
          TypeNum_96 = (MR_Integer) (Var_101);
          ModuleSymName_98 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_94);
          MangledModuleName_99 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_98);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_96, &Var_138);
          mercury__io__write_string_4_p_0(Stream_8, Var_138);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_97, &Var_148);
          mercury__io__write_string_4_p_0(Stream_8, Var_148);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
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
              uint8_t PtagUInt8_11;
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Unsigned Var_182;
              MR_String Var_183;

              PtagUInt8_11 = (uint8_t) (Var_35);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_11, &Var_182);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_182, &Var_183);
              mercury__io__write_string_4_p_0(Stream_8, Var_183);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_80;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_81;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
              tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
              tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
              tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_82, SubRval_83);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_87 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_89 = (MR_Integer) (Var_65);
              MR_Word ModuleSymName_90;
              MR_String MangledModuleName_91;
              MR_String Var_116;
              MR_String Var_126;

              ModuleSymName_90 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_87);
              MangledModuleName_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_91);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_89, &Var_116);
              mercury__io__write_string_4_p_0(Stream_8, Var_116);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_126);
              mercury__io__write_string_4_p_0(Stream_8, Var_126);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, RowRval_28, Stream_8);
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
top_of_proc_3:;
  {
    MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
    MR_Word Stream_7 = tscc_proc_3_input_2_Stream_7;
    MR_Word Rval_8 = tscc_proc_3_input_3_Rval_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_8;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_7;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Opts_7 = tscc_proc_4_input_1_Opts_7;
    MR_Word Stream_8 = tscc_proc_4_input_2_Stream_8;
    MR_Word Type_9 = tscc_proc_4_input_3_Type_9;
    MR_Word Rval_10 = tscc_proc_4_input_4_Rval_10;
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_50;

        Var_50 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_50 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_7;
      MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
      MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_9;
      MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = InnerRval_13;

      // direct tailcall eliminated
      ;
      tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
      tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
      tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
      tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
      goto top_of_proc_4;
    }
    else
      switch (MR_tag((MR_Word) Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Type_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_float(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                goto top_of_proc_2;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word MercuryType_28 = ((MR_Word) ((MR_hl_field(3, Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_boxed_rval\'/6", (MR_String) "mercury_nb_type but builtin_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IntType_27 = ((MR_Unsigned) ((MR_hl_field(3, Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_int64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_uint64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(
  MR_Word tscc_proc_2_input_1_Opts_6,
  MR_Word tscc_proc_2_input_2_Rval_7,
  MR_Word tscc_proc_2_input_3_Stream_8)
{
  MR_Word tscc_proc_1_input_1_Opts_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Opts_6;
  MR_Word tscc_proc_3_input_2_Stream_7;
  MR_Word tscc_proc_3_input_3_Rval_8;
  MR_Word tscc_proc_4_input_1_Opts_7;
  MR_Word tscc_proc_4_input_2_Stream_8;
  MR_Word tscc_proc_4_input_3_Type_9;
  MR_Word tscc_proc_4_input_4_Rval_10;

  // The code for TSCC PROC 2: pred ml_backend.mlds_to_c_data.mlds_output_rval/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/6-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Opts_6 = tscc_proc_1_input_1_Opts_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_String QualFieldVarNameStr_23;
            MR_Word Var_58;
            uint8_t Var_59;

            QualFieldVarNameStr_23 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_21);
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
              Var_59 = (uint8_t) (Var_58);
              succeeded = (Var_59 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_String CastStr_24;
              MR_Word PtrAddrLval_25;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (succeeded)
                CastStr_24 = (MR_String) "";
              else
                CastStr_24 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_25 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_25, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
            else
            {
              MR_String CastStr_117;

              CastStr_117 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                uint8_t PtagUInt8_114 = (uint8_t) (Var_82);
                MR_Unsigned Var_150;
                MR_String Var_151;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_114, &Var_150);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_150, &Var_151);
                mercury__io__write_string_4_p_0(Stream_8, Var_151);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) MercuryType_16)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_mask_field(");
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
              }
              else
              {
                uint8_t PtagUInt8_20;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                MR_Unsigned Var_125;
                MR_String Var_126;

                PtagUInt8_20 = (uint8_t) (Var_40);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_125);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_125, &Var_126);
                mercury__io__write_string_4_p_0(Stream_8, Var_126);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              }
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, OffsetRval_15, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/5", (MR_String) "unexpected field type");
                return;
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_26;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String Var_110;

          Var_110 = ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(GlobalVarRef_28);
          mercury__io__write_string_4_p_0(Stream_8, Var_110);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_34 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_35;

              LocalVarNameStr_35 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_34);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_31 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 0))));
              MR_Word GlobalVarName_32 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 1))));
              MR_String QualGlobalVarNameStr_33;

              QualGlobalVarNameStr_33 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_31, GlobalVarName_32);
              mercury__io__write_string_4_p_0(Stream_8, QualGlobalVarNameStr_33);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ScalarCommon_20 = (MR_Word) ((MR_Word) (Rval_7));
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_160;
          MR_String Var_170;

          TypeNum_23 = (MR_Integer) (Var_55);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_160);
          mercury__io__write_string_4_p_0(Stream_8, Var_160);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_170);
          mercury__io__write_string_4_p_0(Stream_8, Var_170);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_93 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_94;
          MR_Integer TypeNum_96;
          MR_Integer RowNum_97;
          MR_Word ModuleSymName_98;
          MR_String MangledModuleName_99;
          MR_Word Var_101;
          MR_String Var_138;
          MR_String Var_148;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_94 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 0))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 2))));
          RowNum_97 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 3))));
          TypeNum_96 = (MR_Integer) (Var_101);
          ModuleSymName_98 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_94);
          MangledModuleName_99 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_98);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_96, &Var_138);
          mercury__io__write_string_4_p_0(Stream_8, Var_138);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_97, &Var_148);
          mercury__io__write_string_4_p_0(Stream_8, Var_148);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
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
              uint8_t PtagUInt8_11;
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Unsigned Var_182;
              MR_String Var_183;

              PtagUInt8_11 = (uint8_t) (Var_35);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_11, &Var_182);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_182, &Var_183);
              mercury__io__write_string_4_p_0(Stream_8, Var_183);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_80;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_81;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
              tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
              tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
              tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_82, SubRval_83);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_87 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_89 = (MR_Integer) (Var_65);
              MR_Word ModuleSymName_90;
              MR_String MangledModuleName_91;
              MR_String Var_116;
              MR_String Var_126;

              ModuleSymName_90 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_87);
              MangledModuleName_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_91);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_89, &Var_116);
              mercury__io__write_string_4_p_0(Stream_8, Var_116);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_126);
              mercury__io__write_string_4_p_0(Stream_8, Var_126);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, RowRval_28, Stream_8);
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
top_of_proc_3:;
  {
    MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
    MR_Word Stream_7 = tscc_proc_3_input_2_Stream_7;
    MR_Word Rval_8 = tscc_proc_3_input_3_Rval_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_8;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_7;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Opts_7 = tscc_proc_4_input_1_Opts_7;
    MR_Word Stream_8 = tscc_proc_4_input_2_Stream_8;
    MR_Word Type_9 = tscc_proc_4_input_3_Type_9;
    MR_Word Rval_10 = tscc_proc_4_input_4_Rval_10;
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_50;

        Var_50 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_50 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_7;
      MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
      MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_9;
      MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = InnerRval_13;

      // direct tailcall eliminated
      ;
      tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
      tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
      tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
      tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
      goto top_of_proc_4;
    }
    else
      switch (MR_tag((MR_Word) Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Type_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_float(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                goto top_of_proc_2;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word MercuryType_28 = ((MR_Word) ((MR_hl_field(3, Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_boxed_rval\'/6", (MR_String) "mercury_nb_type but builtin_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IntType_27 = ((MR_Unsigned) ((MR_hl_field(3, Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_int64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_uint64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(
  MR_Word tscc_proc_3_input_1_Opts_6,
  MR_Word tscc_proc_3_input_2_Stream_7,
  MR_Word tscc_proc_3_input_3_Rval_8)
{
  MR_Word tscc_proc_1_input_1_Opts_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Opts_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_4_input_1_Opts_7;
  MR_Word tscc_proc_4_input_2_Stream_8;
  MR_Word tscc_proc_4_input_3_Type_9;
  MR_Word tscc_proc_4_input_4_Rval_10;

  // The code for TSCC PROC 3: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/6-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word Opts_6 = tscc_proc_1_input_1_Opts_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_String QualFieldVarNameStr_23;
            MR_Word Var_58;
            uint8_t Var_59;

            QualFieldVarNameStr_23 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_21);
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
              Var_59 = (uint8_t) (Var_58);
              succeeded = (Var_59 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_String CastStr_24;
              MR_Word PtrAddrLval_25;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (succeeded)
                CastStr_24 = (MR_String) "";
              else
                CastStr_24 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_25 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_25, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
            else
            {
              MR_String CastStr_117;

              CastStr_117 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                uint8_t PtagUInt8_114 = (uint8_t) (Var_82);
                MR_Unsigned Var_150;
                MR_String Var_151;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_114, &Var_150);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_150, &Var_151);
                mercury__io__write_string_4_p_0(Stream_8, Var_151);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) MercuryType_16)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_mask_field(");
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
              }
              else
              {
                uint8_t PtagUInt8_20;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                MR_Unsigned Var_125;
                MR_String Var_126;

                PtagUInt8_20 = (uint8_t) (Var_40);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_125);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_125, &Var_126);
                mercury__io__write_string_4_p_0(Stream_8, Var_126);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              }
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, OffsetRval_15, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/5", (MR_String) "unexpected field type");
                return;
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_26;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String Var_110;

          Var_110 = ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(GlobalVarRef_28);
          mercury__io__write_string_4_p_0(Stream_8, Var_110);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_34 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_35;

              LocalVarNameStr_35 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_34);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_31 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 0))));
              MR_Word GlobalVarName_32 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 1))));
              MR_String QualGlobalVarNameStr_33;

              QualGlobalVarNameStr_33 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_31, GlobalVarName_32);
              mercury__io__write_string_4_p_0(Stream_8, QualGlobalVarNameStr_33);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ScalarCommon_20 = (MR_Word) ((MR_Word) (Rval_7));
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_160;
          MR_String Var_170;

          TypeNum_23 = (MR_Integer) (Var_55);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_160);
          mercury__io__write_string_4_p_0(Stream_8, Var_160);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_170);
          mercury__io__write_string_4_p_0(Stream_8, Var_170);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_93 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_94;
          MR_Integer TypeNum_96;
          MR_Integer RowNum_97;
          MR_Word ModuleSymName_98;
          MR_String MangledModuleName_99;
          MR_Word Var_101;
          MR_String Var_138;
          MR_String Var_148;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_94 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 0))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 2))));
          RowNum_97 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 3))));
          TypeNum_96 = (MR_Integer) (Var_101);
          ModuleSymName_98 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_94);
          MangledModuleName_99 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_98);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_96, &Var_138);
          mercury__io__write_string_4_p_0(Stream_8, Var_138);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_97, &Var_148);
          mercury__io__write_string_4_p_0(Stream_8, Var_148);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
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
              uint8_t PtagUInt8_11;
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Unsigned Var_182;
              MR_String Var_183;

              PtagUInt8_11 = (uint8_t) (Var_35);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_11, &Var_182);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_182, &Var_183);
              mercury__io__write_string_4_p_0(Stream_8, Var_183);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_80;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_81;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
              tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
              tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
              tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_82, SubRval_83);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_87 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_89 = (MR_Integer) (Var_65);
              MR_Word ModuleSymName_90;
              MR_String MangledModuleName_91;
              MR_String Var_116;
              MR_String Var_126;

              ModuleSymName_90 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_87);
              MangledModuleName_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_91);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_89, &Var_116);
              mercury__io__write_string_4_p_0(Stream_8, Var_116);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_126);
              mercury__io__write_string_4_p_0(Stream_8, Var_126);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, RowRval_28, Stream_8);
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
top_of_proc_3:;
  {
    MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
    MR_Word Stream_7 = tscc_proc_3_input_2_Stream_7;
    MR_Word Rval_8 = tscc_proc_3_input_3_Rval_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_8;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_7;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Opts_7 = tscc_proc_4_input_1_Opts_7;
    MR_Word Stream_8 = tscc_proc_4_input_2_Stream_8;
    MR_Word Type_9 = tscc_proc_4_input_3_Type_9;
    MR_Word Rval_10 = tscc_proc_4_input_4_Rval_10;
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_50;

        Var_50 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_50 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_7;
      MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
      MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_9;
      MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = InnerRval_13;

      // direct tailcall eliminated
      ;
      tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
      tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
      tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
      tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
      goto top_of_proc_4;
    }
    else
      switch (MR_tag((MR_Word) Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Type_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_float(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                goto top_of_proc_2;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word MercuryType_28 = ((MR_Word) ((MR_hl_field(3, Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_boxed_rval\'/6", (MR_String) "mercury_nb_type but builtin_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IntType_27 = ((MR_Unsigned) ((MR_hl_field(3, Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_int64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_uint64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_boxed_rval_6_p_0(
  MR_Word tscc_proc_4_input_1_Opts_7,
  MR_Word tscc_proc_4_input_2_Stream_8,
  MR_Word tscc_proc_4_input_3_Type_9,
  MR_Word tscc_proc_4_input_4_Rval_10)
{
  MR_Word tscc_proc_1_input_1_Opts_6;
  MR_Word tscc_proc_1_input_2_Lval_7;
  MR_Word tscc_proc_1_input_3_Stream_8;
  MR_Word tscc_proc_2_input_1_Opts_6;
  MR_Word tscc_proc_2_input_2_Rval_7;
  MR_Word tscc_proc_2_input_3_Stream_8;
  MR_Word tscc_proc_3_input_1_Opts_6;
  MR_Word tscc_proc_3_input_2_Stream_7;
  MR_Word tscc_proc_3_input_3_Rval_8;

  // The code for TSCC PROC 4: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/6-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_lval/5-0
  ;
  // proc 2 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_rval/5-0
  ;
  // proc 3 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_bracketed_rval/5-0
  ;
  // proc 4 in TSCC: pred ml_backend.mlds_to_c_data.mlds_output_boxed_rval/6-0
  ;
  ;
  goto top_of_proc_4;
top_of_proc_1:;
  {
    MR_Word Opts_6 = tscc_proc_1_input_1_Opts_6;
    MR_Word Lval_7 = tscc_proc_1_input_2_Lval_7;
    MR_Word Stream_8 = tscc_proc_1_input_3_Stream_8;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybePtag_10 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 0))));
          MR_Word PtrRval_11 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 1))));
          MR_Word PtrType_12 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 2))));
          MR_Word FieldId_13 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 3))));
          MR_Word FieldType_14 = ((MR_Word) ((MR_hl_field(0, Lval_7, (MR_Integer) 4))));

          if (((MR_tag((MR_Word) FieldId_13)) == (MR_Integer) 1))
          {
            MR_Word QualFieldVarName_21 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 0))));
            MR_Word CtorType_22 = ((MR_Word) ((MR_hl_field(1, FieldId_13, (MR_Integer) 1))));
            MR_String QualFieldVarNameStr_23;
            MR_Word Var_58;
            uint8_t Var_59;

            QualFieldVarNameStr_23 = ml_backend__mlds_to_c_name__qual_field_var_name_to_string_for_c_1_f_0(QualFieldVarName_21);
            succeeded = (MaybePtag_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
              Var_59 = (uint8_t) (Var_58);
              succeeded = (Var_59 == UINT8_C(0));
            }
            if (succeeded)
            {
              MR_String CastStr_24;
              MR_Word PtrAddrLval_25;

              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_12, CtorType_22);
              if (succeeded)
                CastStr_24 = (MR_String) "";
              else
                CastStr_24 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              succeeded = ((((MR_tag((MR_Word) PtrRval_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                PtrAddrLval_25 = ((MR_Word) ((MR_hl_field(3, PtrRval_11, (MR_Integer) 1))));
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_lval_5_p_0(Opts_6, PtrAddrLval_25, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ").");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_24);
                ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_6, Stream_8, PtrRval_11);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
            else
            {
              MR_String CastStr_117;

              CastStr_117 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_6, CtorType_22);
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strip_tag(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
              else
              {
                MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                uint8_t PtagUInt8_114 = (uint8_t) (Var_82);
                MR_Unsigned Var_150;
                MR_String Var_151;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, CastStr_117);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_114, &Var_150);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_150, &Var_151);
                mercury__io__write_string_4_p_0(Stream_8, Var_151);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))->");
                mercury__io__write_string_4_p_0(Stream_8, QualFieldVarNameStr_23);
              }
            }
          }
          else
          {
            MR_Word OffsetRval_15 = ((MR_Word) ((MR_hl_field(0, FieldId_13, (MR_Integer) 0))));

            if ((FieldType_14 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((((MR_tag((MR_Word) FieldType_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldType_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
            {
              MR_Word MercuryType_16 = ((MR_Word) ((MR_hl_field(3, FieldType_14, (MR_Integer) 1))));

              succeeded = ((MR_tag((MR_Word) MercuryType_16)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              if ((MaybePtag_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_mask_field(");
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
              }
              else
              {
                uint8_t PtagUInt8_20;
                MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybePtag_10, (MR_Integer) 0))));
                MR_Unsigned Var_125;
                MR_String Var_126;

                PtagUInt8_20 = (uint8_t) (Var_40);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hl_field(");
                mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_125);
                mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_125, &Var_126);
                mercury__io__write_string_4_p_0(Stream_8, Var_126);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              }
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, PtrRval_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, OffsetRval_15, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_lval\'/5", (MR_String) "unexpected field type");
                return;
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_26 = ((MR_Word) ((MR_hl_field(1, Lval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_3_input_1_Opts_6;
          MR_Word next_value_of_tscc_proc_3_input_2_Stream_7;
          MR_Word next_value_of_tscc_proc_3_input_3_Rval_8;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_3_input_1_Opts_6 = Opts_6;
          next_value_of_tscc_proc_3_input_2_Stream_7 = Stream_8;
          next_value_of_tscc_proc_3_input_3_Rval_8 = Rval_26;
          tscc_proc_3_input_1_Opts_6 = next_value_of_tscc_proc_3_input_1_Opts_6;
          tscc_proc_3_input_2_Stream_7 = next_value_of_tscc_proc_3_input_2_Stream_7;
          tscc_proc_3_input_3_Rval_8 = next_value_of_tscc_proc_3_input_3_Rval_8;
          goto top_of_proc_3;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GlobalVarRef_28 = ((MR_Word) ((MR_hl_field(2, Lval_7, (MR_Integer) 0))));
          MR_String Var_110;

          Var_110 = ml_backend__mlds_to_c_name__global_var_ref_to_string_1_f_0(GlobalVarRef_28);
          mercury__io__write_string_4_p_0(Stream_8, Var_110);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word LocalVarName_34 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_String LocalVarNameStr_35;

              LocalVarNameStr_35 = ml_backend__mlds_to_c_name__local_var_name_to_string_for_c_1_f_0(LocalVarName_34);
              mercury__io__write_string_4_p_0(Stream_8, LocalVarNameStr_35);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word QualGlobalVarName_29 = ((MR_Word) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
              MR_Word MLDS_ModuleName_31 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 0))));
              MR_Word GlobalVarName_32 = ((MR_Word) ((MR_hl_field(0, QualGlobalVarName_29, (MR_Integer) 1))));
              MR_String QualGlobalVarNameStr_33;

              QualGlobalVarNameStr_33 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_31, GlobalVarName_32);
              mercury__io__write_string_4_p_0(Stream_8, QualGlobalVarNameStr_33);
            }
            break;
        }
        break;
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Opts_6 = tscc_proc_2_input_1_Opts_6;
    MR_Word Rval_7 = tscc_proc_2_input_2_Rval_7;
    MR_Word Stream_8 = tscc_proc_2_input_3_Stream_8;

    switch (MR_tag((MR_Word) Rval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ScalarCommon_20 = (MR_Word) ((MR_Word) (Rval_7));
          MR_Word ModuleName_21 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 0))));
          MR_Integer TypeNum_23;
          MR_Integer RowNum_24 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 3))));
          MR_Word ModuleSymName_25;
          MR_String MangledModuleName_26;
          MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_20, (MR_Integer) 2))));
          MR_String Var_160;
          MR_String Var_170;

          TypeNum_23 = (MR_Integer) (Var_55);
          ModuleSymName_25 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_21);
          MangledModuleName_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_25);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_26);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_23, &Var_160);
          mercury__io__write_string_4_p_0(Stream_8, Var_160);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_24, &Var_170);
          mercury__io__write_string_4_p_0(Stream_8, Var_170);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ScalarCommon_93 = (MR_Word) (MR_body((MR_Word) (Rval_7), (MR_Integer) 1));
          MR_Word ModuleName_94;
          MR_Integer TypeNum_96;
          MR_Integer RowNum_97;
          MR_Word ModuleSymName_98;
          MR_String MangledModuleName_99;
          MR_Word Var_101;
          MR_String Var_138;
          MR_String Var_148;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
          ModuleName_94 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 0))));
          Var_101 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 2))));
          RowNum_97 = ((MR_Integer) ((MR_hl_field(0, ScalarCommon_93, (MR_Integer) 3))));
          TypeNum_96 = (MR_Integer) (Var_101);
          ModuleSymName_98 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_94);
          MangledModuleName_99 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_98);
          mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_99);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_scalar_common_");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_96, &Var_138);
          mercury__io__write_string_4_p_0(Stream_8, Var_138);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), RowNum_97, &Var_148);
          mercury__io__write_string_4_p_0(Stream_8, Var_148);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_10;
          MR_Word next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
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
              uint8_t PtagUInt8_11;
              MR_Word BaseRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Unsigned Var_182;
              MR_String Var_183;

              PtagUInt8_11 = (uint8_t) (Var_35);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mkword(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_11, &Var_182);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), (MR_Integer) 1, Var_182, &Var_183);
              mercury__io__write_string_4_p_0(Stream_8, Var_183);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, BaseRval_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

              ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(Stream_8, Const_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_80 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_81 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_6;
              MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
              MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_80;
              MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = SubRval_81;

              // direct tailcall eliminated
              ;
              tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
              tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
              tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
              tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
              goto top_of_proc_4;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_83 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(Opts_6, Stream_8, Type_82, SubRval_83);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_15 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(Opts_6, Stream_8, Type_14, SubRval_15);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Unop_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word SubRval_84 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

              ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(Opts_6, Stream_8, Unop_16, SubRval_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Word RvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

              ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(Opts_6, Stream_8, BinOp_17, RvalA_18, RvalB_19);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_85 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_1_input_1_Opts_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Lval_7;
              MR_Word next_value_of_tscc_proc_1_input_3_Stream_8;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Opts_6 = Opts_6;
              next_value_of_tscc_proc_1_input_2_Lval_7 = Lval_85;
              next_value_of_tscc_proc_1_input_3_Stream_8 = Stream_8;
              tscc_proc_1_input_1_Opts_6 = next_value_of_tscc_proc_1_input_1_Opts_6;
              tscc_proc_1_input_2_Lval_7 = next_value_of_tscc_proc_1_input_2_Lval_7;
              tscc_proc_1_input_3_Stream_8 = next_value_of_tscc_proc_1_input_3_Stream_8;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_27 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
              MR_Word RowRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
              MR_Integer StartRowNum_29 = ((MR_Integer) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 3))));
              MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 2))));
              MR_Word ModuleName_87 = ((MR_Word) ((MR_hl_field(0, VectorCommon_27, (MR_Integer) 0))));
              MR_Integer TypeNum_89 = (MR_Integer) (Var_65);
              MR_Word ModuleSymName_90;
              MR_String MangledModuleName_91;
              MR_String Var_116;
              MR_String Var_126;

              ModuleSymName_90 = ml_backend__mlds__mlds_module_name_to_sym_name_1_f_0(ModuleName_87);
              MangledModuleName_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_90);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              mercury__io__write_string_4_p_0(Stream_8, MangledModuleName_91);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_vector_common_");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), TypeNum_89, &Var_116);
              mercury__io__write_string_4_p_0(Stream_8, Var_116);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), StartRowNum_29, &Var_126);
              mercury__io__write_string_4_p_0(Stream_8, Var_126);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " + ");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, RowRval_28, Stream_8);
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
top_of_proc_3:;
  {
    MR_Word Opts_6 = tscc_proc_3_input_1_Opts_6;
    MR_Word Stream_7 = tscc_proc_3_input_2_Stream_7;
    MR_Word Rval_8 = tscc_proc_3_input_3_Rval_8;
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 2))
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(2, Rval_8, (MR_Integer) 0))));

      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
        succeeded = MR_TRUE;
      else
      if (((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    else
    if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, Rval_8, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_6;
      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_8;
      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_7;

      // direct tailcall eliminated
      ;
      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
      goto top_of_proc_2;
    }
    else
    {
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 40);
      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
      mercury__io__write_char_4_p_0(Stream_7, (MR_Char) 41);
    }
    goto tscc_end;
  }
top_of_proc_4:;
  {
    MR_Word Opts_7 = tscc_proc_4_input_1_Opts_7;
    MR_Word Stream_8 = tscc_proc_4_input_2_Stream_8;
    MR_Word Type_9 = tscc_proc_4_input_3_Type_9;
    MR_Word Rval_10 = tscc_proc_4_input_4_Rval_10;
    MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word InnerRval_13;
    MR_Word OtherType_12;

    if (succeeded)
    {
      OtherType_12 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 1))));
      InnerRval_13 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 2))));
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(Type_9, OtherType_12);
      if (!(succeeded))
      {
        MR_Word Var_50;

        Var_50 = ml_backend__mlds_to_c_data__is_an_address_1_f_0(InnerRval_13);
        succeeded = (Var_50 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_tscc_proc_4_input_1_Opts_7 = Opts_7;
      MR_Word next_value_of_tscc_proc_4_input_2_Stream_8 = Stream_8;
      MR_Word next_value_of_tscc_proc_4_input_3_Type_9 = Type_9;
      MR_Word next_value_of_tscc_proc_4_input_4_Rval_10 = InnerRval_13;

      // direct tailcall eliminated
      ;
      tscc_proc_4_input_1_Opts_7 = next_value_of_tscc_proc_4_input_1_Opts_7;
      tscc_proc_4_input_2_Stream_8 = next_value_of_tscc_proc_4_input_2_Stream_8;
      tscc_proc_4_input_3_Type_9 = next_value_of_tscc_proc_4_input_3_Type_9;
      tscc_proc_4_input_4_Rval_10 = next_value_of_tscc_proc_4_input_4_Rval_10;
      goto top_of_proc_4;
    }
    else
      switch (MR_tag((MR_Word) Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Type_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_float(");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              break;
            case (MR_Integer) 3:
            case (MR_Integer) 4:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                goto top_of_proc_2;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
              {
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word MercuryType_28 = ((MR_Word) ((MR_hl_field(3, Type_9, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) MercuryType_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_2_input_1_Opts_6 = Opts_7;
                      MR_Word next_value_of_tscc_proc_2_input_2_Rval_7 = Rval_10;
                      MR_Word next_value_of_tscc_proc_2_input_3_Stream_8 = Stream_8;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_Opts_6 = next_value_of_tscc_proc_2_input_1_Opts_6;
                      tscc_proc_2_input_2_Rval_7 = next_value_of_tscc_proc_2_input_2_Rval_7;
                      tscc_proc_2_input_3_Stream_8 = next_value_of_tscc_proc_2_input_3_Stream_8;
                      goto top_of_proc_2;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_boxed_rval\'/6", (MR_String) "mercury_nb_type but builtin_type");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word IntType_27 = ((MR_Unsigned) ((MR_hl_field(3, Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

                switch (IntType_27) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 6:
                  case (MR_Integer) 2:
                  case (MR_Integer) 5:
                  case (MR_Integer) 7:
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((MR_Box) (MR_Word) (");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_int64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_box_uint64(");
                      ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Integer Max_9,
  MR_Word Rval_10)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Rval_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word Const_12;

  if (succeeded)
  {
    Const_12 = ((MR_Word) ((MR_hl_field(3, Rval_10, (MR_Integer) 1))));
    {
      MR_Integer Int_13;

      switch (MR_tag((MR_Word) Const_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            Int_13 = ((MR_Integer) ((MR_hl_field(2, Const_12, (MR_Integer) 0))));
            succeeded = (Int_13 >= (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Const_12, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                int8_t Int8_14 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                succeeded = (Int8_14 >= INT8_C(0));
                if (succeeded)
                {
                  Int_13 = mercury__int8__cast_to_int_1_f_0(Int8_14);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                int16_t Int16_15 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                succeeded = (Int16_15 >= INT16_C(0));
                if (succeeded)
                {
                  Int_13 = mercury__int16__cast_to_int_1_f_0(Int16_15);
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                succeeded = (Int32_16 >= INT32_C(0));
                if (succeeded)
                {
                  Int_13 = mercury__int32__cast_to_int_1_f_0(Int32_16);
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
      }
      if (succeeded)
        succeeded = (Int_13 <= Max_9);
      if (succeeded)
        mercury__io__write_int_4_p_0(Stream_8, Int_13);
      else
      {
        MR_Unsigned Uint_17;
        MR_Unsigned Var_28;

        switch (MR_tag((MR_Word) Const_12)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Const_12, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  Uint_17 = ((MR_Unsigned) ((MR_hl_field(3, Const_12, (MR_Integer) 1))));
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  uint8_t Uint8_18 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                  Uint_17 = mercury__uint8__cast_to_uint_1_f_0(Uint8_18);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 4:
                {
                  uint16_t Uint16_19 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                  Uint_17 = mercury__uint16__cast_to_uint_1_f_0(Uint16_19);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 6:
                {
                  uint32_t Uint32_20 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_12, (MR_Integer) 1)));

                  Uint_17 = mercury__uint32__cast_to_uint_1_f_0(Uint32_20);
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          Var_28 = mercury__uint__cast_from_int_1_f_0(Max_9);
          succeeded = (Uint_17 <= Var_28);
        }
        if (succeeded)
          mercury__io__write_uint_4_p_0(Stream_8, Uint_17);
        else
          ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_7, Stream_8, Rval_10);
      }
    }
  }
  else
    ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_7, Stream_8, Rval_10);
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(
  MR_Word Opts_6,
  MR_Word Stream_7,
  MR_Word Rval_8)
{
  MR_bool succeeded;

  if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
  }
  else
    ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_6, Rval_8, Stream_7);
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_binop_7_p_0(
  MR_Word Opts_8,
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
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "&&");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "||");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_body(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer YN_15;
            MR_Word Var_52;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_nth_code_unit(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_52 = ((MR_Word) ((MR_hl_field(3, Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 2);
              if (succeeded)
                YN_15 = ((MR_Integer) ((MR_hl_field(2, Var_52, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_9, YN_15);
            else
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "==");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_strcmp(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(((MR_Unsigned) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ((MR_Unsigned) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(((MR_Unsigned) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ((MR_Unsigned) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 16:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 17:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "==");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 18:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 19:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 20:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 21:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 22:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word PtrRval_38;

            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_38);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_float_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_38, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_float_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word PtrRval_360;

            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_360);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_int64_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_360, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_int64_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word PtrRval_992;

            succeeded = ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(X_11, Y_12, &PtrRval_992);
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_uint64_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "_ptr(MR_dword_ptr(");
              ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, PtrRval_992, Stream_9);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_uint64_from_dword");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 26:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(((MR_Word) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, X_11, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") == ((MR_Word) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "))");
          }
          break;
        case (MR_Integer) 27:
        case (MR_Integer) 28:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_binop\'/7", (MR_String) "compound_compare_binop");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntType_17 = ((MR_Unsigned) ((MR_hl_field(1, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (IntType_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Integer");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "+");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word IntType_855 = ((MR_Unsigned) ((MR_hl_field(2, Op_10, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (IntType_855) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Integer");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 3:
            {
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-");
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
              ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
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
            MR_Word IntType_683 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (IntType_683) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Integer");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int16_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 32767, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int32_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int64_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 2147483647, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "int8_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ") ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_unsigned_op_arg_6_p_0(Opts_8, Stream_9, (MR_Integer) 127, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 3:
                {
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
                  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "/");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "%");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ShiftType_33 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer YInt_35;
            MR_Word Var_150;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_150 = ((MR_Word) ((MR_hl_field(3, Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_150)) == (MR_Integer) 2);
              if (succeeded)
                YInt_35 = ((MR_Integer) ((MR_hl_field(2, Var_150, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_9, YInt_35);
            else
            {
              MR_Unsigned YUInt_36;
              MR_Word Var_152;

              succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_152 = ((MR_Word) ((MR_hl_field(3, Y_12, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_152)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_152, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  YUInt_36 = ((MR_Unsigned) ((MR_hl_field(3, Var_152, (MR_Integer) 1))));
              }
              if (succeeded)
                mercury__io__write_uint_4_p_0(Stream_9, YUInt_36);
              else
              {
                switch (ShiftType_33) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int) ");
                    break;
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              }
            }
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ShiftType_1045 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer YInt_1039;
            MR_Word Var_1029;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">>");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_1029 = ((MR_Word) ((MR_hl_field(3, Y_12, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_1029)) == (MR_Integer) 2);
              if (succeeded)
                YInt_1039 = ((MR_Integer) ((MR_hl_field(2, Var_1029, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_9, YInt_1039);
            else
            {
              MR_Unsigned YUInt_1035;
              MR_Word Var_1030;

              succeeded = ((((MR_tag((MR_Word) Y_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Y_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_1030 = ((MR_Word) ((MR_hl_field(3, Y_12, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) Var_1030)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1030, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                  YUInt_1035 = ((MR_Unsigned) ((MR_hl_field(3, Var_1030, (MR_Integer) 1))));
              }
              if (succeeded)
                mercury__io__write_uint_4_p_0(Stream_9, YUInt_1035);
              else
              {
                switch (ShiftType_1045) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(int) ");
                    break;
                }
                ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
              }
            }
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "&");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "|");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "^");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "==");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "!=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            ml_backend__mlds_to_c_data__mlds_output_bracketed_rval_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_8, Y_12, Stream_9);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "]");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer N_37 = ((MR_Integer) ((MR_hl_field(3, Op_10, (MR_Integer) 1))));
            MR_String Var_1123;

            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_offset_streq(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), N_37, &Var_1123);
            mercury__io__write_string_4_p_0(Stream_9, Var_1123);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ", ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 13:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 14:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "<=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, X_11);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ">=");
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
            ml_backend__mlds_to_c_data__mlds_output_rval_as_op_arg_5_p_0(Opts_8, Stream_9, Y_12);
            mercury__io__write_string_4_p_0(Stream_9, (MR_String) ")");
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unop_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word UnaryOp_9,
  MR_Word Expr_10)
{
  MR_bool succeeded;
  MR_String UnaryOpString_12;

  backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_9, &UnaryOpString_12);
  mercury__io__write_string_4_p_0(Stream_8, UnaryOpString_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  succeeded = (UnaryOp_9 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Expr_10, Stream_8);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_unboxed_rval_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Word Rval_10)
{
  switch (MR_tag((MR_Word) Type_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          {
            MR_String CastStr_69;

            CastStr_69 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_8, CastStr_69);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_unbox_float(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 4:
          {
            MR_String CastStr_81;

            CastStr_81 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_8, CastStr_81);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MR_String CastStr_69;

        CastStr_69 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        mercury__io__write_string_4_p_0(Stream_8, CastStr_69);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
          {
            MR_String CastStr_69;

            CastStr_69 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            mercury__io__write_string_4_p_0(Stream_8, CastStr_69);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word MercuryType_26 = ((MR_Word) ((MR_hl_field(3, Type_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) MercuryType_26)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_String CastStr_57;

                  CastStr_57 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, CastStr_57);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_unboxed_rval\'/6", (MR_String) "mercury_nb_type but builtin_type");
                  return;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String CastStr_57;

                  CastStr_57 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, CastStr_57);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_25 = ((MR_Unsigned) ((MR_hl_field(3, Type_9, (MR_Integer) 1))) & (MR_Integer) 15);

            switch (IntType_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_String CastStr_97;

                  CastStr_97 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, CastStr_97);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                }
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 6:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 3:
                {
                  MR_String CastStr_109;

                  CastStr_109 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, CastStr_109);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(MR_Word) ");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_unbox_int64(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 9:
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_unbox_uint64(");
                  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_data__mlds_output_cast_rval_6_p_0(
  MR_Word Opts_7,
  MR_Word Stream_8,
  MR_Word Type_9,
  MR_Word Rval_10)
{
  MR_String CastStr_12;

  CastStr_12 = ml_backend__mlds_to_c_type__cast_to_prefix_string_for_c_2_f_0(Opts_7, Type_9);
  mercury__io__write_string_4_p_0(Stream_8, CastStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
  ml_backend__mlds_to_c_data__mlds_output_rval_5_p_0(Opts_7, Rval_10, Stream_8);
  mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_data__IntroducedFrom__pred__mlds_output_rval_const__998__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0(
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
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_TRUE");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_FALSE");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CodeAddr_21 = (MR_Word) (MR_body((MR_Word) (Const_8), (MR_Integer) 1));
        MR_Word QualFuncLabel_168 = ((MR_Word) ((MR_hl_field(0, CodeAddr_21, (MR_Integer) 0))));
        MR_Word ModuleName_170 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_168, (MR_Integer) 0))));
        MR_Word FuncLabel_171 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_168, (MR_Integer) 1))));
        MR_Word ProcLabel_172 = ((MR_Word) ((MR_hl_field(0, FuncLabel_171, (MR_Integer) 0))));
        MR_Word MaybeAux_173 = ((MR_Word) ((MR_hl_field(0, FuncLabel_171, (MR_Integer) 1))));
        MR_Word QualProcLabel_174;
        MR_String QualProcLabelStr_175;
        MR_String MaybeAuxSuffix_176;

        {
          QualProcLabel_174 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, QualProcLabel_174, 0) = ((MR_Box) (ModuleName_170));
          MR_hl_field(0, QualProcLabel_174, 1) = ((MR_Box) (ProcLabel_172));
        }
        QualProcLabelStr_175 = ml_backend__mlds_to_c_name__qual_proc_label_to_string_for_c_1_f_0(QualProcLabel_174);
        MaybeAuxSuffix_176 = ml_backend__ml_util__mlds_maybe_aux_func_id_to_suffix_1_f_0(MaybeAux_173);
        mercury__io__write_string_4_p_0(Stream_7, QualProcLabelStr_175);
        mercury__io__write_string_4_p_0(Stream_7, MaybeAuxSuffix_176);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_146 = ((MR_Integer) ((MR_hl_field(2, Const_8, (MR_Integer) 0))));

        backend_libs__c_util__output_int_expr_4_p_0(Stream_7, N_146);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned U_12 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_uint_expr_4_p_0(Stream_7, U_12);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t N_92 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int8_expr_4_p_0(Stream_7, N_92);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t N_93 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint8_expr_4_p_0(Stream_7, N_93);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t N_94 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int16_expr_4_p_0(Stream_7, N_94);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t N_95 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint16_expr_4_p_0(Stream_7, N_95);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t N_96 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int32_expr_4_p_0(Stream_7, N_96);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t N_97 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint32_expr_4_p_0(Stream_7, N_97);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t N_98 = MR_unbox_int64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_int64_expr_4_p_0(Stream_7, N_98);
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t N_99 = MR_unbox_uint64((MR_hl_field(3, Const_8, (MR_Integer) 1)));

            backend_libs__c_util__output_uint64_expr_4_p_0(Stream_7, N_99);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_int_expr_4_p_0(Stream_7, N_10);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer C_13 = ((MR_Integer) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_String Var_161;

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_Char) ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_1[0]), C_13, &Var_161);
            mercury__io__write_string_4_p_0(Stream_7, Var_161);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Float FloatVal_17 = MR_unbox_float((MR_hl_field(3, Const_8, (MR_Integer) 1)));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_Float) ");
            backend_libs__c_util__output_float_literal_4_p_0(Stream_7, FloatVal_17);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String String_18 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(MR_String) ");
            backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_7, String_18);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word String_100 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            backend_libs__c_util__output_quoted_multi_string_c_4_p_0(Stream_7, String_100);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(3, Const_8, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String Value_15 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word Var_54;

            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&ml_backend__mlds_to_c_data_scalar_common_3[0]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (ml_backend__mlds_to_c_data__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_100_115_95_111_117_116_112_117_116_95_114_118_97_108_95_99_111_110_115_116_95_95_91_49_93_95_48_5_p_0_1));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (Lang_14));
              MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140ml_backend.mlds_to_c_data.mlds_output_rval_const\'/5", (MR_String) "mlconst_foreign for language other than C");
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "((int) ");
            mercury__io__write_string_4_p_0(Stream_7, Value_15);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String NamedConst_20 = ((MR_String) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(Stream_7, NamedConst_20);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word LocalVarName_22 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_String MangledLocalVarName_23;
            MR_String Var_72;

            Var_72 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_22);
            MangledLocalVarName_23 = parse_tree__prog_foreign__name_mangle_1_f_0(Var_72);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
            mercury__io__write_string_4_p_0(Stream_7, MangledLocalVarName_23);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word MLDS_ModuleName_24 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word GlobalVarName_25 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_String QualGlobalVarNameStr_31;

            QualGlobalVarNameStr_31 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_24, GlobalVarName_25);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
            mercury__io__write_string_4_p_0(Stream_7, QualGlobalVarNameStr_31);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word RttiId_27 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word MLDS_ModuleName_110 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word GlobalVarName_111;
            MR_Word IsArray_112;
            MR_String QualGlobalVarNameStr_113;

            {
              GlobalVarName_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, GlobalVarName_111, 0) = ((MR_Box) (RttiId_27));
            }
            IsArray_112 = backend_libs__rtti__rtti_id_has_array_type_1_f_0(RttiId_27);
            QualGlobalVarNameStr_113 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_110, GlobalVarName_111);
            switch (IsArray_112) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_7, QualGlobalVarNameStr_113);
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
                  mercury__io__write_string_4_p_0(Stream_7, QualGlobalVarNameStr_113);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word QualProcLabel_28 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));
            MR_Word TablingId_29 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 2))));
            MR_Word ProcLabel_30 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_28, (MR_Integer) 1))));
            MR_Word MLDS_ModuleName_134 = ((MR_Word) ((MR_hl_field(0, QualProcLabel_28, (MR_Integer) 0))));
            MR_Word GlobalVarName_135;
            MR_Word IsArray_136;
            MR_String QualGlobalVarNameStr_137;

            {
              GlobalVarName_135 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, GlobalVarName_135, 0) = ((MR_Box) (ProcLabel_30));
              MR_hl_field(2, GlobalVarName_135, 1) = ((MR_Box) (TablingId_29));
            }
            IsArray_136 = backend_libs__rtti__tabling_id_has_array_type_1_f_0(TablingId_29);
            QualGlobalVarNameStr_137 = ml_backend__mlds_to_c_name__maybe_qual_global_var_name_to_string_for_c_2_f_0(MLDS_ModuleName_134, GlobalVarName_135);
            switch (IsArray_136) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_4_p_0(Stream_7, QualGlobalVarNameStr_137);
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
                  mercury__io__write_string_4_p_0(Stream_7, QualGlobalVarNameStr_137);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word MLDS_Type_32 = ((MR_Word) ((MR_hl_field(3, Const_8, (MR_Integer) 1))));

            succeeded = (MLDS_Type_32 == (MR_Word) ((MR_Unsigned) 4U));
            if (succeeded)
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "0.0");
            else
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "NULL");
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__mlds_to_c_data__is_aligned_dword_field_3_p_0(
  MR_Word RvalX_4,
  MR_Word RvalY_5,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) RvalX_4)) == (MR_Integer) 2);
  MR_Word TypeInfo_25_25;
  MR_Word LvalX_6;
  MR_Word LvalY_7;
  MR_Word Ptag_8;
  MR_Word PtrRval_9;
  MR_Word PtrType_10;
  MR_Word FieldIdX_11;
  MR_Word FieldType_12;
  MR_Word FieldIdY_13;
  MR_Integer Offset_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    LvalX_6 = ((MR_Word) ((MR_hl_field(2, RvalX_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) RvalY_5)) == (MR_Integer) 2);
    if (succeeded)
    {
      LvalY_7 = ((MR_Word) ((MR_hl_field(2, RvalY_5, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) LvalX_6)) == (MR_Integer) 0);
      if (succeeded)
      {
        Ptag_8 = ((MR_Word) ((MR_hl_field(0, LvalX_6, (MR_Integer) 0))));
        PtrRval_9 = ((MR_Word) ((MR_hl_field(0, LvalX_6, (MR_Integer) 1))));
        PtrType_10 = ((MR_Word) ((MR_hl_field(0, LvalX_6, (MR_Integer) 2))));
        FieldIdX_11 = ((MR_Word) ((MR_hl_field(0, LvalX_6, (MR_Integer) 3))));
        FieldType_12 = ((MR_Word) ((MR_hl_field(0, LvalX_6, (MR_Integer) 4))));
        succeeded = ((MR_tag((MR_Word) LvalY_7)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(0, LvalY_7, (MR_Integer) 0))));
          Var_22 = ((MR_Word) ((MR_hl_field(0, LvalY_7, (MR_Integer) 1))));
          Var_23 = ((MR_Word) ((MR_hl_field(0, LvalY_7, (MR_Integer) 2))));
          FieldIdY_13 = ((MR_Word) ((MR_hl_field(0, LvalY_7, (MR_Integer) 3))));
          Var_24 = ((MR_Word) ((MR_hl_field(0, LvalY_7, (MR_Integer) 4))));
          TypeInfo_25_25 = (MR_Word) (&ml_backend__mlds_to_c_data_scalar_common_2[0]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(3, base, 1) = ((MR_Box) (LvalX_6));
          }
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (Ptag_8)), ((MR_Box) (Var_21)));
          if (succeeded)
          {
            succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(PtrRval_9, Var_22);
            if (succeeded)
            {
              succeeded = ml_backend__mlds____Unify____mlds_type_0_0(PtrType_10, Var_23);
              if (succeeded)
              {
                succeeded = ml_backend__mlds____Unify____mlds_type_0_0(FieldType_12, Var_24);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FieldIdX_11)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_15 = ((MR_Word) ((MR_hl_field(0, FieldIdX_11, (MR_Integer) 0))));
                    succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_16 = ((MR_Word) ((MR_hl_field(3, Var_15, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Offset_14 = ((MR_Integer) ((MR_hl_field(2, Var_16, (MR_Integer) 0))));
                        succeeded = ((MR_tag((MR_Word) FieldIdY_13)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_17 = ((MR_Word) ((MR_hl_field(0, FieldIdY_13, (MR_Integer) 0))));
                          succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_18 = ((MR_Word) ((MR_hl_field(3, Var_17, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 2);
                            if (succeeded)
                            {
                              Var_19 = ((MR_Integer) ((MR_hl_field(2, Var_18, (MR_Integer) 0))));
                              Var_20 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) Offset_14);
                              succeeded = (Var_20 == (MR_Integer) 1);
                              if (succeeded)
                                succeeded = mercury__int__even_1_p_0(Offset_14);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__mlds_to_c_data__is_an_address_1_f_0(
  MR_Word Rval_3)
{
  while (MR_TRUE)
  {
    MR_Word IsAddr_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        IsAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        IsAddr_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        IsAddr_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_6 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_6;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_24 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  IsAddr_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  IsAddr_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  IsAddr_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_24, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
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
                    case (MR_Integer) 12:
                    case (MR_Integer) 13:
                    case (MR_Integer) 14:
                    case (MR_Integer) 15:
                      IsAddr_4 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 16:
                    case (MR_Integer) 17:
                    case (MR_Integer) 18:
                    case (MR_Integer) 19:
                    case (MR_Integer) 20:
                      IsAddr_4 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 9:
            IsAddr_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_55 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_55;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            IsAddr_4 = (MR_Integer) 1;
            break;
        }
        break;
    }
    return IsAddr_4;
    break;
  }
}

void mercury__ml_backend__mlds_to_c_data__init(void)
{
}

void mercury__ml_backend__mlds_to_c_data__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_data.
